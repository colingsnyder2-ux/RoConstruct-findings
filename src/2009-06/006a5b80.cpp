// roc 2009-06 006a5b80  unit: RBX::VMouse::?$EventDesc  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a5b80
//
// 006a5b80  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006a5b84  8b542408             mov edx, dword ptr [esp + 8]
// 006a5b88  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a5b8c  3bca                 cmp ecx, edx
// 006a5b8e  7414                 je 0x6a5ba4
// 006a5b90  56                   push esi
// 006a5b91  85c0                 test eax, eax
// 006a5b93  7404                 je 0x6a5b99
// 006a5b95  8b31                 mov esi, dword ptr [ecx]
// 006a5b97  8930                 mov dword ptr [eax], esi
// 006a5b99  83c104               add ecx, 4
// 006a5b9c  83c004               add eax, 4
// 006a5b9f  3bca                 cmp ecx, edx
// 006a5ba1  75ee                 jne 0x6a5b91
// 006a5ba3  5e                   pop esi
// 006a5ba4  c3                   ret 
// library ogre-1.7.0/OgreScriptTranslator.cpp (function ??$_Uninit_copy@PAW4PixelFormat@Ogre@@PAW412@V?$allocator@W4PixelFormat@Ogre@@@std@@@std@@YAPAW4PixelFormat@Ogre@@PAW412@00AAV?$allocator@W4PixelFormat@Ogre@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreScriptTranslator.cpp
