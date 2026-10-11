// from server: 51% by atomic.potato
extern "C" void __stdcall G1_func_0098b760();

struct Inner {
    char pad0[0x18];
    Inner* field18;
    char pad1c[0x10];
    int field2c;
};

struct Outer {
    char pad0[0x18];
    Inner* field18;
};

struct Iter {
    Inner* first;
    Inner* second;
};

struct S {
};

void __cdecl func(int* a, int* b)
{
    Outer* o = (Outer*)a;
    Inner* ebp = o->field18;
    Inner* esi = *(Inner**)o;
    Inner* edi;
    Inner* eax;
    while (1) {
        edi = o->field18;
        eax = *(Inner**)o;
        if (esi != 0 && esi == eax) {
        } else {
            G1_func_0098b760();
        }
        if (ebp == edi) break;
        (*b)++;
        if (esi != 0) {
            esi = esi->field18;
        } else {
            G1_func_0098b760();
            if (ebp == esi->field18) {
                G1_func_0098b760();
            }
            if (*(int*)((char*)ebp + 0x2c) == 0) {
                (*a)++;
            }
            Iter it;
            it.first = esi;
            it.second = ebp;
            ((void(__fastcall*)(Iter*))0x6b3aa0)(&it);
            ebp = it.second;
            esi = it.first;
        }
    }
}
