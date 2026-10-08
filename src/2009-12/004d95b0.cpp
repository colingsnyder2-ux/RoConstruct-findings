// roc 2009-12 004d95b0  unit: G3D::Win32Window  size: 370 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d95b0
//
// 004d95b0  6aff                 push -1
// 004d95b2  688e3d9300           push 0x933d8e
// 004d95b7  64a100000000         mov eax, dword ptr fs:[0]
// 004d95bd  50                   push eax
// 004d95be  64892500000000       mov dword ptr fs:[0], esp
// 004d95c5  51                   push ecx
// 004d95c6  53                   push ebx
// 004d95c7  56                   push esi
// 004d95c8  8bf1                 mov esi, ecx
// 004d95ca  57                   push edi
// 004d95cb  8974240c             mov dword ptr [esp + 0xc], esi
// 004d95cf  c706c47d9b00         mov dword ptr [esi], 0x9b7dc4
// 004d95d5  33db                 xor ebx, ebx
// 004d95d7  c744241804000000     mov dword ptr [esp + 0x18], 4
// 004d95df  393548d0b700         cmp dword ptr [0xb7d048], esi
// 004d95e5  7550                 jne 0x4d9637
// 004d95e7  53                   push ebx
// 004d95e8  53                   push ebx
// 004d95e9  ff1534bb9800         call dword ptr [0x98bb34]
// 004d95ef  389eec010000         cmp byte ptr [esi + 0x1ec], bl
// 004d95f5  7469                 je 0x4d9660
// 004d95f7  80beac00000001       cmp byte ptr [esi + 0xac], 1
// 004d95fe  895e14               mov dword ptr [esi + 0x14], ebx
// 004d9601  741c                 je 0x4d961f
// 004d9603  8b3d10ca9800         mov edi, dword ptr [0x98ca10]
// 004d9609  8da42400000000       lea esp, [esp]
// 004d9610  6a01                 push 1
// 004d9612  ffd7                 call edi
// 004d9614  85c0                 test eax, eax
// 004d9616  7cf8                 jl 0x4d9610
// 004d9618  c686ac00000001       mov byte ptr [esi + 0xac], 1
// 004d961f  895e10               mov dword ptr [esi + 0x10], ebx
// 004d9622  389ead000000         cmp byte ptr [esi + 0xad], bl
// 004d9628  740d                 je 0x4d9637
// 004d962a  53                   push ebx
// 004d962b  889ead000000         mov byte ptr [esi + 0xad], bl
// 004d9631  ff150cca9800         call dword ptr [0x98ca0c]
// 004d9637  389eec010000         cmp byte ptr [esi + 0x1ec], bl
// 004d963d  7421                 je 0x4d9660
// 004d963f  8b86e8010000         mov eax, dword ptr [esi + 0x1e8]
// 004d9645  53                   push ebx
// 004d9646  6aeb                 push -0x15
// 004d9648  50                   push eax
// 004d9649  ff15c0c99800         call dword ptr [0x98c9c0]
// 004d964f  8b8ee8010000         mov ecx, dword ptr [esi + 0x1e8]
// 004d9655  53                   push ebx
// 004d9656  53                   push ebx
// 004d9657  6a10                 push 0x10
// 004d9659  51                   push ecx
// 004d965a  ff15b8cb9800         call dword ptr [0x98cbb8]
// 004d9660  8bbeb4010000         mov edi, dword ptr [esi + 0x1b4]
// 004d9666  3bfb                 cmp edi, ebx
// 004d9668  7411                 je 0x4d967b
// 004d966a  8d4f04               lea ecx, [edi + 4]
// 004d966d  e8dedeffff           call 0x4d7550
// 004d9672  57                   push edi
// 004d9673  e8e2a13100           call 0x7f385a
// 004d9678  83c404               add esp, 4
// 004d967b  8b96d8010000         mov edx, dword ptr [esi + 0x1d8]
// 004d9681  52                   push edx
// 004d9682  c644241c03           mov byte ptr [esp + 0x1c], 3
// 004d9687  e8540d1100           call 0x5ea3e0
// 004d968c  899ed8010000         mov dword ptr [esi + 0x1d8], ebx
// 004d9692  899edc010000         mov dword ptr [esi + 0x1dc], ebx
// 004d9698  899ee0010000         mov dword ptr [esi + 0x1e0], ebx
// 004d969e  8d8ebc010000         lea ecx, [esi + 0x1bc]
// 004d96a4  c786b8010000ac7b9b00 mov dword ptr [esi + 0x1b8], 0x9b7bac
// 004d96ae  83c404               add esp, 4
// 004d96b1  c644241802           mov byte ptr [esp + 0x18], 2
// 004d96b6  c70190799b00         mov dword ptr [ecx], 0x9b7990
// 004d96bc  e81f32ffff           call 0x4cc8e0
// 004d96c1  8d8e88000000         lea ecx, [esi + 0x88]
// 004d96c7  c644241801           mov byte ptr [esp + 0x18], 1
// 004d96cc  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d96d2  8d4e68               lea ecx, [esi + 0x68]
// 004d96d5  885c2418             mov byte ptr [esp + 0x18], bl
// 004d96d9  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d96df  c7069c799b00         mov dword ptr [esi], 0x9b799c
// 004d96e5  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004d96ed  393548d0b700         cmp dword ptr [0xb7d048], esi
// 004d96f3  7506                 jne 0x4d96fb
// 004d96f5  891d48d0b700         mov dword ptr [0xb7d048], ebx
// 004d96fb  8b4604               mov eax, dword ptr [esi + 4]
// 004d96fe  50                   push eax
// 004d96ff  e8dc0c1100           call 0x5ea3e0
// 004d9704  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d9708  83c404               add esp, 4
// 004d970b  895e04               mov dword ptr [esi + 4], ebx
// 004d970e  895e08               mov dword ptr [esi + 8], ebx
// 004d9711  895e0c               mov dword ptr [esi + 0xc], ebx
// 004d9714  5f                   pop edi
// 004d9715  5e                   pop esi
// 004d9716  5b                   pop ebx
// 004d9717  64890d00000000       mov dword ptr fs:[0], ecx
// 004d971e  83c410               add esp, 0x10
// 004d9721  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??1Win32Window@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
