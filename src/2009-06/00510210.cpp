// roc 2009-06 00510210  unit: RBX::Network::InterpolatingPhysicsReceiver::Job  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00510210
//
// 00510210  53                   push ebx
// 00510211  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00510215  56                   push esi
// 00510216  8bf1                 mov esi, ecx
// 00510218  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0051021b  8bc1                 mov eax, ecx
// 0051021d  c1e803               shr eax, 3
// 00510220  8d0cd9               lea ecx, [ecx + ebx*8]
// 00510223  8d14dd00000000       lea edx, [ebx*8]
// 0051022a  83e03f               and eax, 0x3f
// 0051022d  57                   push edi
// 0051022e  894e18               mov dword ptr [esi + 0x18], ecx
// 00510231  3bca                 cmp ecx, edx
// 00510233  7303                 jae 0x510238
// 00510235  ff461c               inc dword ptr [esi + 0x1c]
// 00510238  8bcb                 mov ecx, ebx
// 0051023a  c1e91d               shr ecx, 0x1d
// 0051023d  014e1c               add dword ptr [esi + 0x1c], ecx
// 00510240  8d1418               lea edx, [eax + ebx]
// 00510243  83fa3f               cmp edx, 0x3f
// 00510246  765b                 jbe 0x5102a3
// 00510248  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051024c  55                   push ebp
// 0051024d  bf40000000           mov edi, 0x40
// 00510252  2bf8                 sub edi, eax
// 00510254  57                   push edi
// 00510255  51                   push ecx
// 00510256  8d543020             lea edx, [eax + esi + 0x20]
// 0051025a  52                   push edx
// 0051025b  e8569c2000           call 0x719eb6
// 00510260  83c40c               add esp, 0xc
// 00510263  8d4e20               lea ecx, [esi + 0x20]
// 00510266  51                   push ecx
// 00510267  8d4604               lea eax, [esi + 4]
// 0051026a  50                   push eax
// 0051026b  8bce                 mov ecx, esi
// 0051026d  e86eeeffff           call 0x50f0e0
// 00510272  8d6f3f               lea ebp, [edi + 0x3f]
// 00510275  3beb                 cmp ebp, ebx
// 00510277  7325                 jae 0x51029e
// 00510279  8da42400000000       lea esp, [esp]
// 00510280  8b542414             mov edx, dword ptr [esp + 0x14]
// 00510284  8d442ac1             lea eax, [edx + ebp - 0x3f]
// 00510288  50                   push eax
// 00510289  8d4604               lea eax, [esi + 4]
// 0051028c  50                   push eax
// 0051028d  8bce                 mov ecx, esi
// 0051028f  e84ceeffff           call 0x50f0e0
// 00510294  83c540               add ebp, 0x40
// 00510297  83c740               add edi, 0x40
// 0051029a  3beb                 cmp ebp, ebx
// 0051029c  72e2                 jb 0x510280
// 0051029e  33c0                 xor eax, eax
// 005102a0  5d                   pop ebp
// 005102a1  eb02                 jmp 0x5102a5
// 005102a3  33ff                 xor edi, edi
// 005102a5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005102a9  2bdf                 sub ebx, edi
// 005102ab  53                   push ebx
// 005102ac  03f9                 add edi, ecx
// 005102ae  8d543020             lea edx, [eax + esi + 0x20]
// 005102b2  57                   push edi
// 005102b3  52                   push edx
// 005102b4  e8fd9b2000           call 0x719eb6
// 005102b9  83c40c               add esp, 0xc
// 005102bc  5f                   pop edi
// 005102bd  5e                   pop esi
// 005102be  5b                   pop ebx
// 005102bf  c20800               ret 8
// library rbx2016-raknet/SHA1.cpp (function ?Update@CSHA1@@QAEXPAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
