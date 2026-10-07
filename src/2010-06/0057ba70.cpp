// roc 2010-06 0057ba70  unit: seg_00570000  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057ba70
//
// 0057ba70  53                   push ebx
// 0057ba71  56                   push esi
// 0057ba72  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057ba76  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0057ba7d  57                   push edi
// 0057ba7e  8bbe4c010000         mov edi, dword ptr [esi + 0x14c]
// 0057ba84  897c2410             mov dword ptr [esp + 0x10], edi
// 0057ba88  0f8581000000         jne 0x57bb0f
// 0057ba8e  55                   push ebp
// 0057ba8f  33ed                 xor ebp, ebp
// 0057ba91  39aee4000000         cmp dword ptr [esi + 0xe4], ebp
// 0057ba97  7e75                 jle 0x57bb0e
// 0057ba99  8d9ee8000000         lea ebx, [esi + 0xe8]
// 0057ba9f  90                   nop 
// 0057baa0  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0057baa7  8b3b                 mov edi, dword ptr [ebx]
// 0057baa9  7436                 je 0x57bae1
// 0057baab  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 0057bab2  751b                 jne 0x57bacf
// 0057bab4  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 0057babb  7541                 jne 0x57bafe
// 0057babd  8b4714               mov eax, dword ptr [edi + 0x14]
// 0057bac0  6a00                 push 0
// 0057bac2  50                   push eax
// 0057bac3  8bc6                 mov eax, esi
// 0057bac5  e8d6f5ffff           call 0x57b0a0
// 0057baca  83c408               add esp, 8
// 0057bacd  eb2f                 jmp 0x57bafe
// 0057bacf  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0057bad2  6a01                 push 1
// 0057bad4  51                   push ecx
// 0057bad5  8bc6                 mov eax, esi
// 0057bad7  e8c4f5ffff           call 0x57b0a0
// 0057badc  83c408               add esp, 8
// 0057badf  eb1d                 jmp 0x57bafe
// 0057bae1  8b5714               mov edx, dword ptr [edi + 0x14]
// 0057bae4  6a00                 push 0
// 0057bae6  52                   push edx
// 0057bae7  8bc6                 mov eax, esi
// 0057bae9  e8b2f5ffff           call 0x57b0a0
// 0057baee  8b4718               mov eax, dword ptr [edi + 0x18]
// 0057baf1  6a01                 push 1
// 0057baf3  50                   push eax
// 0057baf4  8bc6                 mov eax, esi
// 0057baf6  e8a5f5ffff           call 0x57b0a0
// 0057bafb  83c410               add esp, 0x10
// 0057bafe  45                   inc ebp
// 0057baff  83c304               add ebx, 4
// 0057bb02  3baee4000000         cmp ebp, dword ptr [esi + 0xe4]
// 0057bb08  7c96                 jl 0x57baa0
// 0057bb0a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0057bb0e  5d                   pop ebp
// 0057bb0f  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0057bb15  3b4f1c               cmp ecx, dword ptr [edi + 0x1c]
// 0057bb18  742b                 je 0x57bb45
// 0057bb1a  68dd000000           push 0xdd
// 0057bb1f  e8bcf2ffff           call 0x57ade0
// 0057bb24  83c404               add esp, 4
// 0057bb27  bb04000000           mov ebx, 4
// 0057bb2c  e81ff3ffff           call 0x57ae50
// 0057bb31  8b9ebc000000         mov ebx, dword ptr [esi + 0xbc]
// 0057bb37  e814f3ffff           call 0x57ae50
// 0057bb3c  8b96bc000000         mov edx, dword ptr [esi + 0xbc]
// 0057bb42  89571c               mov dword ptr [edi + 0x1c], edx
// 0057bb45  5f                   pop edi
// 0057bb46  8bc6                 mov eax, esi
// 0057bb48  5e                   pop esi
// 0057bb49  5b                   pop ebx
// 0057bb4a  e931f8ffff           jmp 0x57b380
// library jpeg-6b/jcmarker.c (function _write_scan_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
