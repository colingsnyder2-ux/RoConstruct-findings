// from server: 100% by auto
// roc 2012-06 007b2790  unit: RBX::VCacheableContentProvider::?$NonFactoryProduct  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b2790
//
// 007b2790  51                   push ecx
// 007b2791  8b542410             mov edx, dword ptr [esp + 0x10]
// 007b2795  56                   push esi
// 007b2796  8b742410             mov esi, dword ptr [esp + 0x10]
// 007b279a  57                   push edi
// 007b279b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007b279f  c644240800           mov byte ptr [esp + 8], 0
// 007b27a4  8b442408             mov eax, dword ptr [esp + 8]
// 007b27a8  50                   push eax
// 007b27a9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007b27ad  52                   push edx
// 007b27ae  51                   push ecx
// 007b27af  50                   push eax
// 007b27b0  56                   push esi
// 007b27b1  57                   push edi
// 007b27b2  e8a933e5ff           call 0x605b60
// 007b27b7  8d0c76               lea ecx, [esi + esi*2]
// 007b27ba  83c418               add esp, 0x18
// 007b27bd  8d048f               lea eax, [edi + ecx*4]
// 007b27c0  5f                   pop edi
// 007b27c1  5e                   pop esi
// 007b27c2  59                   pop ecx
// 007b27c3  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$sub_match@PBD@boost@@V?$allocator@U?$sub_match@PBD@boost@@@std@@@std@@IAEPAU?$sub_match@PBD@boost@@PAU34@IABU34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
