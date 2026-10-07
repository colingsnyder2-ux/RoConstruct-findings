// roc 2010-06 004dd280  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004dd280
//
// 004dd280  56                   push esi
// 004dd281  8b742410             mov esi, dword ptr [esp + 0x10]
// 004dd285  33c0                 xor eax, eax
// 004dd287  85f6                 test esi, esi
// 004dd289  7619                 jbe 0x4dd2a4
// 004dd28b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004dd28f  57                   push edi
// 004dd290  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004dd294  8d4c31ff             lea ecx, [ecx + esi - 1]
// 004dd298  8a11                 mov dl, byte ptr [ecx]
// 004dd29a  881438               mov byte ptr [eax + edi], dl
// 004dd29d  40                   inc eax
// 004dd29e  49                   dec ecx
// 004dd29f  3bc6                 cmp eax, esi
// 004dd2a1  72f5                 jb 0x4dd298
// 004dd2a3  5f                   pop edi
// 004dd2a4  5e                   pop esi
// 004dd2a5  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ?ReverseBytes@BitStream@RakNet@@SAXPAE0I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
