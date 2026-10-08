// roc 2012-06 004f8c10  unit: Ogre::UTVertexSurfaceTex::?$SpecializedMeshGen  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004f8c10
//
// 004f8c10  51                   push ecx
// 004f8c11  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f8c15  56                   push esi
// 004f8c16  8b742410             mov esi, dword ptr [esp + 0x10]
// 004f8c1a  57                   push edi
// 004f8c1b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004f8c1f  c644240800           mov byte ptr [esp + 8], 0
// 004f8c24  8b442408             mov eax, dword ptr [esp + 8]
// 004f8c28  50                   push eax
// 004f8c29  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004f8c2d  52                   push edx
// 004f8c2e  51                   push ecx
// 004f8c2f  50                   push eax
// 004f8c30  56                   push esi
// 004f8c31  57                   push edi
// 004f8c32  e8a9feffff           call 0x4f8ae0
// 004f8c37  8bc6                 mov eax, esi
// 004f8c39  6bc02c               imul eax, eax, 0x2c
// 004f8c3c  83c418               add esp, 0x18
// 004f8c3f  03c7                 add eax, edi
// 004f8c41  5f                   pop edi
// 004f8c42  5e                   pop esi
// 004f8c43  59                   pop ecx
// 004f8c44  c20c00               ret 0xc
// library ogre-1.7.0/OgreSkeleton.cpp (function ?_Ufill@?$vector@UDeltaTransform@Ogre@@V?$allocator@UDeltaTransform@Ogre@@@std@@@std@@IAEPAUDeltaTransform@Ogre@@PAU34@IABU34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreSkeleton.cpp
