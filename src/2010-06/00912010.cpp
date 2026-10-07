// roc 2010-06 00912010  unit: G3D::GFont  size: 383 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00912010
//
// 00912010  6aff                 push -1
// 00912012  68c0169c00           push 0x9c16c0
// 00912017  64a100000000         mov eax, dword ptr fs:[0]
// 0091201d  50                   push eax
// 0091201e  64892500000000       mov dword ptr fs:[0], esp
// 00912025  51                   push ecx
// 00912026  53                   push ebx
// 00912027  56                   push esi
// 00912028  8bf1                 mov esi, ecx
// 0091202a  57                   push edi
// 0091202b  8974240c             mov dword ptr [esp + 0xc], esi
// 0091202f  c7067cbfa800         mov dword ptr [esi], 0xa8bf7c
// 00912035  8b4644               mov eax, dword ptr [esi + 0x44]
// 00912038  50                   push eax
// 00912039  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 00912041  e87ab9c3ff           call 0x54d9c0
// 00912046  33db                 xor ebx, ebx
// 00912048  895e44               mov dword ptr [esi + 0x44], ebx
// 0091204b  895e48               mov dword ptr [esi + 0x48], ebx
// 0091204e  895e4c               mov dword ptr [esi + 0x4c], ebx
// 00912051  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00912054  51                   push ecx
// 00912055  c644242006           mov byte ptr [esp + 0x20], 6
// 0091205a  e861b9c3ff           call 0x54d9c0
// 0091205f  8b3d7ca39e00         mov edi, dword ptr [0x9ea37c]
// 00912065  895e38               mov dword ptr [esi + 0x38], ebx
// 00912068  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0091206b  895e40               mov dword ptr [esi + 0x40], ebx
// 0091206e  8b4634               mov eax, dword ptr [esi + 0x34]
// 00912071  83c408               add esp, 8
// 00912074  c644241805           mov byte ptr [esp + 0x18], 5
// 00912079  3bc3                 cmp eax, ebx
// 0091207b  7424                 je 0x9120a1
// 0091207d  83c004               add eax, 4
// 00912080  50                   push eax
// 00912081  ffd7                 call edi
// 00912083  85c0                 test eax, eax
// 00912085  7517                 jne 0x91209e
// 00912087  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0091208a  e8911ab7ff           call 0x483b20
// 0091208f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00912092  3bcb                 cmp ecx, ebx
// 00912094  7408                 je 0x91209e
// 00912096  8b11                 mov edx, dword ptr [ecx]
// 00912098  8b02                 mov eax, dword ptr [edx]
// 0091209a  6a01                 push 1
// 0091209c  ffd0                 call eax
// 0091209e  895e34               mov dword ptr [esi + 0x34], ebx
// 009120a1  8b4630               mov eax, dword ptr [esi + 0x30]
// 009120a4  c644241804           mov byte ptr [esp + 0x18], 4
// 009120a9  3bc3                 cmp eax, ebx
// 009120ab  7424                 je 0x9120d1
// 009120ad  83c004               add eax, 4
// 009120b0  50                   push eax
// 009120b1  ffd7                 call edi
// 009120b3  85c0                 test eax, eax
// 009120b5  7517                 jne 0x9120ce
// 009120b7  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 009120ba  e8611ab7ff           call 0x483b20
// 009120bf  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 009120c2  3bcb                 cmp ecx, ebx
// 009120c4  7408                 je 0x9120ce
// 009120c6  8b11                 mov edx, dword ptr [ecx]
// 009120c8  8b02                 mov eax, dword ptr [edx]
// 009120ca  6a01                 push 1
// 009120cc  ffd0                 call eax
// 009120ce  895e30               mov dword ptr [esi + 0x30], ebx
// 009120d1  8b462c               mov eax, dword ptr [esi + 0x2c]
// 009120d4  c644241803           mov byte ptr [esp + 0x18], 3
// 009120d9  3bc3                 cmp eax, ebx
// 009120db  7424                 je 0x912101
// 009120dd  83c004               add eax, 4
// 009120e0  50                   push eax
// 009120e1  ffd7                 call edi
// 009120e3  85c0                 test eax, eax
// 009120e5  7517                 jne 0x9120fe
// 009120e7  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 009120ea  e8311ab7ff           call 0x483b20
// 009120ef  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 009120f2  3bcb                 cmp ecx, ebx
// 009120f4  7408                 je 0x9120fe
// 009120f6  8b11                 mov edx, dword ptr [ecx]
// 009120f8  8b02                 mov eax, dword ptr [edx]
// 009120fa  6a01                 push 1
// 009120fc  ffd0                 call eax
// 009120fe  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00912101  8b4628               mov eax, dword ptr [esi + 0x28]
// 00912104  c644241802           mov byte ptr [esp + 0x18], 2
// 00912109  3bc3                 cmp eax, ebx
// 0091210b  7424                 je 0x912131
// 0091210d  83c004               add eax, 4
// 00912110  50                   push eax
// 00912111  ffd7                 call edi
// 00912113  85c0                 test eax, eax
// 00912115  7517                 jne 0x91212e
// 00912117  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0091211a  e8011ab7ff           call 0x483b20
// 0091211f  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00912122  3bcb                 cmp ecx, ebx
// 00912124  7408                 je 0x91212e
// 00912126  8b11                 mov edx, dword ptr [ecx]
// 00912128  8b02                 mov eax, dword ptr [edx]
// 0091212a  6a01                 push 1
// 0091212c  ffd0                 call eax
// 0091212e  895e28               mov dword ptr [esi + 0x28], ebx
// 00912131  8b4624               mov eax, dword ptr [esi + 0x24]
// 00912134  c644241801           mov byte ptr [esp + 0x18], 1
// 00912139  3bc3                 cmp eax, ebx
// 0091213b  7424                 je 0x912161
// 0091213d  83c004               add eax, 4
// 00912140  50                   push eax
// 00912141  ffd7                 call edi
// 00912143  85c0                 test eax, eax
// 00912145  7517                 jne 0x91215e
// 00912147  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0091214a  e8d119b7ff           call 0x483b20
// 0091214f  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00912152  3bcb                 cmp ecx, ebx
// 00912154  7408                 je 0x91215e
// 00912156  8b11                 mov edx, dword ptr [ecx]
// 00912158  8b02                 mov eax, dword ptr [edx]
// 0091215a  6a01                 push 1
// 0091215c  ffd0                 call eax
// 0091215e  895e24               mov dword ptr [esi + 0x24], ebx
// 00912161  68f0ca5200           push 0x52caf0
// 00912166  6a06                 push 6
// 00912168  6a04                 push 4
// 0091216a  8d4e0c               lea ecx, [esi + 0xc]
// 0091216d  51                   push ecx
// 0091216e  885c2428             mov byte ptr [esp + 0x28], bl
// 00912172  e86769e9ff           call 0x7a8ade
// 00912177  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0091217b  5f                   pop edi
// 0091217c  c7065032a100         mov dword ptr [esi], 0xa13250
// 00912182  5e                   pop esi
// 00912183  5b                   pop ebx
// 00912184  64890d00000000       mov dword ptr fs:[0], ecx
// 0091218b  83c410               add esp, 0x10
// 0091218e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function ??1Sky@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
