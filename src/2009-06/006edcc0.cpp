// roc 2009-06 006edcc0  unit: seg_006e0000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006edcc0
//
// 006edcc0  56                   push esi
// 006edcc1  8bf0                 mov esi, eax
// 006edcc3  817e101d010000       cmp dword ptr [esi + 0x10], 0x11d
// 006edcca  57                   push edi
// 006edccb  7424                 je 0x6edcf1
// 006edccd  681d010000           push 0x11d
// 006edcd2  56                   push esi
// 006edcd3  e818350000           call 0x6f11f0
// 006edcd8  50                   push eax
// 006edcd9  8b4634               mov eax, dword ptr [esi + 0x34]
// 006edcdc  68b8dd8e00           push 0x8eddb8
// 006edce1  50                   push eax
// 006edce2  e8b9b3fdff           call 0x6c90a0
// 006edce7  50                   push eax
// 006edce8  56                   push esi
// 006edce9  e802360000           call 0x6f12f0
// 006edcee  83c41c               add esp, 0x1c
// 006edcf1  8b7e18               mov edi, dword ptr [esi + 0x18]
// 006edcf4  56                   push esi
// 006edcf5  e8e6490000           call 0x6f26e0
// 006edcfa  8b7630               mov esi, dword ptr [esi + 0x30]
// 006edcfd  6a01                 push 1
// 006edcff  53                   push ebx
// 006edd00  57                   push edi
// 006edd01  56                   push esi
// 006edd02  e8d9feffff           call 0x6edbe0
// 006edd07  83c414               add esp, 0x14
// 006edd0a  83f808               cmp eax, 8
// 006edd0d  750d                 jne 0x6edd1c
// 006edd0f  57                   push edi
// 006edd10  56                   push esi
// 006edd11  e86ac10000           call 0x6f9e80
// 006edd16  83c408               add esp, 8
// 006edd19  894308               mov dword ptr [ebx + 8], eax
// 006edd1c  5f                   pop edi
// 006edd1d  5e                   pop esi
// 006edd1e  c3                   ret 
// library lua-5.1.4/lparser.c (function _singlevar)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
