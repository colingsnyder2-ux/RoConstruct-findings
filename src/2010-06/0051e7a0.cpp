// roc 2010-06 0051e7a0  unit: RakPeer  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051e7a0
//
// 0051e7a0  53                   push ebx
// 0051e7a1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0051e7a5  56                   push esi
// 0051e7a6  8bf1                 mov esi, ecx
// 0051e7a8  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0051e7ab  8bc1                 mov eax, ecx
// 0051e7ad  c1e803               shr eax, 3
// 0051e7b0  8d0cd9               lea ecx, [ecx + ebx*8]
// 0051e7b3  8d14dd00000000       lea edx, [ebx*8]
// 0051e7ba  83e03f               and eax, 0x3f
// 0051e7bd  57                   push edi
// 0051e7be  894e18               mov dword ptr [esi + 0x18], ecx
// 0051e7c1  3bca                 cmp ecx, edx
// 0051e7c3  7303                 jae 0x51e7c8
// 0051e7c5  ff461c               inc dword ptr [esi + 0x1c]
// 0051e7c8  8bcb                 mov ecx, ebx
// 0051e7ca  c1e91d               shr ecx, 0x1d
// 0051e7cd  014e1c               add dword ptr [esi + 0x1c], ecx
// 0051e7d0  8d1418               lea edx, [eax + ebx]
// 0051e7d3  83fa3f               cmp edx, 0x3f
// 0051e7d6  765b                 jbe 0x51e833
// 0051e7d8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051e7dc  55                   push ebp
// 0051e7dd  bf40000000           mov edi, 0x40
// 0051e7e2  2bf8                 sub edi, eax
// 0051e7e4  57                   push edi
// 0051e7e5  51                   push ecx
// 0051e7e6  8d543020             lea edx, [eax + esi + 0x20]
// 0051e7ea  52                   push edx
// 0051e7eb  e836a62800           call 0x7a8e26
// 0051e7f0  83c40c               add esp, 0xc
// 0051e7f3  8d4e20               lea ecx, [esi + 0x20]
// 0051e7f6  51                   push ecx
// 0051e7f7  8d4604               lea eax, [esi + 4]
// 0051e7fa  50                   push eax
// 0051e7fb  8bce                 mov ecx, esi
// 0051e7fd  e86eeeffff           call 0x51d670
// 0051e802  8d6f3f               lea ebp, [edi + 0x3f]
// 0051e805  3beb                 cmp ebp, ebx
// 0051e807  7325                 jae 0x51e82e
// 0051e809  8da42400000000       lea esp, [esp]
// 0051e810  8b542414             mov edx, dword ptr [esp + 0x14]
// 0051e814  8d442ac1             lea eax, [edx + ebp - 0x3f]
// 0051e818  50                   push eax
// 0051e819  8d4604               lea eax, [esi + 4]
// 0051e81c  50                   push eax
// 0051e81d  8bce                 mov ecx, esi
// 0051e81f  e84ceeffff           call 0x51d670
// 0051e824  83c540               add ebp, 0x40
// 0051e827  83c740               add edi, 0x40
// 0051e82a  3beb                 cmp ebp, ebx
// 0051e82c  72e2                 jb 0x51e810
// 0051e82e  33c0                 xor eax, eax
// 0051e830  5d                   pop ebp
// 0051e831  eb02                 jmp 0x51e835
// 0051e833  33ff                 xor edi, edi
// 0051e835  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051e839  2bdf                 sub ebx, edi
// 0051e83b  53                   push ebx
// 0051e83c  03f9                 add edi, ecx
// 0051e83e  8d543020             lea edx, [eax + esi + 0x20]
// 0051e842  57                   push edi
// 0051e843  52                   push edx
// 0051e844  e8dda52800           call 0x7a8e26
// 0051e849  83c40c               add esp, 0xc
// 0051e84c  5f                   pop edi
// 0051e84d  5e                   pop esi
// 0051e84e  5b                   pop ebx
// 0051e84f  c20800               ret 8
// library rbx2016-raknet/SHA1.cpp (function ?Update@CSHA1@@QAEXPAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
