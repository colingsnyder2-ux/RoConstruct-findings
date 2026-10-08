// roc 2012-06 004f82d0  unit: Ogre::UTVertexBasic::?$SpecializedMeshGen  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004f82d0
//
// 004f82d0  51                   push ecx
// 004f82d1  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f82d5  56                   push esi
// 004f82d6  8b742410             mov esi, dword ptr [esp + 0x10]
// 004f82da  57                   push edi
// 004f82db  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004f82df  c644240800           mov byte ptr [esp + 8], 0
// 004f82e4  8b442408             mov eax, dword ptr [esp + 8]
// 004f82e8  50                   push eax
// 004f82e9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004f82ed  52                   push edx
// 004f82ee  51                   push ecx
// 004f82ef  50                   push eax
// 004f82f0  56                   push esi
// 004f82f1  57                   push edi
// 004f82f2  e8e9feffff           call 0x4f81e0
// 004f82f7  8d0cf6               lea ecx, [esi + esi*8]
// 004f82fa  83c418               add esp, 0x18
// 004f82fd  8d048f               lea eax, [edi + ecx*4]
// 004f8300  5f                   pop edi
// 004f8301  5e                   pop esi
// 004f8302  59                   pop ecx
// 004f8303  c20c00               ret 0xc
// library ogre-1.7.0/OgreSubMesh.cpp (function ?_Ufill@?$vector@UCluster@Ogre@@V?$allocator@UCluster@Ogre@@@std@@@std@@IAEPAUCluster@Ogre@@PAU34@IABU34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreSubMesh.cpp
