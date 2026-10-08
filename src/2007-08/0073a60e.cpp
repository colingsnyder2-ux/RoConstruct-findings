// from server: 78% by colin
// roc 2007-08 0073a60e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073a60e
//
// 0073a60e  8b542408             mov edx, dword ptr [esp + 8]
// 0073a612  8d02                 lea eax, [edx]
// 0073a614  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073a617  33c8                 xor ecx, eax
// 0073a619  e80064efff           call 0x630a1e
// 0073a61e  b82c118400           mov eax, 0x84112c
// 0073a623  e9f063efff           jmp 0x630a18

struct S {
    void f();
};

extern "C" void __cdecl helper_630a1e(void*, void*);
extern "C" void __cdecl helper_630a18();

void S::f()
{
    unsigned char* p;
    p = *(unsigned char**)((char*)&p + 8);
    unsigned int v = *(unsigned int*)(p - 4);
    v ^= (unsigned int)p;
    helper_630a1e((void*)v, (void*)p);
    helper_630a18();
}
