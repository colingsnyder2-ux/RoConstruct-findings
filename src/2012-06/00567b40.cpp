// roc 2012-06 00567b40  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00567b40
//
// 00567b40  56                   push esi
// 00567b41  8b742410             mov esi, dword ptr [esp + 0x10]
// 00567b45  33c0                 xor eax, eax
// 00567b47  85f6                 test esi, esi
// 00567b49  7619                 jbe 0x567b64
// 00567b4b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00567b4f  57                   push edi
// 00567b50  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00567b54  8d4c31ff             lea ecx, [ecx + esi - 1]
// 00567b58  8a11                 mov dl, byte ptr [ecx]
// 00567b5a  881438               mov byte ptr [eax + edi], dl
// 00567b5d  40                   inc eax
// 00567b5e  49                   dec ecx
// 00567b5f  3bc6                 cmp eax, esi
// 00567b61  72f5                 jb 0x567b58
// 00567b63  5f                   pop edi
// 00567b64  5e                   pop esi
// 00567b65  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ?ReverseBytes@BitStream@RakNet@@SAXPAE0I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
