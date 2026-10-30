// roc 2007-03 00527dc0  unit: seg_00520000  size: 386 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00527dc0
//
// 00527dc0  83ec08               sub esp, 8
// 00527dc3  53                   push ebx
// 00527dc4  8a5c2414             mov bl, byte ptr [esp + 0x14]
// 00527dc8  55                   push ebp
// 00527dc9  56                   push esi
// 00527dca  8b742418             mov esi, dword ptr [esp + 0x18]
// 00527dce  8bae5c010000         mov ebp, dword ptr [esi + 0x15c]
// 00527dd4  57                   push edi
// 00527dd5  33ff                 xor edi, edi
// 00527dd7  897520               mov dword ptr [ebp + 0x20], esi
// 00527dda  885d0c               mov byte ptr [ebp + 0xc], bl
// 00527ddd  39be2c010000         cmp dword ptr [esi + 0x12c], edi
// 00527de3  0f94c0               sete al
// 00527de6  39be34010000         cmp dword ptr [esi + 0x134], edi
// 00527dec  88442410             mov byte ptr [esp + 0x10], al
// 00527df0  7516                 jne 0x527e08
// 00527df2  84c0                 test al, al
// 00527df4  7409                 je 0x527dff
// 00527df6  c74504b0765200       mov dword ptr [ebp + 4], 0x5276b0
// 00527dfd  eb37                 jmp 0x527e36
// 00527dff  c7450400785200       mov dword ptr [ebp + 4], 0x527800
// 00527e06  eb2e                 jmp 0x527e36
// 00527e08  84c0                 test al, al
// 00527e0a  7409                 je 0x527e15
// 00527e0c  c74504c0795200       mov dword ptr [ebp + 4], 0x5279c0
// 00527e13  eb21                 jmp 0x527e36
// 00527e15  397d40               cmp dword ptr [ebp + 0x40], edi
// 00527e18  c74504807a5200       mov dword ptr [ebp + 4], 0x527a80
// 00527e1f  7515                 jne 0x527e36
// 00527e21  8b4604               mov eax, dword ptr [esi + 4]
// 00527e24  8b08                 mov ecx, dword ptr [eax]
// 00527e26  68e8030000           push 0x3e8
// 00527e2b  6a01                 push 1
// 00527e2d  56                   push esi
// 00527e2e  ffd1                 call ecx
// 00527e30  83c40c               add esp, 0xc
// 00527e33  894540               mov dword ptr [ebp + 0x40], eax
// 00527e36  84db                 test bl, bl
// 00527e38  7409                 je 0x527e43
// 00527e3a  c74508f07c5200       mov dword ptr [ebp + 8], 0x527cf0
// 00527e41  eb07                 jmp 0x527e4a
// 00527e43  c74508b07c5200       mov dword ptr [ebp + 8], 0x527cb0
// 00527e4a  39bee4000000         cmp dword ptr [esi + 0xe4], edi
// 00527e50  897c2414             mov dword ptr [esp + 0x14], edi
// 00527e54  0f8ec8000000         jle 0x527f22
// 00527e5a  8d5524               lea edx, [ebp + 0x24]
// 00527e5d  8954241c             mov dword ptr [esp + 0x1c], edx
// 00527e61  8d9ee8000000         lea ebx, [esi + 0xe8]
// 00527e67  eb07                 jmp 0x527e70
// 00527e69  8da42400000000       lea esp, [esp]
// 00527e70  807c241000           cmp byte ptr [esp + 0x10], 0
// 00527e75  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00527e79  8b03                 mov eax, dword ptr [ebx]
// 00527e7b  8939                 mov dword ptr [ecx], edi
// 00527e7d  740d                 je 0x527e8c
// 00527e7f  39be34010000         cmp dword ptr [esi + 0x134], edi
// 00527e85  757c                 jne 0x527f03
// 00527e87  8b7814               mov edi, dword ptr [eax + 0x14]
// 00527e8a  eb06                 jmp 0x527e92
// 00527e8c  8b7818               mov edi, dword ptr [eax + 0x18]
// 00527e8f  897d34               mov dword ptr [ebp + 0x34], edi
// 00527e92  807c242000           cmp byte ptr [esp + 0x20], 0
// 00527e97  7454                 je 0x527eed
// 00527e99  85ff                 test edi, edi
// 00527e9b  7c05                 jl 0x527ea2
// 00527e9d  83ff04               cmp edi, 4
// 00527ea0  7c18                 jl 0x527eba
// 00527ea2  8b16                 mov edx, dword ptr [esi]
// 00527ea4  c7421432000000       mov dword ptr [edx + 0x14], 0x32
// 00527eab  8b06                 mov eax, dword ptr [esi]
// 00527ead  897818               mov dword ptr [eax + 0x18], edi
// 00527eb0  8b0e                 mov ecx, dword ptr [esi]
// 00527eb2  8b11                 mov edx, dword ptr [ecx]
// 00527eb4  56                   push esi
// 00527eb5  ffd2                 call edx
// 00527eb7  83c404               add esp, 4
// 00527eba  837cbd5c00           cmp dword ptr [ebp + edi*4 + 0x5c], 0
// 00527ebf  7516                 jne 0x527ed7
// 00527ec1  8b4604               mov eax, dword ptr [esi + 4]
// 00527ec4  8b08                 mov ecx, dword ptr [eax]
// 00527ec6  6804040000           push 0x404
// 00527ecb  6a01                 push 1
// 00527ecd  56                   push esi
// 00527ece  ffd1                 call ecx
// 00527ed0  83c40c               add esp, 0xc
// 00527ed3  8944bd5c             mov dword ptr [ebp + edi*4 + 0x5c], eax
// 00527ed7  8b54bd5c             mov edx, dword ptr [ebp + edi*4 + 0x5c]
// 00527edb  6804040000           push 0x404
// 00527ee0  6a00                 push 0
// 00527ee2  52                   push edx
// 00527ee3  e834710f00           call 0x61f01c
// 00527ee8  83c40c               add esp, 0xc
// 00527eeb  eb14                 jmp 0x527f01
// 00527eed  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00527ef1  8d44bd4c             lea eax, [ebp + edi*4 + 0x4c]
// 00527ef5  50                   push eax
// 00527ef6  57                   push edi
// 00527ef7  51                   push ecx
// 00527ef8  56                   push esi
// 00527ef9  e822e6ffff           call 0x526520
// 00527efe  83c410               add esp, 0x10
// 00527f01  33ff                 xor edi, edi
// 00527f03  8b442414             mov eax, dword ptr [esp + 0x14]
// 00527f07  8344241c04           add dword ptr [esp + 0x1c], 4
// 00527f0c  83c001               add eax, 1
// 00527f0f  83c304               add ebx, 4
// 00527f12  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 00527f18  89442414             mov dword ptr [esp + 0x14], eax
// 00527f1c  0f8c4effffff         jl 0x527e70
// 00527f22  897d38               mov dword ptr [ebp + 0x38], edi
// 00527f25  897d3c               mov dword ptr [ebp + 0x3c], edi
// 00527f28  897d18               mov dword ptr [ebp + 0x18], edi
// 00527f2b  897d1c               mov dword ptr [ebp + 0x1c], edi
// 00527f2e  8b96bc000000         mov edx, dword ptr [esi + 0xbc]
// 00527f34  897d48               mov dword ptr [ebp + 0x48], edi
// 00527f37  5f                   pop edi
// 00527f38  5e                   pop esi
// 00527f39  895544               mov dword ptr [ebp + 0x44], edx
// 00527f3c  5d                   pop ebp
// 00527f3d  5b                   pop ebx
// 00527f3e  83c408               add esp, 8
// 00527f41  c3                   ret 
// library jpeg-6b/jcphuff.c (function _start_pass_phuff)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
