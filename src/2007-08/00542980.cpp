// roc 2007-08 00542980  unit: RBX::VInstance::?$SignalDesc  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00542980
//
// 00542980  81ec80000000         sub esp, 0x80
// 00542986  56                   push esi
// 00542987  8d4c2404             lea ecx, [esp + 4]
// 0054298b  e83012fbff           call 0x4f3bc0
// 00542990  8b7004               mov esi, dword ptr [eax + 4]
// 00542993  8d4c2404             lea ecx, [esp + 4]
// 00542997  e874ffffff           call 0x542910
// 0054299c  8bc6                 mov eax, esi
// 0054299e  5e                   pop esi
// 0054299f  81c480000000         add esp, 0x80
// 005429a5  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?videoMemory@DebugSettings@RBX@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
