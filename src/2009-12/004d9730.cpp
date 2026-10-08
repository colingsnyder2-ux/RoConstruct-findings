// roc 2009-12 004d9730  unit: G3D::Win32Window  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d9730
//
// 004d9730  6aff                 push -1
// 004d9732  68b33d9300           push 0x933db3
// 004d9737  64a100000000         mov eax, dword ptr fs:[0]
// 004d973d  50                   push eax
// 004d973e  64892500000000       mov dword ptr fs:[0], esp
// 004d9745  51                   push ecx
// 004d9746  53                   push ebx
// 004d9747  33db                 xor ebx, ebx
// 004d9749  895c2410             mov dword ptr [esp + 0x10], ebx
// 004d974d  381de4d8b700         cmp byte ptr [0xb7d8e4], bl
// 004d9753  7422                 je 0x4d9777
// 004d9755  8d4c2458             lea ecx, [esp + 0x58]
// 004d9759  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004d9761  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d9767  5b                   pop ebx
// 004d9768  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d976c  64890d00000000       mov dword ptr fs:[0], ecx
// 004d9773  83c410               add esp, 0x10
// 004d9776  c3                   ret 
// 004d9777  b810000000           mov eax, 0x10
// 004d977c  56                   push esi
// 004d977d  68f0010000           push 0x1f0
// 004d9782  c605e4d8b70001       mov byte ptr [0xb7d8e4], 1
// 004d9789  885c245e             mov byte ptr [esp + 0x5e], bl
// 004d978d  89442420             mov dword ptr [esp + 0x20], eax
// 004d9791  89442424             mov dword ptr [esp + 0x24], eax
// 004d9795  885c245d             mov byte ptr [esp + 0x5d], bl
// 004d9799  e8c2a03100           call 0x7f3860
// 004d979e  83c404               add esp, 4
// 004d97a1  89442408             mov dword ptr [esp + 8], eax
// 004d97a5  c644241401           mov byte ptr [esp + 0x14], 1
// 004d97aa  3bc3                 cmp eax, ebx
// 004d97ac  7412                 je 0x4d97c0
// 004d97ae  6a01                 push 1
// 004d97b0  8d4c2420             lea ecx, [esp + 0x20]
// 004d97b4  51                   push ecx
// 004d97b5  8bc8                 mov ecx, eax
// 004d97b7  e824f7ffff           call 0x4d8ee0
// 004d97bc  8bf0                 mov esi, eax
// 004d97be  eb02                 jmp 0x4d97c2
// 004d97c0  33f6                 xor esi, esi
// 004d97c2  8b0d9cd6b700         mov ecx, dword ptr [0xb7d69c]
// 004d97c8  885c2414             mov byte ptr [esp + 0x14], bl
// 004d97cc  3bf1                 cmp esi, ecx
// 004d97ce  7410                 je 0x4d97e0
// 004d97d0  3bcb                 cmp ecx, ebx
// 004d97d2  740c                 je 0x4d97e0
// 004d97d4  8b11                 mov edx, dword ptr [ecx]
// 004d97d6  8b829c000000         mov eax, dword ptr [edx + 0x9c]
// 004d97dc  6a01                 push 1
// 004d97de  ffd0                 call eax
// 004d97e0  8d4c245c             lea ecx, [esp + 0x5c]
// 004d97e4  89359cd6b700         mov dword ptr [0xb7d69c], esi
// 004d97ea  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004d97f2  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d97f8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d97fc  5e                   pop esi
// 004d97fd  5b                   pop ebx
// 004d97fe  64890d00000000       mov dword ptr fs:[0], ecx
// 004d9805  83c410               add esp, 0x10
// 004d9808  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?createShareWindow@Win32Window@G3D@@CAXVSettings@GWindow@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
