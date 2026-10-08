// roc 2007-03 0057b560  unit: seg_00570000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057b560
//
// 0057b560  56                   push esi
// 0057b561  8b742408             mov esi, dword ptr [esp + 8]
// 0057b565  6a00                 push 0
// 0057b567  68e03b8800           push 0x883be0
// 0057b56c  6864108800           push 0x881064
// 0057b571  6a00                 push 0
// 0057b573  56                   push esi
// 0057b574  e84d3c0a00           call 0x61f1c6
// 0057b579  83c414               add esp, 0x14
// 0057b57c  85c0                 test eax, eax
// 0057b57e  7408                 je 0x57b588
// 0057b580  8bc8                 mov ecx, eax
// 0057b582  5e                   pop esi
// 0057b583  e90872ffff           jmp 0x572790
// 0057b588  6860b55700           push 0x57b560
// 0057b58d  8bce                 mov ecx, esi
// 0057b58f  e8bca8f0ff           call 0x485e50
// 0057b594  5e                   pop esi
// 0057b595  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$wrapper@$00@RBX@@YAXPAVInstance@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
