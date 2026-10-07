// roc 2007-08 004cba80  unit: seg_004c0000  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cba80
//
// 004cba80  53                   push ebx
// 004cba81  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004cba85  56                   push esi
// 004cba86  8bf1                 mov esi, ecx
// 004cba88  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004cba8b  8bc1                 mov eax, ecx
// 004cba8d  c1e803               shr eax, 3
// 004cba90  8d0cd9               lea ecx, [ecx + ebx*8]
// 004cba93  8d14dd00000000       lea edx, [ebx*8]
// 004cba9a  83e03f               and eax, 0x3f
// 004cba9d  3bca                 cmp ecx, edx
// 004cba9f  57                   push edi
// 004cbaa0  894e18               mov dword ptr [esi + 0x18], ecx
// 004cbaa3  7304                 jae 0x4cbaa9
// 004cbaa5  83461c01             add dword ptr [esi + 0x1c], 1
// 004cbaa9  8bcb                 mov ecx, ebx
// 004cbaab  c1e91d               shr ecx, 0x1d
// 004cbaae  014e1c               add dword ptr [esi + 0x1c], ecx
// 004cbab1  8d1418               lea edx, [eax + ebx]
// 004cbab4  83fa3f               cmp edx, 0x3f
// 004cbab7  765a                 jbe 0x4cbb13
// 004cbab9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004cbabd  55                   push ebp
// 004cbabe  bf40000000           mov edi, 0x40
// 004cbac3  2bf8                 sub edi, eax
// 004cbac5  57                   push edi
// 004cbac6  51                   push ecx
// 004cbac7  8d543020             lea edx, [eax + esi + 0x20]
// 004cbacb  52                   push edx
// 004cbacc  e87b521600           call 0x630d4c
// 004cbad1  83c40c               add esp, 0xc
// 004cbad4  8d4e20               lea ecx, [esi + 0x20]
// 004cbad7  51                   push ecx
// 004cbad8  8d4604               lea eax, [esi + 4]
// 004cbadb  50                   push eax
// 004cbadc  8bce                 mov ecx, esi
// 004cbade  e8cdebffff           call 0x4ca6b0
// 004cbae3  8d6f3f               lea ebp, [edi + 0x3f]
// 004cbae6  3beb                 cmp ebp, ebx
// 004cbae8  7324                 jae 0x4cbb0e
// 004cbaea  8d9b00000000         lea ebx, [ebx]
// 004cbaf0  8b542414             mov edx, dword ptr [esp + 0x14]
// 004cbaf4  8d442ac1             lea eax, [edx + ebp - 0x3f]
// 004cbaf8  50                   push eax
// 004cbaf9  8d4604               lea eax, [esi + 4]
// 004cbafc  50                   push eax
// 004cbafd  8bce                 mov ecx, esi
// 004cbaff  e8acebffff           call 0x4ca6b0
// 004cbb04  83c540               add ebp, 0x40
// 004cbb07  83c740               add edi, 0x40
// 004cbb0a  3beb                 cmp ebp, ebx
// 004cbb0c  72e2                 jb 0x4cbaf0
// 004cbb0e  33c0                 xor eax, eax
// 004cbb10  5d                   pop ebp
// 004cbb11  eb02                 jmp 0x4cbb15
// 004cbb13  33ff                 xor edi, edi
// 004cbb15  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004cbb19  2bdf                 sub ebx, edi
// 004cbb1b  53                   push ebx
// 004cbb1c  03f9                 add edi, ecx
// 004cbb1e  8d543020             lea edx, [eax + esi + 0x20]
// 004cbb22  57                   push edi
// 004cbb23  52                   push edx
// 004cbb24  e823521600           call 0x630d4c
// 004cbb29  83c40c               add esp, 0xc
// 004cbb2c  5f                   pop edi
// 004cbb2d  5e                   pop esi
// 004cbb2e  5b                   pop ebx
// 004cbb2f  c20800               ret 8
// library rbx2016-raknet/SHA1.cpp (function ?Update@CSHA1@@QAEXPAEI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
