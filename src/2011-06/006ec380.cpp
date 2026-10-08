// from server: 100% by auto
// roc 2011-06 006ec380  unit: RBX::BaseThreadPool::UPoolData::XP6AXV?$shared_ptr::V?$bind_t::?$thread_data  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006ec380
//
// 006ec380  51                   push ecx
// 006ec381  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ec385  56                   push esi
// 006ec386  8b742410             mov esi, dword ptr [esp + 0x10]
// 006ec38a  57                   push edi
// 006ec38b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006ec38f  c644240800           mov byte ptr [esp + 8], 0
// 006ec394  8b442408             mov eax, dword ptr [esp + 8]
// 006ec398  50                   push eax
// 006ec399  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006ec39d  52                   push edx
// 006ec39e  51                   push ecx
// 006ec39f  50                   push eax
// 006ec3a0  56                   push esi
// 006ec3a1  57                   push edi
// 006ec3a2  e839fbffff           call 0x6ebee0
// 006ec3a7  83c418               add esp, 0x18
// 006ec3aa  8d04b7               lea eax, [edi + esi*4]
// 006ec3ad  5f                   pop edi
// 006ec3ae  5e                   pop esi
// 006ec3af  59                   pop ecx
// 006ec3b0  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Ufill@?$vector@U?$digraph@G@re_detail@boost@@V?$allocator@U?$digraph@G@re_detail@boost@@@std@@@std@@IAEPAU?$digraph@G@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
