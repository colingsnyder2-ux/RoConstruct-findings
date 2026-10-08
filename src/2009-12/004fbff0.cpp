// roc 2009-12 004fbff0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004fbff0
//
// 004fbff0  51                   push ecx
// 004fbff1  8b542410             mov edx, dword ptr [esp + 0x10]
// 004fbff5  56                   push esi
// 004fbff6  8b742410             mov esi, dword ptr [esp + 0x10]
// 004fbffa  57                   push edi
// 004fbffb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004fbfff  c644240800           mov byte ptr [esp + 8], 0
// 004fc004  8b442408             mov eax, dword ptr [esp + 8]
// 004fc008  50                   push eax
// 004fc009  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004fc00d  52                   push edx
// 004fc00e  83c108               add ecx, 8
// 004fc011  51                   push ecx
// 004fc012  50                   push eax
// 004fc013  56                   push esi
// 004fc014  57                   push edi
// 004fc015  e836d9ffff           call 0x4f9950
// 004fc01a  83c418               add esp, 0x18
// 004fc01d  8d04b7               lea eax, [edi + esi*4]
// 004fc020  5f                   pop edi
// 004fc021  5e                   pop esi
// 004fc022  59                   pop ecx
// 004fc023  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Ufill@?$vector@U?$digraph@G@re_detail@boost@@V?$allocator@U?$digraph@G@re_detail@boost@@@std@@@std@@IAEPAU?$digraph@G@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
