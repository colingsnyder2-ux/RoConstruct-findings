// roc 2009-12 008c7800  unit: VCEdit::?$CXTMaskEditT  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c7800
//
// 008c7800  6aff                 push -1
// 008c7802  68a98e9500           push 0x958ea9
// 008c7807  64a100000000         mov eax, dword ptr fs:[0]
// 008c780d  50                   push eax
// 008c780e  51                   push ecx
// 008c780f  53                   push ebx
// 008c7810  56                   push esi
// 008c7811  57                   push edi
// 008c7812  a10052b600           mov eax, dword ptr [0xb65200]
// 008c7817  33c4                 xor eax, esp
// 008c7819  50                   push eax
// 008c781a  8d442414             lea eax, [esp + 0x14]
// 008c781e  64a300000000         mov dword ptr fs:[0], eax
// 008c7824  8bf1                 mov esi, ecx
// 008c7826  837e2000             cmp dword ptr [esi + 0x20], 0
// 008c782a  0f84ca000000         je 0x8c78fa
// 008c7830  8d4c2410             lea ecx, [esp + 0x10]
// 008c7834  ff1574de9800         call dword ptr [0x98de74]
// 008c783a  8d442410             lea eax, [esp + 0x10]
// 008c783e  50                   push eax
// 008c783f  8bce                 mov ecx, esi
// 008c7841  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008c7849  e8fac5f2ff           call 0x7f3e48
// 008c784e  8bce                 mov ecx, esi
// 008c7850  e82bf2ffff           call 0x8c6a80
// 008c7855  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008c7858  51                   push ecx
// 008c7859  ff15f0ca9800         call dword ptr [0x98caf0]
// 008c785f  8dbe80000000         lea edi, [esi + 0x80]
// 008c7865  8bcf                 mov ecx, edi
// 008c7867  ff1580de9800         call dword ptr [0x98de80]
// 008c786d  50                   push eax
// 008c786e  8d4c2414             lea ecx, [esp + 0x14]
// 008c7872  ff1584de9800         call dword ptr [0x98de84]
// 008c7878  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008c787c  85c0                 test eax, eax
// 008c787e  7438                 je 0x8c78b8
// 008c7880  8bcf                 mov ecx, edi
// 008c7882  ff1580de9800         call dword ptr [0x98de80]
// 008c7888  50                   push eax
// 008c7889  8bce                 mov ecx, esi
// 008c788b  e884c3f2ff           call 0x7f3c14
// 008c7890  85db                 test ebx, ebx
// 008c7892  7508                 jne 0x8c789c
// 008c7894  399e88000000         cmp dword ptr [esi + 0x88], ebx
// 008c789a  740e                 je 0x8c78aa
// 008c789c  8d542410             lea edx, [esp + 0x10]
// 008c78a0  52                   push edx
// 008c78a1  8d4e78               lea ecx, [esi + 0x78]
// 008c78a4  ff1538d59800         call dword ptr [0x98d538]
// 008c78aa  c7466400000000       mov dword ptr [esi + 0x64], 0
// 008c78b1  c7466801000000       mov dword ptr [esi + 0x68], 1
// 008c78b8  8b4658               mov eax, dword ptr [esi + 0x58]
// 008c78bb  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008c78be  8b5620               mov edx, dword ptr [esi + 0x20]
// 008c78c1  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 008c78c7  50                   push eax
// 008c78c8  51                   push ecx
// 008c78c9  68b1000000           push 0xb1
// 008c78ce  52                   push edx
// 008c78cf  899e88000000         mov dword ptr [esi + 0x88], ebx
// 008c78d5  ffd7                 call edi
// 008c78d7  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c78da  6a00                 push 0
// 008c78dc  6a00                 push 0
// 008c78de  68b7000000           push 0xb7
// 008c78e3  50                   push eax
// 008c78e4  ffd7                 call edi
// 008c78e6  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008c78e9  51                   push ecx
// 008c78ea  ff15ecca9800         call dword ptr [0x98caec]
// 008c78f0  8d4c2410             lea ecx, [esp + 0x10]
// 008c78f4  ff15c0de9800         call dword ptr [0x98dec0]
// 008c78fa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c78fe  64890d00000000       mov dword ptr fs:[0], ecx
// 008c7905  59                   pop ecx
// 008c7906  5f                   pop edi
// 008c7907  5e                   pop esi
// 008c7908  5b                   pop ebx
// 008c7909  83c410               add esp, 0x10
// 008c790c  c20400               ret 4
// copied from an identical function in another client (function ?SetMaskState@?$CXTMaskEditT@VCEdit@@@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp