// roc 2009-06 0048c2c0  unit: Ogre::VRbxTextureCompositorSceneManager::?$sp_counted_impl_p  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0048c2c0
//
// 0048c2c0  56                   push esi
// 0048c2c1  33c0                 xor eax, eax
// 0048c2c3  57                   push edi
// 0048c2c4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0048c2c8  8bf1                 mov esi, ecx
// 0048c2ca  89460c               mov dword ptr [esi + 0xc], eax
// 0048c2cd  894610               mov dword ptr [esi + 0x10], eax
// 0048c2d0  894614               mov dword ptr [esi + 0x14], eax
// 0048c2d3  3bf8                 cmp edi, eax
// 0048c2d5  7507                 jne 0x48c2de
// 0048c2d7  5f                   pop edi
// 0048c2d8  32c0                 xor al, al
// 0048c2da  5e                   pop esi
// 0048c2db  c20400               ret 4
// 0048c2de  81ff33333303         cmp edi, 0x3333333
// 0048c2e4  7605                 jbe 0x48c2eb
// 0048c2e6  e875400000           call 0x490360
// 0048c2eb  50                   push eax
// 0048c2ec  57                   push edi
// 0048c2ed  e8aef5ffff           call 0x48b8a0
// 0048c2f2  8d0cbf               lea ecx, [edi + edi*4]
// 0048c2f5  83c408               add esp, 8
// 0048c2f8  c1e104               shl ecx, 4
// 0048c2fb  03c8                 add ecx, eax
// 0048c2fd  89460c               mov dword ptr [esi + 0xc], eax
// 0048c300  894610               mov dword ptr [esi + 0x10], eax
// 0048c303  5f                   pop edi
// 0048c304  894e14               mov dword ptr [esi + 0x14], ecx
// 0048c307  b001                 mov al, 1
// 0048c309  5e                   pop esi
// 0048c30a  c20400               ret 4
// library boost-1.44.0/libs\regex\src\cregex.cpp (function ?_Buy@?$vector@U?$recursion_info@V?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@@re_detail@boost@@V?$allocator@U?$recursion_info@V?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@@re_detail@boost@@@std@@@std@@IAE_NI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.44.0 libs/regex/src/cregex.cpp
