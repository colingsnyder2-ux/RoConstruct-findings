// roc 2009-12 00785fd0  unit: RBX::Unlocked  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00785fd0
//
// 00785fd0  51                   push ecx
// 00785fd1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00785fd5  50                   push eax
// 00785fd6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00785fda  8d542404             lea edx, [esp + 4]
// 00785fde  52                   push edx
// 00785fdf  50                   push eax
// 00785fe0  c744240c849a9e00     mov dword ptr [esp + 0xc], 0x9e9a84
// 00785fe8  e8f3fcffff           call 0x785ce0
// 00785fed  59                   pop ecx
// 00785fee  c20800               ret 8
// library rbxgs/v8datamodel\MouseCommand.cpp (function ?getUnlockedPart@MouseCommand@RBX@@QAEPAVPartInstance@2@ABVUIEvent@2@AAVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/MouseCommand.cpp
