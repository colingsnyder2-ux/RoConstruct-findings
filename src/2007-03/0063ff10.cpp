// roc 2007-03 0063ff10  unit: seg_00630000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0063ff10
//
// 0063ff10  8b442408             mov eax, dword ptr [esp + 8]
// 0063ff14  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0063ff18  50                   push eax
// 0063ff19  e8e2af0000           call 0x64af00
// 0063ff1e  c20800               ret 8
// library rbxgs/v8xml\XmlSerializer.cpp (function ??R?$less@VInstanceHandle@RBX@@@std@@QBE_NABVInstanceHandle@RBX@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
