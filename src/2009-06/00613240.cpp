// roc 2009-06 00613240  unit: RBX::VModelInstance::?$BoundFuncDesc  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00613240
//
// 00613240  6aff                 push -1
// 00613242  689a7c8600           push 0x867c9a
// 00613247  64a100000000         mov eax, dword ptr fs:[0]
// 0061324d  50                   push eax
// 0061324e  64892500000000       mov dword ptr fs:[0], esp
// 00613255  51                   push ecx
// 00613256  53                   push ebx
// 00613257  56                   push esi
// 00613258  c744240800000000     mov dword ptr [esp + 8], 0
// 00613260  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00613264  bb01000000           mov ebx, 1
// 00613269  8d442420             lea eax, [esp + 0x20]
// 0061326d  50                   push eax
// 0061326e  8bce                 mov ecx, esi
// 00613270  895c2418             mov dword ptr [esp + 0x18], ebx
// 00613274  885c2438             mov byte ptr [esp + 0x38], bl
// 00613278  885c2439             mov byte ptr [esp + 0x39], bl
// 0061327c  e82fffffff           call 0x6131b0
// 00613281  895c2408             mov dword ptr [esp + 8], ebx
// 00613285  8d4c2454             lea ecx, [esp + 0x54]
// 00613289  c744241402000000     mov dword ptr [esp + 0x14], 2
// 00613291  ff15c4e48900         call dword ptr [0x89e4c4]
// 00613297  8d4c2438             lea ecx, [esp + 0x38]
// 0061329b  c644241400           mov byte ptr [esp + 0x14], 0
// 006132a0  ff15c4e48900         call dword ptr [0x89e4c4]
// 006132a6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006132aa  8bc6                 mov eax, esi
// 006132ac  5e                   pop esi
// 006132ad  5b                   pop ebx
// 006132ae  64890d00000000       mov dword ptr fs:[0], ecx
// 006132b5  83c410               add esp, 0x10
// 006132b8  c3                   ret 
// copied from an identical function in another client (function ?normalize_params@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@CA?AUgzip_params@23@U423@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp