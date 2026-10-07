// roc 2012-06 00864ad0  unit: RBX::BaseThreadPool::UPoolData::XP6AXV?$shared_ptr::V?$bind_t::?$thread_data  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00864ad0
//
// 00864ad0  51                   push ecx
// 00864ad1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00864ad5  56                   push esi
// 00864ad6  8b742410             mov esi, dword ptr [esp + 0x10]
// 00864ada  57                   push edi
// 00864adb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00864adf  c644240800           mov byte ptr [esp + 8], 0
// 00864ae4  8b442408             mov eax, dword ptr [esp + 8]
// 00864ae8  50                   push eax
// 00864ae9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00864aed  52                   push edx
// 00864aee  51                   push ecx
// 00864aef  50                   push eax
// 00864af0  56                   push esi
// 00864af1  57                   push edi
// 00864af2  e8c9faffff           call 0x8645c0
// 00864af7  83c418               add esp, 0x18
// 00864afa  8d04b7               lea eax, [edi + esi*4]
// 00864afd  5f                   pop edi
// 00864afe  5e                   pop esi
// 00864aff  59                   pop ecx
// 00864b00  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Ufill@?$vector@U?$digraph@G@re_detail@boost@@V?$allocator@U?$digraph@G@re_detail@boost@@@std@@@std@@IAEPAU?$digraph@G@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
