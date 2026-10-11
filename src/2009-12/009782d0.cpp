// from server: 45% by atomic.potato
struct S
{
    void f();
};

typedef void (__thiscall *F1)(void *, void *, const char *, const char *, void *);
typedef void (__cdecl *F2)(const char *);

extern void *G_70ac80;
extern void *G_9ba750;
extern void *G_9bb1b8;
extern F1 G_70c2c0;
extern F2 G_7f4929;
extern char G_9878e0;

void S::f()
{
    G_70c2c0((void *)0xb95110, G_70ac80, (const char *)0, (const char *)0x9ba750, (void *)0x9bb1b8);
    G_7f4929(&G_9878e0);
}
