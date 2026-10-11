// from server: 86% by atomic.potato
struct S_009768c0
{
    void f();
};

typedef void (__thiscall *F_006e8210)(void *, int, void *, void *, void *, int);
typedef void (__cdecl *F_007f4929)(void *);

extern F_006e8210 G_006e8210;
extern F_007f4929 G_007f4929;

extern int G_009db38c;
extern int G_009db3a0;
extern int G_00986840;

void S_009768c0::f()
{
    G_006e8210((void *)0xb937a0, 0x130, 0, &G_009db3a0, &G_009db38c, 1);
    G_007f4929(&G_00986840);
}
