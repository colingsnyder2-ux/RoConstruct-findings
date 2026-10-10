// from server: 100% by tester
// roc 2007-03 0047dd50  unit: seg_00470000  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047dd50
//
// 0047dd50  6aff                 push -1
// 0047dd52  68837d7400           push 0x747d83
// 0047dd57  64a100000000         mov eax, dword ptr fs:[0]
// 0047dd5d  50                   push eax
// 0047dd5e  51                   push ecx
// 0047dd5f  53                   push ebx
// 0047dd60  56                   push esi
// 0047dd61  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0047dd66  33c4                 xor eax, esp
// 0047dd68  50                   push eax
// 0047dd69  8d442410             lea eax, [esp + 0x10]
// 0047dd6d  64a300000000         mov dword ptr fs:[0], eax
// 0047dd73  33db                 xor ebx, ebx
// 0047dd75  381d787f8b00         cmp byte ptr [0x8b7f78], bl
// 0047dd7b  895c2418             mov dword ptr [esp + 0x18], ebx
// 0047dd7f  756e                 jne 0x47ddef
// 0047dd81  b810000000           mov eax, 0x10
// 0047dd86  68f0010000           push 0x1f0
// 0047dd8b  c605787f8b0001       mov byte ptr [0x8b7f78], 1
// 0047dd92  885c2462             mov byte ptr [esp + 0x62], bl
// 0047dd96  89442424             mov dword ptr [esp + 0x24], eax
// 0047dd9a  89442428             mov dword ptr [esp + 0x28], eax
// 0047dd9e  885c2461             mov byte ptr [esp + 0x61], bl
// 0047dda2  e861031a00           call 0x61e108
// 0047dda7  83c404               add esp, 4
// 0047ddaa  8944240c             mov dword ptr [esp + 0xc], eax
// 0047ddae  3bc3                 cmp eax, ebx
// 0047ddb0  c644241801           mov byte ptr [esp + 0x18], 1
// 0047ddb5  7412                 je 0x47ddc9
// 0047ddb7  6a01                 push 1
// 0047ddb9  8d4c2424             lea ecx, [esp + 0x24]
// 0047ddbd  51                   push ecx
// 0047ddbe  8bc8                 mov ecx, eax
// 0047ddc0  e84bf7ffff           call 0x47d510
// 0047ddc5  8bf0                 mov esi, eax
// 0047ddc7  eb02                 jmp 0x47ddcb
// 0047ddc9  33f6                 xor esi, esi
// 0047ddcb  8b0d347d8b00         mov ecx, dword ptr [0x8b7d34]
// 0047ddd1  3bf1                 cmp esi, ecx
// 0047ddd3  885c2418             mov byte ptr [esp + 0x18], bl
// 0047ddd7  7410                 je 0x47dde9
// 0047ddd9  3bcb                 cmp ecx, ebx
// 0047dddb  740c                 je 0x47dde9
// 0047dddd  8b11                 mov edx, dword ptr [ecx]
// 0047dddf  8b829c000000         mov eax, dword ptr [edx + 0x9c]
// 0047dde5  6a01                 push 1
// 0047dde7  ffd0                 call eax
// 0047dde9  8935347d8b00         mov dword ptr [0x8b7d34], esi
// 0047ddef  8d4c2460             lea ecx, [esp + 0x60]
// 0047ddf3  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0047ddfb  ff158ce77700         call dword ptr [0x77e78c]
// 0047de01  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047de05  64890d00000000       mov dword ptr fs:[0], ecx
// 0047de0c  59                   pop ecx
// 0047de0d  5e                   pop esi
// 0047de0e  5b                   pop ebx
// 0047de0f  83c410               add esp, 0x10
// 0047de12  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?createShareWindow@Win32Window@G3D@@CAXVSettings@GWindow@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
