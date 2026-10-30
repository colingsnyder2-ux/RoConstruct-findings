// roc 2012-06 004e5820  unit: Ogre::RbxMaterialAdapter  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004e5820
//
// 004e5820  51                   push ecx
// 004e5821  8b542410             mov edx, dword ptr [esp + 0x10]
// 004e5825  56                   push esi
// 004e5826  8b742410             mov esi, dword ptr [esp + 0x10]
// 004e582a  57                   push edi
// 004e582b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004e582f  c644240800           mov byte ptr [esp + 8], 0
// 004e5834  8b442408             mov eax, dword ptr [esp + 8]
// 004e5838  50                   push eax
// 004e5839  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004e583d  52                   push edx
// 004e583e  51                   push ecx
// 004e583f  50                   push eax
// 004e5840  56                   push esi
// 004e5841  57                   push edi
// 004e5842  e839f9ffff           call 0x4e5180
// 004e5847  8bc6                 mov eax, esi
// 004e5849  6bc054               imul eax, eax, 0x54
// 004e584c  83c418               add esp, 0x18
// 004e584f  03c7                 add eax, edi
// 004e5851  5f                   pop edi
// 004e5852  5e                   pop esi
// 004e5853  59                   pop ecx
// 004e5854  c20c00               ret 0xc
// library ogre-1.7.0/OgreCompositorInstance.cpp (function ?_Ufill@?$vector@VTargetOperation@CompositorInstance@Ogre@@V?$allocator@VTargetOperation@CompositorInstance@Ogre@@@std@@@std@@IAEPAVTargetOperation@CompositorInstance@Ogre@@PAV345@IABV345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreCompositorInstance.cpp
