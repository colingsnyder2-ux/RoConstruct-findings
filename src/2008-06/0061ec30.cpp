// from server: 100% by tester
// roc 2007-03 005be570  unit: seg_005b0000  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005be570
//
// 005be570  53                   push ebx
// 005be571  56                   push esi
// 005be572  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005be576  57                   push edi
// 005be577  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005be57b  57                   push edi
// 005be57c  56                   push esi
// 005be57d  e8dea9ffff           call 0x5b8f60
// 005be582  8bd8                 mov ebx, eax
// 005be584  83c408               add esp, 8
// 005be587  85db                 test ebx, ebx
// 005be589  746d                 je 0x5be5f8
// 005be58b  57                   push edi
// 005be58c  56                   push esi
// 005be58d  e85eaeffff           call 0x5b93f0
// 005be592  83c408               add esp, 8
// 005be595  85c0                 test eax, eax
// 005be597  7454                 je 0x5be5ed
// 005be599  a150828a00           mov eax, dword ptr [0x8a8250]
// 005be59e  50                   push eax
// 005be59f  68f0d8ffff           push 0xffffd8f0
// 005be5a4  56                   push esi
// 005be5a5  e826adffff           call 0x5b92d0
// 005be5aa  6afe                 push -2
// 005be5ac  6aff                 push -1
// 005be5ae  56                   push esi
// 005be5af  e86ca7ffff           call 0x5b8d20
// 005be5b4  83c418               add esp, 0x18
// 005be5b7  85c0                 test eax, eax
// 005be5b9  743d                 je 0x5be5f8
// 005be5bb  6afd                 push -3
// 005be5bd  56                   push esi
// 005be5be  e89da4ffff           call 0x5b8a60
// 005be5c3  8b442420             mov eax, dword ptr [esp + 0x20]
// 005be5c7  8bf3                 mov esi, ebx
// 005be5c9  8bf8                 mov edi, eax
// 005be5cb  b909000000           mov ecx, 9
// 005be5d0  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005be5d2  d94324               fld dword ptr [ebx + 0x24]
// 005be5d5  d95824               fstp dword ptr [eax + 0x24]
// 005be5d8  d94328               fld dword ptr [ebx + 0x28]
// 005be5db  d95828               fstp dword ptr [eax + 0x28]
// 005be5de  d9432c               fld dword ptr [ebx + 0x2c]
// 005be5e1  d9582c               fstp dword ptr [eax + 0x2c]
// 005be5e4  83c408               add esp, 8
// 005be5e7  5f                   pop edi
// 005be5e8  5e                   pop esi
// 005be5e9  b001                 mov al, 1
// 005be5eb  5b                   pop ebx
// 005be5ec  c3                   ret 
// 005be5ed  6afe                 push -2
// 005be5ef  56                   push esi
// 005be5f0  e86ba4ffff           call 0x5b8a60
// 005be5f5  83c408               add esp, 8
// 005be5f8  5f                   pop edi
// 005be5f9  5e                   pop esi
// 005be5fa  32c0                 xor al, al
// 005be5fc  5b                   pop ebx
// 005be5fd  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$getValue@VCoordinateFrame@G3D@@@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SA_NPAUlua_State@@IAAVCoordinateFrame@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
