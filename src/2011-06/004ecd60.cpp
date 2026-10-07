// roc 2011-06 004ecd60  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ecd60
//
// 004ecd60  b801000000           mov eax, 1
// 004ecd65  8405f481cb00         test byte ptr [0xcb81f4], al
// 004ecd6b  751f                 jne 0x4ecd8c
// 004ecd6d  0905f481cb00         or dword ptr [0xcb81f4], eax
// 004ecd73  6839300000           push 0x3039
// 004ecd78  ff15681da400         call dword ptr [0xa41d68]
// 004ecd7e  3d39300000           cmp eax, 0x3039
// 004ecd83  0f94c0               sete al
// 004ecd86  a2f181cb00           mov byte ptr [0xcb81f1], al
// 004ecd8b  c3                   ret 
// 004ecd8c  a0f181cb00           mov al, byte ptr [0xcb81f1]
// 004ecd91  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ?IsNetworkOrderInternal@BitStream@RakNet@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
