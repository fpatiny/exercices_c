

const double DT = 0.1;
double y = hauteur;
do
{
    t = t + DT;
    v = v - g * DT;
    y = y + v * DT;
    printf("%.1lf, v:%.2lf, y:%.2lf\n", t, v, y);

} while (y > 0.0);
