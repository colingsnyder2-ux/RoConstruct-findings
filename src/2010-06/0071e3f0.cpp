// roc 2010-06 0071e3f0  unit: RBX::Unlocked  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0071e3f0
//
// 0071e3f0  51                   push ecx
// 0071e3f1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0071e3f5  50                   push eax
// 0071e3f6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0071e3fa  8d542404             lea edx, [esp + 4]
// 0071e3fe  52                   push edx
// 0071e3ff  50                   push eax
// 0071e400  c744240c74cca400     mov dword ptr [esp + 0xc], 0xa4cc74
// 0071e408  e8f3fcffff           call 0x71e100
// 0071e40d  59                   pop ecx
// 0071e40e  c20800               ret 8
// library rbxgs/v8datamodel\MouseCommand.cpp (function ?getUnlockedPart@MouseCommand@RBX@@QAEPAVPartInstance@2@ABVUIEvent@2@AAVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/MouseCommand.cpp
