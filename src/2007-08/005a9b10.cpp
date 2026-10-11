// roc 2007-08 005a9b10  unit: RBX::VHumanoid::?$SignalDesc  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a9b10
//
// 005a9b10  83ec08               sub esp, 8
// 005a9b13  53                   push ebx
// 005a9b14  55                   push ebp
// 005a9b15  56                   push esi
// 005a9b16  57                   push edi
// 005a9b17  8bf9                 mov edi, ecx
// 005a9b19  8b4768               mov eax, dword ptr [edi + 0x68]
// 005a9b1c  8b18                 mov ebx, dword ptr [eax]
// 005a9b1e  8d7764               lea esi, [edi + 0x64]
// 005a9b21  895c2414             mov dword ptr [esp + 0x14], ebx
// 005a9b25  89742410             mov dword ptr [esp + 0x10], esi
// 005a9b29  eb0d                 jmp 0x5a9b38
// 005a9b2b  eb03                 jmp 0x5a9b30
// 005a9b2d  8d4900               lea ecx, [ecx]
// 005a9b30  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a9b34  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005a9b38  85f6                 test esi, esi
// 005a9b3a  8b6f68               mov ebp, dword ptr [edi + 0x68]
// 005a9b3d  8d4764               lea eax, [edi + 0x64]
// 005a9b40  7404                 je 0x5a9b46
// 005a9b42  3bf0                 cmp esi, eax
// 005a9b44  7406                 je 0x5a9b4c
// 005a9b46  ff15d8e67700         call dword ptr [0x77e6d8]
// 005a9b4c  3bdd                 cmp ebx, ebp
// 005a9b4e  7450                 je 0x5a9ba0
// 005a9b50  85f6                 test esi, esi
// 005a9b52  7506                 jne 0x5a9b5a
// 005a9b54  ff15d8e67700         call dword ptr [0x77e6d8]
// 005a9b5a  3b5e04               cmp ebx, dword ptr [esi + 4]
// 005a9b5d  7506                 jne 0x5a9b65
// 005a9b5f  ff15d8e67700         call dword ptr [0x77e6d8]
// 005a9b65  8b730c               mov esi, dword ptr [ebx + 0xc]
// 005a9b68  8d4c2410             lea ecx, [esp + 0x10]
// 005a9b6c  e8cfd60700           call 0x627240
// 005a9b71  8b4e04               mov ecx, dword ptr [esi + 4]
// 005a9b74  8b11                 mov edx, dword ptr [ecx]
// 005a9b76  8b4204               mov eax, dword ptr [edx + 4]
// 005a9b79  ffd0                 call eax
// 005a9b7b  83f808               cmp eax, 8
// 005a9b7e  75b0                 jne 0x5a9b30
// 005a9b80  8b16                 mov edx, dword ptr [esi]
// 005a9b82  8b421c               mov eax, dword ptr [edx + 0x1c]
// 005a9b85  8bce                 mov ecx, esi
// 005a9b87  ffd0                 call eax
// 005a9b89  84c0                 test al, al
// 005a9b8b  74a3                 je 0x5a9b30
// 005a9b8d  56                   push esi
// 005a9b8e  8d4f18               lea ecx, [edi + 0x18]
// 005a9b91  c6475201             mov byte ptr [edi + 0x52], 1
// 005a9b95  e826feffff           call 0x5a99c0
// 005a9b9a  c6475200             mov byte ptr [edi + 0x52], 0
// 005a9b9e  eb90                 jmp 0x5a9b30
// 005a9ba0  5f                   pop edi
// 005a9ba1  5e                   pop esi
// 005a9ba2  5d                   pop ebp
// 005a9ba3  5b                   pop ebx
// 005a9ba4  83c408               add esp, 8
// 005a9ba7  c3                   ret 
// library openrbx-client/App\v8world\World.cpp (function ?doBreakJoints@World@RBX@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
