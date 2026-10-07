// roc 2011-06 004ecda0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ecda0
//
// 004ecda0  56                   push esi
// 004ecda1  8b742410             mov esi, dword ptr [esp + 0x10]
// 004ecda5  33c0                 xor eax, eax
// 004ecda7  85f6                 test esi, esi
// 004ecda9  7619                 jbe 0x4ecdc4
// 004ecdab  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ecdaf  57                   push edi
// 004ecdb0  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004ecdb4  8d4c31ff             lea ecx, [ecx + esi - 1]
// 004ecdb8  8a11                 mov dl, byte ptr [ecx]
// 004ecdba  881438               mov byte ptr [eax + edi], dl
// 004ecdbd  40                   inc eax
// 004ecdbe  49                   dec ecx
// 004ecdbf  3bc6                 cmp eax, esi
// 004ecdc1  72f5                 jb 0x4ecdb8
// 004ecdc3  5f                   pop edi
// 004ecdc4  5e                   pop esi
// 004ecdc5  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ?ReverseBytes@BitStream@RakNet@@SAXPAE0I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
