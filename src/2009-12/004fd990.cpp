// roc 2009-12 004fd990  unit: RBX::Network::Player  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004fd990
//
// 004fd990  51                   push ecx
// 004fd991  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004fd995  56                   push esi
// 004fd996  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004fd99a  50                   push eax
// 004fd99b  56                   push esi
// 004fd99c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004fd9a4  e807f0ffff           call 0x4fc9b0
// 004fd9a9  83c408               add esp, 8
// 004fd9ac  8bc6                 mov eax, esi
// 004fd9ae  5e                   pop esi
// 004fd9af  59                   pop ecx
// 004fd9b0  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?createChild@Instance@RBX@@UAE?AV?$shared_ptr@VInstance@RBX@@@boost@@ABVName@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
