// roc 2007-08 005429b0  unit: RBX::VInstance::?$SignalDesc  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005429b0
//
// 005429b0  81ec80000000         sub esp, 0x80
// 005429b6  56                   push esi
// 005429b7  8d4c2404             lea ecx, [esp + 4]
// 005429bb  e80012fbff           call 0x4f3bc0
// 005429c0  8b7008               mov esi, dword ptr [eax + 8]
// 005429c3  8d4c2404             lea ecx, [esp + 4]
// 005429c7  e844ffffff           call 0x542910
// 005429cc  8bc6                 mov eax, esi
// 005429ce  5e                   pop esi
// 005429cf  81c480000000         add esp, 0x80
// 005429d5  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?cpuSpeed@DebugSettings@RBX@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
