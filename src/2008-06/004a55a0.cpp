// roc 2008-06 004a55a0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a55a0
//
// 004a55a0  56                   push esi
// 004a55a1  8bf1                 mov esi, ecx
// 004a55a3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a55a7  85c9                 test ecx, ecx
// 004a55a9  7f06                 jg 0x4a55b1
// 004a55ab  32c0                 xor al, al
// 004a55ad  5e                   pop esi
// 004a55ae  c20800               ret 8
// 004a55b1  8b4608               mov eax, dword ptr [esi + 8]
// 004a55b4  85c0                 test eax, eax
// 004a55b6  740e                 je 0x4a55c6
// 004a55b8  8d50ff               lea edx, [eax - 1]
// 004a55bb  83e207               and edx, 7
// 004a55be  2bc2                 sub eax, edx
// 004a55c0  83c007               add eax, 7
// 004a55c3  894608               mov dword ptr [esi + 8], eax
// 004a55c6  8b4608               mov eax, dword ptr [esi + 8]
// 004a55c9  57                   push edi
// 004a55ca  8d3ccd00000000       lea edi, [ecx*8]
// 004a55d1  8d1407               lea edx, [edi + eax]
// 004a55d4  3b16                 cmp edx, dword ptr [esi]
// 004a55d6  7e07                 jle 0x4a55df
// 004a55d8  5f                   pop edi
// 004a55d9  32c0                 xor al, al
// 004a55db  5e                   pop esi
// 004a55dc  c20800               ret 8
// 004a55df  c1f803               sar eax, 3
// 004a55e2  03460c               add eax, dword ptr [esi + 0xc]
// 004a55e5  51                   push ecx
// 004a55e6  50                   push eax
// 004a55e7  8b442414             mov eax, dword ptr [esp + 0x14]
// 004a55eb  50                   push eax
// 004a55ec  e8efc11f00           call 0x6a17e0
// 004a55f1  017e08               add dword ptr [esi + 8], edi
// 004a55f4  83c40c               add esp, 0xc
// 004a55f7  5f                   pop edi
// 004a55f8  b001                 mov al, 1
// 004a55fa  5e                   pop esi
// 004a55fb  c20800               ret 8
// library rbxgs-raknet/BitStream.cpp (function ?ReadAlignedBytes@BitStream@RakNet@@QAE_NPAEH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
