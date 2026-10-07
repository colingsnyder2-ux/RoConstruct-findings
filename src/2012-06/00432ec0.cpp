// roc 2012-06 00432ec0  unit: ThreadLogManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00432ec0
//
// 00432ec0  51                   push ecx
// 00432ec1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00432ec5  56                   push esi
// 00432ec6  8b742410             mov esi, dword ptr [esp + 0x10]
// 00432eca  57                   push edi
// 00432ecb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00432ecf  c644240800           mov byte ptr [esp + 8], 0
// 00432ed4  8b442408             mov eax, dword ptr [esp + 8]
// 00432ed8  50                   push eax
// 00432ed9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00432edd  52                   push edx
// 00432ede  51                   push ecx
// 00432edf  50                   push eax
// 00432ee0  56                   push esi
// 00432ee1  57                   push edi
// 00432ee2  e8e9f4ffff           call 0x4323d0
// 00432ee7  83c418               add esp, 0x18
// 00432eea  8d0cf500000000       lea ecx, [esi*8]
// 00432ef1  2bce                 sub ecx, esi
// 00432ef3  8d048f               lea eax, [edi + ecx*4]
// 00432ef6  5f                   pop edi
// 00432ef7  5e                   pop esi
// 00432ef8  59                   pop ecx
// 00432ef9  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Ufill@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PAV32@IABV32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
