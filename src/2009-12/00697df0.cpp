// roc 2009-12 00697df0  unit: RBX::ArrowTool  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00697df0
//
// 00697df0  56                   push esi
// 00697df1  8b742408             mov esi, dword ptr [esp + 8]
// 00697df5  6a00                 push 0
// 00697df7  68583ab000           push 0xb03a58
// 00697dfc  6840feaf00           push 0xaffe40
// 00697e01  6a00                 push 0
// 00697e03  56                   push esi
// 00697e04  e8a1cc1500           call 0x7f4aaa
// 00697e09  83c414               add esp, 0x14
// 00697e0c  85c0                 test eax, eax
// 00697e0e  7408                 je 0x697e18
// 00697e10  8bc8                 mov ecx, eax
// 00697e12  5e                   pop esi
// 00697e13  e9383c0300           jmp 0x6cba50
// 00697e18  68f07d6900           push 0x697df0
// 00697e1d  8bce                 mov ecx, esi
// 00697e1f  e84cc3dcff           call 0x464170
// 00697e24  5e                   pop esi
// 00697e25  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$wrapper@$00@RBX@@YAXPAVInstance@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
