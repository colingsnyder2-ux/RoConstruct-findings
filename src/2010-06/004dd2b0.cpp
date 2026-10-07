// roc 2010-06 004dd2b0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004dd2b0
//
// 004dd2b0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004dd2b4  57                   push edi
// 004dd2b5  8bf9                 mov edi, ecx
// 004dd2b7  33c0                 xor eax, eax
// 004dd2b9  d1ef                 shr edi, 1
// 004dd2bb  741c                 je 0x4dd2d9
// 004dd2bd  53                   push ebx
// 004dd2be  56                   push esi
// 004dd2bf  8b742410             mov esi, dword ptr [esp + 0x10]
// 004dd2c3  8d4c0eff             lea ecx, [esi + ecx - 1]
// 004dd2c7  8a19                 mov bl, byte ptr [ecx]
// 004dd2c9  8a1430               mov dl, byte ptr [eax + esi]
// 004dd2cc  881c30               mov byte ptr [eax + esi], bl
// 004dd2cf  8811                 mov byte ptr [ecx], dl
// 004dd2d1  40                   inc eax
// 004dd2d2  49                   dec ecx
// 004dd2d3  3bc7                 cmp eax, edi
// 004dd2d5  72f0                 jb 0x4dd2c7
// 004dd2d7  5e                   pop esi
// 004dd2d8  5b                   pop ebx
// 004dd2d9  5f                   pop edi
// 004dd2da  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ?ReverseBytesInPlace@BitStream@RakNet@@SAXPAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
