// from server: 100% by auto
// roc 2010-06 0048b580  unit: G3D::Win32Window  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048b580
//
// 0048b580  6aff                 push -1
// 0048b582  680e629800           push 0x98620e
// 0048b587  64a100000000         mov eax, dword ptr fs:[0]
// 0048b58d  50                   push eax
// 0048b58e  64892500000000       mov dword ptr fs:[0], esp
// 0048b595  51                   push ecx
// 0048b596  53                   push ebx
// 0048b597  33db                 xor ebx, ebx
// 0048b599  56                   push esi
// 0048b59a  8bf1                 mov esi, ecx
// 0048b59c  895e08               mov dword ptr [esi + 8], ebx
// 0048b59f  895e0c               mov dword ptr [esi + 0xc], ebx
// 0048b5a2  895e04               mov dword ptr [esi + 4], ebx
// 0048b5a5  57                   push edi
// 0048b5a6  8974240c             mov dword ptr [esp + 0xc], esi
// 0048b5aa  895e10               mov dword ptr [esi + 0x10], ebx
// 0048b5ad  895e14               mov dword ptr [esi + 0x14], ebx
// 0048b5b0  895e18               mov dword ptr [esi + 0x18], ebx
// 0048b5b3  0f57c0               xorps xmm0, xmm0
// 0048b5b6  c7069c3aa100         mov dword ptr [esi], 0xa13a9c
// 0048b5bc  8d7e28               lea edi, [esi + 0x28]
// 0048b5bf  8bcf                 mov ecx, edi
// 0048b5c1  895c2418             mov dword ptr [esp + 0x18], ebx
// 0048b5c5  f30f11461c           movss dword ptr [esi + 0x1c], xmm0
// 0048b5ca  f30f114620           movss dword ptr [esi + 0x20], xmm0
// 0048b5cf  e81cc0ffff           call 0x4875f0
// 0048b5d4  8d8e88000000         lea ecx, [esi + 0x88]
// 0048b5da  c644241801           mov byte ptr [esp + 0x18], 1
// 0048b5df  ff1504a49e00         call dword ptr [0x9ea404]
// 0048b5e5  899eb4010000         mov dword ptr [esi + 0x1b4], ebx
// 0048b5eb  c786b80100006c38a100 mov dword ptr [esi + 0x1b8], 0xa1386c
// 0048b5f5  6a10                 push 0x10
// 0048b5f7  6a28                 push 0x28
// 0048b5f9  c644242002           mov byte ptr [esp + 0x20], 2
// 0048b5fe  c786bc010000c435a100 mov dword ptr [esi + 0x1bc], 0xa135c4
// 0048b608  c786c80100000a000000 mov dword ptr [esi + 0x1c8], 0xa
// 0048b612  899ec0010000         mov dword ptr [esi + 0x1c0], ebx
// 0048b618  e883220c00           call 0x54d8a0
// 0048b61d  8b8ec8010000         mov ecx, dword ptr [esi + 0x1c8]
// 0048b623  03c9                 add ecx, ecx
// 0048b625  03c9                 add ecx, ecx
// 0048b627  51                   push ecx
// 0048b628  53                   push ebx
// 0048b629  50                   push eax
// 0048b62a  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 0048b630  e86b2f0c00           call 0x54e5a0
// 0048b635  83c414               add esp, 0x14
// 0048b638  899edc010000         mov dword ptr [esi + 0x1dc], ebx
// 0048b63e  899ee0010000         mov dword ptr [esi + 0x1e0], ebx
// 0048b644  899ed8010000         mov dword ptr [esi + 0x1d8], ebx
// 0048b64a  c644241804           mov byte ptr [esp + 0x18], 4
// 0048b64f  889eec010000         mov byte ptr [esi + 0x1ec], bl
// 0048b655  e866f4ffff           call 0x48aac0
// 0048b65a  ff15b0a29e00         call dword ptr [0x9ea2b0]
// 0048b660  8b542420             mov edx, dword ptr [esp + 0x20]
// 0048b664  52                   push edx
// 0048b665  8bcf                 mov ecx, edi
// 0048b667  8986d4010000         mov dword ptr [esi + 0x1d4], eax
// 0048b66d  e8febfffff           call 0x487670
// 0048b672  8b442424             mov eax, dword ptr [esp + 0x24]
// 0048b676  50                   push eax
// 0048b677  ff156cbb9e00         call dword ptr [0x9ebb6c]
// 0048b67d  53                   push ebx
// 0048b67e  50                   push eax
// 0048b67f  8bce                 mov ecx, esi
// 0048b681  e8baeaffff           call 0x48a140
// 0048b686  8bbee8010000         mov edi, dword ptr [esi + 0x1e8]
// 0048b68c  ff155cba9e00         call dword ptr [0x9eba5c]
// 0048b692  3bf8                 cmp edi, eax
// 0048b694  7518                 jne 0x48b6ae
// 0048b696  57                   push edi
// 0048b697  ff15e8bb9e00         call dword ptr [0x9ebbe8]
// 0048b69d  85c0                 test eax, eax
// 0048b69f  740d                 je 0x48b6ae
// 0048b6a1  b801000000           mov eax, 1
// 0048b6a6  8886ae000000         mov byte ptr [esi + 0xae], al
// 0048b6ac  eb06                 jmp 0x48b6b4
// 0048b6ae  889eae000000         mov byte ptr [esi + 0xae], bl
// 0048b6b4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048b6b8  5f                   pop edi
// 0048b6b9  8bc6                 mov eax, esi
// 0048b6bb  5e                   pop esi
// 0048b6bc  5b                   pop ebx
// 0048b6bd  64890d00000000       mov dword ptr fs:[0], ecx
// 0048b6c4  83c410               add esp, 0x10
// 0048b6c7  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??0Win32Window@G3D@@AAE@ABVSettings@GWindow@1@PAUHDC__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
