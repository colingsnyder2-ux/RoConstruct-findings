// from server: 87% by atomic.potato
extern int g_a4fc3c;
extern int g_a4fc40;
extern float g_8b7594;

float f_006ae3b0()
{
    int total = g_a4fc3c + g_a4fc40;
    if (total == 0) {
        g_a4fc3c = 0;
        g_a4fc40 = 0;
        return g_8b7594;
    }
    float result = (float)g_a4fc3c / (float)total;
    g_a4fc3c = 0;
    g_a4fc40 = 0;
    return result;
}
