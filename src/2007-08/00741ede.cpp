// from server: 69% by colin
extern "C" void __cdecl sub_630a1e(void*);
extern "C" void __cdecl sub_630a18(void*);

struct S {
};

void __cdecl f(void*, void* arg) {
    int* p = (int*)arg;
    int v = p[-1];
    sub_630a1e((void*)(v ^ (int)p));
    sub_630a18((void*)0x848dc8);
}
