// from server: 100% by auto
// roc 2009-06 004ac8f0  unit: G3D::Win32Window  size: 325 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ac8f0
//
// 004ac8f0  6aff                 push -1
// 004ac8f2  688e7e8500           push 0x857e8e
// 004ac8f7  64a100000000         mov eax, dword ptr fs:[0]
// 004ac8fd  50                   push eax
// 004ac8fe  64892500000000       mov dword ptr fs:[0], esp
// 004ac905  51                   push ecx
// 004ac906  53                   push ebx
// 004ac907  33db                 xor ebx, ebx
// 004ac909  56                   push esi
// 004ac90a  8bf1                 mov esi, ecx
// 004ac90c  895e08               mov dword ptr [esi + 8], ebx
// 004ac90f  895e0c               mov dword ptr [esi + 0xc], ebx
// 004ac912  895e04               mov dword ptr [esi + 4], ebx
// 004ac915  57                   push edi
// 004ac916  8974240c             mov dword ptr [esp + 0xc], esi
// 004ac91a  895e10               mov dword ptr [esi + 0x10], ebx
// 004ac91d  895e14               mov dword ptr [esi + 0x14], ebx
// 004ac920  895e18               mov dword ptr [esi + 0x18], ebx
// 004ac923  d9ee                 fldz 
// 004ac925  c706cc248c00         mov dword ptr [esi], 0x8c24cc
// 004ac92b  d9561c               fst dword ptr [esi + 0x1c]
// 004ac92e  8d7e28               lea edi, [esi + 0x28]
// 004ac931  d95e20               fstp dword ptr [esi + 0x20]
// 004ac934  8bcf                 mov ecx, edi
// 004ac936  895c2418             mov dword ptr [esp + 0x18], ebx
// 004ac93a  e8f1d6faff           call 0x45a030
// 004ac93f  8d8e88000000         lea ecx, [esi + 0x88]
// 004ac945  c644241801           mov byte ptr [esp + 0x18], 1
// 004ac94a  ff15c0e48900         call dword ptr [0x89e4c0]
// 004ac950  899eb4010000         mov dword ptr [esi + 0x1b4], ebx
// 004ac956  c786b8010000b4228c00 mov dword ptr [esi + 0x1b8], 0x8c22b4
// 004ac960  6a10                 push 0x10
// 004ac962  6a28                 push 0x28
// 004ac964  c644242002           mov byte ptr [esp + 0x20], 2
// 004ac969  c786bc010000a8208c00 mov dword ptr [esi + 0x1bc], 0x8c20a8
// 004ac973  c786c80100000a000000 mov dword ptr [esi + 0x1c8], 0xa
// 004ac97d  899ec0010000         mov dword ptr [esi + 0x1c0], ebx
// 004ac983  e8e8e70b00           call 0x56b170
// 004ac988  8b8ec8010000         mov ecx, dword ptr [esi + 0x1c8]
// 004ac98e  03c9                 add ecx, ecx
// 004ac990  03c9                 add ecx, ecx
// 004ac992  51                   push ecx
// 004ac993  53                   push ebx
// 004ac994  50                   push eax
// 004ac995  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 004ac99b  e8f0f40b00           call 0x56be90
// 004ac9a0  83c414               add esp, 0x14
// 004ac9a3  899edc010000         mov dword ptr [esi + 0x1dc], ebx
// 004ac9a9  899ee0010000         mov dword ptr [esi + 0x1e0], ebx
// 004ac9af  899ed8010000         mov dword ptr [esi + 0x1d8], ebx
// 004ac9b5  c644241804           mov byte ptr [esp + 0x18], 4
// 004ac9ba  889eec010000         mov byte ptr [esi + 0x1ec], bl
// 004ac9c0  e88bf4ffff           call 0x4abe50
// 004ac9c5  ff1594e28900         call dword ptr [0x89e294]
// 004ac9cb  8b542420             mov edx, dword ptr [esp + 0x20]
// 004ac9cf  52                   push edx
// 004ac9d0  8bcf                 mov ecx, edi
// 004ac9d2  8986d4010000         mov dword ptr [esi + 0x1d4], eax
// 004ac9d8  e883c1ffff           call 0x4a8b60
// 004ac9dd  8b442424             mov eax, dword ptr [esp + 0x24]
// 004ac9e1  50                   push eax
// 004ac9e2  ff152ced8900         call dword ptr [0x89ed2c]
// 004ac9e8  53                   push ebx
// 004ac9e9  50                   push eax
// 004ac9ea  8bce                 mov ecx, esi
// 004ac9ec  e8efeaffff           call 0x4ab4e0
// 004ac9f1  8bbee8010000         mov edi, dword ptr [esi + 0x1e8]
// 004ac9f7  ff1588ee8900         call dword ptr [0x89ee88]
// 004ac9fd  3bf8                 cmp edi, eax
// 004ac9ff  7518                 jne 0x4aca19
// 004aca01  57                   push edi
// 004aca02  ff15c8ed8900         call dword ptr [0x89edc8]
// 004aca08  85c0                 test eax, eax
// 004aca0a  740d                 je 0x4aca19
// 004aca0c  b801000000           mov eax, 1
// 004aca11  8886ae000000         mov byte ptr [esi + 0xae], al
// 004aca17  eb06                 jmp 0x4aca1f
// 004aca19  889eae000000         mov byte ptr [esi + 0xae], bl
// 004aca1f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004aca23  5f                   pop edi
// 004aca24  8bc6                 mov eax, esi
// 004aca26  5e                   pop esi
// 004aca27  5b                   pop ebx
// 004aca28  64890d00000000       mov dword ptr fs:[0], ecx
// 004aca2f  83c410               add esp, 0x10
// 004aca32  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??0Win32Window@G3D@@AAE@ABVSettings@GWindow@1@PAUHDC__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
