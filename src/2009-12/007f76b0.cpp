// from server: 60% by atomic.potato
struct Sub_0083B9A0 {
    int f(const void* p);
};

struct Sub_007F3DFA {
    int f(void* p);
};

struct CPatchedControlComboBox {
    char pad0[0x20];
    char pad20[0x80];
    char padA0[0x40];
    char padE0[0x04];
    int f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
};

int CPatchedControlComboBox::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    int v1 = 0;
    int v2 = 0;
    int v3 = 0;
    int v4 = 0;
    Sub_0083B9A0* p1 = (Sub_0083B9A0*)0;
    Sub_007F3DFA* p2 = (Sub_007F3DFA*)0;
    int* pOut1 = (int*)a1;
    int* pOut2 = (int*)a2;
    int* pOut3 = (int*)a3;
    int* pOut4 = (int*)a4;
    *pOut4 = 0;
    *pOut2 = 0;
    *pOut3 = 0;
    *pOut1 = 0;
    if (p1->f(&v1) != 0)
        return (int)0x80070057;
    if (*(int*)((char*)this + 0xe0) == 0)
        return 0;
    if (*(int*)(*(int*)((char*)this + 0xe0) + 0x20) == 0)
        return 0;
    if (((int (__thiscall*)(void*, int))*(void**)(*(int*)((char*)this - 0x20) + 0x80))((char*)this - 0x20, 0) == 0)
        return 0;
    int t0 = *(int*)((char*)this + 0xa0);
    int t1 = *(int*)((char*)this + 0xa4);
    int t2 = *(int*)((char*)this + 0xa8);
    int t3 = *(int*)((char*)this + 0xac);
    int r0 = t0;
    int r1 = t1;
    int r2 = t2;
    int r3 = t3;
    p2->f(&r0);
    *pOut1 = r0;
    *pOut3 = r1;
    *pOut2 = r2 - r0;
    *pOut4 = r3 - r1;
    return 0;
}
