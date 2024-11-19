char    *ft_3_1(void);
char    *ft_1_3(void);
int     veriflig(char *tm);
int     verifcol(char *tm

char    *recherchelig3_1(char *tm)
{
        int     i;
        char    tr;
// verif ligne
        i = 7;// commence a la deuxieme ligne car colup a la premiere
        tr = ft_3_1();
        while (i <= 28)
        {
                if (tm[i] == 3 && tm[i + 5] == 1)
                {
                        k = 0;
                        while (k <= 14)
                        {
                                j = 0;
                                while (j < 6)
                                {
                                        tm[i + j] = tr[j + k];
                                        j++;
                                }
                                if (verifcol(tm) == 1)
                                        return (tm);
                                k += 7;
                        }
                }
                i += 7;
        }
        return (tm);
}

char    *recherchecol3_1(char *tm)
{
        int     i;
        char    tr;
// verif colonne
        i = 1;
        tr = ft_3_1();
        while (i <= 4)
        {
                if (tm[i] == 3 && tm[i + 35] == 1)
                {
                        k = 0;
                        while (k <= 14)
                        {
                                j = 0;
                                while (j < 6)
                                {
                                        tm[i + j] = tr[j];
                                        j++;
                                }
				if (veriflig(tm) == 1)
                                        return (tm);
				k += 7;
                        }
                }
                i += 1;
        }
        return (tm);
}

char    *recherchelig3_1(char *tm)
{
        int     i;
        char    tr;
// verif ligne
        i = 7;// commence a la deuxieme ligne car colup a la premiere
        tr = ft_1_3();
        while (i <= 28)
        {
                if (tm[i] == 1 && tm[i + 5] == 3)
                {
                        k = 0;
                        while (k <= 14)
                        {
                                j = 0;
                                while (j < 6)
                                {
                                        tm[i + j] = tr[j + k];
                                        j++;
                                }
                                if (verifcol(tm) == 1)
                                        return (tm);
                                k += 7;
                        }
                }
                i += 7;
        }
        return (tm);
}

char    *recherchecol1_3(char *tm)
{
        int     i;
        char    tr;
// verif colonne
        i = 1;
        tr = ft_1_3();
        while (i <= 4)
        {
                if (tm[i] == 1 && tm[i + 35] == 3)
                {
                        k = 0;
                        while (k <= 14)
                        {
                                j = 0;
                                while (j < 6)
                                {
                                        tm[i + j] = tr[j];
                                        j++;
                                }
				if (veriflig(tm) == 1)
                                        return (tm);
				k += 7;
                        }
                }
                i += 1;
        }
        return (tm);
}

