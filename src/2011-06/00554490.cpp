// from server: 100% by atomic.potato
// roc 2011-06 00554490  unit: G3D::LineSegment  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00554490
//
// 00554490  8b442408             mov eax, dword ptr [esp + 8]
// 00554494  56                   push esi
// 00554495  8b742410             mov esi, dword ptr [esp + 0x10]
// 00554499  57                   push edi
// 0055449a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0055449e  56                   push esi
// 0055449f  50                   push eax
// 005544a0  57                   push edi
// 005544a1  e8daed0000           call 0x563280
// 005544a6  83c40c               add esp, 0xc
// 005544a9  85c0                 test eax, eax
// 005544ab  7d05                 jge 0x5544b2
// 005544ad  5f                   pop edi
// 005544ae  33c0                 xor eax, eax
// 005544b0  5e                   pop esi
// 005544b1  c3                   ret 
// 005544b2  56                   push esi
// 005544b3  50                   push eax
// 005544b4  57                   push edi
// 005544b5  e826350100           call 0x5679e0
// 005544ba  83c40c               add esp, 0xc
// 005544bd  5f                   pop edi
// 005544be  5e                   pop esi
// 005544bf  c3                   ret 

extern "C" int __cdecl sub_563280(int, int, int);
extern "C" int __cdecl sub_5679e0(int, int, int);

int __cdecl sub_554490(int a, int b, int c) {
    int r = sub_563280(a, b, c);
    if (r < 0) {
        return 0;
    }
    return sub_5679e0(a, r, c);
}
