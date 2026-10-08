// roc 2012-06 00522da0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00522da0
//
// 00522da0  51                   push ecx
// 00522da1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00522da5  56                   push esi
// 00522da6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00522daa  50                   push eax
// 00522dab  56                   push esi
// 00522dac  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00522db4  e857f1ffff           call 0x521f10
// 00522db9  83c408               add esp, 8
// 00522dbc  8bc6                 mov eax, esi
// 00522dbe  5e                   pop esi
// 00522dbf  59                   pop ecx
// 00522dc0  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?createChild@Instance@RBX@@UAE?AV?$shared_ptr@VInstance@RBX@@@boost@@ABVName@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
