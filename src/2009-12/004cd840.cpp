// roc 2009-12 004cd840  unit: G3D::PBVTextureFormat::?$Table  size: 448 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cd840
//
// 004cd840  6aff                 push -1
// 004cd842  68942f9300           push 0x932f94
// 004cd847  64a100000000         mov eax, dword ptr fs:[0]
// 004cd84d  50                   push eax
// 004cd84e  64892500000000       mov dword ptr fs:[0], esp
// 004cd855  51                   push ecx
// 004cd856  53                   push ebx
// 004cd857  56                   push esi
// 004cd858  8bf1                 mov esi, ecx
// 004cd85a  57                   push edi
// 004cd85b  8974240c             mov dword ptr [esp + 0xc], esi
// 004cd85f  6890d05c00           push 0x5cd090
// 004cd864  6a08                 push 8
// 004cd866  6a5c                 push 0x5c
// 004cd868  8d86a8030000         lea eax, [esi + 0x3a8]
// 004cd86e  50                   push eax
// 004cd86f  c744242805000000     mov dword ptr [esp + 0x28], 5
// 004cd877  e828713200           call 0x7f49a4
// 004cd87c  8b8670030000         mov eax, dword ptr [esi + 0x370]
// 004cd882  8b3d08b29800         mov edi, dword ptr [0x98b208]
// 004cd888  33db                 xor ebx, ebx
// 004cd88a  c644241804           mov byte ptr [esp + 0x18], 4
// 004cd88f  3bc3                 cmp eax, ebx
// 004cd891  742d                 je 0x4cd8c0
// 004cd893  83c004               add eax, 4
// 004cd896  50                   push eax
// 004cd897  ffd7                 call edi
// 004cd899  85c0                 test eax, eax
// 004cd89b  751d                 jne 0x4cd8ba
// 004cd89d  8b8e70030000         mov ecx, dword ptr [esi + 0x370]
// 004cd8a3  e878d7f7ff           call 0x44b020
// 004cd8a8  8b8e70030000         mov ecx, dword ptr [esi + 0x370]
// 004cd8ae  3bcb                 cmp ecx, ebx
// 004cd8b0  7408                 je 0x4cd8ba
// 004cd8b2  8b11                 mov edx, dword ptr [ecx]
// 004cd8b4  8b02                 mov eax, dword ptr [edx]
// 004cd8b6  6a01                 push 1
// 004cd8b8  ffd0                 call eax
// 004cd8ba  899e70030000         mov dword ptr [esi + 0x370], ebx
// 004cd8c0  8b866c030000         mov eax, dword ptr [esi + 0x36c]
// 004cd8c6  c644241803           mov byte ptr [esp + 0x18], 3
// 004cd8cb  3bc3                 cmp eax, ebx
// 004cd8cd  742d                 je 0x4cd8fc
// 004cd8cf  83c004               add eax, 4
// 004cd8d2  50                   push eax
// 004cd8d3  ffd7                 call edi
// 004cd8d5  85c0                 test eax, eax
// 004cd8d7  751d                 jne 0x4cd8f6
// 004cd8d9  8b8e6c030000         mov ecx, dword ptr [esi + 0x36c]
// 004cd8df  e83cd7f7ff           call 0x44b020
// 004cd8e4  8b8e6c030000         mov ecx, dword ptr [esi + 0x36c]
// 004cd8ea  3bcb                 cmp ecx, ebx
// 004cd8ec  7408                 je 0x4cd8f6
// 004cd8ee  8b11                 mov edx, dword ptr [ecx]
// 004cd8f0  8b02                 mov eax, dword ptr [edx]
// 004cd8f2  6a01                 push 1
// 004cd8f4  ffd0                 call eax
// 004cd8f6  899e6c030000         mov dword ptr [esi + 0x36c], ebx
// 004cd8fc  8b8668030000         mov eax, dword ptr [esi + 0x368]
// 004cd902  c644241802           mov byte ptr [esp + 0x18], 2
// 004cd907  3bc3                 cmp eax, ebx
// 004cd909  742d                 je 0x4cd938
// 004cd90b  83c004               add eax, 4
// 004cd90e  50                   push eax
// 004cd90f  ffd7                 call edi
// 004cd911  85c0                 test eax, eax
// 004cd913  751d                 jne 0x4cd932
// 004cd915  8b8e68030000         mov ecx, dword ptr [esi + 0x368]
// 004cd91b  e800d7f7ff           call 0x44b020
// 004cd920  8b8e68030000         mov ecx, dword ptr [esi + 0x368]
// 004cd926  3bcb                 cmp ecx, ebx
// 004cd928  7408                 je 0x4cd932
// 004cd92a  8b11                 mov edx, dword ptr [ecx]
// 004cd92c  8b02                 mov eax, dword ptr [edx]
// 004cd92e  6a01                 push 1
// 004cd930  ffd0                 call eax
// 004cd932  899e68030000         mov dword ptr [esi + 0x368], ebx
// 004cd938  8b8664030000         mov eax, dword ptr [esi + 0x364]
// 004cd93e  c644241801           mov byte ptr [esp + 0x18], 1
// 004cd943  3bc3                 cmp eax, ebx
// 004cd945  742d                 je 0x4cd974
// 004cd947  83c004               add eax, 4
// 004cd94a  50                   push eax
// 004cd94b  ffd7                 call edi
// 004cd94d  85c0                 test eax, eax
// 004cd94f  751d                 jne 0x4cd96e
// 004cd951  8b8e64030000         mov ecx, dword ptr [esi + 0x364]
// 004cd957  e8c4d6f7ff           call 0x44b020
// 004cd95c  8b8e64030000         mov ecx, dword ptr [esi + 0x364]
// 004cd962  3bcb                 cmp ecx, ebx
// 004cd964  7408                 je 0x4cd96e
// 004cd966  8b11                 mov edx, dword ptr [ecx]
// 004cd968  8b02                 mov eax, dword ptr [edx]
// 004cd96a  6a01                 push 1
// 004cd96c  ffd0                 call eax
// 004cd96e  899e64030000         mov dword ptr [esi + 0x364], ebx
// 004cd974  8b8660030000         mov eax, dword ptr [esi + 0x360]
// 004cd97a  885c2418             mov byte ptr [esp + 0x18], bl
// 004cd97e  3bc3                 cmp eax, ebx
// 004cd980  742d                 je 0x4cd9af
// 004cd982  83c004               add eax, 4
// 004cd985  50                   push eax
// 004cd986  ffd7                 call edi
// 004cd988  85c0                 test eax, eax
// 004cd98a  751d                 jne 0x4cd9a9
// 004cd98c  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 004cd992  e889d6f7ff           call 0x44b020
// 004cd997  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 004cd99d  3bcb                 cmp ecx, ebx
// 004cd99f  7408                 je 0x4cd9a9
// 004cd9a1  8b11                 mov edx, dword ptr [ecx]
// 004cd9a3  8b02                 mov eax, dword ptr [edx]
// 004cd9a5  6a01                 push 1
// 004cd9a7  ffd0                 call eax
// 004cd9a9  899e60030000         mov dword ptr [esi + 0x360], ebx
// 004cd9af  8b86c8020000         mov eax, dword ptr [esi + 0x2c8]
// 004cd9b5  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004cd9bd  3bc3                 cmp eax, ebx
// 004cd9bf  742d                 je 0x4cd9ee
// 004cd9c1  83c004               add eax, 4
// 004cd9c4  50                   push eax
// 004cd9c5  ffd7                 call edi
// 004cd9c7  85c0                 test eax, eax
// 004cd9c9  751d                 jne 0x4cd9e8
// 004cd9cb  8b8ec8020000         mov ecx, dword ptr [esi + 0x2c8]
// 004cd9d1  e84ad6f7ff           call 0x44b020
// 004cd9d6  8b8ec8020000         mov ecx, dword ptr [esi + 0x2c8]
// 004cd9dc  3bcb                 cmp ecx, ebx
// 004cd9de  7408                 je 0x4cd9e8
// 004cd9e0  8b11                 mov edx, dword ptr [ecx]
// 004cd9e2  8b02                 mov eax, dword ptr [edx]
// 004cd9e4  6a01                 push 1
// 004cd9e6  ffd0                 call eax
// 004cd9e8  899ec8020000         mov dword ptr [esi + 0x2c8], ebx
// 004cd9ee  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004cd9f2  5f                   pop edi
// 004cd9f3  5e                   pop esi
// 004cd9f4  5b                   pop ebx
// 004cd9f5  64890d00000000       mov dword ptr fs:[0], ecx
// 004cd9fc  83c410               add esp, 0x10
// 004cd9ff  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??1RenderState@RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
