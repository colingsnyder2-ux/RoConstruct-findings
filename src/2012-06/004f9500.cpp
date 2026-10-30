// roc 2012-06 004f9500  unit: Ogre::UTVertexSurfaceTexTangent::?$SpecializedMeshGen  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004f9500
//
// 004f9500  51                   push ecx
// 004f9501  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f9505  56                   push esi
// 004f9506  8b742410             mov esi, dword ptr [esp + 0x10]
// 004f950a  57                   push edi
// 004f950b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004f950f  c644240800           mov byte ptr [esp + 8], 0
// 004f9514  8b442408             mov eax, dword ptr [esp + 8]
// 004f9518  50                   push eax
// 004f9519  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004f951d  52                   push edx
// 004f951e  51                   push ecx
// 004f951f  50                   push eax
// 004f9520  56                   push esi
// 004f9521  57                   push edi
// 004f9522  e879feffff           call 0x4f93a0
// 004f9527  83c418               add esp, 0x18
// 004f952a  8d0cf500000000       lea ecx, [esi*8]
// 004f9531  2bce                 sub ecx, esi
// 004f9533  8d04cf               lea eax, [edi + ecx*8]
// 004f9536  5f                   pop edi
// 004f9537  5e                   pop esi
// 004f9538  59                   pop ecx
// 004f9539  c20c00               ret 0xc
// library ogre-1.7.0/OgreMaterialSerializer.cpp (function ?_Ufill@?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@IAEPAU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@2@PAU32@IABU32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreMaterialSerializer.cpp
