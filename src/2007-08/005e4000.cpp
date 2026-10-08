// roc 2007-08 005e4000  unit: RBX::ArrowTool  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e4000
//
// 005e4000  51                   push ecx
// 005e4001  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005e4005  50                   push eax
// 005e4006  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005e400a  8d542404             lea edx, [esp + 4]
// 005e400e  52                   push edx
// 005e400f  50                   push eax
// 005e4010  c744240c58d07b00     mov dword ptr [esp + 0xc], 0x7bd058
// 005e4018  e8a3fdffff           call 0x5e3dc0
// 005e401d  59                   pop ecx
// 005e401e  c20800               ret 8
// library rbxgs/v8datamodel\MouseCommand.cpp (function ?getUnlockedPart@MouseCommand@RBX@@QAEPAVPartInstance@2@ABVUIEvent@2@AAVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/MouseCommand.cpp
