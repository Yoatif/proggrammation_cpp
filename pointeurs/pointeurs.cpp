int maVariable = 12;
int* ptr=&maVariable;
(*ptr)++; //ajoute 1 à maVariable
// attention ne pas confondre avec *ptr++; qui ne donnera pas le même résultat (priorités)
