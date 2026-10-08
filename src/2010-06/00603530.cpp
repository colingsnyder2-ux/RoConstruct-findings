// roc 2010-06 00603530  unit: RBX::ArrowTool  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00603530
//
// 00603530  56                   push esi
// 00603531  8b742408             mov esi, dword ptr [esp + 8]
// 00603535  6a00                 push 0
// 00603537  68c0c8b700           push 0xb7c8c0
// 0060353c  68408eb700           push 0xb78e40
// 00603541  6a00                 push 0
// 00603543  56                   push esi
// 00603544  e8a1561a00           call 0x7a8bea
// 00603549  83c414               add esp, 0x14
// 0060354c  85c0                 test eax, eax
// 0060354e  7408                 je 0x603558
// 00603550  8bc8                 mov ecx, eax
// 00603552  5e                   pop esi
// 00603553  e998410300           jmp 0x6376f0
// 00603558  6830356000           push 0x603530
// 0060355d  8bce                 mov ecx, esi
// 0060355f  e8ec56e6ff           call 0x468c50
// 00603564  5e                   pop esi
// 00603565  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$wrapper@$00@RBX@@YAXPAVInstance@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
