// from server: 87% by atomic.potato
extern "C" int __fastcall G1_func_0082cc20(void*);
extern "C" void __fastcall G1_func_007f3ddc(void*);
extern "C" void __fastcall G1_func_008553a0(void*, int, int);

struct S_func_0082d780 {
    char pad[0x20];
    void RemoveAt(int, int);
    int GetCount();
    void* GetAt(int);
    void func(int, int);
};

int S_func_0082d780::GetCount()
{
    return G1_func_0082cc20(this);
}

void* S_func_0082d780::GetAt(int index)
{
    void* (__fastcall *fn)(void*, int);
    fn = *(void* (__fastcall **)(void*, int))((char*)this + 0x5c);
    return fn(this, index);
}

void S_func_0082d780::func(int a, int b)
{
    int count = GetCount();
    if (a < count) {
        int i = a;
        do {
            void* p = GetAt(i);
            if (p)
                G1_func_007f3ddc(p);
            ++i;
        } while (i < count);
    }
    G1_func_008553a0((char*)this + 0x20, a, b);
}
