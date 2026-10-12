// from server: 84% by king_originala
struct Base {
    unsigned char storage[0x130];
    Base();
};

struct S : Base {
    double value;
    unsigned char text[28];
    S();
};

extern void __cdecl func_005ec170(void *);
extern bool __cdecl func_0060a2f0();

struct Pair {
    void (__cdecl *function)(void *);
    void *argument;
};

inline void *__cdecl operator new(unsigned int, void *p)
{
    return p;
}

struct Item : S {
    unsigned long state;
    unsigned long padding;
    Pair target;
    Item(void *);
};

Item::Item(void *argument)
{
    unsigned long *p = reinterpret_cast<unsigned long *>(this);
    p[0x00 / 4] = 0x0081a08c;
    p[0x10 / 4] = 0x0081a07c;
    p[0x14 / 4] = 0x0081a074;
    p[0x20 / 4] = 0x0081a06c;
    p[0x24 / 4] = 0x0081a05c;
    p[0x44 / 4] = 0x0081a04c;
    p[0x64 / 4] = 0x0081a03c;
    p[0x84 / 4] = 0x0081a02c;
    p[0xa4 / 4] = 0x0081a01c;
    p[0xc4 / 4] = 0x0081a00c;

    Pair local = { &func_005ec170, argument };
    state = 0;
    if (!reinterpret_cast<bool (__cdecl *)(Pair *)>(
            &func_0060a2f0)(&local)) {
        new (&target) Pair(local);
        state = 0x00819cdc;
    } else {
        state = 0;
    }
}
