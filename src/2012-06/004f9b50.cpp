// roc 2012-06 004f9b50  unit: Ogre::UTVertex3DTex::?$SpecializedMeshGen  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004f9b50
//
// 004f9b50  51                   push ecx
// 004f9b51  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f9b55  56                   push esi
// 004f9b56  8b742410             mov esi, dword ptr [esp + 0x10]
// 004f9b5a  57                   push edi
// 004f9b5b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004f9b5f  c644240800           mov byte ptr [esp + 8], 0
// 004f9b64  8b442408             mov eax, dword ptr [esp + 8]
// 004f9b68  50                   push eax
// 004f9b69  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004f9b6d  52                   push edx
// 004f9b6e  51                   push ecx
// 004f9b6f  50                   push eax
// 004f9b70  56                   push esi
// 004f9b71  57                   push edi
// 004f9b72  e8a9feffff           call 0x4f9a20
// 004f9b77  8d0476               lea eax, [esi + esi*2]
// 004f9b7a  83c418               add esp, 0x18
// 004f9b7d  c1e004               shl eax, 4
// 004f9b80  03c7                 add eax, edi
// 004f9b82  5f                   pop edi
// 004f9b83  5e                   pop esi
// 004f9b84  59                   pop ecx
// 004f9b85  c20c00               ret 0xc
// library templates-boost-1_34_1/vector_pod48.cpp (function ?_Ufill@?$vector@UE@@V?$allocator@UE@@@std@@@std@@IAEPAUE@@PAU3@IABU3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_pod48.cpp
