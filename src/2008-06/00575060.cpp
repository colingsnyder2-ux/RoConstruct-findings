// roc 2008-06 00575060  unit: RBX::UnifiedWidget  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00575060
//
// 00575060  6aff                 push -1
// 00575062  687d047d00           push 0x7d047d
// 00575067  64a100000000         mov eax, dword ptr fs:[0]
// 0057506d  50                   push eax
// 0057506e  64892500000000       mov dword ptr fs:[0], esp
// 00575075  83ec3c               sub esp, 0x3c
// 00575078  56                   push esi
// 00575079  c744240400000000     mov dword ptr [esp + 4], 0
// 00575081  8b742450             mov esi, dword ptr [esp + 0x50]
// 00575085  8bce                 mov ecx, esi
// 00575087  c744244801000000     mov dword ptr [esp + 0x48], 1
// 0057508f  ff1560248000         call dword ptr [0x802460]
// 00575095  837c246c10           cmp dword ptr [esp + 0x6c], 0x10
// 0057509a  8b442458             mov eax, dword ptr [esp + 0x58]
// 0057509e  c744240401000000     mov dword ptr [esp + 4], 1
// 005750a6  7304                 jae 0x5750ac
// 005750a8  8d442458             lea eax, [esp + 0x58]
// 005750ac  50                   push eax
// 005750ad  8d4c240c             lea ecx, [esp + 0xc]
// 005750b1  ff1558248000         call dword ptr [0x802458]
// 005750b7  8d4c2424             lea ecx, [esp + 0x24]
// 005750bb  c644244802           mov byte ptr [esp + 0x48], 2
// 005750c0  ff1560248000         call dword ptr [0x802460]
// 005750c6  56                   push esi
// 005750c7  8d4c240c             lea ecx, [esp + 0xc]
// 005750cb  c644244c03           mov byte ptr [esp + 0x4c], 3
// 005750d0  e80b4affff           call 0x569ae0
// 005750d5  8d4c2424             lea ecx, [esp + 0x24]
// 005750d9  c644244804           mov byte ptr [esp + 0x48], 4
// 005750de  ff1568248000         call dword ptr [0x802468]
// 005750e4  8d4c2408             lea ecx, [esp + 8]
// 005750e8  c644244801           mov byte ptr [esp + 0x48], 1
// 005750ed  ff1568248000         call dword ptr [0x802468]
// 005750f3  8d4c2454             lea ecx, [esp + 0x54]
// 005750f7  c644244800           mov byte ptr [esp + 0x48], 0
// 005750fc  ff1568248000         call dword ptr [0x802468]
// 00575102  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00575106  8bc6                 mov eax, esi
// 00575108  5e                   pop esi
// 00575109  64890d00000000       mov dword ptr fs:[0], ecx
// 00575110  83c448               add esp, 0x48
// 00575113  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?doHttpGet@DataModel@RBX@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
