// roc 2009-06 004d9a70  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d9a70
//
// 004d9a70  56                   push esi
// 004d9a71  8b742410             mov esi, dword ptr [esp + 0x10]
// 004d9a75  33c0                 xor eax, eax
// 004d9a77  85f6                 test esi, esi
// 004d9a79  7619                 jbe 0x4d9a94
// 004d9a7b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d9a7f  57                   push edi
// 004d9a80  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d9a84  8d4c31ff             lea ecx, [ecx + esi - 1]
// 004d9a88  8a11                 mov dl, byte ptr [ecx]
// 004d9a8a  881438               mov byte ptr [eax + edi], dl
// 004d9a8d  40                   inc eax
// 004d9a8e  49                   dec ecx
// 004d9a8f  3bc6                 cmp eax, esi
// 004d9a91  72f5                 jb 0x4d9a88
// 004d9a93  5f                   pop edi
// 004d9a94  5e                   pop esi
// 004d9a95  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ?ReverseBytes@BitStream@RakNet@@SAXPAE0I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
