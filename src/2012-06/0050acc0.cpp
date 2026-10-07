// roc 2012-06 0050acc0  unit: Ogre::RbxArchiveFactory  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0050acc0
//
// 0050acc0  51                   push ecx
// 0050acc1  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050acc5  56                   push esi
// 0050acc6  8b742410             mov esi, dword ptr [esp + 0x10]
// 0050acca  57                   push edi
// 0050accb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0050accf  c644240800           mov byte ptr [esp + 8], 0
// 0050acd4  8b442408             mov eax, dword ptr [esp + 8]
// 0050acd8  50                   push eax
// 0050acd9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0050acdd  52                   push edx
// 0050acde  51                   push ecx
// 0050acdf  50                   push eax
// 0050ace0  56                   push esi
// 0050ace1  57                   push edi
// 0050ace2  e849fcffff           call 0x50a930
// 0050ace7  83c418               add esp, 0x18
// 0050acea  8d0cf500000000       lea ecx, [esi*8]
// 0050acf1  2bce                 sub ecx, esi
// 0050acf3  8d048f               lea eax, [edi + ecx*4]
// 0050acf6  5f                   pop edi
// 0050acf7  5e                   pop esi
// 0050acf8  59                   pop ecx
// 0050acf9  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Ufill@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PAV32@IABV32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
