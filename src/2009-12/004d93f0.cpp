// roc 2009-12 004d93f0  unit: G3D::Win32Window  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d93f0
//
// 004d93f0  6aff                 push -1
// 004d93f2  688e3d9300           push 0x933d8e
// 004d93f7  64a100000000         mov eax, dword ptr fs:[0]
// 004d93fd  50                   push eax
// 004d93fe  64892500000000       mov dword ptr fs:[0], esp
// 004d9405  51                   push ecx
// 004d9406  53                   push ebx
// 004d9407  33db                 xor ebx, ebx
// 004d9409  56                   push esi
// 004d940a  8bf1                 mov esi, ecx
// 004d940c  895e08               mov dword ptr [esi + 8], ebx
// 004d940f  895e0c               mov dword ptr [esi + 0xc], ebx
// 004d9412  895e04               mov dword ptr [esi + 4], ebx
// 004d9415  57                   push edi
// 004d9416  8974240c             mov dword ptr [esp + 0xc], esi
// 004d941a  895e10               mov dword ptr [esi + 0x10], ebx
// 004d941d  895e14               mov dword ptr [esi + 0x14], ebx
// 004d9420  895e18               mov dword ptr [esi + 0x18], ebx
// 004d9423  0f57c0               xorps xmm0, xmm0
// 004d9426  c706c47d9b00         mov dword ptr [esi], 0x9b7dc4
// 004d942c  8d7e28               lea edi, [esi + 0x28]
// 004d942f  8bcf                 mov ecx, edi
// 004d9431  895c2418             mov dword ptr [esp + 0x18], ebx
// 004d9435  f30f11461c           movss dword ptr [esi + 0x1c], xmm0
// 004d943a  f30f114620           movss dword ptr [esi + 0x20], xmm0
// 004d943f  e8ac84f8ff           call 0x4618f0
// 004d9444  8d8e88000000         lea ecx, [esi + 0x88]
// 004d944a  c644241801           mov byte ptr [esp + 0x18], 1
// 004d944f  ff15e8b69800         call dword ptr [0x98b6e8]
// 004d9455  899eb4010000         mov dword ptr [esi + 0x1b4], ebx
// 004d945b  c786b8010000ac7b9b00 mov dword ptr [esi + 0x1b8], 0x9b7bac
// 004d9465  6a10                 push 0x10
// 004d9467  6a28                 push 0x28
// 004d9469  c644242002           mov byte ptr [esp + 0x20], 2
// 004d946e  c786bc01000090799b00 mov dword ptr [esi + 0x1bc], 0x9b7990
// 004d9478  c786c80100000a000000 mov dword ptr [esi + 0x1c8], 0xa
// 004d9482  899ec0010000         mov dword ptr [esi + 0x1c0], ebx
// 004d9488  e8330e1100           call 0x5ea2c0
// 004d948d  8b8ec8010000         mov ecx, dword ptr [esi + 0x1c8]
// 004d9493  03c9                 add ecx, ecx
// 004d9495  03c9                 add ecx, ecx
// 004d9497  51                   push ecx
// 004d9498  53                   push ebx
// 004d9499  50                   push eax
// 004d949a  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 004d94a0  e81b1b1100           call 0x5eafc0
// 004d94a5  83c414               add esp, 0x14
// 004d94a8  899edc010000         mov dword ptr [esi + 0x1dc], ebx
// 004d94ae  899ee0010000         mov dword ptr [esi + 0x1e0], ebx
// 004d94b4  899ed8010000         mov dword ptr [esi + 0x1d8], ebx
// 004d94ba  c644241804           mov byte ptr [esp + 0x18], 4
// 004d94bf  889eec010000         mov byte ptr [esi + 0x1ec], bl
// 004d94c5  e866f4ffff           call 0x4d8930
// 004d94ca  ff15c0b29800         call dword ptr [0x98b2c0]
// 004d94d0  8b542420             mov edx, dword ptr [esp + 0x20]
// 004d94d4  52                   push edx
// 004d94d5  8bcf                 mov ecx, edi
// 004d94d7  8986d4010000         mov dword ptr [esi + 0x1d4], eax
// 004d94dd  e84ec2ffff           call 0x4d5730
// 004d94e2  8b442424             mov eax, dword ptr [esp + 0x24]
// 004d94e6  50                   push eax
// 004d94e7  ff15b8c99800         call dword ptr [0x98c9b8]
// 004d94ed  53                   push ebx
// 004d94ee  50                   push eax
// 004d94ef  8bce                 mov ecx, esi
// 004d94f1  e8baeaffff           call 0x4d7fb0
// 004d94f6  8bbee8010000         mov edi, dword ptr [esi + 0x1e8]
// 004d94fc  ff15cccb9800         call dword ptr [0x98cbcc]
// 004d9502  3bf8                 cmp edi, eax
// 004d9504  7518                 jne 0x4d951e
// 004d9506  57                   push edi
// 004d9507  ff1564ca9800         call dword ptr [0x98ca64]
// 004d950d  85c0                 test eax, eax
// 004d950f  740d                 je 0x4d951e
// 004d9511  b801000000           mov eax, 1
// 004d9516  8886ae000000         mov byte ptr [esi + 0xae], al
// 004d951c  eb06                 jmp 0x4d9524
// 004d951e  889eae000000         mov byte ptr [esi + 0xae], bl
// 004d9524  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d9528  5f                   pop edi
// 004d9529  8bc6                 mov eax, esi
// 004d952b  5e                   pop esi
// 004d952c  5b                   pop ebx
// 004d952d  64890d00000000       mov dword ptr fs:[0], ecx
// 004d9534  83c410               add esp, 0x10
// 004d9537  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??0Win32Window@G3D@@AAE@ABVSettings@GWindow@1@PAUHDC__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
