// from server: 74% by colin
struct S_func_00609a30 {
    char pad0[320];
    int m_x;
    int f();
};

struct S {
    char pad0[0x2d68];
    int m_2d68;
    int m_2d6c;
    int m_2d70;
    S* construct(int a, int b, int c);
};

S* S::construct(int a, int b, int c)
{
    S_func_00609a30* p = (S_func_00609a30*)c;
    int v = p->f();
    ((void (__thiscall*)(S*, int, int, int))0x4b9bd0)(this, a, b, v);
    *(int*)((char*)this + 0x00) = 0x823474;
    *(int*)((char*)this + 0x10) = 0x823464;
    *(int*)((char*)this + 0x14) = 0x82345c;
    *(int*)((char*)this + 0x20) = 0x823454;
    *(int*)((char*)this + 0x24) = 0x823444;
    *(int*)((char*)this + 0x44) = 0x823434;
    *(int*)((char*)this + 0x64) = 0x823424;
    *(int*)((char*)this + 0x84) = 0x823414;
    *(int*)((char*)this + 0xa4) = 0x823404;
    *(int*)((char*)this + 0xc4) = 0x8233f4;
    *(int*)((char*)this + 0x2b74) = 0x8233c4;
    m_2d68 = 0;
    m_2d6c = 0;
    m_2d70 = c;
    return this;
}
