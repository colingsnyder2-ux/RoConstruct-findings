// from server: 57% by colin
extern "C" void __cdecl sub_630a1e(void*, void*);
extern "C" void __cdecl sub_630a18(void*, void*);

void __cdecl sub_73d7ee(void* arg) {
    void* p = arg;
    void* q = (char*)p - 4;
    sub_630a1e((void*)(*(int*)q ^ (int)p), p);
    sub_630a18((void*)0x844810, p);
}
