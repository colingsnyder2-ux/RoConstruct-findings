// roc 2010-06 00603570  unit: RBX::ArrowTool  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00603570
//
// 00603570  56                   push esi
// 00603571  8b742408             mov esi, dword ptr [esp + 8]
// 00603575  6a00                 push 0
// 00603577  68c0c8b700           push 0xb7c8c0
// 0060357c  68408eb700           push 0xb78e40
// 00603581  6a00                 push 0
// 00603583  56                   push esi
// 00603584  e861561a00           call 0x7a8bea
// 00603589  83c414               add esp, 0x14
// 0060358c  85c0                 test eax, eax
// 0060358e  7408                 je 0x603598
// 00603590  8bc8                 mov ecx, eax
// 00603592  5e                   pop esi
// 00603593  e938410300           jmp 0x6376d0
// 00603598  6870356000           push 0x603570
// 0060359d  8bce                 mov ecx, esi
// 0060359f  e8ac56e6ff           call 0x468c50
// 006035a4  5e                   pop esi
// 006035a5  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$wrapper@$00@RBX@@YAXPAVInstance@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
