// from server: 90% by colin
struct Verb {
    void* vtable;
    int field_4;
    int field_8;
    void* destroy(char flag);
};

extern "C" void __cdecl sub_62fc62(void* p);
extern "C" void __fastcall sub_564a30(void* p, void* unused, void* arg);

void* Verb::destroy(char flag)
{
    vtable = (void*)0x7a95f4;
    if (field_8 != 0) {
        int tmp = field_4;
        sub_564a30((void*)(field_8 + 4), 0, &tmp);
    }
    if (flag & 1) {
        sub_62fc62(this);
    }
    return this;
}
