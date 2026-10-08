// roc 2007-03 004a9b60  unit: seg_004a0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a9b60
//
// 004a9b60  8bc1                 mov eax, ecx
// 004a9b62  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a9b66  8b11                 mov edx, dword ptr [ecx]
// 004a9b68  8910                 mov dword ptr [eax], edx
// 004a9b6a  668b5104             mov dx, word ptr [ecx + 4]
// 004a9b6e  66895004             mov word ptr [eax + 4], dx
// 004a9b72  668b4908             mov cx, word ptr [ecx + 8]
// 004a9b76  66894808             mov word ptr [eax + 8], cx
// 004a9b7a  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??4NetworkID@@QAEAAU0@ABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp
