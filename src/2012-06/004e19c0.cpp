// roc 2012-06 004e19c0  unit: Ogre::RbxTextureCompositorSceneManager  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004e19c0
//
// 004e19c0  51                   push ecx
// 004e19c1  8b542410             mov edx, dword ptr [esp + 0x10]
// 004e19c5  56                   push esi
// 004e19c6  8b742410             mov esi, dword ptr [esp + 0x10]
// 004e19ca  57                   push edi
// 004e19cb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004e19cf  c644240800           mov byte ptr [esp + 8], 0
// 004e19d4  8b442408             mov eax, dword ptr [esp + 8]
// 004e19d8  50                   push eax
// 004e19d9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004e19dd  52                   push edx
// 004e19de  51                   push ecx
// 004e19df  50                   push eax
// 004e19e0  56                   push esi
// 004e19e1  57                   push edi
// 004e19e2  e8c9f6ffff           call 0x4e10b0
// 004e19e7  8bc6                 mov eax, esi
// 004e19e9  83c418               add esp, 0x18
// 004e19ec  c1e006               shl eax, 6
// 004e19ef  03c7                 add eax, edi
// 004e19f1  5f                   pop edi
// 004e19f2  5e                   pop esi
// 004e19f3  59                   pop ecx
// 004e19f4  c20c00               ret 0xc
// library ogre-1.7.0/OgreTangentSpaceCalc.cpp (function ?_Ufill@?$vector@UVertexInfo@TangentSpaceCalc@Ogre@@V?$allocator@UVertexInfo@TangentSpaceCalc@Ogre@@@std@@@std@@IAEPAUVertexInfo@TangentSpaceCalc@Ogre@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreTangentSpaceCalc.cpp
