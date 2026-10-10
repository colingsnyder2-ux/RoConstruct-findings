// from server: 100% by tester
// roc 2007-03 004c0480  unit: seg_004c0000  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c0480
//
// 004c0480  53                   push ebx
// 004c0481  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004c0485  56                   push esi
// 004c0486  8bf1                 mov esi, ecx
// 004c0488  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004c048b  8bc1                 mov eax, ecx
// 004c048d  c1e803               shr eax, 3
// 004c0490  8d0cd9               lea ecx, [ecx + ebx*8]
// 004c0493  8d14dd00000000       lea edx, [ebx*8]
// 004c049a  83e03f               and eax, 0x3f
// 004c049d  3bca                 cmp ecx, edx
// 004c049f  57                   push edi
// 004c04a0  894e18               mov dword ptr [esi + 0x18], ecx
// 004c04a3  7304                 jae 0x4c04a9
// 004c04a5  83461c01             add dword ptr [esi + 0x1c], 1
// 004c04a9  8bcb                 mov ecx, ebx
// 004c04ab  c1e91d               shr ecx, 0x1d
// 004c04ae  014e1c               add dword ptr [esi + 0x1c], ecx
// 004c04b1  8d1418               lea edx, [eax + ebx]
// 004c04b4  83fa3f               cmp edx, 0x3f
// 004c04b7  765a                 jbe 0x4c0513
// 004c04b9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004c04bd  55                   push ebp
// 004c04be  bf40000000           mov edi, 0x40
// 004c04c3  2bf8                 sub edi, eax
// 004c04c5  57                   push edi
// 004c04c6  51                   push ecx
// 004c04c7  8d543020             lea edx, [eax + esi + 0x20]
// 004c04cb  52                   push edx
// 004c04cc  e811ed1500           call 0x61f1e2
// 004c04d1  83c40c               add esp, 0xc
// 004c04d4  8d4e20               lea ecx, [esi + 0x20]
// 004c04d7  51                   push ecx
// 004c04d8  8d4604               lea eax, [esi + 4]
// 004c04db  50                   push eax
// 004c04dc  8bce                 mov ecx, esi
// 004c04de  e8cdebffff           call 0x4bf0b0
// 004c04e3  8d6f3f               lea ebp, [edi + 0x3f]
// 004c04e6  3beb                 cmp ebp, ebx
// 004c04e8  7324                 jae 0x4c050e
// 004c04ea  8d9b00000000         lea ebx, [ebx]
// 004c04f0  8b542414             mov edx, dword ptr [esp + 0x14]
// 004c04f4  8d442ac1             lea eax, [edx + ebp - 0x3f]
// 004c04f8  50                   push eax
// 004c04f9  8d4604               lea eax, [esi + 4]
// 004c04fc  50                   push eax
// 004c04fd  8bce                 mov ecx, esi
// 004c04ff  e8acebffff           call 0x4bf0b0
// 004c0504  83c540               add ebp, 0x40
// 004c0507  83c740               add edi, 0x40
// 004c050a  3beb                 cmp ebp, ebx
// 004c050c  72e2                 jb 0x4c04f0
// 004c050e  33c0                 xor eax, eax
// 004c0510  5d                   pop ebp
// 004c0511  eb02                 jmp 0x4c0515
// 004c0513  33ff                 xor edi, edi
// 004c0515  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004c0519  2bdf                 sub ebx, edi
// 004c051b  53                   push ebx
// 004c051c  03f9                 add edi, ecx
// 004c051e  8d543020             lea edx, [eax + esi + 0x20]
// 004c0522  57                   push edi
// 004c0523  52                   push edx
// 004c0524  e8b9ec1500           call 0x61f1e2
// 004c0529  83c40c               add esp, 0xc
// 004c052c  5f                   pop edi
// 004c052d  5e                   pop esi
// 004c052e  5b                   pop ebx
// 004c052f  c20800               ret 8
// library rbxgs-raknet/SHA1.cpp (function ?Update@CSHA1@@QAEXPAEI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SHA1.cpp
