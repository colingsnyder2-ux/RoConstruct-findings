// from server: 100% by auto
// roc 2012-06 00a6c220  unit: CXTPScrollBase  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6c220
//
// 00a6c220  55                   push ebp
// 00a6c221  8be9                 mov ebp, ecx
// 00a6c223  56                   push esi
// 00a6c224  8b7560               mov esi, dword ptr [ebp + 0x60]
// 00a6c227  85f6                 test esi, esi
// 00a6c229  7476                 je 0xa6c2a1
// 00a6c22b  53                   push ebx
// 00a6c22c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00a6c230  3b5e20               cmp ebx, dword ptr [esi + 0x20]
// 00a6c233  746b                 je 0xa6c2a0
// 00a6c235  57                   push edi
// 00a6c236  8b7e34               mov edi, dword ptr [esi + 0x34]
// 00a6c239  53                   push ebx
// 00a6c23a  57                   push edi
// 00a6c23b  e870ffffff           call 0xa6c1b0
// 00a6c240  83c408               add esp, 8
// 00a6c243  894628               mov dword ptr [esi + 0x28], eax
// 00a6c246  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00a6c249  743c                 je 0xa6c287
// 00a6c24b  eb03                 jmp 0xa6c250
// 00a6c24d  8d4900               lea ecx, [ecx]
// 00a6c250  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00a6c253  8b4500               mov eax, dword ptr [ebp]
// 00a6c256  8b5018               mov edx, dword ptr [eax + 0x18]
// 00a6c259  51                   push ecx
// 00a6c25a  6a05                 push 5
// 00a6c25c  8bcd                 mov ecx, ebp
// 00a6c25e  ffd2                 call edx
// 00a6c260  8b4628               mov eax, dword ptr [esi + 0x28]
// 00a6c263  894624               mov dword ptr [esi + 0x24], eax
// 00a6c266  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 00a6c269  8b573c               mov edx, dword ptr [edi + 0x3c]
// 00a6c26c  8d0411               lea eax, [ecx + edx]
// 00a6c26f  3bd8                 cmp ebx, eax
// 00a6c271  7c14                 jl 0xa6c287
// 00a6c273  8bd8                 mov ebx, eax
// 00a6c275  53                   push ebx
// 00a6c276  57                   push edi
// 00a6c277  e834ffffff           call 0xa6c1b0
// 00a6c27c  83c408               add esp, 8
// 00a6c27f  894628               mov dword ptr [esi + 0x28], eax
// 00a6c282  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00a6c285  75c9                 jne 0xa6c250
// 00a6c287  8b4720               mov eax, dword ptr [edi + 0x20]
// 00a6c28a  03c3                 add eax, ebx
// 00a6c28c  894730               mov dword ptr [edi + 0x30], eax
// 00a6c28f  895f34               mov dword ptr [edi + 0x34], ebx
// 00a6c292  895e20               mov dword ptr [esi + 0x20], ebx
// 00a6c295  8b5500               mov edx, dword ptr [ebp]
// 00a6c298  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00a6c29b  8bcd                 mov ecx, ebp
// 00a6c29d  ffd0                 call eax
// 00a6c29f  5f                   pop edi
// 00a6c2a0  5b                   pop ebx
// 00a6c2a1  5e                   pop esi
// 00a6c2a2  5d                   pop ebp
// 00a6c2a3  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPScrollBase.cpp (function ?MoveThumb@CXTPScrollBase@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPScrollBase.cpp
