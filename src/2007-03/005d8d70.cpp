// roc 2007-03 005d8d70  unit: seg_005d0000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d8d70
//
// 005d8d70  51                   push ecx
// 005d8d71  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005d8d75  50                   push eax
// 005d8d76  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005d8d7a  8d542404             lea edx, [esp + 4]
// 005d8d7e  52                   push edx
// 005d8d7f  50                   push eax
// 005d8d80  c744240c80c57b00     mov dword ptr [esp + 0xc], 0x7bc580
// 005d8d88  e8c3fdffff           call 0x5d8b50
// 005d8d8d  59                   pop ecx
// 005d8d8e  c20800               ret 8
// library rbxgs/v8datamodel\MouseCommand.cpp (function ?getUnlockedPart@MouseCommand@RBX@@QAEPAVPartInstance@2@ABVUIEvent@2@AAVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/MouseCommand.cpp
