// from server: 100% by auto
// roc 2008-06 00716550  unit: CXTPPropertyGridView  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00716550
//
// 00716550  83ec1c               sub esp, 0x1c
// 00716553  57                   push edi
// 00716554  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00716558  894c2404             mov dword ptr [esp + 4], ecx
// 0071655c  85ff                 test edi, edi
// 0071655e  750c                 jne 0x71656c
// 00716560  b857000780           mov eax, 0x80070057
// 00716565  5f                   pop edi
// 00716566  83c41c               add esp, 0x1c
// 00716569  c20c00               ret 0xc
// 0071656c  56                   push esi
// 0071656d  33c0                 xor eax, eax
// 0071656f  8d71ac               lea esi, [ecx - 0x54]
// 00716572  668907               mov word ptr [edi], ax
// 00716575  85f6                 test esi, esi
// 00716577  7405                 je 0x71657e
// 00716579  394620               cmp dword ptr [esi + 0x20], eax
// 0071657c  750d                 jne 0x71658b
// 0071657e  5e                   pop esi
// 0071657f  b801000000           mov eax, 1
// 00716584  5f                   pop edi
// 00716585  83c41c               add esp, 0x1c
// 00716588  c20c00               ret 0xc
// 0071658b  53                   push ebx
// 0071658c  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00716590  55                   push ebp
// 00716591  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00716595  56                   push esi
// 00716596  8d4c2420             lea ecx, [esp + 0x20]
// 0071659a  e83115feff           call 0x6f7ad0
// 0071659f  55                   push ebp
// 007165a0  53                   push ebx
// 007165a1  50                   push eax
// 007165a2  ff152c2d8000         call dword ptr [0x802d2c]
// 007165a8  85c0                 test eax, eax
// 007165aa  750f                 jne 0x7165bb
// 007165ac  5d                   pop ebp
// 007165ad  5b                   pop ebx
// 007165ae  5e                   pop esi
// 007165af  b801000000           mov eax, 1
// 007165b4  5f                   pop edi
// 007165b5  83c41c               add esp, 0x1c
// 007165b8  c20c00               ret 0xc
// 007165bb  8b442410             mov eax, dword ptr [esp + 0x10]
// 007165bf  b903000000           mov ecx, 3
// 007165c4  8d542414             lea edx, [esp + 0x14]
// 007165c8  66890f               mov word ptr [edi], cx
// 007165cb  c7470800000000       mov dword ptr [edi + 8], 0
// 007165d2  8b48cc               mov ecx, dword ptr [eax - 0x34]
// 007165d5  52                   push edx
// 007165d6  51                   push ecx
// 007165d7  895c241c             mov dword ptr [esp + 0x1c], ebx
// 007165db  896c2420             mov dword ptr [esp + 0x20], ebp
// 007165df  ff15a02d8000         call dword ptr [0x802da0]
// 007165e5  8b542418             mov edx, dword ptr [esp + 0x18]
// 007165e9  8b442414             mov eax, dword ptr [esp + 0x14]
// 007165ed  52                   push edx
// 007165ee  50                   push eax
// 007165ef  8bce                 mov ecx, esi
// 007165f1  e8eaecffff           call 0x7152e0
// 007165f6  85c0                 test eax, eax
// 007165f8  7414                 je 0x71660e
// 007165fa  b909000000           mov ecx, 9
// 007165ff  66890f               mov word ptr [edi], cx
// 00716602  6a01                 push 1
// 00716604  8bc8                 mov ecx, eax
// 00716606  e82f5a0a00           call 0x7bc03a
// 0071660b  894708               mov dword ptr [edi + 8], eax
// 0071660e  5d                   pop ebp
// 0071660f  5b                   pop ebx
// 00716610  5e                   pop esi
// 00716611  33c0                 xor eax, eax
// 00716613  5f                   pop edi
// 00716614  83c41c               add esp, 0x1c
// 00716617  c20c00               ret 0xc
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?AccessibleHitTest@CXTPPropertyGridView@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
