// roc 2007-03 00497840  unit: seg_00490000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00497840
//
// 00497840  56                   push esi
// 00497841  8bf1                 mov esi, ecx
// 00497843  8a4c2410             mov cl, byte ptr [esp + 0x10]
// 00497847  57                   push edi
// 00497848  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0049784c  33d2                 xor edx, edx
// 0049784e  3aca                 cmp cl, dl
// 00497850  8d04fd00000000       lea eax, [edi*8]
// 00497857  8906                 mov dword ptr [esi], eax
// 00497859  895608               mov dword ptr [esi + 8], edx
// 0049785c  884e10               mov byte ptr [esi + 0x10], cl
// 0049785f  894604               mov dword ptr [esi + 4], eax
// 00497862  7446                 je 0x4978aa
// 00497864  3bfa                 cmp edi, edx
// 00497866  7638                 jbe 0x4978a0
// 00497868  81ff00010000         cmp edi, 0x100
// 0049786e  730c                 jae 0x49787c
// 00497870  8d4611               lea eax, [esi + 0x11]
// 00497873  c7460400080000       mov dword ptr [esi + 4], 0x800
// 0049787a  eb09                 jmp 0x497885
// 0049787c  57                   push edi
// 0049787d  e87c761800           call 0x61eefe
// 00497882  83c404               add esp, 4
// 00497885  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00497889  57                   push edi
// 0049788a  51                   push ecx
// 0049788b  8bd0                 mov edx, eax
// 0049788d  52                   push edx
// 0049788e  89460c               mov dword ptr [esi + 0xc], eax
// 00497891  e84c791800           call 0x61f1e2
// 00497896  83c40c               add esp, 0xc
// 00497899  5f                   pop edi
// 0049789a  8bc6                 mov eax, esi
// 0049789c  5e                   pop esi
// 0049789d  c20c00               ret 0xc
// 004978a0  5f                   pop edi
// 004978a1  89560c               mov dword ptr [esi + 0xc], edx
// 004978a4  8bc6                 mov eax, esi
// 004978a6  5e                   pop esi
// 004978a7  c20c00               ret 0xc
// 004978aa  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004978ae  89460c               mov dword ptr [esi + 0xc], eax
// 004978b1  5f                   pop edi
// 004978b2  8bc6                 mov eax, esi
// 004978b4  5e                   pop esi
// 004978b5  c20c00               ret 0xc
// library rbxgs-raknet/BitStream.cpp (function ??0BitStream@RakNet@@QAE@PAEI_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
