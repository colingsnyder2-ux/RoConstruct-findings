// roc 2012-06 0056e3d0  unit: RBX::Network::IdSerializer  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0056e3d0
//
// 0056e3d0  51                   push ecx
// 0056e3d1  8b542410             mov edx, dword ptr [esp + 0x10]
// 0056e3d5  56                   push esi
// 0056e3d6  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056e3da  57                   push edi
// 0056e3db  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0056e3df  c644240800           mov byte ptr [esp + 8], 0
// 0056e3e4  8b442408             mov eax, dword ptr [esp + 8]
// 0056e3e8  50                   push eax
// 0056e3e9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0056e3ed  52                   push edx
// 0056e3ee  51                   push ecx
// 0056e3ef  50                   push eax
// 0056e3f0  56                   push esi
// 0056e3f1  57                   push edi
// 0056e3f2  e899feffff           call 0x56e290
// 0056e3f7  8d0c76               lea ecx, [esi + esi*2]
// 0056e3fa  83c418               add esp, 0x18
// 0056e3fd  8d048f               lea eax, [edi + ecx*4]
// 0056e400  5f                   pop edi
// 0056e401  5e                   pop esi
// 0056e402  59                   pop ecx
// 0056e403  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$sub_match@PBD@boost@@V?$allocator@U?$sub_match@PBD@boost@@@std@@@std@@IAEPAU?$sub_match@PBD@boost@@PAU34@IABU34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
