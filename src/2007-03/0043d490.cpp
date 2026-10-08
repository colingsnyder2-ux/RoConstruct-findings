// roc 2007-03 0043d490  unit: seg_00430000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0043d490
//
// 0043d490  8b442408             mov eax, dword ptr [esp + 8]
// 0043d494  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043d498  50                   push eax
// 0043d499  51                   push ecx
// 0043d49a  e8c1721000           call 0x544760
// 0043d49f  83c408               add esp, 8
// 0043d4a2  c20800               ret 8
// library rbxgs/reflection\type.cpp (function ?construct@?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@QAEXPAUItem@SignatureDescriptor@Reflection@RBX@@ABU3456@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
