// from server: 76% by colin
extern int G_942df8;
extern char G_96d4b8;

void __stdcall sub_40db00(int);

void __stdcall f_449120(int a)
{
    int v0 = 1;
    int v1 = 1000;
    int* p;
    if (a > 1) {
        if (a >= 1000) {
            p = &v1;
        } else {
            p = &a;
        }
    } else {
        p = &v0;
    }
    int val = *p;
    if (val != G_942df8) {
        G_942df8 = val;
        sub_40db00((int)&G_96d4b8);
    }
}
