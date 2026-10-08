// from server: 100% by auto
// roc 2012-06 008f2c80  unit: RBX::Joint  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008f2c80
//
// 008f2c80  51                   push ecx
// 008f2c81  8b542410             mov edx, dword ptr [esp + 0x10]
// 008f2c85  56                   push esi
// 008f2c86  8b742410             mov esi, dword ptr [esp + 0x10]
// 008f2c8a  57                   push edi
// 008f2c8b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008f2c8f  c644240800           mov byte ptr [esp + 8], 0
// 008f2c94  8b442408             mov eax, dword ptr [esp + 8]
// 008f2c98  50                   push eax
// 008f2c99  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008f2c9d  52                   push edx
// 008f2c9e  51                   push ecx
// 008f2c9f  50                   push eax
// 008f2ca0  56                   push esi
// 008f2ca1  57                   push edi
// 008f2ca2  e89929b7ff           call 0x465640
// 008f2ca7  83c418               add esp, 0x18
// 008f2caa  8d04b7               lea eax, [edi + esi*4]
// 008f2cad  5f                   pop edi
// 008f2cae  5e                   pop esi
// 008f2caf  59                   pop ecx
// 008f2cb0  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Ufill@?$vector@U?$digraph@G@re_detail@boost@@V?$allocator@U?$digraph@G@re_detail@boost@@@std@@@std@@IAEPAU?$digraph@G@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
