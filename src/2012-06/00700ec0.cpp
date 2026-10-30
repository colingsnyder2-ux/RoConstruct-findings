// roc 2012-06 00700ec0  unit: RBX::VDebugSettings::?$BoundFuncDesc  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00700ec0
//
// 00700ec0  51                   push ecx
// 00700ec1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00700ec5  56                   push esi
// 00700ec6  8b742410             mov esi, dword ptr [esp + 0x10]
// 00700eca  57                   push edi
// 00700ecb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00700ecf  c644240800           mov byte ptr [esp + 8], 0
// 00700ed4  8b442408             mov eax, dword ptr [esp + 8]
// 00700ed8  50                   push eax
// 00700ed9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00700edd  52                   push edx
// 00700ede  51                   push ecx
// 00700edf  50                   push eax
// 00700ee0  56                   push esi
// 00700ee1  57                   push edi
// 00700ee2  e889f6ffff           call 0x700570
// 00700ee7  8d0cf6               lea ecx, [esi + esi*8]
// 00700eea  83c418               add esp, 0x18
// 00700eed  8d048f               lea eax, [edi + ecx*4]
// 00700ef0  5f                   pop edi
// 00700ef1  5e                   pop esi
// 00700ef2  59                   pop ecx
// 00700ef3  c20c00               ret 0xc
// library ogre-1.7.0/OgreSubMesh.cpp (function ?_Ufill@?$vector@UCluster@Ogre@@V?$allocator@UCluster@Ogre@@@std@@@std@@IAEPAUCluster@Ogre@@PAU34@IABU34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreSubMesh.cpp
