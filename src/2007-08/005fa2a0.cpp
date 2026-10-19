// from server: 77% by TrollStein
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct S {
};

extern "C" void* __cdecl sub_5d2600(void*, int, char);

void* __cdecl f(int a, int b)
{
    if (b == 2) {
        int* p = (int*)a;
        type_info* t = (type_info*)0x8b3ee0;
        bool r = (*t == *(type_info*)p);
        return r ? (void*)a : 0;
    }
    char c = 0;
    return sub_5d2600((void*)a, b, c);
}
