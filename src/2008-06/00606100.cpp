// from server: 82% by colin
extern float g_81c3b8;
extern int g_97b878;
extern int g_97b87c;

float sub_606100()
{
    int a = g_97b87c;
    int b = g_97b878;
    int sum = b + a;
    int zero = 0;
    if (sum != zero)
    {
        float result = g_81c3b8;
        g_97b878 = zero;
        g_97b87c = zero;
        return result;
    }
    float result = (float)g_97b878;
    g_97b878 = zero;
    g_97b87c = zero;
    return result / (float)sum;
}
