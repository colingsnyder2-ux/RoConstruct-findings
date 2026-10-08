// from server: 100% by auto
// roc 2010-06 00557da0  unit: seg_00550000  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00557da0
//
// 00557da0  6aff                 push -1
// 00557da2  6873139900           push 0x991373
// 00557da7  64a100000000         mov eax, dword ptr fs:[0]
// 00557dad  50                   push eax
// 00557dae  64892500000000       mov dword ptr fs:[0], esp
// 00557db5  51                   push ecx
// 00557db6  53                   push ebx
// 00557db7  56                   push esi
// 00557db8  8bf1                 mov esi, ecx
// 00557dba  57                   push edi
// 00557dbb  8d7e0c               lea edi, [esi + 0xc]
// 00557dbe  8bcf                 mov ecx, edi
// 00557dc0  8974240c             mov dword ptr [esp + 0xc], esi
// 00557dc4  ff1504a49e00         call dword ptr [0x9ea404]
// 00557dca  33db                 xor ebx, ebx
// 00557dcc  895c2418             mov dword ptr [esp + 0x18], ebx
// 00557dd0  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00557dd3  895e30               mov dword ptr [esi + 0x30], ebx
// 00557dd6  895e28               mov dword ptr [esi + 0x28], ebx
// 00557dd9  8d4e54               lea ecx, [esi + 0x54]
// 00557ddc  c644241801           mov byte ptr [esp + 0x18], 1
// 00557de1  c7463401000000       mov dword ptr [esi + 0x34], 1
// 00557de8  885e38               mov byte ptr [esi + 0x38], bl
// 00557deb  c7463c50000000       mov dword ptr [esi + 0x3c], 0x50
// 00557df2  c7464004000000       mov dword ptr [esi + 0x40], 4
// 00557df9  c6464801             mov byte ptr [esi + 0x48], 1
// 00557dfd  895e44               mov dword ptr [esi + 0x44], ebx
// 00557e00  ff1504a49e00         call dword ptr [0x9ea404]
// 00557e06  8b442420             mov eax, dword ptr [esp + 0x20]
// 00557e0a  50                   push eax
// 00557e0b  8bce                 mov ecx, esi
// 00557e0d  c644241c02           mov byte ptr [esp + 0x1c], 2
// 00557e12  e829f9ffff           call 0x557740
// 00557e17  68fe08a000           push 0xa008fe
// 00557e1c  8bcf                 mov ecx, edi
// 00557e1e  ff151ca49e00         call dword ptr [0x9ea41c]
// 00557e24  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00557e28  895e4c               mov dword ptr [esi + 0x4c], ebx
// 00557e2b  895e50               mov dword ptr [esi + 0x50], ebx
// 00557e2e  895e04               mov dword ptr [esi + 4], ebx
// 00557e31  885e08               mov byte ptr [esi + 8], bl
// 00557e34  5f                   pop edi
// 00557e35  c60601               mov byte ptr [esi], 1
// 00557e38  8bc6                 mov eax, esi
// 00557e3a  5e                   pop esi
// 00557e3b  5b                   pop ebx
// 00557e3c  64890d00000000       mov dword ptr fs:[0], ecx
// 00557e43  83c410               add esp, 0x10
// 00557e46  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ??0TextOutput@G3D@@QAE@ABVOptions@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
