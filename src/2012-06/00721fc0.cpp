// from server: 100% by auto
// roc 2012-06 00721fc0  unit: RBX::$$A6AXABVHeartbeat::?$signal::Vslot::?$callable  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00721fc0
//
// 00721fc0  51                   push ecx
// 00721fc1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00721fc5  56                   push esi
// 00721fc6  8b742410             mov esi, dword ptr [esp + 0x10]
// 00721fca  57                   push edi
// 00721fcb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00721fcf  c644240800           mov byte ptr [esp + 8], 0
// 00721fd4  8b442408             mov eax, dword ptr [esp + 8]
// 00721fd8  50                   push eax
// 00721fd9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00721fdd  52                   push edx
// 00721fde  51                   push ecx
// 00721fdf  50                   push eax
// 00721fe0  56                   push esi
// 00721fe1  57                   push edi
// 00721fe2  e8c9fcffff           call 0x721cb0
// 00721fe7  8d0cb6               lea ecx, [esi + esi*4]
// 00721fea  83c418               add esp, 0x18
// 00721fed  8d048f               lea eax, [edi + ecx*4]
// 00721ff0  5f                   pop edi
// 00721ff1  5e                   pop esi
// 00721ff2  59                   pop ecx
// 00721ff3  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@std@@@std@@IAEPAU?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@PAU34@IABU34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
