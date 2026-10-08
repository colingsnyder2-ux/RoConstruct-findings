// roc 2008-06 004a5430  unit: RBX::VHint::?$FactoryProduct::Creator  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a5430
//
// 004a5430  56                   push esi
// 004a5431  8bf1                 mov esi, ecx
// 004a5433  8b06                 mov eax, dword ptr [esi]
// 004a5435  83c007               add eax, 7
// 004a5438  c1f803               sar eax, 3
// 004a543b  50                   push eax
// 004a543c  e8dfb41f00           call 0x6a0920
// 004a5441  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a5445  8901                 mov dword ptr [ecx], eax
// 004a5447  8b16                 mov edx, dword ptr [esi]
// 004a5449  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a544c  83c207               add edx, 7
// 004a544f  c1fa03               sar edx, 3
// 004a5452  52                   push edx
// 004a5453  51                   push ecx
// 004a5454  50                   push eax
// 004a5455  e886c31f00           call 0x6a17e0
// 004a545a  8b06                 mov eax, dword ptr [esi]
// 004a545c  83c410               add esp, 0x10
// 004a545f  5e                   pop esi
// 004a5460  c20400               ret 4
// library rbxgs-raknet/BitStream.cpp (function ?CopyData@BitStream@RakNet@@QBEHPAPAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
