// roc 2008-06 00482d20  unit: G3D::Win32Window  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00482d20
//
// 00482d20  6aff                 push -1
// 00482d22  6823547c00           push 0x7c5423
// 00482d27  64a100000000         mov eax, dword ptr fs:[0]
// 00482d2d  50                   push eax
// 00482d2e  64892500000000       mov dword ptr fs:[0], esp
// 00482d35  51                   push ecx
// 00482d36  53                   push ebx
// 00482d37  33db                 xor ebx, ebx
// 00482d39  895c2410             mov dword ptr [esp + 0x10], ebx
// 00482d3d  381dd4f79600         cmp byte ptr [0x96f7d4], bl
// 00482d43  7422                 je 0x482d67
// 00482d45  8d4c2458             lea ecx, [esp + 0x58]
// 00482d49  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00482d51  ff1568248000         call dword ptr [0x802468]
// 00482d57  5b                   pop ebx
// 00482d58  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00482d5c  64890d00000000       mov dword ptr fs:[0], ecx
// 00482d63  83c410               add esp, 0x10
// 00482d66  c3                   ret 
// 00482d67  b810000000           mov eax, 0x10
// 00482d6c  56                   push esi
// 00482d6d  68f0010000           push 0x1f0
// 00482d72  c605d4f7960001       mov byte ptr [0x96f7d4], 1
// 00482d79  885c245e             mov byte ptr [esp + 0x5e], bl
// 00482d7d  89442420             mov dword ptr [esp + 0x20], eax
// 00482d81  89442424             mov dword ptr [esp + 0x24], eax
// 00482d85  885c245d             mov byte ptr [esp + 0x5d], bl
// 00482d89  e892db2100           call 0x6a0920
// 00482d8e  83c404               add esp, 4
// 00482d91  89442408             mov dword ptr [esp + 8], eax
// 00482d95  c644241401           mov byte ptr [esp + 0x14], 1
// 00482d9a  3bc3                 cmp eax, ebx
// 00482d9c  7412                 je 0x482db0
// 00482d9e  6a01                 push 1
// 00482da0  8d4c2420             lea ecx, [esp + 0x20]
// 00482da4  51                   push ecx
// 00482da5  8bc8                 mov ecx, eax
// 00482da7  e844f7ffff           call 0x4824f0
// 00482dac  8bf0                 mov esi, eax
// 00482dae  eb02                 jmp 0x482db2
// 00482db0  33f6                 xor esi, esi
// 00482db2  8b0d8cf59600         mov ecx, dword ptr [0x96f58c]
// 00482db8  885c2414             mov byte ptr [esp + 0x14], bl
// 00482dbc  3bf1                 cmp esi, ecx
// 00482dbe  7410                 je 0x482dd0
// 00482dc0  3bcb                 cmp ecx, ebx
// 00482dc2  740c                 je 0x482dd0
// 00482dc4  8b11                 mov edx, dword ptr [ecx]
// 00482dc6  8b829c000000         mov eax, dword ptr [edx + 0x9c]
// 00482dcc  6a01                 push 1
// 00482dce  ffd0                 call eax
// 00482dd0  8d4c245c             lea ecx, [esp + 0x5c]
// 00482dd4  89358cf59600         mov dword ptr [0x96f58c], esi
// 00482dda  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00482de2  ff1568248000         call dword ptr [0x802468]
// 00482de8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00482dec  5e                   pop esi
// 00482ded  5b                   pop ebx
// 00482dee  64890d00000000       mov dword ptr fs:[0], ecx
// 00482df5  83c410               add esp, 0x10
// 00482df8  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?createShareWindow@Win32Window@G3D@@CAXVSettings@GWindow@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
