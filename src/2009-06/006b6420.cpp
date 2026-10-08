// roc 2009-06 006b6420  unit: RBX::Unlocked  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b6420
//
// 006b6420  51                   push ecx
// 006b6421  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006b6425  50                   push eax
// 006b6426  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006b642a  8d542404             lea edx, [esp + 4]
// 006b642e  52                   push edx
// 006b642f  50                   push eax
// 006b6430  c744240cb4ac8e00     mov dword ptr [esp + 0xc], 0x8eacb4
// 006b6438  e813fdffff           call 0x6b6150
// 006b643d  59                   pop ecx
// 006b643e  c20800               ret 8
// library rbxgs/v8datamodel\MouseCommand.cpp (function ?getUnlockedPart@MouseCommand@RBX@@QAEPAVPartInstance@2@ABVUIEvent@2@AAVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/MouseCommand.cpp
