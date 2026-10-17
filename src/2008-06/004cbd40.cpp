// from server: 93% by colin
struct VBase {
    void* vfptr;
};

struct VTable {
    char pad[0xb0];
    int (__thiscall* fn)(void*, int, int);
};

struct Arg1 {
    char pad[4];
    char* field4;
};

struct Arg2 {
    VTable* vt;
};

struct Inner {
    char pad[0x144];
    int field144;
};

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
extern "C" Inner* __cdecl getInner();

struct S_func_004cbd40 {
    void* field0;
    void* field4;
    Arg1* field8;
    Arg2* fieldC;
    char field10;
    char pad11[3];
    int field14;
    char pad18[0x114];
    int field12c;
    int field130;
    void* construct(Arg1* a1, Arg2* a2);
};

void* S_func_004cbd40::construct(Arg1* a1, Arg2* a2)
{
    field0 = 0;
    field4 = 0;
    field8 = a1;
    fieldC = a2;
    field10 = 0;
    char* p = a1->field4;
    int r = a2->vt->fn(a2, *(int*)(p + 0x2d54), *(int*)(p + 0x2d58));
    Inner* inner = getInner();
    int total = inner->field144 + r;
    field14 = total;
    ((void (__thiscall*)(void*, int))0x4a50c0)((char*)this + 0x18, total);
    field12c = 2;
    field130 = 0;

    return this;
}
