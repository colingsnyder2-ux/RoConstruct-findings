// from server: 68% by atomic.potato
struct type_info
{
    bool __thiscall operator==(const type_info&) const;
};

struct Flag
{
};

void __cdecl f(int a, void* b, int c)
{
    if (a == 0 || a == 1)
    {
        if (b != 0)
        {
            char* dst = (char*)b;
            char* src = (char*)c;
            *(int*)(dst + 0) = *(int*)(src + 0);
            *(int*)(dst + 4) = *(int*)(src + 4);
            *(int*)(dst + 8) = *(int*)(src + 8);
            *(int*)(dst + 0xc) = *(int*)(src + 0xc);
            *(int*)(dst + 0x10) = *(int*)(src + 0x10);
            *(int*)(dst + 0x14) = *(int*)(src + 0x14);
        }
        return;
    }
    if (a == 2)
    {
        return;
    }
    if (a == 3)
    {
        int* p = (int*)b;
        type_info* t = (type_info*)0xb55f30;
        bool r = t->operator==(*(type_info*)0xb55f30);
        int v = r ? 0 : 0;
        *p = v & c;
        return;
    }
    char* p = (char*)b;
    *(int*)p = 0xb55f30;
    p[4] = 0;
    p[5] = 0;
}
