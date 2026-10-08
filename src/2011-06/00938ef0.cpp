// from server: 100% by auto
// roc 2011-06 00938ef0  unit: Ogre::VRbxTextureCompositorSceneManager::?$sp_counted_impl_p  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00938ef0
//
// 00938ef0  51                   push ecx
// 00938ef1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00938ef5  56                   push esi
// 00938ef6  8b742410             mov esi, dword ptr [esp + 0x10]
// 00938efa  57                   push edi
// 00938efb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00938eff  c644240800           mov byte ptr [esp + 8], 0
// 00938f04  8b442408             mov eax, dword ptr [esp + 8]
// 00938f08  50                   push eax
// 00938f09  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00938f0d  52                   push edx
// 00938f0e  51                   push ecx
// 00938f0f  50                   push eax
// 00938f10  56                   push esi
// 00938f11  57                   push edi
// 00938f12  e8c9e00200           call 0x966fe0
// 00938f17  83c418               add esp, 0x18
// 00938f1a  8d04f7               lea eax, [edi + esi*8]
// 00938f1d  5f                   pop edi
// 00938f1e  5e                   pop esi
// 00938f1f  59                   pop ecx
// 00938f20  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?_Ufill@?$vector@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@IAEPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV34@IABV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
