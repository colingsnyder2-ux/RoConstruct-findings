// roc 2008-06 00553e60  unit: RBX::RenderBase::AggregateChunk  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00553e60
//
// 00553e60  6aff                 push -1
// 00553e62  68f8db7c00           push 0x7cdbf8
// 00553e67  64a100000000         mov eax, dword ptr fs:[0]
// 00553e6d  50                   push eax
// 00553e6e  64892500000000       mov dword ptr fs:[0], esp
// 00553e75  83ec0c               sub esp, 0xc
// 00553e78  53                   push ebx
// 00553e79  55                   push ebp
// 00553e7a  56                   push esi
// 00553e7b  57                   push edi
// 00553e7c  8bf9                 mov edi, ecx
// 00553e7e  897c2410             mov dword ptr [esp + 0x10], edi
// 00553e82  8b4718               mov eax, dword ptr [edi + 0x18]
// 00553e85  8b28                 mov ebp, dword ptr [eax]
// 00553e87  8b37                 mov esi, dword ptr [edi]
// 00553e89  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00553e91  896c2418             mov dword ptr [esp + 0x18], ebp
// 00553e95  89742414             mov dword ptr [esp + 0x14], esi
// 00553e99  8da42400000000       lea esp, [esp]
// 00553ea0  8b5f18               mov ebx, dword ptr [edi + 0x18]
// 00553ea3  8b07                 mov eax, dword ptr [edi]
// 00553ea5  85f6                 test esi, esi
// 00553ea7  7404                 je 0x553ead
// 00553ea9  3bf0                 cmp esi, eax
// 00553eab  7406                 je 0x553eb3
// 00553ead  ff1590288000         call dword ptr [0x802890]
// 00553eb3  3beb                 cmp ebp, ebx
// 00553eb5  7445                 je 0x553efc
// 00553eb7  85f6                 test esi, esi
// 00553eb9  753d                 jne 0x553ef8
// 00553ebb  ff1590288000         call dword ptr [0x802890]
// 00553ec1  3b6e18               cmp ebp, dword ptr [esi + 0x18]
// 00553ec4  7506                 jne 0x553ecc
// 00553ec6  ff1590288000         call dword ptr [0x802890]
// 00553ecc  8b7528               mov esi, dword ptr [ebp + 0x28]
// 00553ecf  85f6                 test esi, esi
// 00553ed1  7412                 je 0x553ee5
// 00553ed3  8d4e04               lea ecx, [esi + 4]
// 00553ed6  ff1568248000         call dword ptr [0x802468]
// 00553edc  56                   push esi
// 00553edd  e898c71400           call 0x6a067a
// 00553ee2  83c404               add esp, 4
// 00553ee5  8d4c2414             lea ecx, [esp + 0x14]
// 00553ee9  e8b2921300           call 0x68d1a0
// 00553eee  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00553ef2  8b742414             mov esi, dword ptr [esp + 0x14]
// 00553ef6  eba8                 jmp 0x553ea0
// 00553ef8  8b36                 mov esi, dword ptr [esi]
// 00553efa  ebc5                 jmp 0x553ec1
// 00553efc  8bcf                 mov ecx, edi
// 00553efe  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00553f06  e86571f1ff           call 0x46b070
// 00553f0b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00553f0f  5f                   pop edi
// 00553f10  5e                   pop esi
// 00553f11  5d                   pop ebp
// 00553f12  5b                   pop ebx
// 00553f13  64890d00000000       mov dword ptr fs:[0], ecx
// 00553f1a  83c418               add esp, 0x18
// 00553f1d  c3                   ret 
// library openrbx-client/App\util\Name.cpp (function ??1NamMap@Name@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp
