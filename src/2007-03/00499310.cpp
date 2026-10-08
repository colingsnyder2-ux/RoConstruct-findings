// roc 2007-03 00499310  unit: seg_00490000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00499310
//
// 00499310  51                   push ecx
// 00499311  8b542410             mov edx, dword ptr [esp + 0x10]
// 00499315  56                   push esi
// 00499316  8b742410             mov esi, dword ptr [esp + 0x10]
// 0049931a  57                   push edi
// 0049931b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0049931f  c644240800           mov byte ptr [esp + 8], 0
// 00499324  8b442408             mov eax, dword ptr [esp + 8]
// 00499328  50                   push eax
// 00499329  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0049932d  52                   push edx
// 0049932e  51                   push ecx
// 0049932f  50                   push eax
// 00499330  56                   push esi
// 00499331  57                   push edi
// 00499332  e809ffffff           call 0x499240
// 00499337  8d0c76               lea ecx, [esi + esi*2]
// 0049933a  83c418               add esp, 0x18
// 0049933d  8d048f               lea eax, [edi + ecx*4]
// 00499340  5f                   pop edi
// 00499341  5e                   pop esi
// 00499342  59                   pop ecx
// 00499343  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$sub_match@PBD@boost@@V?$allocator@U?$sub_match@PBD@boost@@@std@@@std@@IAEPAU?$sub_match@PBD@boost@@PAU34@IABU34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
