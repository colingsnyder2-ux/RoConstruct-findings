// roc 2009-12 008934c0  unit: CXTPMenuBar  size: 364 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008934c0
//
// 008934c0  6aff                 push -1
// 008934c2  68b8149600           push 0x9614b8
// 008934c7  64a100000000         mov eax, dword ptr fs:[0]
// 008934cd  50                   push eax
// 008934ce  83ec18               sub esp, 0x18
// 008934d1  53                   push ebx
// 008934d2  56                   push esi
// 008934d3  57                   push edi
// 008934d4  a10052b600           mov eax, dword ptr [0xb65200]
// 008934d9  33c4                 xor eax, esp
// 008934db  50                   push eax
// 008934dc  8d442428             lea eax, [esp + 0x28]
// 008934e0  64a300000000         mov dword ptr fs:[0], eax
// 008934e6  8bf1                 mov esi, ecx
// 008934e8  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008934ec  85ff                 test edi, edi
// 008934ee  0f849a000000         je 0x89358e
// 008934f4  bb64309a00           mov ebx, 0x9a3064
// 008934f9  895c2410             mov dword ptr [esp + 0x10], ebx
// 008934fd  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00893505  0fb7c7               movzx eax, di
// 00893508  50                   push eax
// 00893509  6a04                 push 4
// 0089350b  50                   push eax
// 0089350c  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00893514  e8c50cf6ff           call 0x7f41de
// 00893519  50                   push eax
// 0089351a  ff154ccc9800         call dword ptr [0x98cc4c]
// 00893520  50                   push eax
// 00893521  8d4c2414             lea ecx, [esp + 0x14]
// 00893525  e8ae0cf6ff           call 0x7f41d8
// 0089352a  8d4c2410             lea ecx, [esp + 0x10]
// 0089352e  85c0                 test eax, eax
// 00893530  7528                 jne 0x89355a
// 00893532  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0089353a  895c2410             mov dword ptr [esp + 0x10], ebx
// 0089353e  e88f0cf6ff           call 0x7f41d2
// 00893543  33c0                 xor eax, eax
// 00893545  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00893549  64890d00000000       mov dword ptr fs:[0], ecx
// 00893550  59                   pop ecx
// 00893551  5f                   pop edi
// 00893552  5e                   pop esi
// 00893553  5b                   pop ebx
// 00893554  83c424               add esp, 0x24
// 00893557  c20400               ret 4
// 0089355a  8b06                 mov eax, dword ptr [esi]
// 0089355c  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 00893562  6a01                 push 1
// 00893564  51                   push ecx
// 00893565  8bce                 mov ecx, esi
// 00893567  ffd2                 call edx
// 00893569  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00893571  895c2410             mov dword ptr [esp + 0x10], ebx
// 00893575  8d4c2410             lea ecx, [esp + 0x10]
// 00893579  85c0                 test eax, eax
// 0089357b  74c1                 je 0x89353e
// 0089357d  89beb4010000         mov dword ptr [esi + 0x1b4], edi
// 00893583  89beb8010000         mov dword ptr [esi + 0x1b8], edi
// 00893589  e8440cf6ff           call 0x7f41d2
// 0089358e  8bce                 mov ecx, esi
// 00893590  e84bfdffff           call 0x8932e0
// 00893595  8bce                 mov ecx, esi
// 00893597  c744241820f10000     mov dword ptr [esp + 0x18], 0xf120
// 0089359f  c744241c20f00000     mov dword ptr [esp + 0x1c], 0xf020
// 008935a7  c744242030f00000     mov dword ptr [esp + 0x20], 0xf030
// 008935af  c744242460f00000     mov dword ptr [esp + 0x24], 0xf060
// 008935b7  e8140ff7ff           call 0x8044d0
// 008935bc  85c0                 test eax, eax
// 008935be  7425                 je 0x8935e5
// 008935c0  6a00                 push 0
// 008935c2  ba10000000           mov edx, 0x10
// 008935c7  8bfa                 mov edi, edx
// 008935c9  57                   push edi
// 008935ca  52                   push edx
// 008935cb  6a04                 push 4
// 008935cd  8d4c2428             lea ecx, [esp + 0x28]
// 008935d1  51                   push ecx
// 008935d2  688e230000           push 0x238e
// 008935d7  8bc8                 mov ecx, eax
// 008935d9  e82211f8ff           call 0x814700
// 008935de  8bc8                 mov ecx, eax
// 008935e0  e81bccf7ff           call 0x810200
// 008935e5  8bce                 mov ecx, esi
// 008935e7  e8a43af7ff           call 0x807090
// 008935ec  85c0                 test eax, eax
// 008935ee  7403                 je 0x8935f3
// 008935f0  8b4020               mov eax, dword ptr [eax + 0x20]
// 008935f3  50                   push eax
// 008935f4  ff1594c99800         call dword ptr [0x98c994]
// 008935fa  8bce                 mov ecx, esi
// 008935fc  8986b0010000         mov dword ptr [esi + 0x1b0], eax
// 00893602  e8893af7ff           call 0x807090
// 00893607  8b10                 mov edx, dword ptr [eax]
// 00893609  8bc8                 mov ecx, eax
// 0089360b  8b4278               mov eax, dword ptr [edx + 0x78]
// 0089360e  6a00                 push 0
// 00893610  ffd0                 call eax
// 00893612  b801000000           mov eax, 1
// 00893617  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0089361b  64890d00000000       mov dword ptr fs:[0], ecx
// 00893622  59                   pop ecx
// 00893623  5f                   pop edi
// 00893624  5e                   pop esi
// 00893625  5b                   pop ebx
// 00893626  83c424               add esp, 0x24
// 00893629  c20400               ret 4
// copied from an identical function in another client (function ?LoadMenuBar@CXTPMenuBar@@UAEHI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMenuBar.cpp