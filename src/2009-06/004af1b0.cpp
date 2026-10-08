// from server: 100% by auto
// roc 2009-06 004af1b0  unit: G3D::Win32Window  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004af1b0
//
// 004af1b0  6aff                 push -1
// 004af1b2  68b47f8500           push 0x857fb4
// 004af1b7  64a100000000         mov eax, dword ptr fs:[0]
// 004af1bd  50                   push eax
// 004af1be  64892500000000       mov dword ptr fs:[0], esp
// 004af1c5  51                   push ecx
// 004af1c6  56                   push esi
// 004af1c7  8bf1                 mov esi, ecx
// 004af1c9  89742404             mov dword ptr [esp + 4], esi
// 004af1cd  c706043d8c00         mov dword ptr [esi], 0x8c3d04
// 004af1d3  a198d1a300           mov eax, dword ptr [0xa3d198]
// 004af1d8  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004af1e0  85c0                 test eax, eax
// 004af1e2  744e                 je 0x4af232
// 004af1e4  833d34d4a30000       cmp dword ptr [0xa3d434], 0
// 004af1eb  743d                 je 0x4af22a
// 004af1ed  8d460c               lea eax, [esi + 0xc]
// 004af1f0  50                   push eax
// 004af1f1  b934d4a300           mov ecx, 0xa3d434
// 004af1f6  e815b8ffff           call 0x4aaa10
// 004af1fb  a138d4a300           mov eax, dword ptr [0xa3d438]
// 004af200  83f814               cmp eax, 0x14
// 004af203  7e2d                 jle 0x4af232
// 004af205  8b0d34d4a300         mov ecx, dword ptr [0xa3d434]
// 004af20b  8d5481e8             lea edx, [ecx + eax*4 - 0x18]
// 004af20f  52                   push edx
// 004af210  83c0fb               add eax, -5
// 004af213  50                   push eax
// 004af214  ff1598d1a300         call dword ptr [0xa3d198]
// 004af21a  6a01                 push 1
// 004af21c  6a14                 push 0x14
// 004af21e  b934d4a300           mov ecx, 0xa3d434
// 004af223  e8a8b2ffff           call 0x4aa4d0
// 004af228  eb08                 jmp 0x4af232
// 004af22a  8d4e0c               lea ecx, [esi + 0xc]
// 004af22d  51                   push ecx
// 004af22e  6a01                 push 1
// 004af230  ffd0                 call eax
// 004af232  8d4e10               lea ecx, [esi + 0x10]
// 004af235  c644241000           mov byte ptr [esp + 0x10], 0
// 004af23a  ff15c4e48900         call dword ptr [0x89e4c4]
// 004af240  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004af244  c706a8fc8b00         mov dword ptr [esi], 0x8bfca8
// 004af24a  5e                   pop esi
// 004af24b  64890d00000000       mov dword ptr fs:[0], ecx
// 004af252  83c410               add esp, 0x10
// 004af255  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Milestone.cpp (function ??1Milestone@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Milestone.cpp
