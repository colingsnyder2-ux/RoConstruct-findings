// roc 2007-03 0044ac70  unit: seg_00440000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044ac70
//
// 0044ac70  51                   push ecx
// 0044ac71  8b542410             mov edx, dword ptr [esp + 0x10]
// 0044ac75  56                   push esi
// 0044ac76  8b742410             mov esi, dword ptr [esp + 0x10]
// 0044ac7a  57                   push edi
// 0044ac7b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0044ac7f  c644240800           mov byte ptr [esp + 8], 0
// 0044ac84  8b442408             mov eax, dword ptr [esp + 8]
// 0044ac88  50                   push eax
// 0044ac89  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0044ac8d  52                   push edx
// 0044ac8e  51                   push ecx
// 0044ac8f  50                   push eax
// 0044ac90  56                   push esi
// 0044ac91  57                   push edi
// 0044ac92  e829ffffff           call 0x44abc0
// 0044ac97  8d0c76               lea ecx, [esi + esi*2]
// 0044ac9a  83c418               add esp, 0x18
// 0044ac9d  8d048f               lea eax, [edi + ecx*4]
// 0044aca0  5f                   pop edi
// 0044aca1  5e                   pop esi
// 0044aca2  59                   pop ecx
// 0044aca3  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$sub_match@PBD@boost@@V?$allocator@U?$sub_match@PBD@boost@@@std@@@std@@IAEPAU?$sub_match@PBD@boost@@PAU34@IABU34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
