// roc 2007-03 00541cc0  unit: seg_00540000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00541cc0
//
// 00541cc0  51                   push ecx
// 00541cc1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00541cc5  56                   push esi
// 00541cc6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00541cca  50                   push eax
// 00541ccb  56                   push esi
// 00541ccc  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00541cd4  e8e7c0edff           call 0x41ddc0
// 00541cd9  83c408               add esp, 8
// 00541cdc  8bc6                 mov eax, esi
// 00541cde  5e                   pop esi
// 00541cdf  59                   pop ecx
// 00541ce0  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?createChild@Instance@RBX@@UAE?AV?$shared_ptr@VInstance@RBX@@@boost@@ABVName@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
