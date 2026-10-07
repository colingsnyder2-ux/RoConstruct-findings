// roc 2008-06 00485290  unit: G3D::Win32Window  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00485290
//
// 00485290  6aff                 push -1
// 00485292  6824557c00           push 0x7c5524
// 00485297  64a100000000         mov eax, dword ptr fs:[0]
// 0048529d  50                   push eax
// 0048529e  64892500000000       mov dword ptr fs:[0], esp
// 004852a5  51                   push ecx
// 004852a6  56                   push esi
// 004852a7  8bf1                 mov esi, ecx
// 004852a9  89742404             mov dword ptr [esp + 4], esi
// 004852ad  c706640d8200         mov dword ptr [esi], 0x820d64
// 004852b3  a138f89600           mov eax, dword ptr [0x96f838]
// 004852b8  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004852c0  85c0                 test eax, eax
// 004852c2  744e                 je 0x485312
// 004852c4  833dd4fa960000       cmp dword ptr [0x96fad4], 0
// 004852cb  743d                 je 0x48530a
// 004852cd  8d460c               lea eax, [esi + 0xc]
// 004852d0  50                   push eax
// 004852d1  b9d4fa9600           mov ecx, 0x96fad4
// 004852d6  e815b8ffff           call 0x480af0
// 004852db  a1d8fa9600           mov eax, dword ptr [0x96fad8]
// 004852e0  83f814               cmp eax, 0x14
// 004852e3  7e2d                 jle 0x485312
// 004852e5  8b0dd4fa9600         mov ecx, dword ptr [0x96fad4]
// 004852eb  8d5481e8             lea edx, [ecx + eax*4 - 0x18]
// 004852ef  52                   push edx
// 004852f0  83c0fb               add eax, -5
// 004852f3  50                   push eax
// 004852f4  ff1538f89600         call dword ptr [0x96f838]
// 004852fa  6a01                 push 1
// 004852fc  6a14                 push 0x14
// 004852fe  b9d4fa9600           mov ecx, 0x96fad4
// 00485303  e8a8b2ffff           call 0x4805b0
// 00485308  eb08                 jmp 0x485312
// 0048530a  8d4e0c               lea ecx, [esi + 0xc]
// 0048530d  51                   push ecx
// 0048530e  6a01                 push 1
// 00485310  ffd0                 call eax
// 00485312  8d4e10               lea ecx, [esi + 0x10]
// 00485315  c644241000           mov byte ptr [esp + 0x10], 0
// 0048531a  ff1568248000         call dword ptr [0x802468]
// 00485320  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00485324  c706e0e18100         mov dword ptr [esi], 0x81e1e0
// 0048532a  5e                   pop esi
// 0048532b  64890d00000000       mov dword ptr fs:[0], ecx
// 00485332  83c410               add esp, 0x10
// 00485335  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Milestone.cpp (function ??1Milestone@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Milestone.cpp
