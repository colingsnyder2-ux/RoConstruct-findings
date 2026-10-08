// roc 2007-03 0043bf60  unit: seg_00430000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0043bf60
//
// 0043bf60  d901                 fld dword ptr [ecx]
// 0043bf62  8b542404             mov edx, dword ptr [esp + 4]
// 0043bf66  d902                 fld dword ptr [edx]
// 0043bf68  dae9                 fucompp 
// 0043bf6a  dfe0                 fnstsw ax
// 0043bf6c  f6c444               test ah, 0x44
// 0043bf6f  7a26                 jp 0x43bf97
// 0043bf71  d94104               fld dword ptr [ecx + 4]
// 0043bf74  d94204               fld dword ptr [edx + 4]
// 0043bf77  dae9                 fucompp 
// 0043bf79  dfe0                 fnstsw ax
// 0043bf7b  f6c444               test ah, 0x44
// 0043bf7e  7a17                 jp 0x43bf97
// 0043bf80  d94108               fld dword ptr [ecx + 8]
// 0043bf83  d94208               fld dword ptr [edx + 8]
// 0043bf86  dae9                 fucompp 
// 0043bf88  dfe0                 fnstsw ax
// 0043bf8a  f6c444               test ah, 0x44
// 0043bf8d  7a08                 jp 0x43bf97
// 0043bf8f  b801000000           mov eax, 1
// 0043bf94  c20400               ret 4
// 0043bf97  33c0                 xor eax, eax
// 0043bf99  c20400               ret 4
// library rbxgs/tool\Dragger.cpp (function ??8Vector3@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/Dragger.cpp
