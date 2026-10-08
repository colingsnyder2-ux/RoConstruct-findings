// from server: 100% by auto
// roc 2011-06 004a96c0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a96c0
//
// 004a96c0  51                   push ecx
// 004a96c1  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a96c5  56                   push esi
// 004a96c6  8b742410             mov esi, dword ptr [esp + 0x10]
// 004a96ca  57                   push edi
// 004a96cb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004a96cf  c644240800           mov byte ptr [esp + 8], 0
// 004a96d4  8b442408             mov eax, dword ptr [esp + 8]
// 004a96d8  50                   push eax
// 004a96d9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a96dd  52                   push edx
// 004a96de  51                   push ecx
// 004a96df  50                   push eax
// 004a96e0  56                   push esi
// 004a96e1  57                   push edi
// 004a96e2  e839f0ffff           call 0x4a8720
// 004a96e7  83c418               add esp, 0x18
// 004a96ea  8d04b7               lea eax, [edi + esi*4]
// 004a96ed  5f                   pop edi
// 004a96ee  5e                   pop esi
// 004a96ef  59                   pop ecx
// 004a96f0  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Ufill@?$vector@U?$digraph@G@re_detail@boost@@V?$allocator@U?$digraph@G@re_detail@boost@@@std@@@std@@IAEPAU?$digraph@G@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
