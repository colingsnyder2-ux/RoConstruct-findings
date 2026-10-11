// from server: 62% by atomic.potato
extern "C" void* __cdecl malloc(unsigned int);

struct CXTPPropExchangeArchive {
    void* vtable;
    char pad[0x24];
    int field_28;
    char pad2[0x18];
    int field_44;
    int sub_850610(int, int, int);
};

int CXTPPropExchangeArchive::sub_850610(int a, int b, int c)
{
    if (((int (__thiscall*)(CXTPPropExchangeArchive*))((void**)vtable)[0x90/4])(this) == 0)
        return 0;
    if (field_28 == 0) {
        int* p = (int*)b;
        ((void (__thiscall*)(CXTPPropExchangeArchive*, int))((void**)vtable)[0x78/4])(this, *p);
        int* q = (int*)a;
        ((void (__cdecl*)(int, int))0x7f43dc)(*q, *p);
        return 1;
    }
    int r = ((int (__thiscall*)(CXTPPropExchangeArchive*))((void**)vtable)[0x7c/4])(this);
    int* pb = (int*)b;
    if (*pb == 0) {
        *pb = (int)malloc(r);
        int* pc = (int*)c;
        *pc = r;
        int ok = ((int (__cdecl*)(int, int))0x7f43d6)(*pb, r);
        return ok == r;
    }
    int* pc = (int*)c;
    if (*pc < (unsigned)r)
        return 0;
    return ((int (__cdecl*)(int, int))0x7f43d6)(*pb, r) == r;
}
