// roc 2007-03 00619f10  unit: seg_00610000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00619f10
//
// 00619f10  51                   push ecx
// 00619f11  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00619f15  56                   push esi
// 00619f16  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00619f1a  50                   push eax
// 00619f1b  56                   push esi
// 00619f1c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00619f24  e887fdffff           call 0x619cb0
// 00619f29  83c408               add esp, 8
// 00619f2c  8bc6                 mov eax, esi
// 00619f2e  5e                   pop esi
// 00619f2f  59                   pop ecx
// 00619f30  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?createChild@Instance@RBX@@UAE?AV?$shared_ptr@VInstance@RBX@@@boost@@ABVName@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
