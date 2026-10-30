// roc 2009-12 00865360  unit: CXTPPropertyGridItem  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00865360
//
// 00865360  6aff                 push -1
// 00865362  68a8ed9500           push 0x95eda8
// 00865367  64a100000000         mov eax, dword ptr fs:[0]
// 0086536d  50                   push eax
// 0086536e  83ec0c               sub esp, 0xc
// 00865371  56                   push esi
// 00865372  a10052b600           mov eax, dword ptr [0xb65200]
// 00865377  33c4                 xor eax, esp
// 00865379  50                   push eax
// 0086537a  8d442414             lea eax, [esp + 0x14]
// 0086537e  64a300000000         mov dword ptr fs:[0], eax
// 00865384  8bf1                 mov esi, ecx
// 00865386  8d4c240c             lea ecx, [esp + 0xc]
// 0086538a  ff1574de9800         call dword ptr [0x98de74]
// 00865390  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00865396  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0086539e  c744240800000000     mov dword ptr [esp + 8], 0
// 008653a6  89742410             mov dword ptr [esp + 0x10], esi
// 008653aa  85c9                 test ecx, ecx
// 008653ac  740c                 je 0x8653ba
// 008653ae  8d442408             lea eax, [esp + 8]
// 008653b2  50                   push eax
// 008653b3  6a0b                 push 0xb
// 008653b5  e856250000           call 0x867910
// 008653ba  33c9                 xor ecx, ecx
// 008653bc  394c2408             cmp dword ptr [esp + 8], ecx
// 008653c0  0f94c1               sete cl
// 008653c3  8bf1                 mov esi, ecx
// 008653c5  8d4c240c             lea ecx, [esp + 0xc]
// 008653c9  ff15c0de9800         call dword ptr [0x98dec0]
// 008653cf  8bc6                 mov eax, esi
// 008653d1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008653d5  64890d00000000       mov dword ptr fs:[0], ecx
// 008653dc  59                   pop ecx
// 008653dd  5e                   pop esi
// 008653de  83c418               add esp, 0x18
// 008653e1  c3                   ret 
// copied from an identical function in another client (function ?OnRequestEdit@CXTPPropertyGridItem@@UAEHXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp