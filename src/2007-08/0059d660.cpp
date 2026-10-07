// roc 2007-08 0059d660  unit: RBX::VLegacyHopperService::?$FactoryProduct  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059d660
//
// 0059d660  51                   push ecx
// 0059d661  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059d665  56                   push esi
// 0059d666  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059d66a  57                   push edi
// 0059d66b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0059d66f  c644240800           mov byte ptr [esp + 8], 0
// 0059d674  8b442408             mov eax, dword ptr [esp + 8]
// 0059d678  50                   push eax
// 0059d679  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0059d67d  52                   push edx
// 0059d67e  51                   push ecx
// 0059d67f  50                   push eax
// 0059d680  56                   push esi
// 0059d681  57                   push edi
// 0059d682  e849c4fdff           call 0x579ad0
// 0059d687  83c418               add esp, 0x18
// 0059d68a  8d04b7               lea eax, [edi + esi*4]
// 0059d68d  5f                   pop edi
// 0059d68e  5e                   pop esi
// 0059d68f  59                   pop ecx
// 0059d690  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Ufill@?$vector@U?$digraph@G@re_detail@boost@@V?$allocator@U?$digraph@G@re_detail@boost@@@std@@@std@@IAEPAU?$digraph@G@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
