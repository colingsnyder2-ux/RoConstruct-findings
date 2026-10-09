// roc 2012-06 00409290  unit: VCApp::?$CComAggObject  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00409290
//
// 00409290  6aff                 push -1
// 00409292  68ebd7a900           push 0xa9d7eb
// 00409297  64a100000000         mov eax, dword ptr fs:[0]
// 0040929d  50                   push eax
// 0040929e  64892500000000       mov dword ptr fs:[0], esp
// 004092a5  83ec08               sub esp, 8
// 004092a8  c7042400000000       mov dword ptr [esp], 0
// 004092af  6848010000           push 0x148
// 004092b4  c644240400           mov byte ptr [esp + 4], 0
// 004092b9  e85c8e5700           call 0x98211a
// 004092be  83c404               add esp, 4
// 004092c1  89442404             mov dword ptr [esp + 4], eax
// 004092c5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004092cd  85c0                 test eax, eax
// 004092cf  7409                 je 0x4092da
// 004092d1  8bc8                 mov ecx, eax
// 004092d3  e848220600           call 0x46b520
// 004092d8  eb02                 jmp 0x4092dc
// 004092da  33c0                 xor eax, eax
// 004092dc  8b0c24               mov ecx, dword ptr [esp]
// 004092df  56                   push esi
// 004092e0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004092e4  51                   push ecx
// 004092e5  50                   push eax
// 004092e6  8bce                 mov ecx, esi
// 004092e8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004092f0  e82bffffff           call 0x409220
// 004092f5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004092f9  8bc6                 mov eax, esi
// 004092fb  5e                   pop esi
// 004092fc  64890d00000000       mov dword ptr fs:[0], ecx
// 00409303  83c414               add esp, 0x14
// 00409306  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VBodyColors@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VBodyColors@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/CharacterAppearance.cpp
