// roc 2007-03 00497d50  unit: seg_00490000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00497d50
//
// 00497d50  56                   push esi
// 00497d51  8bf1                 mov esi, ecx
// 00497d53  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00497d57  85c9                 test ecx, ecx
// 00497d59  7f06                 jg 0x497d61
// 00497d5b  32c0                 xor al, al
// 00497d5d  5e                   pop esi
// 00497d5e  c20800               ret 8
// 00497d61  8b4608               mov eax, dword ptr [esi + 8]
// 00497d64  85c0                 test eax, eax
// 00497d66  740e                 je 0x497d76
// 00497d68  8d50ff               lea edx, [eax - 1]
// 00497d6b  83e207               and edx, 7
// 00497d6e  2bc2                 sub eax, edx
// 00497d70  83c007               add eax, 7
// 00497d73  894608               mov dword ptr [esi + 8], eax
// 00497d76  8b4608               mov eax, dword ptr [esi + 8]
// 00497d79  57                   push edi
// 00497d7a  8d3ccd00000000       lea edi, [ecx*8]
// 00497d81  8d1407               lea edx, [edi + eax]
// 00497d84  3b16                 cmp edx, dword ptr [esi]
// 00497d86  7e07                 jle 0x497d8f
// 00497d88  5f                   pop edi
// 00497d89  32c0                 xor al, al
// 00497d8b  5e                   pop esi
// 00497d8c  c20800               ret 8
// 00497d8f  c1f803               sar eax, 3
// 00497d92  03460c               add eax, dword ptr [esi + 0xc]
// 00497d95  51                   push ecx
// 00497d96  50                   push eax
// 00497d97  8b442414             mov eax, dword ptr [esp + 0x14]
// 00497d9b  50                   push eax
// 00497d9c  e841741800           call 0x61f1e2
// 00497da1  017e08               add dword ptr [esi + 8], edi
// 00497da4  83c40c               add esp, 0xc
// 00497da7  5f                   pop edi
// 00497da8  b001                 mov al, 1
// 00497daa  5e                   pop esi
// 00497dab  c20800               ret 8
// library rbxgs-raknet/BitStream.cpp (function ?ReadAlignedBytes@BitStream@RakNet@@QAE_NPAEH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
