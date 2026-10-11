// from server: 56% by atomic.potato
// roc 2009-06 006d4a20  unit: RBX::Body  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d4a20
//
// 006d4a20  b801000000           mov eax, 1
// 006d4a25  840530ffa400         test byte ptr [0xa4ff30], al
// 006d4a2b  7548                 jne 0x6d4a75
// 006d4a2d  090530ffa400         or dword ptr [0xa4ff30], eax
// 006d4a33  6800ffa400           push 0xa4ff00
// 006d4a38  ff1548e38900         call dword ptr [0x89e348]
// 006d4a3e  33c0                 xor eax, eax
// 006d4a40  a318ffa400           mov dword ptr [0xa4ff18], eax
// 006d4a45  a31cffa400           mov dword ptr [0xa4ff1c], eax
// 006d4a4a  a320ffa400           mov dword ptr [0xa4ff20], eax
// 006d4a4f  b820000000           mov eax, 0x20
// 006d4a54  68d0d08900           push 0x89d0d0
// 006d4a59  c70524ffa4003c000000 mov dword ptr [0xa4ff24], 0x3c
// 006d4a63  a328ffa400           mov dword ptr [0xa4ff28], eax
// 006d4a68  a32cffa400           mov dword ptr [0xa4ff2c], eax
// 006d4a6d  e889500400           call 0x719afb
// 006d4a72  83c404               add esp, 4
// 006d4a75  b800ffa400           mov eax, 0xa4ff00
// 006d4a7a  c3                   ret 

extern "C" void __stdcall InitializeCriticalSection(void*);
extern "C" void __cdecl sub_719AFB(void*);

struct S {
    static S* f();
};

S* S::f()
{
    if ((*(unsigned char*)0xa4ff30 & 1) == 0) {
        *(unsigned int*)0xa4ff30 |= 1;
        InitializeCriticalSection((void*)0xa4ff00);
        *(unsigned int*)0xa4ff18 = 0;
        *(unsigned int*)0xa4ff1c = 0;
        *(unsigned int*)0xa4ff20 = 0;
        *(unsigned int*)0xa4ff24 = 0x3c;
        *(unsigned int*)0xa4ff28 = 0x20;
        *(unsigned int*)0xa4ff2c = 0x20;
        sub_719AFB((void*)0x89d0d0);
    }
    return (S*)0xa4ff00;
}
