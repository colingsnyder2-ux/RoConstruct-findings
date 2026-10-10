// from server: 83% by colin
extern "C" void __stdcall sub_630af7(void*, unsigned int, int, void*);

struct Seg0074ba41 {
    void func();
};

void Seg0074ba41::func() {
    char* base = *(char**)((char*)this - 0x10);
    sub_630af7(base + 0x23c, 0x18, 1, (void*)0x433130);
}
