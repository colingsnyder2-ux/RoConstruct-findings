// from server: 70% by atomic.potato
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" int __stdcall helper_6526a5();

struct S {
};

int __cdecl f(void* arg) {
    int* p = (int*)arg;
    if (p == 0)
        return 0;
    type_info* ti;
    if (*p != 0) {
        ti = (type_info*)(*(int*)(*(int*)*p + 4));
        // call virtual
        typedef type_info* (__thiscall *Fn)(int*);
        Fn fn = (Fn)(*(int*)(*(int*)*p + 4));
        ti = fn((int*)*p);
    } else {
        ti = (type_info*)0xc07a44;
    }
    bool r = ti->operator==(*(type_info*)0xc4dec0);
    if (!r)
        return 0;
    return (int)((char*)*p + 4);
}
