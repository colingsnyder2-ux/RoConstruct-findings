// from server: 100% by auto
// roc 2011-06 0046d4d0  unit: CRobloxControlColorSelector  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046d4d0
//
// 0046d4d0  51                   push ecx
// 0046d4d1  8b542410             mov edx, dword ptr [esp + 0x10]
// 0046d4d5  56                   push esi
// 0046d4d6  8b742410             mov esi, dword ptr [esp + 0x10]
// 0046d4da  57                   push edi
// 0046d4db  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0046d4df  c644240800           mov byte ptr [esp + 8], 0
// 0046d4e4  8b442408             mov eax, dword ptr [esp + 8]
// 0046d4e8  50                   push eax
// 0046d4e9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0046d4ed  52                   push edx
// 0046d4ee  51                   push ecx
// 0046d4ef  50                   push eax
// 0046d4f0  56                   push esi
// 0046d4f1  57                   push edi
// 0046d4f2  e839ffffff           call 0x46d430
// 0046d4f7  8d0c76               lea ecx, [esi + esi*2]
// 0046d4fa  83c418               add esp, 0x18
// 0046d4fd  8d048f               lea eax, [edi + ecx*4]
// 0046d500  5f                   pop edi
// 0046d501  5e                   pop esi
// 0046d502  59                   pop ecx
// 0046d503  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$sub_match@PBD@boost@@V?$allocator@U?$sub_match@PBD@boost@@@std@@@std@@IAEPAU?$sub_match@PBD@boost@@PAU34@IABU34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
