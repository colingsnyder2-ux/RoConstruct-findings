// roc 2008-06 004851e0  unit: G3D::Win32Window  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004851e0
//
// 004851e0  6aff                 push -1
// 004851e2  6824557c00           push 0x7c5524
// 004851e7  64a100000000         mov eax, dword ptr fs:[0]
// 004851ed  50                   push eax
// 004851ee  64892500000000       mov dword ptr fs:[0], esp
// 004851f5  51                   push ecx
// 004851f6  53                   push ebx
// 004851f7  56                   push esi
// 004851f8  8bf1                 mov esi, ecx
// 004851fa  33db                 xor ebx, ebx
// 004851fc  c706e0e18100         mov dword ptr [esi], 0x81e1e0
// 00485202  895e04               mov dword ptr [esi + 4], ebx
// 00485205  89742408             mov dword ptr [esp + 8], esi
// 00485209  895e08               mov dword ptr [esi + 8], ebx
// 0048520c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00485210  50                   push eax
// 00485211  8d4e10               lea ecx, [esi + 0x10]
// 00485214  895c2418             mov dword ptr [esp + 0x18], ebx
// 00485218  c706640d8200         mov dword ptr [esi], 0x820d64
// 0048521e  ff155c248000         call dword ptr [0x80245c]
// 00485224  885e2c               mov byte ptr [esi + 0x2c], bl
// 00485227  c644241401           mov byte ptr [esp + 0x14], 1
// 0048522c  391d34f89600         cmp dword ptr [0x96f834], ebx
// 00485232  7446                 je 0x48527a
// 00485234  a1d8fa9600           mov eax, dword ptr [0x96fad8]
// 00485239  3bc3                 cmp eax, ebx
// 0048523b  7521                 jne 0x48525e
// 0048523d  53                   push ebx
// 0048523e  6a0a                 push 0xa
// 00485240  b9d4fa9600           mov ecx, 0x96fad4
// 00485245  e866b3ffff           call 0x4805b0
// 0048524a  8b0dd4fa9600         mov ecx, dword ptr [0x96fad4]
// 00485250  51                   push ecx
// 00485251  6a0a                 push 0xa
// 00485253  ff1534f89600         call dword ptr [0x96f834]
// 00485259  a1d8fa9600           mov eax, dword ptr [0x96fad8]
// 0048525e  8b15d4fa9600         mov edx, dword ptr [0x96fad4]
// 00485264  57                   push edi
// 00485265  8b7c82fc             mov edi, dword ptr [edx + eax*4 - 4]
// 00485269  53                   push ebx
// 0048526a  48                   dec eax
// 0048526b  50                   push eax
// 0048526c  b9d4fa9600           mov ecx, 0x96fad4
// 00485271  e83ab3ffff           call 0x4805b0
// 00485276  897e0c               mov dword ptr [esi + 0xc], edi
// 00485279  5f                   pop edi
// 0048527a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048527e  8bc6                 mov eax, esi
// 00485280  5e                   pop esi
// 00485281  5b                   pop ebx
// 00485282  64890d00000000       mov dword ptr fs:[0], ecx
// 00485289  83c410               add esp, 0x10
// 0048528c  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Milestone.cpp (function ??0Milestone@G3D@@AAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Milestone.cpp
