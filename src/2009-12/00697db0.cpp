// roc 2009-12 00697db0  unit: RBX::ArrowTool  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00697db0
//
// 00697db0  56                   push esi
// 00697db1  8b742408             mov esi, dword ptr [esp + 8]
// 00697db5  6a00                 push 0
// 00697db7  68583ab000           push 0xb03a58
// 00697dbc  6840feaf00           push 0xaffe40
// 00697dc1  6a00                 push 0
// 00697dc3  56                   push esi
// 00697dc4  e8e1cc1500           call 0x7f4aaa
// 00697dc9  83c414               add esp, 0x14
// 00697dcc  85c0                 test eax, eax
// 00697dce  7408                 je 0x697dd8
// 00697dd0  8bc8                 mov ecx, eax
// 00697dd2  5e                   pop esi
// 00697dd3  e9983c0300           jmp 0x6cba70
// 00697dd8  68b07d6900           push 0x697db0
// 00697ddd  8bce                 mov ecx, esi
// 00697ddf  e88cc3dcff           call 0x464170
// 00697de4  5e                   pop esi
// 00697de5  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$wrapper@$00@RBX@@YAXPAVInstance@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
