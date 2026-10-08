// from server: 100% by auto
// roc 2007-08 004f01b0  unit: RBX::Render::AggregatingSceneManager  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f01b0
//
// 004f01b0  51                   push ecx
// 004f01b1  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f01b5  56                   push esi
// 004f01b6  8b742410             mov esi, dword ptr [esp + 0x10]
// 004f01ba  57                   push edi
// 004f01bb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004f01bf  c644240800           mov byte ptr [esp + 8], 0
// 004f01c4  8b442408             mov eax, dword ptr [esp + 8]
// 004f01c8  50                   push eax
// 004f01c9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004f01cd  52                   push edx
// 004f01ce  51                   push ecx
// 004f01cf  50                   push eax
// 004f01d0  56                   push esi
// 004f01d1  57                   push edi
// 004f01d2  e8e9fcffff           call 0x4efec0
// 004f01d7  83c418               add esp, 0x18
// 004f01da  8d04b7               lea eax, [edi + esi*4]
// 004f01dd  5f                   pop edi
// 004f01de  5e                   pop esi
// 004f01df  59                   pop ecx
// 004f01e0  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Ufill@?$vector@U?$digraph@G@re_detail@boost@@V?$allocator@U?$digraph@G@re_detail@boost@@@std@@@std@@IAEPAU?$digraph@G@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
