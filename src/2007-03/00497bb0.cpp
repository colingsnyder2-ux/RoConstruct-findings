// roc 2007-03 00497bb0  unit: seg_00490000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00497bb0
//
// 00497bb0  56                   push esi
// 00497bb1  8bf1                 mov esi, ecx
// 00497bb3  8b06                 mov eax, dword ptr [esi]
// 00497bb5  83c007               add eax, 7
// 00497bb8  c1f803               sar eax, 3
// 00497bbb  50                   push eax
// 00497bbc  e847651800           call 0x61e108
// 00497bc1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00497bc5  8901                 mov dword ptr [ecx], eax
// 00497bc7  8b16                 mov edx, dword ptr [esi]
// 00497bc9  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00497bcc  83c207               add edx, 7
// 00497bcf  c1fa03               sar edx, 3
// 00497bd2  52                   push edx
// 00497bd3  51                   push ecx
// 00497bd4  50                   push eax
// 00497bd5  e808761800           call 0x61f1e2
// 00497bda  8b06                 mov eax, dword ptr [esi]
// 00497bdc  83c410               add esp, 0x10
// 00497bdf  5e                   pop esi
// 00497be0  c20400               ret 4
// library rbxgs-raknet/BitStream.cpp (function ?CopyData@BitStream@RakNet@@QBEHPAPAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
