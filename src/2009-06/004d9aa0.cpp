// roc 2009-06 004d9aa0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d9aa0
//
// 004d9aa0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d9aa4  57                   push edi
// 004d9aa5  8bf9                 mov edi, ecx
// 004d9aa7  33c0                 xor eax, eax
// 004d9aa9  d1ef                 shr edi, 1
// 004d9aab  741c                 je 0x4d9ac9
// 004d9aad  53                   push ebx
// 004d9aae  56                   push esi
// 004d9aaf  8b742410             mov esi, dword ptr [esp + 0x10]
// 004d9ab3  8d4c0eff             lea ecx, [esi + ecx - 1]
// 004d9ab7  8a19                 mov bl, byte ptr [ecx]
// 004d9ab9  8a1430               mov dl, byte ptr [eax + esi]
// 004d9abc  881c30               mov byte ptr [eax + esi], bl
// 004d9abf  8811                 mov byte ptr [ecx], dl
// 004d9ac1  40                   inc eax
// 004d9ac2  49                   dec ecx
// 004d9ac3  3bc7                 cmp eax, edi
// 004d9ac5  72f0                 jb 0x4d9ab7
// 004d9ac7  5e                   pop esi
// 004d9ac8  5b                   pop ebx
// 004d9ac9  5f                   pop edi
// 004d9aca  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ?ReverseBytesInPlace@BitStream@RakNet@@SAXPAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
