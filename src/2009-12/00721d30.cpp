// roc 2009-12 00721d30  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00721d30
//
// 00721d30  6aff                 push -1
// 00721d32  685aeb9400           push 0x94eb5a
// 00721d37  64a100000000         mov eax, dword ptr fs:[0]
// 00721d3d  50                   push eax
// 00721d3e  64892500000000       mov dword ptr fs:[0], esp
// 00721d45  51                   push ecx
// 00721d46  53                   push ebx
// 00721d47  56                   push esi
// 00721d48  c744240800000000     mov dword ptr [esp + 8], 0
// 00721d50  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00721d54  bb01000000           mov ebx, 1
// 00721d59  8d442420             lea eax, [esp + 0x20]
// 00721d5d  50                   push eax
// 00721d5e  8bce                 mov ecx, esi
// 00721d60  895c2418             mov dword ptr [esp + 0x18], ebx
// 00721d64  885c2438             mov byte ptr [esp + 0x38], bl
// 00721d68  885c2439             mov byte ptr [esp + 0x39], bl
// 00721d6c  e82fffffff           call 0x721ca0
// 00721d71  895c2408             mov dword ptr [esp + 8], ebx
// 00721d75  8d4c2454             lea ecx, [esp + 0x54]
// 00721d79  c744241402000000     mov dword ptr [esp + 0x14], 2
// 00721d81  ff15e4b69800         call dword ptr [0x98b6e4]
// 00721d87  8d4c2438             lea ecx, [esp + 0x38]
// 00721d8b  c644241400           mov byte ptr [esp + 0x14], 0
// 00721d90  ff15e4b69800         call dword ptr [0x98b6e4]
// 00721d96  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00721d9a  8bc6                 mov eax, esi
// 00721d9c  5e                   pop esi
// 00721d9d  5b                   pop ebx
// 00721d9e  64890d00000000       mov dword ptr fs:[0], ecx
// 00721da5  83c410               add esp, 0x10
// 00721da8  c3                   ret 
// copied from an identical function in another client (function ?normalize_params@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@CA?AUgzip_params@23@U423@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp