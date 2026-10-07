// roc 2011-06 0077cae0  unit: seg_00770000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077cae0
//
// 0077cae0  53                   push ebx
// 0077cae1  8bc2                 mov eax, edx
// 0077cae3  57                   push edi
// 0077cae4  8b7e08               mov edi, dword ptr [esi + 8]
// 0077cae7  8d5801               lea ebx, [eax + 1]
// 0077caea  8d9b00000000         lea ebx, [ebx]
// 0077caf0  8a08                 mov cl, byte ptr [eax]
// 0077caf2  40                   inc eax
// 0077caf3  84c9                 test cl, cl
// 0077caf5  75f9                 jne 0x77caf0
// 0077caf7  2bc3                 sub eax, ebx
// 0077caf9  50                   push eax
// 0077cafa  52                   push edx
// 0077cafb  56                   push esi
// 0077cafc  e81fd70500           call 0x7da220
// 0077cb01  8907                 mov dword ptr [edi], eax
// 0077cb03  c7470804000000       mov dword ptr [edi + 8], 4
// 0077cb0a  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0077cb0d  2b4608               sub eax, dword ptr [esi + 8]
// 0077cb10  bf10000000           mov edi, 0x10
// 0077cb15  83c40c               add esp, 0xc
// 0077cb18  3bc7                 cmp eax, edi
// 0077cb1a  7f0b                 jg 0x77cb27
// 0077cb1c  6a01                 push 1
// 0077cb1e  56                   push esi
// 0077cb1f  e8ac170000           call 0x77e2d0
// 0077cb24  83c408               add esp, 8
// 0077cb27  017e08               add dword ptr [esi + 8], edi
// 0077cb2a  5f                   pop edi
// 0077cb2b  5b                   pop ebx
// 0077cb2c  c3                   ret 
// library lua-5.1.4/lobject.c (function _pushstr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
