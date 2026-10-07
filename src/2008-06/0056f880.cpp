// roc 2008-06 0056f880  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056f880
//
// 0056f880  51                   push ecx
// 0056f881  8b542410             mov edx, dword ptr [esp + 0x10]
// 0056f885  56                   push esi
// 0056f886  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056f88a  57                   push edi
// 0056f88b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0056f88f  c644240800           mov byte ptr [esp + 8], 0
// 0056f894  8b442408             mov eax, dword ptr [esp + 8]
// 0056f898  50                   push eax
// 0056f899  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0056f89d  52                   push edx
// 0056f89e  83c108               add ecx, 8
// 0056f8a1  51                   push ecx
// 0056f8a2  50                   push eax
// 0056f8a3  56                   push esi
// 0056f8a4  57                   push edi
// 0056f8a5  e826d80500           call 0x5cd0d0
// 0056f8aa  83c418               add esp, 0x18
// 0056f8ad  8d04b7               lea eax, [edi + esi*4]
// 0056f8b0  5f                   pop edi
// 0056f8b1  5e                   pop esi
// 0056f8b2  59                   pop ecx
// 0056f8b3  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Ufill@?$vector@U?$digraph@G@re_detail@boost@@V?$allocator@U?$digraph@G@re_detail@boost@@@std@@@std@@IAEPAU?$digraph@G@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
