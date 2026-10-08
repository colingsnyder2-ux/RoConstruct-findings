// roc 2007-08 0049fd30  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049fd30
//
// 0049fd30  56                   push esi
// 0049fd31  8bf1                 mov esi, ecx
// 0049fd33  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049fd37  85c9                 test ecx, ecx
// 0049fd39  7f06                 jg 0x49fd41
// 0049fd3b  32c0                 xor al, al
// 0049fd3d  5e                   pop esi
// 0049fd3e  c20800               ret 8
// 0049fd41  8b4608               mov eax, dword ptr [esi + 8]
// 0049fd44  85c0                 test eax, eax
// 0049fd46  740e                 je 0x49fd56
// 0049fd48  8d50ff               lea edx, [eax - 1]
// 0049fd4b  83e207               and edx, 7
// 0049fd4e  2bc2                 sub eax, edx
// 0049fd50  83c007               add eax, 7
// 0049fd53  894608               mov dword ptr [esi + 8], eax
// 0049fd56  8b4608               mov eax, dword ptr [esi + 8]
// 0049fd59  57                   push edi
// 0049fd5a  8d3ccd00000000       lea edi, [ecx*8]
// 0049fd61  8d1407               lea edx, [edi + eax]
// 0049fd64  3b16                 cmp edx, dword ptr [esi]
// 0049fd66  7e07                 jle 0x49fd6f
// 0049fd68  5f                   pop edi
// 0049fd69  32c0                 xor al, al
// 0049fd6b  5e                   pop esi
// 0049fd6c  c20800               ret 8
// 0049fd6f  c1f803               sar eax, 3
// 0049fd72  03460c               add eax, dword ptr [esi + 0xc]
// 0049fd75  51                   push ecx
// 0049fd76  50                   push eax
// 0049fd77  8b442414             mov eax, dword ptr [esp + 0x14]
// 0049fd7b  50                   push eax
// 0049fd7c  e8cb0f1900           call 0x630d4c
// 0049fd81  017e08               add dword ptr [esi + 8], edi
// 0049fd84  83c40c               add esp, 0xc
// 0049fd87  5f                   pop edi
// 0049fd88  b001                 mov al, 1
// 0049fd8a  5e                   pop esi
// 0049fd8b  c20800               ret 8
// library rbxgs-raknet/BitStream.cpp (function ?ReadAlignedBytes@BitStream@RakNet@@QAE_NPAEH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
