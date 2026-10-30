// from server: 100% by auto
// roc 2008-06 0079e400  unit: CXTPScrollBase  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079e400
//
// 0079e400  55                   push ebp
// 0079e401  8be9                 mov ebp, ecx
// 0079e403  56                   push esi
// 0079e404  8b7560               mov esi, dword ptr [ebp + 0x60]
// 0079e407  85f6                 test esi, esi
// 0079e409  7476                 je 0x79e481
// 0079e40b  53                   push ebx
// 0079e40c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0079e410  3b5e20               cmp ebx, dword ptr [esi + 0x20]
// 0079e413  746b                 je 0x79e480
// 0079e415  57                   push edi
// 0079e416  8b7e34               mov edi, dword ptr [esi + 0x34]
// 0079e419  53                   push ebx
// 0079e41a  57                   push edi
// 0079e41b  e870ffffff           call 0x79e390
// 0079e420  83c408               add esp, 8
// 0079e423  894628               mov dword ptr [esi + 0x28], eax
// 0079e426  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0079e429  743c                 je 0x79e467
// 0079e42b  eb03                 jmp 0x79e430
// 0079e42d  8d4900               lea ecx, [ecx]
// 0079e430  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0079e433  8b4500               mov eax, dword ptr [ebp]
// 0079e436  8b5018               mov edx, dword ptr [eax + 0x18]
// 0079e439  51                   push ecx
// 0079e43a  6a05                 push 5
// 0079e43c  8bcd                 mov ecx, ebp
// 0079e43e  ffd2                 call edx
// 0079e440  8b4628               mov eax, dword ptr [esi + 0x28]
// 0079e443  894624               mov dword ptr [esi + 0x24], eax
// 0079e446  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 0079e449  8b573c               mov edx, dword ptr [edi + 0x3c]
// 0079e44c  8d0411               lea eax, [ecx + edx]
// 0079e44f  3bd8                 cmp ebx, eax
// 0079e451  7c14                 jl 0x79e467
// 0079e453  8bd8                 mov ebx, eax
// 0079e455  53                   push ebx
// 0079e456  57                   push edi
// 0079e457  e834ffffff           call 0x79e390
// 0079e45c  83c408               add esp, 8
// 0079e45f  894628               mov dword ptr [esi + 0x28], eax
// 0079e462  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0079e465  75c9                 jne 0x79e430
// 0079e467  8b4720               mov eax, dword ptr [edi + 0x20]
// 0079e46a  03c3                 add eax, ebx
// 0079e46c  894730               mov dword ptr [edi + 0x30], eax
// 0079e46f  895f34               mov dword ptr [edi + 0x34], ebx
// 0079e472  895e20               mov dword ptr [esi + 0x20], ebx
// 0079e475  8b5500               mov edx, dword ptr [ebp]
// 0079e478  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0079e47b  8bcd                 mov ecx, ebp
// 0079e47d  ffd0                 call eax
// 0079e47f  5f                   pop edi
// 0079e480  5b                   pop ebx
// 0079e481  5e                   pop esi
// 0079e482  5d                   pop ebp
// 0079e483  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?MoveThumb@CXTPScrollBase@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
