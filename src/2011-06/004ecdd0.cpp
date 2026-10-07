// roc 2011-06 004ecdd0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ecdd0
//
// 004ecdd0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ecdd4  57                   push edi
// 004ecdd5  8bf9                 mov edi, ecx
// 004ecdd7  33c0                 xor eax, eax
// 004ecdd9  d1ef                 shr edi, 1
// 004ecddb  741c                 je 0x4ecdf9
// 004ecddd  53                   push ebx
// 004ecdde  56                   push esi
// 004ecddf  8b742410             mov esi, dword ptr [esp + 0x10]
// 004ecde3  8d4c0eff             lea ecx, [esi + ecx - 1]
// 004ecde7  8a19                 mov bl, byte ptr [ecx]
// 004ecde9  8a1430               mov dl, byte ptr [eax + esi]
// 004ecdec  881c30               mov byte ptr [eax + esi], bl
// 004ecdef  8811                 mov byte ptr [ecx], dl
// 004ecdf1  40                   inc eax
// 004ecdf2  49                   dec ecx
// 004ecdf3  3bc7                 cmp eax, edi
// 004ecdf5  72f0                 jb 0x4ecde7
// 004ecdf7  5e                   pop esi
// 004ecdf8  5b                   pop ebx
// 004ecdf9  5f                   pop edi
// 004ecdfa  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ?ReverseBytesInPlace@BitStream@RakNet@@SAXPAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
