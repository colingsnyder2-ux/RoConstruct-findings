// from server: 100% by auto
// roc 2008-06 00482ba0  unit: G3D::Win32Window  size: 370 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00482ba0
//
// 00482ba0  6aff                 push -1
// 00482ba2  68fe537c00           push 0x7c53fe
// 00482ba7  64a100000000         mov eax, dword ptr fs:[0]
// 00482bad  50                   push eax
// 00482bae  64892500000000       mov dword ptr fs:[0], esp
// 00482bb5  51                   push ecx
// 00482bb6  53                   push ebx
// 00482bb7  56                   push esi
// 00482bb8  8bf1                 mov esi, ecx
// 00482bba  57                   push edi
// 00482bbb  8974240c             mov dword ptr [esp + 0xc], esi
// 00482bbf  c7062cf58100         mov dword ptr [esi], 0x81f52c
// 00482bc5  33db                 xor ebx, ebx
// 00482bc7  c744241804000000     mov dword ptr [esp + 0x18], 4
// 00482bcf  3935f4ef9600         cmp dword ptr [0x96eff4], esi
// 00482bd5  7550                 jne 0x482c27
// 00482bd7  53                   push ebx
// 00482bd8  53                   push ebx
// 00482bd9  ff15382a8000         call dword ptr [0x802a38]
// 00482bdf  389eec010000         cmp byte ptr [esi + 0x1ec], bl
// 00482be5  7469                 je 0x482c50
// 00482be7  80beac00000001       cmp byte ptr [esi + 0xac], 1
// 00482bee  895e14               mov dword ptr [esi + 0x14], ebx
// 00482bf1  741c                 je 0x482c0f
// 00482bf3  8b3de82c8000         mov edi, dword ptr [0x802ce8]
// 00482bf9  8da42400000000       lea esp, [esp]
// 00482c00  6a01                 push 1
// 00482c02  ffd7                 call edi
// 00482c04  85c0                 test eax, eax
// 00482c06  7cf8                 jl 0x482c00
// 00482c08  c686ac00000001       mov byte ptr [esi + 0xac], 1
// 00482c0f  895e10               mov dword ptr [esi + 0x10], ebx
// 00482c12  389ead000000         cmp byte ptr [esi + 0xad], bl
// 00482c18  740d                 je 0x482c27
// 00482c1a  53                   push ebx
// 00482c1b  889ead000000         mov byte ptr [esi + 0xad], bl
// 00482c21  ff15e42c8000         call dword ptr [0x802ce4]
// 00482c27  389eec010000         cmp byte ptr [esi + 0x1ec], bl
// 00482c2d  7421                 je 0x482c50
// 00482c2f  8b86e8010000         mov eax, dword ptr [esi + 0x1e8]
// 00482c35  53                   push ebx
// 00482c36  6aeb                 push -0x15
// 00482c38  50                   push eax
// 00482c39  ff15d82d8000         call dword ptr [0x802dd8]
// 00482c3f  8b8ee8010000         mov ecx, dword ptr [esi + 0x1e8]
// 00482c45  53                   push ebx
// 00482c46  53                   push ebx
// 00482c47  6a10                 push 0x10
// 00482c49  51                   push ecx
// 00482c4a  ff150c2e8000         call dword ptr [0x802e0c]
// 00482c50  8bbeb4010000         mov edi, dword ptr [esi + 0x1b4]
// 00482c56  3bfb                 cmp edi, ebx
// 00482c58  7411                 je 0x482c6b
// 00482c5a  8d4f04               lea ecx, [edi + 4]
// 00482c5d  e8fedeffff           call 0x480b60
// 00482c62  57                   push edi
// 00482c63  e812da2100           call 0x6a067a
// 00482c68  83c404               add esp, 4
// 00482c6b  8b96d8010000         mov edx, dword ptr [esi + 0x1d8]
// 00482c71  52                   push edx
// 00482c72  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00482c77  e8a4500800           call 0x507d20
// 00482c7c  899ed8010000         mov dword ptr [esi + 0x1d8], ebx
// 00482c82  899edc010000         mov dword ptr [esi + 0x1dc], ebx
// 00482c88  899ee0010000         mov dword ptr [esi + 0x1e0], ebx
// 00482c8e  8d8ebc010000         lea ecx, [esi + 0x1bc]
// 00482c94  c786b801000014f38100 mov dword ptr [esi + 0x1b8], 0x81f314
// 00482c9e  83c404               add esp, 4
// 00482ca1  c644241802           mov byte ptr [esp + 0x18], 2
// 00482ca6  c701f8f08100         mov dword ptr [ecx], 0x81f0f8
// 00482cac  e86fd4ffff           call 0x480120
// 00482cb1  8d8e88000000         lea ecx, [esi + 0x88]
// 00482cb7  c644241801           mov byte ptr [esp + 0x18], 1
// 00482cbc  ff1568248000         call dword ptr [0x802468]
// 00482cc2  8d4e68               lea ecx, [esi + 0x68]
// 00482cc5  885c2418             mov byte ptr [esp + 0x18], bl
// 00482cc9  ff1568248000         call dword ptr [0x802468]
// 00482ccf  c70604f18100         mov dword ptr [esi], 0x81f104
// 00482cd5  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00482cdd  3935f4ef9600         cmp dword ptr [0x96eff4], esi
// 00482ce3  7506                 jne 0x482ceb
// 00482ce5  891df4ef9600         mov dword ptr [0x96eff4], ebx
// 00482ceb  8b4604               mov eax, dword ptr [esi + 4]
// 00482cee  50                   push eax
// 00482cef  e82c500800           call 0x507d20
// 00482cf4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00482cf8  83c404               add esp, 4
// 00482cfb  895e04               mov dword ptr [esi + 4], ebx
// 00482cfe  895e08               mov dword ptr [esi + 8], ebx
// 00482d01  895e0c               mov dword ptr [esi + 0xc], ebx
// 00482d04  5f                   pop edi
// 00482d05  5e                   pop esi
// 00482d06  5b                   pop ebx
// 00482d07  64890d00000000       mov dword ptr fs:[0], ecx
// 00482d0e  83c410               add esp, 0x10
// 00482d11  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??1Win32Window@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
