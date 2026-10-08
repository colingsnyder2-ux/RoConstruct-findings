// roc 2007-08 0056dcc0  unit: RBX::VContentId::?$holder  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056dcc0
//
// 0056dcc0  64a100000000         mov eax, dword ptr fs:[0]
// 0056dcc6  6aff                 push -1
// 0056dcc8  682e4b7500           push 0x754b2e
// 0056dccd  50                   push eax
// 0056dcce  b801000000           mov eax, 1
// 0056dcd3  64892500000000       mov dword ptr fs:[0], esp
// 0056dcda  840528258c00         test byte ptr [0x8c2528], al
// 0056dce0  7534                 jne 0x56dd16
// 0056dce2  090528258c00         or dword ptr [0x8c2528], eax
// 0056dce8  6854a67900           push 0x79a654
// 0056dced  68109a8900           push 0x899a10
// 0056dcf2  6830a07a00           push 0x7aa030
// 0056dcf7  b918258c00           mov ecx, 0x8c2518
// 0056dcfc  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0056dd04  e8778af1ff           call 0x486780
// 0056dd09  68409f7700           push 0x779f40
// 0056dd0e  e810300c00           call 0x630d23
// 0056dd13  83c404               add esp, 4
// 0056dd16  8b0c24               mov ecx, dword ptr [esp]
// 0056dd19  b818258c00           mov eax, 0x8c2518
// 0056dd1e  64890d00000000       mov dword ptr fs:[0], ecx
// 0056dd25  83c40c               add esp, 0xc
// 0056dd28  c3                   ret 
// library openrbx-client/App\v8tree\enumproperty.cpp (function ??$singleton@VBrickColor@RBX@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/enumproperty.cpp
