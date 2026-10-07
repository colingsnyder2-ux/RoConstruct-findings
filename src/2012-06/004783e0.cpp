// roc 2012-06 004783e0  unit: CRobloxControlColorSelector  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004783e0
//
// 004783e0  51                   push ecx
// 004783e1  8b542410             mov edx, dword ptr [esp + 0x10]
// 004783e5  56                   push esi
// 004783e6  8b742410             mov esi, dword ptr [esp + 0x10]
// 004783ea  57                   push edi
// 004783eb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004783ef  c644240800           mov byte ptr [esp + 8], 0
// 004783f4  8b442408             mov eax, dword ptr [esp + 8]
// 004783f8  50                   push eax
// 004783f9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004783fd  52                   push edx
// 004783fe  51                   push ecx
// 004783ff  50                   push eax
// 00478400  56                   push esi
// 00478401  57                   push edi
// 00478402  e839ffffff           call 0x478340
// 00478407  8d0c76               lea ecx, [esi + esi*2]
// 0047840a  83c418               add esp, 0x18
// 0047840d  8d048f               lea eax, [edi + ecx*4]
// 00478410  5f                   pop edi
// 00478411  5e                   pop esi
// 00478412  59                   pop ecx
// 00478413  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$sub_match@PBD@boost@@V?$allocator@U?$sub_match@PBD@boost@@@std@@@std@@IAEPAU?$sub_match@PBD@boost@@PAU34@IABU34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
