// from server: 100% by auto
// roc 2011-06 009653a0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$callable  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009653a0
//
// 009653a0  51                   push ecx
// 009653a1  8b542410             mov edx, dword ptr [esp + 0x10]
// 009653a5  56                   push esi
// 009653a6  8b742410             mov esi, dword ptr [esp + 0x10]
// 009653aa  57                   push edi
// 009653ab  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009653af  c644240800           mov byte ptr [esp + 8], 0
// 009653b4  8b442408             mov eax, dword ptr [esp + 8]
// 009653b8  50                   push eax
// 009653b9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009653bd  52                   push edx
// 009653be  51                   push ecx
// 009653bf  50                   push eax
// 009653c0  56                   push esi
// 009653c1  57                   push edi
// 009653c2  e849ffffff           call 0x965310
// 009653c7  83c418               add esp, 0x18
// 009653ca  8d04b7               lea eax, [edi + esi*4]
// 009653cd  5f                   pop edi
// 009653ce  5e                   pop esi
// 009653cf  59                   pop ecx
// 009653d0  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Ufill@?$vector@U?$digraph@G@re_detail@boost@@V?$allocator@U?$digraph@G@re_detail@boost@@@std@@@std@@IAEPAU?$digraph@G@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
