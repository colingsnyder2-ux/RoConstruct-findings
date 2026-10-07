// roc 2011-06 004ec980  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ec980
//
// 004ec980  56                   push esi
// 004ec981  8bf1                 mov esi, ecx
// 004ec983  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ec987  85c9                 test ecx, ecx
// 004ec989  7706                 ja 0x4ec991
// 004ec98b  32c0                 xor al, al
// 004ec98d  5e                   pop esi
// 004ec98e  c20800               ret 8
// 004ec991  8b4608               mov eax, dword ptr [esi + 8]
// 004ec994  8d50ff               lea edx, [eax - 1]
// 004ec997  83e207               and edx, 7
// 004ec99a  2bc2                 sub eax, edx
// 004ec99c  83c007               add eax, 7
// 004ec99f  57                   push edi
// 004ec9a0  8d3ccd00000000       lea edi, [ecx*8]
// 004ec9a7  8d1407               lea edx, [edi + eax]
// 004ec9aa  894608               mov dword ptr [esi + 8], eax
// 004ec9ad  3b16                 cmp edx, dword ptr [esi]
// 004ec9af  7607                 jbe 0x4ec9b8
// 004ec9b1  5f                   pop edi
// 004ec9b2  32c0                 xor al, al
// 004ec9b4  5e                   pop esi
// 004ec9b5  c20800               ret 8
// 004ec9b8  c1e803               shr eax, 3
// 004ec9bb  03460c               add eax, dword ptr [esi + 0xc]
// 004ec9be  51                   push ecx
// 004ec9bf  50                   push eax
// 004ec9c0  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ec9c4  50                   push eax
// 004ec9c5  e812ec3100           call 0x80b5dc
// 004ec9ca  017e08               add dword ptr [esi + 8], edi
// 004ec9cd  83c40c               add esp, 0xc
// 004ec9d0  5f                   pop edi
// 004ec9d1  b001                 mov al, 1
// 004ec9d3  5e                   pop esi
// 004ec9d4  c20800               ret 8
// library rbx2016-raknet/BitStream.cpp (function ?ReadAlignedBytes@BitStream@RakNet@@QAE_NPAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
