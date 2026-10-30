// roc 2009-12 007f7ea0  unit: IIHH::?$CMap  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f7ea0
//
// 007f7ea0  6aff                 push -1
// 007f7ea2  68198f9500           push 0x958f19
// 007f7ea7  64a100000000         mov eax, dword ptr fs:[0]
// 007f7ead  50                   push eax
// 007f7eae  53                   push ebx
// 007f7eaf  56                   push esi
// 007f7eb0  57                   push edi
// 007f7eb1  a10052b600           mov eax, dword ptr [0xb65200]
// 007f7eb6  33c4                 xor eax, esp
// 007f7eb8  50                   push eax
// 007f7eb9  8d442410             lea eax, [esp + 0x10]
// 007f7ebd  64a300000000         mov dword ptr fs:[0], eax
// 007f7ec3  8bd9                 mov ebx, ecx
// 007f7ec5  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007f7ec9  8b742424             mov esi, dword ptr [esp + 0x24]
// 007f7ecd  8d4c2420             lea ecx, [esp + 0x20]
// 007f7ed1  897e28               mov dword ptr [esi + 0x28], edi
// 007f7ed4  ff1574de9800         call dword ptr [0x98de74]
// 007f7eda  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007f7ee2  e8b9690700           call 0x86e8a0
// 007f7ee7  8b10                 mov edx, dword ptr [eax]
// 007f7ee9  8b5208               mov edx, dword ptr [edx + 8]
// 007f7eec  57                   push edi
// 007f7eed  8d4c2424             lea ecx, [esp + 0x24]
// 007f7ef1  51                   push ecx
// 007f7ef2  8bc8                 mov ecx, eax
// 007f7ef4  ffd2                 call edx
// 007f7ef6  85c0                 test eax, eax
// 007f7ef8  7412                 je 0x7f7f0c
// 007f7efa  8d4c2420             lea ecx, [esp + 0x20]
// 007f7efe  ff1580de9800         call dword ptr [0x98de80]
// 007f7f04  50                   push eax
// 007f7f05  8bce                 mov ecx, esi
// 007f7f07  e8e4dcffff           call 0x7f5bf0
// 007f7f0c  56                   push esi
// 007f7f0d  8bcb                 mov ecx, ebx
// 007f7f0f  e83cffffff           call 0x7f7e50
// 007f7f14  8d4c2420             lea ecx, [esp + 0x20]
// 007f7f18  ff15c0de9800         call dword ptr [0x98dec0]
// 007f7f1e  8bc6                 mov eax, esi
// 007f7f20  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f7f24  64890d00000000       mov dword ptr fs:[0], ecx
// 007f7f2b  59                   pop ecx
// 007f7f2c  5f                   pop edi
// 007f7f2d  5e                   pop esi
// 007f7f2e  5b                   pop ebx
// 007f7f2f  83c40c               add esp, 0xc
// 007f7f32  c20800               ret 8
// copied from an identical function in another client (function ?Add@CXTPControlActions@@QAEPAVCXTPControlAction@@HPAV2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp