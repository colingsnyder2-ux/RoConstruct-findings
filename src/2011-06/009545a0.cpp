// from server: 100% by auto
// roc 2011-06 009545a0  unit: Ogre::UTVertex3DTex::?$SpecializedMeshGen  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009545a0
//
// 009545a0  51                   push ecx
// 009545a1  8b542410             mov edx, dword ptr [esp + 0x10]
// 009545a5  56                   push esi
// 009545a6  8b742410             mov esi, dword ptr [esp + 0x10]
// 009545aa  57                   push edi
// 009545ab  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009545af  c644240800           mov byte ptr [esp + 8], 0
// 009545b4  8b442408             mov eax, dword ptr [esp + 8]
// 009545b8  50                   push eax
// 009545b9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009545bd  52                   push edx
// 009545be  51                   push ecx
// 009545bf  50                   push eax
// 009545c0  56                   push esi
// 009545c1  57                   push edi
// 009545c2  e8a9feffff           call 0x954470
// 009545c7  8d0476               lea eax, [esi + esi*2]
// 009545ca  83c418               add esp, 0x18
// 009545cd  c1e004               shl eax, 4
// 009545d0  03c7                 add eax, edi
// 009545d2  5f                   pop edi
// 009545d3  5e                   pop esi
// 009545d4  59                   pop ecx
// 009545d5  c20c00               ret 0xc
// library templates-boost-1_34_1/vector_pod48.cpp (function ?_Ufill@?$vector@UE@@V?$allocator@UE@@@std@@@std@@IAEPAUE@@PAU3@IABU3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_pod48.cpp
