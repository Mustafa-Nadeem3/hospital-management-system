#include<iostream>
using namespace std;

int main()
{
	char service[50], gender[50], search1, edit1, edit2, sort, delete1, delete3;
	int serviceId[50], age[50], diseaseId[50], roomNumber[50], totalCharge[50], totalDeposit[50], totalReturn[50];
	int day[50], month[50], year[50], count = 0, sum1, sum2;
	int search2, edit3, opt, st1, st2, st3, st4, st5, st6, delete2;
	int temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11, temp12;
	int del1, del2, del3, del4, del5, del6, del7, del8, del9, store = 0, size9 = 0;
	int size1 = 0, size2 = 0, size3 = 0, size4 = 0, size5 = 0, size6 = 0, size7 = 0, size8 = 0;

	cout << "-------------------------------------------------------------------" << endl;
	cout << "                              WELCOME                              " << endl;
	cout << "-------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "                 ******************************                    " << endl;
	cout << "                   Hospital Management System                      " << endl;
	cout << "                 ******************************                    " << endl;
	cout << endl;

	for (int a = 0; a < 50; a++)
	{
		cout << "------------------------------" << endl;
		cout << "Enter Date:- " << endl;

		for (int p = size7; p < size7 + 1; p++)
		{
			cout << "Day: ";
			cin >> day[p];

			while ((day[p] < 0) || (day[p] > 31))
			{
				cout << "Invalid Entry. Please enter again." << endl;
				cout << "Day: ";
				cin >> day[p];
			}
		}
		size7 = size7 + 1;

		for (int q = size8; q < size8 + 1; q++)
		{
			cout << "Month: ";
			cin >> month[q];

			while ((month[q] < 0) || (month[q] > 13))
			{
				cout << "Invalid Entry. Please enter again." << endl;
				cout << "Month: ";
				cin >> month[q];
			}
		}
		size8 = size8 + 1;

		for (int r = size9; r < size9 + 1; r++)
		{
			cout << "Year: ";
			cin >> year[r];

			while (year[r] < 0)
			{
				cout << "Invalid Entry. Please enter again." << endl;
				cout << "Year: ";
				cin >> year[r];
			}
		}
		size9 = size9 + 1;

		cout << "------------------------------" << endl;
		cout << endl;

		for (int o = size6; o < size6 + 1; o++)
		{
			cout << "Enter service:(O/E) ";
			cin >> service[o];

			while ((service[o] != 'O') && (service[o] != 'o') && (service[o] != 'E') && (service[o] != 'e'))
			{
				cout << "Invalid Entry. Please enter again." << endl;
				cout << "Enter service:(O/E) ";
				cin >> service[o];
			}

			if ((service[o] == 'O') || (service[o] == 'o'))
			{
				cout << endl;
				cout << "***O.P.D. service***" << endl;
				cout << "------------------------------" << endl;
			}
			else if ((service[o] == 'E') || (service[o] == 'e'))
			{
				cout << endl;
				cout << "***Emergency service***" << endl;
				cout << "------------------------------" << endl;
			}
		}
		size6 = size6 + 1;

		for (int b = size1; b < size1 + 1; b++)
		{
			cout << "Enter Service ID: ";
			cin >> serviceId[b];

			while (serviceId[b] < 0)
			{
				cout << "Invalid Entry. Please enter again." << endl;
				cout << "Enter Service ID: ";
				cin >> serviceId[b];
			}
		}
		size1 = size1 + 1;

		for (int c = size2; c < size2 + 1; c++)
		{
			cout << "Enter Age: ";
			cin >> age[c];

			while (age[c] < 0)
			{
				cout << "Invalid Entry. Please enter again." << endl;
				cout << "Enter Age: ";
				cin >> age[c];
			}
		}
		size2 = size2 + 1;

		for (int d = size3; d < size3 + 1; d++)
		{
			cout << "Enter Gender:(M/F) ";
			cin >> gender[d];

			while ((gender[d] != 'M') && (gender[d] != 'm') && (gender[d] != 'F') && (gender[d] != 'f'))
			{
				cout << "Invalid Entry. Please enter again." << endl;
				cout << "Enter Gender:(M/F) ";
				cin >> gender[d];
			}

			if ((gender[d] == 'M') || (gender[d] == 'm'))
			{
				cout << "Patient gender: Male" << endl;
			}
			else if ((gender[d] == 'F') || (gender[d] == 'f'))
			{
				cout << "Patient gender: Female" << endl;
			}
		}
		size3 = size3 + 1;
	
		for (int e = size4; e < size4 + 1; e++)
		{
			cout << "Enter Disease ID: ";
			cin >> diseaseId[e];

			while (diseaseId[e] < 0)
			{
				cout << "Invalid Entry. Please enter again." << endl;
				cout << "Enter Disease ID: ";
				cin >> diseaseId[e];
			}
		}
		size4 = size4 + 1;
		
		for (int f = size5; f < size5 + 1; f++)
		{
			cout << "Enter Specialist room number: ";
			cin >> roomNumber[f];

			while (roomNumber[f] < 0)
			{
				cout << "Invalid Entry. Please enter again." << endl;
				cout << "Enter Specialist room number: ";
				cin >> roomNumber[f];
			}

			totalCharge[f] = 0;
			totalDeposit[f] = 0;
			totalReturn[f] = 0;
		}
		size5 = size5 + 1;
		count = count + 1;

		//Searching Record:-
		cout << "Do you want to search Patient record?(Y/N) ";
		cin >> search1;

		while ((search1 != 'Y') && (search1 != 'y') && (search1 != 'N') && (search1 != 'n'))
		{
			cout << "Invalid Entry. Please enter again." << endl;
			cout << "Do you want to search Patient record?(Y/N) ";
			cin >> search1;
		}

		if ((search1 == 'Y') || (search1 == 'y'))
		{
			cout << "Enter Service ID: ";
			cin >> search2;

			int l = 0;

			do
			{
				if (search2 == serviceId[l])
				{
					cout << "--------------------------------------------------" << endl;
					cout << "Record available" << endl;
					cout << "--------------------------------------------------" << endl;
					cout << "------------------------------" << endl;
					cout << "Enter Date:- " << endl;
					cout << "Day: " << day[l];
					cout << "Month: " << month[l];
					cout << "Year: " << year[l];
					cout << "------------------------------" << endl;

					if ((service[l] == 'O') || (service[l] == 'o'))
					{
						cout << "***O.P.D. Service***" << endl;
					}
					else if ((service[l] == 'E') || (service[l] == 'e'))
					{
						cout << "***Emergency Service***" << endl;
					}

					cout << "------------------------------" << endl;
					cout << "Record:-" << endl;
					cout << "------------------------------" << endl;
					cout << endl;
					cout << "Service ID: " << serviceId[l] << endl;
					cout << "Patient age: " << age[l] << endl;

					if ((gender[l] == 'M') || (gender[l] == 'm'))
					{
						cout << "Patient's gender: Male" << endl;
					}
					else if ((gender[l] == 'F') || (gender[l] == 'f'))
					{
						cout << "Patient's gender: Female" << endl;
					}

					cout << "Disease ID: " << diseaseId[l] << endl;
					cout << "Specialist Room Number: " << roomNumber[l] << endl;
					cout << "Total Amount Charged: " << "Rs." << totalCharge[l] << endl;
					cout << "Total Amount Deposited: " << "Rs." << totalDeposit[l] << endl;
					cout << "Total Amount To Return: " << "Rs." << totalReturn[l] << endl;
					cout << "--------------------------------------------------" << endl;
					cout << "--------------------------------------------------" << endl;

					//Editing Service:-
					cout << "Do you want to edit Service?(Y/N) ";
					cin >> edit1;

					while ((edit1 != 'Y') && (edit1 != 'y') && (edit1 != 'N') && (edit1 != 'n'))
					{
						cout << "Invalid Entry. Please enter again." << endl;
						cout << "Do you want to edit Service?(Y/N) ";
						cin >> edit1;
					}

					if ((edit1 == 'Y') || (edit1 == 'y'))
					{
						cout << "Enter service:('O'/'E') ";
						cin >> edit2;

						while ((edit2 != 'O') && (edit2 != 'o') && (edit2 != 'E') && (edit2 != 'e'))
						{
							cout << "Invalid Entry. Please enter again." << endl;
							cout << "Enter service:(O/E) ";
							cin >> edit2;
						}

						if ((edit2 == 'O') || (edit2 == 'o') || (edit2 == 'E') || (edit2 == 'e'))
						{
							service[l] = edit2;
						}
					}
					else if ((edit1 == 'N') || (edit1 == 'n'))
					{

					}

					//Editiing Age:-
					cout << "Do you want to edit Age?(Y/N) ";
					cin >> edit1;

					while ((edit1 != 'Y') && (edit1 != 'y') && (edit1 != 'N') && (edit1 != 'n'))
					{
						cout << "Invalid Entry. Please enter again." << endl;
						cout << "Do you want to edit Age?(Y/N) ";
						cin >> edit1;
					}

					if ((edit1 == 'Y') || (edit1 == 'y'))
					{
						cout << "Enter Age: ";
						cin >> edit3;

						while (edit3 < 0)
						{
							cout << "Invalid Entry. Please enter again." << endl;
							cout << "Enter Age: ";
							cin >> edit3;
						}

						age[l] = edit3;
					}
					else if ((edit1 == 'N') || (edit1 == 'n'))
					{

					}

					//Editing Gender:-
					cout << "Do you want to edit Gender?(Y/N) ";
					cin >> edit1;

					while ((edit1 != 'Y') && (edit1 != 'y') && (edit1 != 'N') && (edit1 != 'n'))
					{
						cout << "Invalid Entry. Please enter again." << endl;
						cout << "Do you want to edit Gender?(Y/N) ";
						cin >> edit1;
					}

					if ((edit1 == 'Y') || (edit1 == 'y'))
					{
						cout << "Enter service: ";
						cin >> edit2;

						while ((edit2 != 'M') && (edit2 != 'm') && (edit2 != 'F') && (edit2 != 'f'))
						{
							cout << "Invalid Entry. Please enter again." << endl;
							cout << "Enter Gender:(M/F) ";
							cin >> edit2;
						}

						if ((edit2 == 'M') || (edit2 == 'm') || (edit2 == 'F') || (edit2 == 'f'))
						{
							gender[l] = edit2;
						}
					}
					else if ((edit1 == 'N') || (edit1 == 'n'))
					{

					}

					//Editing Disease ID:-
					cout << "Do you want to edit Disease ID?(Y/N) ";
					cin >> edit1;

					while ((edit1 != 'Y') && (edit1 != 'y') && (edit1 != 'N') && (edit1 != 'n'))
					{
						cout << "Invalid Entry. Please enter again." << endl;
						cout << "Do you want to edit Disease ID?(Y/N) ";
						cin >> edit1;
					}

					if ((edit1 == 'Y') || (edit1 == 'y'))
					{
						cout << "Enter Disease ID: ";
						cin >> edit3;

						while (edit3 < 0)
						{
							cout << "Invalid Entry. Please enter again." << endl;
							cout << "Enter Disease ID: ";
							cin >> edit3;
						}

						diseaseId[l] = edit3;
					}
					else if ((edit1 == 'N') || (edit1 == 'n'))
					{

					}

					//Editing Specialist Room Number:-
					cout << "Do you want to edit Specialist Room Number?(Y/N) ";
					cin >> edit1;

					while ((edit1 != 'Y') && (edit1 != 'y') && (edit1 != 'N') && (edit1 != 'n'))
					{
						cout << "Invalid Entry. Please enter again." << endl;
						cout << "Do you want to edit Specialist Room Number?(Y/N) ";
						cin >> edit1;
					}

					if ((edit1 == 'Y') || (edit1 == 'y'))
					{
						cout << "Enter Specialist Room Number: ";
						cin >> edit3;

						while (edit3 < 0)
						{
							cout << "Invalid Entry. Please enter again." << endl;
							cout << "Enter Specialist room number: ";
							cin >> edit3;
						}

						roomNumber[l] = edit3;
					}
					else if ((edit1 == 'N') || (edit1 == 'n'))
					{

					}

					//Editing Total Charged:-
					cout << "Do you want to edit Total Charged?(Y/N) ";
					cin >> edit1;

					while ((edit1 != 'Y') && (edit1 != 'y') && (edit1 != 'N') && (edit1 != 'n'))
					{
						cout << "Invalid Entry. Please enter again." << endl;
						cout << "Do you want to edit Total Charged?(Y/N) ";
						cin >> edit1;
					}

					if ((edit1 == 'Y') || (edit1 == 'y'))
					{
						cout << "Enter Total Charged: ";
						cin >> edit3;

						while (edit3 < 0)
						{
							cout << "Invalid Entry. Please enter again." << endl;
							cout << "Enter Total Charged: ";
							cin >> edit3;
						}

						totalCharge[l] = edit3;
					}
					else if ((edit1 == 'N') || (edit1 == 'n'))
					{

					}

					//Editing Total Deposited:-
					cout << "Do you want to edit Total Deposited?(Y/N) ";
					cin >> edit1;

					while ((edit1 != 'Y') && (edit1 != 'y') && (edit1 != 'N') && (edit1 != 'n'))
					{
						cout << "Invalid Entry. Please enter again." << endl;
						cout << "Do you want to edit Total Deposited?(Y/N) ";
						cin >> edit1;
					}

					if ((edit1 == 'Y') || (edit1 == 'y'))
					{
						cout << "Enter Total Deposited: ";
						cin >> edit3;

						while (edit3 < 0)
						{
							cout << "Invalid Entry. Please enter again." << endl;
							cout << "Enter Total Deposited: ";
							cin >> edit3;
						}

						totalDeposit[l] = edit3;
					}
					else if ((edit1 == 'N') || (edit1 == 'n'))
					{

					}

					//Editing Total Return:-
					cout << "Do you want to edit Total Return?(Y/N) ";
					cin >> edit1;

					while ((edit1 != 'Y') && (edit1 != 'y') && (edit1 != 'N') && (edit1 != 'n'))
					{
						cout << "Invalid Entry. Please enter again." << endl;
						cout << "Do you want to edit Total Return?(Y/N) ";
						cin >> edit1;
					}

					if ((edit1 == 'Y') || (edit1 == 'y'))
					{
						cout << "Enter Total Return: ";
						cin >> edit3;

						while (edit3 < 0)
						{
							cout << "Invalid Entry. Please enter again." << endl;
							cout << "Enter Total Return: ";
							cin >> edit3;
						}

						totalReturn[l] = edit3;
					}
					else if ((edit1 == 'N') || (edit1 == 'n'))
					{

					}
					cout << "--------------------------------------------------" << endl;
					break;
				}
				else
				{
					cout << "--------------------------------------------------" << endl;
					cout << "No record available" << endl;
					cout << "--------------------------------------------------" << endl;
					break;
				}

				l++;
			} while (search2 != serviceId[l]);
		}

		//Deleting Record:-
		cout << "Do you want to delete Patient record?(Y/N) ";
		cin >> search1;

		while ((search1 != 'Y') && (search1 != 'y') && (search1 != 'N') && (search1 != 'n'))
		{
			cout << "Invalid Entry. Please enter again." << endl;
			cout << "Do you want to delete Patient record?(Y/N) ";
			cin >> search1;
		}

		if ((search1 == 'Y') || (search1 == 'y'))
		{
			cout << "Enter Service ID to find record: ";
			cin >> search2;

			int l = 0;

			do
			{
				if (search2 == serviceId[l])
				{
					cout << "--------------------------------------------------" << endl;
					cout << "Record available" << endl;
					cout << "--------------------------------------------------" << endl;

					if ((service[l] == 'O') || (service[l] == 'o'))
					{
						cout << "***O.P.D. Service***" << endl;
					}
					else if ((service[l] == 'E') || (service[l] == 'e'))
					{
						cout << "***Emergency Service***" << endl;
					}

					cout << "------------------------------" << endl;
					cout << "Record:-" << endl;
					cout << "------------------------------" << endl;
					cout << endl;
					cout << "Service ID: " << serviceId[l] << endl;
					cout << "Patient age: " << age[l] << endl;

					if ((gender[l] == 'M') || (gender[l] == 'm'))
					{
						cout << "Patient's gender: Male" << endl;
					}
					else if ((gender[l] == 'F') || (gender[l] == 'f'))
					{
						cout << "Patient's gender: Female" << endl;
					}

					cout << "Disease ID: " << diseaseId[l] << endl;
					cout << "Specialist Room Number: " << roomNumber[l] << endl;
					cout << "Total Amount Charged: " << "Rs." << totalCharge[l] << endl;
					cout << "Total Amount Deposited: " << "Rs." << totalDeposit[l] << endl;
					cout << "Total Amount To Return: " << "Rs." << totalReturn[l] << endl;
					cout << "--------------------------------------------------" << endl;
					cout << "--------------------------------------------------" << endl;
					break;
				}
				else
				{
					cout << "--------------------------------------------------" << endl;
					cout << "No record available" << endl;
					cout << "--------------------------------------------------" << endl;
					break;
				}

				l++;
			} while (search2 != serviceId[l]);
			store = l;

			cout << "To delete record, Enter:(D/d) ";
			cin >> delete3;

			if ((delete3 == 'D') || (delete3 == 'd'))
			{
				cout << "Record Deleted" << endl;
				for (int n = store; n < 50; n++)
				{
					st5 = n;
					st6 = n + 1;
					del1 = service[st5];
					service[st5] = service[st6];
					service[st6] = del1;
				}

				for (int n = store; n < 50; n++)
				{
					st5 = n;
					st6 = n + 1;
					del2 = serviceId[st5];
					serviceId[st5] = serviceId[st6];
					serviceId[st6] = del2;
				}

				for (int n = store; n < 50; n++)
				{
					st5 = n;
					st6 = n + 1;
					del3 = age[st5];
					age[st5] = age[st6];
					age[st6] = del3;
				}

				for (int n = store; n < 50; n++)
				{
					st5 = n;
					st6 = n + 1;
					del4 = gender[st5];
					gender[st5] = gender[st6];
					gender[st6] = del4;
				}

				for (int n = store; n < 50; n++)
				{
					st5 = n;
					st6 = n + 1;
					del5 = diseaseId[st5];
					diseaseId[st5] = diseaseId[st6];
					diseaseId[st6] = del5;
				}

				for (int n = store; n < 50; n++)
				{
					st5 = n;
					st6 = n + 1;
					del6 = roomNumber[st5];
					roomNumber[st5] = roomNumber[st6];
					roomNumber[st6] = del6;
				}

				for (int n = store; n < 50; n++)
				{
					st5 = n;
					st6 = n + 1;
					del7 = totalCharge[st5];
					totalCharge[st5] = totalCharge[st6];
					totalCharge[st6] = del7;
				}

				for (int n = store; n < 50; n++)
				{
					st5 = n;
					st6 = n + 1;
					del8 = totalDeposit[st5];
					totalDeposit[st5] = totalDeposit[st6];
					totalDeposit[st6] = del8;
				}

				for (int n = store; n < 50; n++)
				{
					st5 = n;
					st6 = n + 1;
					del9 = totalReturn[st5];
					totalReturn[st5] = totalReturn[st6];
					totalReturn[st6] = del9;
				}
			}
		}

		//Sorting Record:-
		cout << "Do you want to sort the record:(Y/N) ";
		cin >> sort;

		while ((sort != 'Y') && (sort != 'y') && (sort != 'N') && (sort != 'n'))
		{
			cout << "Invalid Entry. Please enter again." << endl;
			cout << "Do you want to sort the record:(Y/N) ";
			cin >> sort;
		}

		if ((sort == 'Y') || (sort == 'y'))
		{
			cout << "1.Records of patient's sort by ID's." << endl;
			cout << "2.Records of Emergency patients." << endl;
			cout << "3.Records of O.P.D. patients." << endl;
			cout << "4.Records of patient's in a particular date." << endl;
			cout << "Choose anyone of the above: ";
			cin >> opt;

			while ((opt < 0) || (opt > 5))
			{
				cout << "Invalid Entry. Please enter again." << endl;
				cout << "Enter chose again: ";
				cin >> opt;
			}

			switch (opt)
			{
			case 1:
				for (int g = 0; g < count; g++)
				{
					for (int h = g + 1; h < count; h++)
					{
						if (serviceId[g] > serviceId[h])
						{
							temp1 = service[h];
							temp2 = serviceId[h];
							temp3 = age[h];
							temp4 = gender[h];
							temp5 = diseaseId[h];
							temp6 = roomNumber[h];
							temp7 = totalCharge[h];
							temp8 = totalDeposit[h];
							temp9 = totalReturn[h];
							temp10 = day[h];
							temp11 = month[h];
							temp12 = year[h];
							service[h] = service[g];
							serviceId[h] = serviceId[g];
							age[h] = age[g];
							gender[h] = gender[g];
							diseaseId[h] = diseaseId[g];
							roomNumber[h] = roomNumber[g];
							totalCharge[h] = totalCharge[g];
							totalDeposit[h] = totalDeposit[g];
							totalReturn[h] = totalReturn[g];
							day[h] = day[g];
							month[h] = month[g];
							year[h] = year[g];
							service[g] = temp1;
							serviceId[g] = temp2;
							age[g] = temp3;
							gender[g] = temp4;
							diseaseId[g] = temp5;
							roomNumber[g] = temp6;
							totalCharge[g] = temp7;
							totalDeposit[g] = temp8;
							totalReturn[g] = temp9;
							day[g] = temp10;
							month[g] = temp11;
							year[g] = temp12;
						}
					}
				}

				for (int s = 0; s < count; s++)
				{
					cout << "------------------------------" << endl;
					cout << "Enter Date:- " << endl;
					cout << "Day: " << day[s] << endl;
					cout << "Month: " << month[s] << endl;
					cout << "Year: " << year[s] << endl;
					cout << "------------------------------" << endl;

					if ((service[s] == 'O') || (service[s] == 'o'))
					{
						cout << "***O.P.D. Service***" << endl;
					}
					else if ((service[s] == 'E') || (service[s] == 'e'))
					{
						cout << "***Emergency Service***" << endl;
					}

					cout << "------------------------------" << endl;
					cout << "Record:-" << endl;
					cout << "------------------------------" << endl;
					cout << endl;
					cout << "Service ID: " << serviceId[s] << endl;
					cout << "Patient age: " << age[s] << endl;

					if ((gender[s] == 'M') || (gender[s] == 'm'))
					{
						cout << "Patient's gender: Male" << endl;
					}
					else if ((gender[s] == 'F') || (gender[s] == 'f'))
					{
						cout << "Patient's gender: Female" << endl;
					}

					cout << "Disease ID: " << diseaseId[s] << endl;
					cout << "Specialist Room Number: " << roomNumber[s] << endl;
					cout << "Total Amount Charged: " << "Rs." << totalCharge[s] << endl;
					cout << "Total Amount Deposited: " << "Rs." << totalDeposit[s] << endl;
					cout << "Total Amount To Return: " << "Rs." << totalReturn[s] << endl;
					cout << "--------------------------------------------------" << endl;
				}
				break;

			case 2:
				for (int t = 0; t < count; t++)
				{
					if ((service[t] == 'E') || (service[t] == 'e'))
					{
						cout << "------------------------------" << endl;
						cout << "Enter Date:- " << endl;
						cout << "Day: " << day[t] << endl;
						cout << "Month: " << month[t] << endl;
						cout << "Year: " << year[t] << endl;
						cout << "------------------------------" << endl;

						if ((service[t] == 'O') || (service[t] == 'o'))
						{
							cout << "***O.P.D. Service***" << endl;
						}
						else if ((service[t] == 'E') || (service[t] == 'e'))
						{
							cout << "***Emergency Service***" << endl;
						}

						cout << "------------------------------" << endl;
						cout << "Record:-" << endl;
						cout << "------------------------------" << endl;
						cout << endl;
						cout << "Service ID: " << serviceId[t] << endl;
						cout << "Patient age: " << age[t] << endl;

						if ((gender[t] == 'M') || (gender[t] == 'm'))
						{
							cout << "Patient's gender: Male" << endl;
						}
						else if ((gender[t] == 'F') || (gender[t] == 'f'))
						{
							cout << "Patient's gender: Female" << endl;
						}

						cout << "Disease ID: " << diseaseId[t] << endl;
						cout << "Specialist Room Number: " << roomNumber[t] << endl;
						cout << "Total Amount Charged: " << "Rs." << totalCharge[t] << endl;
						cout << "Total Amount Deposited: " << "Rs." << totalDeposit[t] << endl;
						cout << "Total Amount To Return: " << "Rs." << totalReturn[t] << endl;
						cout << "--------------------------------------------------" << endl;
					}
				}
				break;

			case 3:
				for (int u = 0; u < count; u++)
				{
					if ((service[u] == 'O') || (service[u] == 'o'))
					{
						cout << "------------------------------" << endl;
						cout << "Enter Date:- " << endl;
						cout << "Day: " << day[u] << endl;
						cout << "Month: " << month[u] << endl;
						cout << "Year: " << year[u] << endl;
						cout << "------------------------------" << endl;

						if ((service[u] == 'O') || (service[u] == 'o'))
						{
							cout << "***O.P.D. Service***" << endl;
						}
						else if ((service[u] == 'E') || (service[u] == 'e'))
						{
							cout << "***Emergency Service***" << endl;
						}

						cout << "------------------------------" << endl;
						cout << "Record:-" << endl;
						cout << "------------------------------" << endl;
						cout << endl;
						cout << "Service ID: " << serviceId[u] << endl;
						cout << "Patient age: " << age[u] << endl;

						if ((gender[u] == 'M') || (gender[u] == 'm'))
						{
							cout << "Patient's gender: Male" << endl;
						}
						else if ((gender[u] == 'F') || (gender[u] == 'f'))
						{
							cout << "Patient's gender: Female" << endl;
						}

						cout << "Disease ID: " << diseaseId[u] << endl;
						cout << "Specialist Room Number: " << roomNumber[u] << endl;
						cout << "Total Amount Charged: " << "Rs." << totalCharge[u] << endl;
						cout << "Total Amount Deposited: " << "Rs." << totalDeposit[u] << endl;
						cout << "Total Amount To Return: " << "Rs." << totalReturn[u] << endl;
						cout << "--------------------------------------------------" << endl;
					}
				}
				break;

			case 4:
				for (int v = 0; v < count; v++)
				{
					sum1 = year[v] + month[v] + day[v];

					for (int w = 1; w < count; w++)
					{
						sum2 = year[v] + month[w] + day[w];

						if (sum1 < sum2)
						{
							cout << "------------------------------" << endl;
							cout << "Enter Date:- " << endl;
							cout << "Day: " << day[v] << endl;
							cout << "Month: " << month[v] << endl;
							cout << "Year: " << year[v] << endl;
							cout << "------------------------------" << endl;

							if ((service[v] == 'O') || (service[v] == 'o'))
							{
								cout << "***O.P.D. Service***" << endl;
							}
							else if ((service[v] == 'E') || (service[v] == 'e'))
							{
								cout << "***Emergency Service***" << endl;
							}

							cout << "------------------------------" << endl;
							cout << "Record:-" << endl;
							cout << "------------------------------" << endl;
							cout << endl;
							cout << "Serwice ID: " << serviceId[v] << endl;
							cout << "Patient age: " << age[v] << endl;

							if ((gender[v] == 'M') || (gender[v] == 'm'))
							{
								cout << "Patient's gender: Male" << endl;
							}
							else if ((gender[v] == 'F') || (gender[v] == 'f'))
							{
								cout << "Patient's gender: Female" << endl;
							}

							cout << "Disease ID: " << diseaseId[v] << endl;
							cout << "Specialist Room Number: " << roomNumber[v] << endl;
							cout << "Total Amount Charged: " << "Rs." << totalCharge[v] << endl;
							cout << "Total Amount Deposited: " << "Rs." << totalDeposit[v] << endl;
							cout << "Total Amount To Return: " << "Rs." << totalReturn[v] << endl;
							cout << "--------------------------------------------------" << endl;
						}
					}
				}
				break;
			}
		}
	}
}
