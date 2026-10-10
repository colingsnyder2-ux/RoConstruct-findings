// from server: 43% by colin
struct S {
    void f();
};

extern "C" void* __cdecl sub_5835b0();
extern "C" void __cdecl sub_630d23(void*);

void S::f()
{
    if ((*(unsigned char*)0x8baedc & 1) == 0) {
        *(unsigned int*)0x8baedc |= 1;
        *(unsigned int*)0x8baed4 = (unsigned int)sub_5835b0();
        *(unsigned char*)(*(unsigned int*)0x8baed4 + 0x15) = 1;
        *(unsigned int*)(*(unsigned int*)0x8baed4 + 4) = *(unsigned int*)0x8baed4;
        *(unsigned int*)(*(unsigned int*)0x8baed4) = *(unsigned int*)0x8baed4;
        *(unsigned int*)(*(unsigned int*)0x8baed4 + 8) = *(unsigned int*)0x8baed4;
        *(unsigned int*)0x8baed8 = 0;
        sub_630d23((void*)0x777150);
    }
}
