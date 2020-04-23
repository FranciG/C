int val,sw;

sw=0;
gotoxy(,);printf("Introduce el valor a modificar"); scanf("%2d"&val);

for (x=1;x<=x[0;x++])
{
if (v[x]==val)
{
sw=1;
//y si tengo varios indices con ese valor????
gotoxy(,);printf("Introduce el nuevo valor para el indice %d",x); scanf("%d",&v[x]);

//no tengo que volver a mostrar en pantalla el contendio del vector con los nuevos valores???

}

}


if(sw==1)

{
gotoxy(,);printf("No existe ninguna entrada con ese nº");
}