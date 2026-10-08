// roc 2007-03 0058dbc0  unit: seg_00580000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058dbc0
//
// 0058dbc0  8b442404             mov eax, dword ptr [esp + 4]
// 0058dbc4  56                   push esi
// 0058dbc5  50                   push eax
// 0058dbc6  8bf1                 mov esi, ecx
// 0058dbc8  e8b3faffff           call 0x58d680
// 0058dbcd  d9ee                 fldz 
// 0058dbcf  d95e20               fstp dword ptr [esi + 0x20]
// 0058dbd2  33c0                 xor eax, eax
// 0058dbd4  d9e8                 fld1 
// 0058dbd6  c70640127b00         mov dword ptr [esi], 0x7b1240
// 0058dbdc  c7460c34127b00       mov dword ptr [esi + 0xc], 0x7b1234
// 0058dbe3  894624               mov dword ptr [esi + 0x24], eax
// 0058dbe6  894628               mov dword ptr [esi + 0x28], eax
// 0058dbe9  89462c               mov dword ptr [esi + 0x2c], eax
// 0058dbec  894630               mov dword ptr [esi + 0x30], eax
// 0058dbef  894634               mov dword ptr [esi + 0x34], eax
// 0058dbf2  894638               mov dword ptr [esi + 0x38], eax
// 0058dbf5  89463c               mov dword ptr [esi + 0x3c], eax
// 0058dbf8  894640               mov dword ptr [esi + 0x40], eax
// 0058dbfb  894644               mov dword ptr [esi + 0x44], eax
// 0058dbfe  894648               mov dword ptr [esi + 0x48], eax
// 0058dc01  89464c               mov dword ptr [esi + 0x4c], eax
// 0058dc04  89465c               mov dword ptr [esi + 0x5c], eax
// 0058dc07  894650               mov dword ptr [esi + 0x50], eax
// 0058dc0a  894660               mov dword ptr [esi + 0x60], eax
// 0058dc0d  894658               mov dword ptr [esi + 0x58], eax
// 0058dc10  d95e54               fstp dword ptr [esi + 0x54]
// 0058dc13  8bc6                 mov eax, esi
// 0058dc15  5e                   pop esi
// 0058dc16  c20400               ret 4
// library rbxgs/v8datamodel\UserController.cpp (function ??0AIController@RBX@@IAE@PBVPVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
