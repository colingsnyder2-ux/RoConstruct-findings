// roc 2012-06 00508680  unit: Ogre::RbxSceneUpdater  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00508680
//
// 00508680  51                   push ecx
// 00508681  8b542410             mov edx, dword ptr [esp + 0x10]
// 00508685  56                   push esi
// 00508686  8b742410             mov esi, dword ptr [esp + 0x10]
// 0050868a  57                   push edi
// 0050868b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0050868f  c644240800           mov byte ptr [esp + 8], 0
// 00508694  8b442408             mov eax, dword ptr [esp + 8]
// 00508698  50                   push eax
// 00508699  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0050869d  52                   push edx
// 0050869e  51                   push ecx
// 0050869f  50                   push eax
// 005086a0  56                   push esi
// 005086a1  57                   push edi
// 005086a2  e859feffff           call 0x508500
// 005086a7  8bc6                 mov eax, esi
// 005086a9  83c418               add esp, 0x18
// 005086ac  c1e006               shl eax, 6
// 005086af  03c7                 add eax, edi
// 005086b1  5f                   pop edi
// 005086b2  5e                   pop esi
// 005086b3  59                   pop ecx
// 005086b4  c20c00               ret 0xc
// library ogre-1.7.0/OgreTangentSpaceCalc.cpp (function ?_Ufill@?$vector@UVertexInfo@TangentSpaceCalc@Ogre@@V?$allocator@UVertexInfo@TangentSpaceCalc@Ogre@@@std@@@std@@IAEPAUVertexInfo@TangentSpaceCalc@Ogre@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreTangentSpaceCalc.cpp
