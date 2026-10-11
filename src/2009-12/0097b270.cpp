// from server: 91% by atomic.potato
extern int G_75dbf0;
extern int G_9e70f4;
extern int G_9e7100;
extern int G_b978c8;
extern int G_9897e0;

struct F_75ecf0
{
    void f(int, int, int, int, int);
};

extern "C" void __cdecl F_7f4929(int);

void F_0097b270()
{
    F_75ecf0 *p = (F_75ecf0 *)&G_b978c8;
    p->f(0, (int)&G_75dbf0, 0, (int)&G_9e70f4, (int)&G_9e7100);
    F_7f4929((int)&G_9897e0);
}
