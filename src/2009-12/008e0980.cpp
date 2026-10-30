// roc 2009-12 008e0980  unit: CXTPOffice2007Image  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e0980
//
// 008e0980  6aff                 push -1
// 008e0982  68c9ee9500           push 0x95eec9
// 008e0987  64a100000000         mov eax, dword ptr fs:[0]
// 008e098d  50                   push eax
// 008e098e  83ec0c               sub esp, 0xc
// 008e0991  56                   push esi
// 008e0992  57                   push edi
// 008e0993  a10052b600           mov eax, dword ptr [0xb65200]
// 008e0998  33c4                 xor eax, esp
// 008e099a  50                   push eax
// 008e099b  8d442418             lea eax, [esp + 0x18]
// 008e099f  64a300000000         mov dword ptr fs:[0], eax
// 008e09a5  8bf9                 mov edi, ecx
// 008e09a7  8d4c2414             lea ecx, [esp + 0x14]
// 008e09ab  ff1574de9800         call dword ptr [0x98de74]
// 008e09b1  8b4738               mov eax, dword ptr [edi + 0x38]
// 008e09b4  f7d8                 neg eax
// 008e09b6  1bc0                 sbb eax, eax
// 008e09b8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008e09c0  89442410             mov dword ptr [esp + 0x10], eax
// 008e09c4  743c                 je 0x8e0a02
// 008e09c6  8d772c               lea esi, [edi + 0x2c]
// 008e09c9  8da42400000000       lea esp, [esp]
// 008e09d0  8d44240c             lea eax, [esp + 0xc]
// 008e09d4  50                   push eax
// 008e09d5  8d4c2418             lea ecx, [esp + 0x18]
// 008e09d9  51                   push ecx
// 008e09da  8d542418             lea edx, [esp + 0x18]
// 008e09de  52                   push edx
// 008e09df  8bce                 mov ecx, esi
// 008e09e1  e8ec630400           call 0x926dd2
// 008e09e6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e09ea  85c9                 test ecx, ecx
// 008e09ec  740d                 je 0x8e09fb
// 008e09ee  e8e933f1ff           call 0x7f3ddc
// 008e09f3  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 008e09fb  837c241000           cmp dword ptr [esp + 0x10], 0
// 008e0a00  75ce                 jne 0x8e09d0
// 008e0a02  8d4f2c               lea ecx, [edi + 0x2c]
// 008e0a05  e8c2630400           call 0x926dcc
// 008e0a0a  8d4c2414             lea ecx, [esp + 0x14]
// 008e0a0e  ff15c0de9800         call dword ptr [0x98dec0]
// 008e0a14  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008e0a18  64890d00000000       mov dword ptr fs:[0], ecx
// 008e0a1f  59                   pop ecx
// 008e0a20  5f                   pop edi
// 008e0a21  5e                   pop esi
// 008e0a22  83c418               add esp, 0x18
// 008e0a25  c3                   ret 
// copied from an identical function in another client (function ?RemoveAll@CXTPOffice2007Images@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPOffice2007Image.cpp