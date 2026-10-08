// roc 2008-06 006769e0  unit: RBX::AdornG3D  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006769e0
//
// 006769e0  6aff                 push -1
// 006769e2  68e8a47c00           push 0x7ca4e8
// 006769e7  64a100000000         mov eax, dword ptr fs:[0]
// 006769ed  50                   push eax
// 006769ee  64892500000000       mov dword ptr fs:[0], esp
// 006769f5  51                   push ecx
// 006769f6  56                   push esi
// 006769f7  8d442404             lea eax, [esp + 4]
// 006769fb  50                   push eax
// 006769fc  8bf1                 mov esi, ecx
// 006769fe  e80d190000           call 0x678310
// 00676a03  83c404               add esp, 4
// 00676a06  dd442424             fld qword ptr [esp + 0x24]
// 00676a0a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00676a0e  8b542438             mov edx, dword ptr [esp + 0x38]
// 00676a12  8b442434             mov eax, dword ptr [esp + 0x34]
// 00676a16  51                   push ecx
// 00676a17  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00676a1b  52                   push edx
// 00676a1c  8b542434             mov edx, dword ptr [esp + 0x34]
// 00676a20  50                   push eax
// 00676a21  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00676a25  51                   push ecx
// 00676a26  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00676a2a  52                   push edx
// 00676a2b  8b5604               mov edx, dword ptr [esi + 4]
// 00676a2e  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00676a32  83ec08               sub esp, 8
// 00676a35  dd1c24               fstp qword ptr [esp]
// 00676a38  50                   push eax
// 00676a39  51                   push ecx
// 00676a3a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00676a3e  52                   push edx
// 00676a3f  56                   push esi
// 00676a40  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00676a48  e873051400           call 0x7b6fc0
// 00676a4d  8b442404             mov eax, dword ptr [esp + 4]
// 00676a51  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00676a59  85c0                 test eax, eax
// 00676a5b  7427                 je 0x676a84
// 00676a5d  83c004               add eax, 4
// 00676a60  50                   push eax
// 00676a61  ff15ac218000         call dword ptr [0x8021ac]
// 00676a67  85c0                 test eax, eax
// 00676a69  7519                 jne 0x676a84
// 00676a6b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00676a6f  e81c43deff           call 0x45ad90
// 00676a74  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00676a78  85c9                 test ecx, ecx
// 00676a7a  7408                 je 0x676a84
// 00676a7c  8b01                 mov eax, dword ptr [ecx]
// 00676a7e  8b10                 mov edx, dword ptr [eax]
// 00676a80  6a01                 push 1
// 00676a82  ffd2                 call edx
// 00676a84  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00676a88  8bc6                 mov eax, esi
// 00676a8a  5e                   pop esi
// 00676a8b  64890d00000000       mov dword ptr fs:[0], ecx
// 00676a92  83c410               add esp, 0x10
// 00676a95  c22800               ret 0x28
// library rbxgs-appdraw/AdornG3D.cpp (function ?drawFont2D@AdornG3D@RBX@@UBE?AVVector2@G3D@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV34@NABVColor4@4@2W4XAlign@Adorn@2@W4YAlign@92@W4Spacing@92@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
