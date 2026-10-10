// from server: 69% by colin
// roc 2007-08 0074754e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0074754e
//
// 0074754e  8b542408             mov edx, dword ptr [esp + 8]
// 00747552  8d02                 lea eax, [edx]
// 00747554  8b4afc               mov ecx, dword ptr [edx - 4]
// 00747557  33c8                 xor ecx, eax
// 00747559  e8c094eeff           call 0x630a1e
// 0074755e  b82cdd8400           mov eax, 0x84dd2c
// 00747563  e9b094eeff           jmp 0x630a18

extern "C" void __cdecl helper_630a1e(unsigned int);
extern "C" void __cdecl helper_630a18();

struct S {
};

void __cdecl f(unsigned int a, unsigned int b)
{
    unsigned int v = b;
    unsigned int x = v;
    unsigned int y = *(unsigned int *)(v - 4);
    helper_630a1e(y ^ x);
    helper_630a18();
}
