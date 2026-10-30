// roc 2007-08 0054abb0  unit: RBX::ServiceProvider  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054abb0
//
// 0054abb0  6aff                 push -1
// 0054abb2  68ca237500           push 0x7523ca
// 0054abb7  64a100000000         mov eax, dword ptr fs:[0]
// 0054abbd  50                   push eax
// 0054abbe  64892500000000       mov dword ptr fs:[0], esp
// 0054abc5  51                   push ecx
// 0054abc6  53                   push ebx
// 0054abc7  56                   push esi
// 0054abc8  c744240800000000     mov dword ptr [esp + 8], 0
// 0054abd0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0054abd4  bb01000000           mov ebx, 1
// 0054abd9  8d442420             lea eax, [esp + 0x20]
// 0054abdd  50                   push eax
// 0054abde  8bce                 mov ecx, esi
// 0054abe0  895c2418             mov dword ptr [esp + 0x18], ebx
// 0054abe4  885c2438             mov byte ptr [esp + 0x38], bl
// 0054abe8  885c2439             mov byte ptr [esp + 0x39], bl
// 0054abec  e82fffffff           call 0x54ab20
// 0054abf1  895c2408             mov dword ptr [esp + 8], ebx
// 0054abf5  8d4c2454             lea ecx, [esp + 0x54]
// 0054abf9  c744241402000000     mov dword ptr [esp + 0x14], 2
// 0054ac01  ff15ace67700         call dword ptr [0x77e6ac]
// 0054ac07  8d4c2438             lea ecx, [esp + 0x38]
// 0054ac0b  c644241400           mov byte ptr [esp + 0x14], 0
// 0054ac10  ff15ace67700         call dword ptr [0x77e6ac]
// 0054ac16  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054ac1a  8bc6                 mov eax, esi
// 0054ac1c  5e                   pop esi
// 0054ac1d  5b                   pop ebx
// 0054ac1e  64890d00000000       mov dword ptr fs:[0], ecx
// 0054ac25  83c410               add esp, 0x10
// 0054ac28  c3                   ret 
// copied from an identical function in another client (function ?normalize_params@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@CA?AUgzip_params@23@U423@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp