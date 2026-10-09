// roc 2009-12 004f5370  unit: RBX::GfxAttachement  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f5370
//
// 004f5370  56                   push esi
// 004f5371  8b742408             mov esi, dword ptr [esp + 8]
// 004f5375  6a00                 push 0
// 004f5377  68e028b100           push 0xb128e0
// 004f537c  6840feaf00           push 0xaffe40
// 004f5381  6a00                 push 0
// 004f5383  56                   push esi
// 004f5384  e821f72f00           call 0x7f4aaa
// 004f5389  83c414               add esp, 0x14
// 004f538c  85c0                 test eax, eax
// 004f538e  7409                 je 0x4f5399
// 004f5390  6a00                 push 0
// 004f5392  8bce                 mov ecx, esi
// 004f5394  e8e7191400           call 0x636d80
// 004f5399  5e                   pop esi
// 004f539a  c3                   ret 
// library rbxgs-net/Player.cpp (function ?setAppearanceParentNull@@YAXPAVInstance@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
