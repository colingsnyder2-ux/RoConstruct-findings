// from server: 69% by colin
extern "C" void __cdecl helper_630a1e(void*);
extern "C" void __cdecl helper_630a18(void*);

void __cdecl sub_0074815e(void* arg1, void* arg2) {
    int* p = (int*)arg2;
    int v = p[-1];
    int x = (int)p;
    helper_630a1e((void*)(v ^ x));
    helper_630a18((void*)0x84e9c4);
}
