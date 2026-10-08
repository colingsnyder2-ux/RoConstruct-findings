// from server: 100% by auto
// roc 2009-06 006c8d60  unit: seg_006c0000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c8d60
//
// 006c8d60  53                   push ebx
// 006c8d61  8bc2                 mov eax, edx
// 006c8d63  57                   push edi
// 006c8d64  8b7e08               mov edi, dword ptr [esi + 8]
// 006c8d67  8d5801               lea ebx, [eax + 1]
// 006c8d6a  8d9b00000000         lea ebx, [ebx]
// 006c8d70  8a08                 mov cl, byte ptr [eax]
// 006c8d72  40                   inc eax
// 006c8d73  84c9                 test cl, cl
// 006c8d75  75f9                 jne 0x6c8d70
// 006c8d77  2bc3                 sub eax, ebx
// 006c8d79  50                   push eax
// 006c8d7a  52                   push edx
// 006c8d7b  56                   push esi
// 006c8d7c  e8bf3d0200           call 0x6ecb40
// 006c8d81  8907                 mov dword ptr [edi], eax
// 006c8d83  c7470804000000       mov dword ptr [edi + 8], 4
// 006c8d8a  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006c8d8d  2b4608               sub eax, dword ptr [esi + 8]
// 006c8d90  bf10000000           mov edi, 0x10
// 006c8d95  83c40c               add esp, 0xc
// 006c8d98  3bc7                 cmp eax, edi
// 006c8d9a  7f0b                 jg 0x6c8da7
// 006c8d9c  6a01                 push 1
// 006c8d9e  56                   push esi
// 006c8d9f  e81ca0ffff           call 0x6c2dc0
// 006c8da4  83c408               add esp, 8
// 006c8da7  017e08               add dword ptr [esi + 8], edi
// 006c8daa  5f                   pop edi
// 006c8dab  5b                   pop ebx
// 006c8dac  c3                   ret 
// library lua-5.1.4/lobject.c (function _pushstr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
