// roc 2010-06 007907a0  unit: RBX::GroupDragTool  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007907a0
//
// 007907a0  8b442404             mov eax, dword ptr [esp + 4]
// 007907a4  55                   push ebp
// 007907a5  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 007907a9  56                   push esi
// 007907aa  50                   push eax
// 007907ab  8bc5                 mov eax, ebp
// 007907ad  8bf3                 mov esi, ebx
// 007907af  e8ecf1ffff           call 0x78f9a0
// 007907b4  83c404               add esp, 4
// 007907b7  85c0                 test eax, eax
// 007907b9  0f85c6000000         jne 0x790885
// 007907bf  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007907c3  83f812               cmp eax, 0x12
// 007907c6  7413                 je 0x7907db
// 007907c8  83f814               cmp eax, 0x14
// 007907cb  740e                 je 0x7907db
// 007907cd  55                   push ebp
// 007907ce  57                   push edi
// 007907cf  e88cfaffff           call 0x790260
// 007907d4  83c408               add esp, 8
// 007907d7  8bf0                 mov esi, eax
// 007907d9  eb02                 jmp 0x7907dd
// 007907db  33f6                 xor esi, esi
// 007907dd  53                   push ebx
// 007907de  57                   push edi
// 007907df  e87cfaffff           call 0x790260
// 007907e4  83c408               add esp, 8
// 007907e7  3bc6                 cmp eax, esi
// 007907e9  7e39                 jle 0x790824
// 007907eb  833b0c               cmp dword ptr [ebx], 0xc
// 007907ee  7516                 jne 0x790806
// 007907f0  8b4b08               mov ecx, dword ptr [ebx + 8]
// 007907f3  f7c100010000         test ecx, 0x100
// 007907f9  750b                 jne 0x790806
// 007907fb  0fb65732             movzx edx, byte ptr [edi + 0x32]
// 007907ff  3bca                 cmp ecx, edx
// 00790801  7c03                 jl 0x790806
// 00790803  ff4f24               dec dword ptr [edi + 0x24]
// 00790806  837d000c             cmp dword ptr [ebp], 0xc
// 0079080a  7552                 jne 0x79085e
// 0079080c  8b6d08               mov ebp, dword ptr [ebp + 8]
// 0079080f  f7c500010000         test ebp, 0x100
// 00790815  7547                 jne 0x79085e
// 00790817  0fb64f32             movzx ecx, byte ptr [edi + 0x32]
// 0079081b  3be9                 cmp ebp, ecx
// 0079081d  7c3f                 jl 0x79085e
// 0079081f  ff4f24               dec dword ptr [edi + 0x24]
// 00790822  eb3a                 jmp 0x79085e
// 00790824  83caff               or edx, 0xffffffff
// 00790827  837d000c             cmp dword ptr [ebp], 0xc
// 0079082b  7516                 jne 0x790843
// 0079082d  8b6d08               mov ebp, dword ptr [ebp + 8]
// 00790830  f7c500010000         test ebp, 0x100
// 00790836  750b                 jne 0x790843
// 00790838  0fb64f32             movzx ecx, byte ptr [edi + 0x32]
// 0079083c  3be9                 cmp ebp, ecx
// 0079083e  7c03                 jl 0x790843
// 00790840  015724               add dword ptr [edi + 0x24], edx
// 00790843  833b0c               cmp dword ptr [ebx], 0xc
// 00790846  7516                 jne 0x79085e
// 00790848  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0079084b  f7c100010000         test ecx, 0x100
// 00790851  750b                 jne 0x79085e
// 00790853  0fb66f32             movzx ebp, byte ptr [edi + 0x32]
// 00790857  3bcd                 cmp ecx, ebp
// 00790859  7c03                 jl 0x79085e
// 0079085b  015724               add dword ptr [edi + 0x24], edx
// 0079085e  8b570c               mov edx, dword ptr [edi + 0xc]
// 00790861  8b4a08               mov ecx, dword ptr [edx + 8]
// 00790864  c1e009               shl eax, 9
// 00790867  0bc6                 or eax, esi
// 00790869  c1e00e               shl eax, 0xe
// 0079086c  0b44240c             or eax, dword ptr [esp + 0xc]
// 00790870  51                   push ecx
// 00790871  50                   push eax
// 00790872  8bf7                 mov esi, edi
// 00790874  e847f2ffff           call 0x78fac0
// 00790879  83c408               add esp, 8
// 0079087c  894308               mov dword ptr [ebx + 8], eax
// 0079087f  c7030b000000         mov dword ptr [ebx], 0xb
// 00790885  5e                   pop esi
// 00790886  5d                   pop ebp
// 00790887  c3                   ret 
// library lua-5.1.4/lcode.c (function _codearith)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
