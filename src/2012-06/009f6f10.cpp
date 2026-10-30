// roc 2012-06 009f6f10  unit: CXTCaptionButton  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f6f10
//
// 009f6f10  6aff                 push -1
// 009f6f12  68ce25ae00           push 0xae25ce
// 009f6f17  64a100000000         mov eax, dword ptr fs:[0]
// 009f6f1d  50                   push eax
// 009f6f1e  51                   push ecx
// 009f6f1f  53                   push ebx
// 009f6f20  56                   push esi
// 009f6f21  57                   push edi
// 009f6f22  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009f6f27  33c4                 xor eax, esp
// 009f6f29  50                   push eax
// 009f6f2a  8d442414             lea eax, [esp + 0x14]
// 009f6f2e  64a300000000         mov dword ptr fs:[0], eax
// 009f6f34  8bf1                 mov esi, ecx
// 009f6f36  89742410             mov dword ptr [esp + 0x10], esi
// 009f6f3a  e887baf8ff           call 0x9829c6
// 009f6f3f  c706a4a8c100         mov dword ptr [esi], 0xc1a8a4
// 009f6f45  33db                 xor ebx, ebx
// 009f6f47  895c241c             mov dword ptr [esp + 0x1c], ebx
// 009f6f4b  8d7e54               lea edi, [esi + 0x54]
// 009f6f4e  e8bdfbffff           call 0x9f6b10
// 009f6f53  50                   push eax
// 009f6f54  8bcf                 mov ecx, edi
// 009f6f56  e895fefeff           call 0x9e6df0
// 009f6f5b  c7070ca7c100         mov dword ptr [edi], 0xc1a70c
// 009f6f61  8dbed0000000         lea edi, [esi + 0xd0]
// 009f6f67  8bcf                 mov ecx, edi
// 009f6f69  c7061ca7c100         mov dword ptr [esi], 0xc1a71c
// 009f6f6f  ff158447b200         call dword ptr [0xb24784]
// 009f6f75  8d8ed4000000         lea ecx, [esi + 0xd4]
// 009f6f7b  c644241c02           mov byte ptr [esp + 0x1c], 2
// 009f6f80  e809b9f8ff           call 0x98288e
// 009f6f85  8d8edc000000         lea ecx, [esi + 0xdc]
// 009f6f8b  c644241c03           mov byte ptr [esp + 0x1c], 3
// 009f6f90  e83bfbffff           call 0x9f6ad0
// 009f6f95  68e83bb400           push 0xb43be8
// 009f6f9a  8bcf                 mov ecx, edi
// 009f6f9c  c644242004           mov byte ptr [esp + 0x20], 4
// 009f6fa1  889e81000000         mov byte ptr [esi + 0x81], bl
// 009f6fa7  889e80000000         mov byte ptr [esi + 0x80], bl
// 009f6fad  ff157847b200         call dword ptr [0xb24778]
// 009f6fb3  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 009f6fb9  899e84000000         mov dword ptr [esi + 0x84], ebx
// 009f6fbf  899e88000000         mov dword ptr [esi + 0x88], ebx
// 009f6fc5  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 009f6fcb  899e8c010000         mov dword ptr [esi + 0x18c], ebx
// 009f6fd1  895e7c               mov dword ptr [esi + 0x7c], ebx
// 009f6fd4  895e6c               mov dword ptr [esi + 0x6c], ebx
// 009f6fd7  e87472ffff           call 0x9ee250
// 009f6fdc  bf10000000           mov edi, 0x10
// 009f6fe1  39b8c0000000         cmp dword ptr [eax + 0xc0], edi
// 009f6fe7  7d0d                 jge 0x9f6ff6
// 009f6fe9  e86272ffff           call 0x9ee250
// 009f6fee  8b80c0000000         mov eax, dword ptr [eax + 0xc0]
// 009f6ff4  eb02                 jmp 0x9f6ff8
// 009f6ff6  8bc7                 mov eax, edi
// 009f6ff8  898690000000         mov dword ptr [esi + 0x90], eax
// 009f6ffe  e84d72ffff           call 0x9ee250
// 009f7003  39b8c4000000         cmp dword ptr [eax + 0xc4], edi
// 009f7009  7d0d                 jge 0x9f7018
// 009f700b  e84072ffff           call 0x9ee250
// 009f7010  8b80c4000000         mov eax, dword ptr [eax + 0xc4]
// 009f7016  eb02                 jmp 0x9f701a
// 009f7018  8bc7                 mov eax, edi
// 009f701a  8b3dd83cb200         mov edi, dword ptr [0xb23cd8]
// 009f7020  6a12                 push 0x12
// 009f7022  898694000000         mov dword ptr [esi + 0x94], eax
// 009f7028  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 009f702e  ffd7                 call edi
// 009f7030  6a0f                 push 0xf
// 009f7032  894678               mov dword ptr [esi + 0x78], eax
// 009f7035  ffd7                 call edi
// 009f7037  6a0f                 push 0xf
// 009f7039  894670               mov dword ptr [esi + 0x70], eax
// 009f703c  ffd7                 call edi
// 009f703e  894674               mov dword ptr [esi + 0x74], eax
// 009f7041  8bc6                 mov eax, esi
// 009f7043  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009f7047  64890d00000000       mov dword ptr fs:[0], ecx
// 009f704e  59                   pop ecx
// 009f704f  5f                   pop edi
// 009f7050  5e                   pop esi
// 009f7051  5b                   pop ebx
// 009f7052  83c410               add esp, 0x10
// 009f7055  c3                   ret 
// copied from an identical function in another client (function ??0CXTCaption@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaption.cpp