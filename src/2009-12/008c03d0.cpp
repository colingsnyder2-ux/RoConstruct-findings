// roc 2009-12 008c03d0  unit: PAVCXTPDockingPaneBase::?$CList  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c03d0
//
// 008c03d0  6aff                 push -1
// 008c03d2  689b3d9600           push 0x963d9b
// 008c03d7  64a100000000         mov eax, dword ptr fs:[0]
// 008c03dd  50                   push eax
// 008c03de  51                   push ecx
// 008c03df  56                   push esi
// 008c03e0  57                   push edi
// 008c03e1  a10052b600           mov eax, dword ptr [0xb65200]
// 008c03e6  33c4                 xor eax, esp
// 008c03e8  50                   push eax
// 008c03e9  8d442410             lea eax, [esp + 0x10]
// 008c03ed  64a300000000         mov dword ptr fs:[0], eax
// 008c03f3  8bf1                 mov esi, ecx
// 008c03f5  8974240c             mov dword ptr [esp + 0xc], esi
// 008c03f9  8d7e04               lea edi, [esi + 4]
// 008c03fc  6a0a                 push 0xa
// 008c03fe  8bcf                 mov ecx, edi
// 008c0400  e83bfeffff           call 0x8c0240
// 008c0405  c7071c89a000         mov dword ptr [edi], 0xa0891c
// 008c040b  6874299f00           push 0x9f2974
// 008c0410  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008c0418  c70600000000         mov dword ptr [esi], 0
// 008c041e  ff151cb29800         call dword ptr [0x98b21c]
// 008c0424  85c0                 test eax, eax
// 008c0426  740e                 je 0x8c0436
// 008c0428  683089a000           push 0xa08930
// 008c042d  50                   push eax
// 008c042e  ff1520b29800         call dword ptr [0x98b220]
// 008c0434  8906                 mov dword ptr [esi], eax
// 008c0436  8bce                 mov ecx, esi
// 008c0438  e883faffff           call 0x8bfec0
// 008c043d  894620               mov dword ptr [esi + 0x20], eax
// 008c0440  8bc6                 mov eax, esi
// 008c0442  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008c0446  64890d00000000       mov dword ptr fs:[0], ecx
// 008c044d  59                   pop ecx
// 008c044e  5f                   pop edi
// 008c044f  5e                   pop esi
// 008c0450  83c410               add esp, 0x10
// 008c0453  c3                   ret 
// copied from an identical function in another client (function ??0CXTPShadowsManager@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPShadowsManager.cpp