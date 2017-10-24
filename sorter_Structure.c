#include<stdio.h>

/**header for recursive method**/
void find_csv_files(FILE*);

/**header for checking the method**/
int check_csv_format(FILE*)

/**File Where all the forking information will written to**/
FILE * fork_output;



int main(int argc, char * argv[]){

	
	/**variable for initial director**/
	FILE* initial_dir;


	/**parameters checking
		->making sure got the right parameters
		->initial directoy name
		->initial_dir = fopen(argv[x], "W")
	/**

	



	/** call the recursive method
		-> wiht dir name

	**/
	find_csv_files(initial_dir)
	




}





/** Function that finds the csv files and SORTS them, and if encountered with sub Directoris it calls itself**/
void find_csv_files(FILE* dir){


	/**runs a loop until no files left in the dir**/
	while (dir!=NULL){



		/**if its a sub dir we fork it
			->if CHILD: call the recursive function
			->if Parent: wait for the child**/
		if (dir == DIR){

			id= fork()

			/**if child calls the recursive function with new sub dir**/
			if(id==0){

				find_csv_files(sub_DIR)
				//fork_output.write(getPID())

			}else{

				/**if parent: wait for the child**/
				wait(id)


			}

		}else{


			//check if the file is .csv file by calling the functin check_csv_format() and check if the contens inside the file is corrent : meaning : MOVIE,DIRECTOR_NAME, ....etc
																	
			if (check_csv_format(FILE*)==0){

				/**we fork() to :
					-> child process could sort
					->parent process could wait for the child process
				**/
				id =fork()

				
				
				/**If its a child, call the sorter function**/
				if (id==0){

					sorted(FILE*)
					//fork_output.write(getPID())


				}else{

					/**if it is a parent
						->for the child**/
					wait(id)
					continue

				}



			}
			else{


				/**meaning the file is not of the csv format..
					-> JUST IGNORE
				**/

			}


		}

		return;


	}



	/**when all files done. return the function**/
	return


}