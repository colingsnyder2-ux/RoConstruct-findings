// roc 2007-08 00542b60  unit: RBX::VInstance::?$SignalDesc  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00542b60
//
// 00542b60  81ec80000000         sub esp, 0x80
// 00542b66  56                   push esi
// 00542b67  8d4c2404             lea ecx, [esp + 4]
// 00542b6b  e85010fbff           call 0x4f3bc0
// 00542b70  8b7060               mov esi, dword ptr [eax + 0x60]
// 00542b73  8d4c2404             lea ecx, [esp + 4]
// 00542b77  e894fdffff           call 0x542910
// 00542b7c  8bc6                 mov eax, esi
// 00542b7e  5e                   pop esi
// 00542b7f  81c480000000         add esp, 0x80
// 00542b85  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?ram@DebugSettings@RBX@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
