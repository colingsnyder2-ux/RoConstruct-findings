// roc 2012-06 0091d620  unit: seg_00910000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0091d620
//
// 0091d620  51                   push ecx
// 0091d621  8b542410             mov edx, dword ptr [esp + 0x10]
// 0091d625  56                   push esi
// 0091d626  8b742410             mov esi, dword ptr [esp + 0x10]
// 0091d62a  57                   push edi
// 0091d62b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0091d62f  c644240800           mov byte ptr [esp + 8], 0
// 0091d634  8b442408             mov eax, dword ptr [esp + 8]
// 0091d638  50                   push eax
// 0091d639  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0091d63d  52                   push edx
// 0091d63e  51                   push ecx
// 0091d63f  50                   push eax
// 0091d640  56                   push esi
// 0091d641  57                   push edi
// 0091d642  e8a9feffff           call 0x91d4f0
// 0091d647  83c418               add esp, 0x18
// 0091d64a  8d0cf500000000       lea ecx, [esi*8]
// 0091d651  2bce                 sub ecx, esi
// 0091d653  8d048f               lea eax, [edi + ecx*4]
// 0091d656  5f                   pop edi
// 0091d657  5e                   pop esi
// 0091d658  59                   pop ecx
// 0091d659  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Ufill@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PAV32@IABV32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
