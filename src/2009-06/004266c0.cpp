// roc 2009-06 004266c0  unit: boost::any::H::?$holder  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004266c0
//
// 004266c0  6aff                 push -1
// 004266c2  6878ef8600           push 0x86ef78
// 004266c7  64a100000000         mov eax, dword ptr fs:[0]
// 004266cd  50                   push eax
// 004266ce  64892500000000       mov dword ptr fs:[0], esp
// 004266d5  51                   push ecx
// 004266d6  56                   push esi
// 004266d7  8bf1                 mov esi, ecx
// 004266d9  57                   push edi
// 004266da  89742408             mov dword ptr [esp + 8], esi
// 004266de  8b460c               mov eax, dword ptr [esi + 0xc]
// 004266e1  33ff                 xor edi, edi
// 004266e3  897c2414             mov dword ptr [esp + 0x14], edi
// 004266e7  3bc7                 cmp eax, edi
// 004266e9  7418                 je 0x426703
// 004266eb  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004266ee  51                   push ecx
// 004266ef  50                   push eax
// 004266f0  8bce                 mov ecx, esi
// 004266f2  e829ffffff           call 0x426620
// 004266f7  8b560c               mov edx, dword ptr [esi + 0xc]
// 004266fa  52                   push edx
// 004266fb  e832232f00           call 0x718a32
// 00426700  83c404               add esp, 4
// 00426703  8b06                 mov eax, dword ptr [esi]
// 00426705  50                   push eax
// 00426706  897e0c               mov dword ptr [esi + 0xc], edi
// 00426709  897e10               mov dword ptr [esi + 0x10], edi
// 0042670c  897e14               mov dword ptr [esi + 0x14], edi
// 0042670f  e81e232f00           call 0x718a32
// 00426714  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00426718  83c404               add esp, 4
// 0042671b  5f                   pop edi
// 0042671c  5e                   pop esi
// 0042671d  64890d00000000       mov dword ptr fs:[0], ecx
// 00426724  83c410               add esp, 0x10
// 00426727  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
