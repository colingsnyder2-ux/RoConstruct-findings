// from server: 86% by colin
// roc 2007-08 006b3610  unit: CXTPControlGallery  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b3610
//
// 006b3610  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 006b3616  83b8f400000002       cmp dword ptr [eax + 0xf4], 2
// 006b361d  7403                 je 0x6b3622
// 006b361f  33c0                 xor eax, eax
// 006b3621  c3                   ret 
// 006b3622  83b90402000000       cmp dword ptr [ecx + 0x204], 0
// 006b3629  75f4                 jne 0x6b361f
// 006b362b  56                   push esi
// 006b362c  8bb180000000         mov esi, dword ptr [ecx + 0x80]
// 006b3632  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 006b3638  6a01                 push 1
// 006b363a  6a00                 push 0
// 006b363c  6a01                 push 1
// 006b363e  6a01                 push 1
// 006b3640  56                   push esi
// 006b3641  e80a72fcff           call 0x67a850
// 006b3646  33c9                 xor ecx, ecx
// 006b3648  3bc6                 cmp eax, esi
// 006b364a  0f9fc1               setg cl
// 006b364d  5e                   pop esi
// 006b364e  8bc1                 mov eax, ecx
// 006b3650  c3                   ret 

struct CXTPControlGallery {
    int sub_67A850(int, int, int, int, int);
    int f();
};

int CXTPControlGallery::f() {
    int* p = *(int**)((char*)this + 0xfc);
    if (p[0xf4 / 4] != 2)
        return 0;
    if (*(int*)((char*)this + 0x204) != 0)
        return 0;
    int s = *(int*)((char*)this + 0x80);
    int r = sub_67A850(*(int*)((char*)p + 0xf8), s, 1, 1, 0);
    return r > s;
}
