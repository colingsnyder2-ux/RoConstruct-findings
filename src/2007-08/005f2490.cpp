// from server: 91% by colin
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" void* __stdcall sub_005f20f0(void*, int, int);

void* __cdecl sub_005f2490(void* a, int b)
{
    if (b == 2) {
        void* p = a;
        if (*(const type_info*)0x8b1970 == *(const type_info*)p)
            return p;
        return 0;
    }
    char c = 0;
    return sub_005f20f0(a, b, *(int*)&c);
}
