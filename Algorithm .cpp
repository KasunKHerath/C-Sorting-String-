#include<iostream.h>
#include<conio.h>

int main(){
	
	char* alph[26]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"}; //Array for alphabet
	char* name[10]={"Kamal","Nimal","Amal","Bimal","Dasath","Chaturanga","Eranga","Geeth","Hasitha","Indika"};//Array for name list
	char* newlist[10]; //create array for pass sorted names
	int temp1=0 , temp2=0; //integer variables for temporary values
	char* wrd = new char[20]; //char array for current word
	char* letter = new char[1]; //char array for current letter
	int length; //integer variable for word length
 	int name_x[10];
 	int letter_y[10];
 
 	cout<<"Before Sorting alphabetical order" <<"\n";
 
	for(int x=0;x<10;x++)
	{
		length=strlen(name[x]); //get the length of the word
		if(length>0){ //check the word available in the current array position
			wrd=name[x]; //pass array position value to "wrd" variable
				for(int y=0;y<26;y++){
					letter=alph[y]; //pass the alphabet letter to "letter" variable
					if(wrd[0]==letter[0]){ //check first letter of the name contain in the alphabet array 
					 	name_x[x]=y+1; //save the checked word position to "name_x" array
						letter_y[x]=x; //save the alphabet letter location to the "letter_y" array
					}
				}
		}
		cout<<name[letter_y[x]]<<endl;
	}

	// sort and make priority for word location in array "name_x" and "letter_y"
	for(int num_x=0;num_x<=10;num_x++){
		for(int num_y=num_x+1;num_y<=10;num_y++){
			if(name_x[num_x]>name_x[num_y]){
			temp1=name_x[num_x];
			name_x[num_x]=name_x[num_y];
			name_x[num_y]=temp1;
			
			temp2=letter_y[num_x];
			letter_y[num_x]=letter_y[num_y];
			letter_y[num_y]=temp2;
			}
		}
	}
	 //Display the sorted name
	cout<<"After sorting alphabetical order"<<"\n";
	for(int x=0;x<10;x++){
		cout<<name[letter_y[x]]<<endl;
	}
}
