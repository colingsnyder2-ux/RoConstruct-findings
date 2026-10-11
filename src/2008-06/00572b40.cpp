// roc 2008-06 00572b40  unit: RBX::ServiceProvider  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00572b40
//
// 00572b40  83ec08               sub esp, 8
// 00572b43  53                   push ebx
// 00572b44  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00572b48  8b4310               mov eax, dword ptr [ebx + 0x10]
// 00572b4b  8b5004               mov edx, dword ptr [eax + 4]
// 00572b4e  55                   push ebp
// 00572b4f  56                   push esi
// 00572b50  57                   push edi
// 00572b51  8bf9                 mov edi, ecx
// 00572b53  8d4b10               lea ecx, [ebx + 0x10]
// 00572b56  ffd2                 call edx
// 00572b58  8944241c             mov dword ptr [esp + 0x1c], eax
// 00572b5c  8d44241c             lea eax, [esp + 0x1c]
// 00572b60  50                   push eax
// 00572b61  8d4c2414             lea ecx, [esp + 0x14]
// 00572b65  8db7a8010000         lea esi, [edi + 0x1a8]
// 00572b6b  51                   push ecx
// 00572b6c  8bce                 mov ecx, esi
// 00572b6e  e85df00100           call 0x591bd0
// 00572b73  8b442410             mov eax, dword ptr [esp + 0x10]
// 00572b77  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 00572b7a  8b36                 mov esi, dword ptr [esi]
// 00572b7c  85c0                 test eax, eax
// 00572b7e  7404                 je 0x572b84
// 00572b80  3bc6                 cmp eax, esi
// 00572b82  7406                 je 0x572b8a
// 00572b84  ff1590288000         call dword ptr [0x802890]
// 00572b8a  396c2414             cmp dword ptr [esp + 0x14], ebp
// 00572b8e  741e                 je 0x572bae
// 00572b90  83ec08               sub esp, 8
// 00572b93  8bc4                 mov eax, esp
// 00572b95  89642424             mov dword ptr [esp + 0x24], esp
// 00572b99  53                   push ebx
// 00572b9a  50                   push eax
// 00572b9b  e8a05e0a00           call 0x618a40
// 00572ba0  83c408               add esp, 8
// 00572ba3  8d8f70010000         lea ecx, [edi + 0x170]
// 00572ba9  e842fdffff           call 0x5728f0
// 00572bae  5f                   pop edi
// 00572baf  5e                   pop esi
// 00572bb0  5d                   pop ebp
// 00572bb1  5b                   pop ebx
// 00572bb2  83c408               add esp, 8
// 00572bb5  c20400               ret 4
// library openrbx-client/App\v8tree\Service.cpp (function ?onChildRemoving@ServiceProvider@RBX@@MAEXPAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Service.cpp
