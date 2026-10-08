// roc 2007-03 00443320  unit: seg_00440000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00443320
//
// 00443320  51                   push ecx
// 00443321  8b542410             mov edx, dword ptr [esp + 0x10]
// 00443325  56                   push esi
// 00443326  8b742410             mov esi, dword ptr [esp + 0x10]
// 0044332a  57                   push edi
// 0044332b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0044332f  c644240800           mov byte ptr [esp + 8], 0
// 00443334  8b442408             mov eax, dword ptr [esp + 8]
// 00443338  50                   push eax
// 00443339  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0044333d  52                   push edx
// 0044333e  51                   push ecx
// 0044333f  50                   push eax
// 00443340  56                   push esi
// 00443341  57                   push edi
// 00443342  e819ffffff           call 0x443260
// 00443347  8d0c76               lea ecx, [esi + esi*2]
// 0044334a  83c418               add esp, 0x18
// 0044334d  8d048f               lea eax, [edi + ecx*4]
// 00443350  5f                   pop edi
// 00443351  5e                   pop esi
// 00443352  59                   pop ecx
// 00443353  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$sub_match@PBD@boost@@V?$allocator@U?$sub_match@PBD@boost@@@std@@@std@@IAEPAU?$sub_match@PBD@boost@@PAU34@IABU34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
