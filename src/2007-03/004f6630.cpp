// roc 2007-03 004f6630  unit: seg_004f0000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f6630
//
// 004f6630  8b442404             mov eax, dword ptr [esp + 4]
// 004f6634  2b4144               sub eax, dword ptr [ecx + 0x44]
// 004f6637  7917                 jns 0x4f6650
// 004f6639  6840bf8400           push 0x84bf40
// 004f663e  8d442408             lea eax, [esp + 8]
// 004f6642  50                   push eax
// 004f6643  c744240cacf87900     mov dword ptr [esp + 0xc], 0x79f8ac
// 004f664b  e8de891200           call 0x61f02e
// 004f6650  56                   push esi
// 004f6651  8b7134               mov esi, dword ptr [ecx + 0x34]
// 004f6654  3bc6                 cmp eax, esi
// 004f6656  7d03                 jge 0x4f665b
// 004f6658  89413c               mov dword ptr [ecx + 0x3c], eax
// 004f665b  7e1c                 jle 0x4f6679
// 004f665d  8b513c               mov edx, dword ptr [ecx + 0x3c]
// 004f6660  2bc6                 sub eax, esi
// 004f6662  03d0                 add edx, eax
// 004f6664  3bf2                 cmp esi, edx
// 004f6666  7c02                 jl 0x4f666a
// 004f6668  8bd6                 mov edx, esi
// 004f666a  3b5138               cmp edx, dword ptr [ecx + 0x38]
// 004f666d  895134               mov dword ptr [ecx + 0x34], edx
// 004f6670  7e07                 jle 0x4f6679
// 004f6672  56                   push esi
// 004f6673  50                   push eax
// 004f6674  e817720000           call 0x4fd890
// 004f6679  5e                   pop esi
// 004f667a  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\GImage_bmp.cpp (function ?setLength@BinaryOutput@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/GImage_bmp.cpp
