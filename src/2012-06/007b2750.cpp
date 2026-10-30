// roc 2012-06 007b2750  unit: RBX::VCacheableContentProvider::?$NonFactoryProduct  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b2750
//
// 007b2750  51                   push ecx
// 007b2751  8b542410             mov edx, dword ptr [esp + 0x10]
// 007b2755  56                   push esi
// 007b2756  8b742410             mov esi, dword ptr [esp + 0x10]
// 007b275a  57                   push edi
// 007b275b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007b275f  c644240800           mov byte ptr [esp + 8], 0
// 007b2764  8b442408             mov eax, dword ptr [esp + 8]
// 007b2768  50                   push eax
// 007b2769  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007b276d  52                   push edx
// 007b276e  51                   push ecx
// 007b276f  50                   push eax
// 007b2770  56                   push esi
// 007b2771  57                   push edi
// 007b2772  e8d9feffff           call 0x7b2650
// 007b2777  8d0cf6               lea ecx, [esi + esi*8]
// 007b277a  83c418               add esp, 0x18
// 007b277d  8d048f               lea eax, [edi + ecx*4]
// 007b2780  5f                   pop edi
// 007b2781  5e                   pop esi
// 007b2782  59                   pop ecx
// 007b2783  c20c00               ret 0xc
// library ogre-1.7.0/OgreSubMesh.cpp (function ?_Ufill@?$vector@UCluster@Ogre@@V?$allocator@UCluster@Ogre@@@std@@@std@@IAEPAUCluster@Ogre@@PAU34@IABU34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreSubMesh.cpp
