// roc 2011-06 00878240  unit: CXTPPropertyGridView  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00878240
//
// 00878240  83ec1c               sub esp, 0x1c
// 00878243  57                   push edi
// 00878244  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00878248  894c2404             mov dword ptr [esp + 4], ecx
// 0087824c  85ff                 test edi, edi
// 0087824e  750c                 jne 0x87825c
// 00878250  b857000780           mov eax, 0x80070057
// 00878255  5f                   pop edi
// 00878256  83c41c               add esp, 0x1c
// 00878259  c20c00               ret 0xc
// 0087825c  56                   push esi
// 0087825d  33c0                 xor eax, eax
// 0087825f  8d71ac               lea esi, [ecx - 0x54]
// 00878262  668907               mov word ptr [edi], ax
// 00878265  85f6                 test esi, esi
// 00878267  7405                 je 0x87826e
// 00878269  394620               cmp dword ptr [esi + 0x20], eax
// 0087826c  750d                 jne 0x87827b
// 0087826e  5e                   pop esi
// 0087826f  b801000000           mov eax, 1
// 00878274  5f                   pop edi
// 00878275  83c41c               add esp, 0x1c
// 00878278  c20c00               ret 0xc
// 0087827b  53                   push ebx
// 0087827c  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00878280  55                   push ebp
// 00878281  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00878285  56                   push esi
// 00878286  8d4c2420             lea ecx, [esp + 0x20]
// 0087828a  e8a14afeff           call 0x85cd30
// 0087828f  55                   push ebp
// 00878290  53                   push ebx
// 00878291  50                   push eax
// 00878292  ff15101ca400         call dword ptr [0xa41c10]
// 00878298  85c0                 test eax, eax
// 0087829a  750f                 jne 0x8782ab
// 0087829c  5d                   pop ebp
// 0087829d  5b                   pop ebx
// 0087829e  5e                   pop esi
// 0087829f  b801000000           mov eax, 1
// 008782a4  5f                   pop edi
// 008782a5  83c41c               add esp, 0x1c
// 008782a8  c20c00               ret 0xc
// 008782ab  8b442410             mov eax, dword ptr [esp + 0x10]
// 008782af  b903000000           mov ecx, 3
// 008782b4  8d542414             lea edx, [esp + 0x14]
// 008782b8  66890f               mov word ptr [edi], cx
// 008782bb  c7470800000000       mov dword ptr [edi + 8], 0
// 008782c2  8b48cc               mov ecx, dword ptr [eax - 0x34]
// 008782c5  52                   push edx
// 008782c6  51                   push ecx
// 008782c7  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008782cb  896c2420             mov dword ptr [esp + 0x20], ebp
// 008782cf  ff15f419a400         call dword ptr [0xa419f4]
// 008782d5  8b542418             mov edx, dword ptr [esp + 0x18]
// 008782d9  8b442414             mov eax, dword ptr [esp + 0x14]
// 008782dd  52                   push edx
// 008782de  50                   push eax
// 008782df  8bce                 mov ecx, esi
// 008782e1  e8eaecffff           call 0x876fd0
// 008782e6  85c0                 test eax, eax
// 008782e8  7414                 je 0x8782fe
// 008782ea  b909000000           mov ecx, 9
// 008782ef  66890f               mov word ptr [edi], cx
// 008782f2  6a01                 push 1
// 008782f4  8bc8                 mov ecx, eax
// 008782f6  e8c3421500           call 0x9cc5be
// 008782fb  894708               mov dword ptr [edi + 8], eax
// 008782fe  5d                   pop ebp
// 008782ff  5b                   pop ebx
// 00878300  5e                   pop esi
// 00878301  33c0                 xor eax, eax
// 00878303  5f                   pop edi
// 00878304  83c41c               add esp, 0x1c
// 00878307  c20c00               ret 0xc
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?AccessibleHitTest@CXTPPropertyGridView@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
