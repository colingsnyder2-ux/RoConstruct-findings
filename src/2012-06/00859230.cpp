// roc 2012-06 00859230  unit: boost::iostreams::Uoutput::V?$chain::?$chain_client  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00859230
//
// 00859230  6aff                 push -1
// 00859232  68bae0ac00           push 0xace0ba
// 00859237  64a100000000         mov eax, dword ptr fs:[0]
// 0085923d  50                   push eax
// 0085923e  64892500000000       mov dword ptr fs:[0], esp
// 00859245  51                   push ecx
// 00859246  53                   push ebx
// 00859247  56                   push esi
// 00859248  c744240800000000     mov dword ptr [esp + 8], 0
// 00859250  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00859254  bb01000000           mov ebx, 1
// 00859259  8d442420             lea eax, [esp + 0x20]
// 0085925d  50                   push eax
// 0085925e  8bce                 mov ecx, esi
// 00859260  895c2418             mov dword ptr [esp + 0x18], ebx
// 00859264  885c2438             mov byte ptr [esp + 0x38], bl
// 00859268  885c2439             mov byte ptr [esp + 0x39], bl
// 0085926c  e82fffffff           call 0x8591a0
// 00859271  895c2408             mov dword ptr [esp + 8], ebx
// 00859275  8d4c2454             lea ecx, [esp + 0x54]
// 00859279  c744241402000000     mov dword ptr [esp + 0x14], 2
// 00859281  ff153c26b200         call dword ptr [0xb2263c]
// 00859287  8d4c2438             lea ecx, [esp + 0x38]
// 0085928b  c644241400           mov byte ptr [esp + 0x14], 0
// 00859290  ff153c26b200         call dword ptr [0xb2263c]
// 00859296  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085929a  8bc6                 mov eax, esi
// 0085929c  5e                   pop esi
// 0085929d  5b                   pop ebx
// 0085929e  64890d00000000       mov dword ptr fs:[0], ecx
// 008592a5  83c410               add esp, 0x10
// 008592a8  c3                   ret 
// copied from an identical function in another client (function ?normalize_params@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@CA?AUgzip_params@23@U423@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp