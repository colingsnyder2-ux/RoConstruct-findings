// from server: 100% by auto
// roc 2012-06 0050d940  unit: Ogre::RbxSpatialHashedSceneNode::?3??_findVisibleObjects::NodeVisiter  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0050d940
//
// 0050d940  51                   push ecx
// 0050d941  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050d945  56                   push esi
// 0050d946  8b742410             mov esi, dword ptr [esp + 0x10]
// 0050d94a  57                   push edi
// 0050d94b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0050d94f  c644240800           mov byte ptr [esp + 8], 0
// 0050d954  8b442408             mov eax, dword ptr [esp + 8]
// 0050d958  50                   push eax
// 0050d959  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0050d95d  52                   push edx
// 0050d95e  51                   push ecx
// 0050d95f  50                   push eax
// 0050d960  56                   push esi
// 0050d961  57                   push edi
// 0050d962  e899fcffff           call 0x50d600
// 0050d967  8bc6                 mov eax, esi
// 0050d969  83c418               add esp, 0x18
// 0050d96c  c1e004               shl eax, 4
// 0050d96f  03c7                 add eax, edi
// 0050d971  5f                   pop edi
// 0050d972  5e                   pop esi
// 0050d973  59                   pop ecx
// 0050d974  c20c00               ret 0xc
// library templates-boost-1_34_1/vector_pod16.cpp (function ?_Ufill@?$vector@UE@@V?$allocator@UE@@@std@@@std@@IAEPAUE@@PAU3@IABU3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_pod16.cpp
