// roc 2009-12 008e9880  unit: CXTPRibbonGroup  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e9880
//
// 008e9880  6aff                 push -1
// 008e9882  68585f9600           push 0x965f58
// 008e9887  64a100000000         mov eax, dword ptr fs:[0]
// 008e988d  50                   push eax
// 008e988e  83ec20               sub esp, 0x20
// 008e9891  53                   push ebx
// 008e9892  56                   push esi
// 008e9893  57                   push edi
// 008e9894  a10052b600           mov eax, dword ptr [0xb65200]
// 008e9899  33c4                 xor eax, esp
// 008e989b  50                   push eax
// 008e989c  8d442430             lea eax, [esp + 0x30]
// 008e98a0  64a300000000         mov dword ptr fs:[0], eax
// 008e98a6  8bf1                 mov esi, ecx
// 008e98a8  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 008e98ab  e8c0b3faff           call 0x894c70
// 008e98b0  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 008e98b4  0554060000           add eax, 0x654
// 008e98b9  50                   push eax
// 008e98ba  53                   push ebx
// 008e98bb  8d4c2428             lea ecx, [esp + 0x28]
// 008e98bf  e89c1df6ff           call 0x84b660
// 008e98c4  8d442410             lea eax, [esp + 0x10]
// 008e98c8  8d7e28               lea edi, [esi + 0x28]
// 008e98cb  50                   push eax
// 008e98cc  8bcf                 mov ecx, edi
// 008e98ce  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008e98d6  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008e98dc  50                   push eax
// 008e98dd  8bcf                 mov ecx, edi
// 008e98df  ff1580de9800         call dword ptr [0x98de80]
// 008e98e5  8b4b08               mov ecx, dword ptr [ebx + 8]
// 008e98e8  50                   push eax
// 008e98e9  51                   push ecx
// 008e98ea  ff156cb19800         call dword ptr [0x98b16c]
// 008e98f0  837e7400             cmp dword ptr [esi + 0x74], 0
// 008e98f4  8b542414             mov edx, dword ptr [esp + 0x14]
// 008e98f8  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008e98fc  8954241c             mov dword ptr [esp + 0x1c], edx
// 008e9900  7410                 je 0x8e9912
// 008e9902  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 008e9905  e866b3faff           call 0x894c70
// 008e990a  8b8060060000         mov eax, dword ptr [eax + 0x660]
// 008e9910  03f8                 add edi, eax
// 008e9912  8d4c2420             lea ecx, [esp + 0x20]
// 008e9916  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 008e991e  e8bd1df6ff           call 0x84b6e0
// 008e9923  8bc7                 mov eax, edi
// 008e9925  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008e9929  64890d00000000       mov dword ptr fs:[0], ecx
// 008e9930  59                   pop ecx
// 008e9931  5f                   pop edi
// 008e9932  5e                   pop esi
// 008e9933  5b                   pop ebx
// 008e9934  83c42c               add esp, 0x2c
// 008e9937  c20400               ret 4
// copied from an identical function in another client (function ?GetMinimumWidth@CXTPRibbonGroup@@MAEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonGroup.cpp