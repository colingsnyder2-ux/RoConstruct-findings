// roc 2009-06 004a0f80  unit: G3D::PBVTextureFormat::?$Table  size: 448 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a0f80
//
// 004a0f80  6aff                 push -1
// 004a0f82  68d4708500           push 0x8570d4
// 004a0f87  64a100000000         mov eax, dword ptr fs:[0]
// 004a0f8d  50                   push eax
// 004a0f8e  64892500000000       mov dword ptr fs:[0], esp
// 004a0f95  51                   push ecx
// 004a0f96  53                   push ebx
// 004a0f97  56                   push esi
// 004a0f98  8bf1                 mov esi, ecx
// 004a0f9a  57                   push edi
// 004a0f9b  8974240c             mov dword ptr [esp + 0xc], esi
// 004a0f9f  6810755100           push 0x517510
// 004a0fa4  6a08                 push 8
// 004a0fa6  6a5c                 push 0x5c
// 004a0fa8  8d86a8030000         lea eax, [esi + 0x3a8]
// 004a0fae  50                   push eax
// 004a0faf  c744242805000000     mov dword ptr [esp + 0x28], 5
// 004a0fb7  e8ba8b2700           call 0x719b76
// 004a0fbc  8b8670030000         mov eax, dword ptr [esi + 0x370]
// 004a0fc2  8b3da4e18900         mov edi, dword ptr [0x89e1a4]
// 004a0fc8  33db                 xor ebx, ebx
// 004a0fca  c644241804           mov byte ptr [esp + 0x18], 4
// 004a0fcf  3bc3                 cmp eax, ebx
// 004a0fd1  742d                 je 0x4a1000
// 004a0fd3  83c004               add eax, 4
// 004a0fd6  50                   push eax
// 004a0fd7  ffd7                 call edi
// 004a0fd9  85c0                 test eax, eax
// 004a0fdb  751d                 jne 0x4a0ffa
// 004a0fdd  8b8e70030000         mov ecx, dword ptr [esi + 0x370]
// 004a0fe3  e8983dfaff           call 0x444d80
// 004a0fe8  8b8e70030000         mov ecx, dword ptr [esi + 0x370]
// 004a0fee  3bcb                 cmp ecx, ebx
// 004a0ff0  7408                 je 0x4a0ffa
// 004a0ff2  8b11                 mov edx, dword ptr [ecx]
// 004a0ff4  8b02                 mov eax, dword ptr [edx]
// 004a0ff6  6a01                 push 1
// 004a0ff8  ffd0                 call eax
// 004a0ffa  899e70030000         mov dword ptr [esi + 0x370], ebx
// 004a1000  8b866c030000         mov eax, dword ptr [esi + 0x36c]
// 004a1006  c644241803           mov byte ptr [esp + 0x18], 3
// 004a100b  3bc3                 cmp eax, ebx
// 004a100d  742d                 je 0x4a103c
// 004a100f  83c004               add eax, 4
// 004a1012  50                   push eax
// 004a1013  ffd7                 call edi
// 004a1015  85c0                 test eax, eax
// 004a1017  751d                 jne 0x4a1036
// 004a1019  8b8e6c030000         mov ecx, dword ptr [esi + 0x36c]
// 004a101f  e85c3dfaff           call 0x444d80
// 004a1024  8b8e6c030000         mov ecx, dword ptr [esi + 0x36c]
// 004a102a  3bcb                 cmp ecx, ebx
// 004a102c  7408                 je 0x4a1036
// 004a102e  8b11                 mov edx, dword ptr [ecx]
// 004a1030  8b02                 mov eax, dword ptr [edx]
// 004a1032  6a01                 push 1
// 004a1034  ffd0                 call eax
// 004a1036  899e6c030000         mov dword ptr [esi + 0x36c], ebx
// 004a103c  8b8668030000         mov eax, dword ptr [esi + 0x368]
// 004a1042  c644241802           mov byte ptr [esp + 0x18], 2
// 004a1047  3bc3                 cmp eax, ebx
// 004a1049  742d                 je 0x4a1078
// 004a104b  83c004               add eax, 4
// 004a104e  50                   push eax
// 004a104f  ffd7                 call edi
// 004a1051  85c0                 test eax, eax
// 004a1053  751d                 jne 0x4a1072
// 004a1055  8b8e68030000         mov ecx, dword ptr [esi + 0x368]
// 004a105b  e8203dfaff           call 0x444d80
// 004a1060  8b8e68030000         mov ecx, dword ptr [esi + 0x368]
// 004a1066  3bcb                 cmp ecx, ebx
// 004a1068  7408                 je 0x4a1072
// 004a106a  8b11                 mov edx, dword ptr [ecx]
// 004a106c  8b02                 mov eax, dword ptr [edx]
// 004a106e  6a01                 push 1
// 004a1070  ffd0                 call eax
// 004a1072  899e68030000         mov dword ptr [esi + 0x368], ebx
// 004a1078  8b8664030000         mov eax, dword ptr [esi + 0x364]
// 004a107e  c644241801           mov byte ptr [esp + 0x18], 1
// 004a1083  3bc3                 cmp eax, ebx
// 004a1085  742d                 je 0x4a10b4
// 004a1087  83c004               add eax, 4
// 004a108a  50                   push eax
// 004a108b  ffd7                 call edi
// 004a108d  85c0                 test eax, eax
// 004a108f  751d                 jne 0x4a10ae
// 004a1091  8b8e64030000         mov ecx, dword ptr [esi + 0x364]
// 004a1097  e8e43cfaff           call 0x444d80
// 004a109c  8b8e64030000         mov ecx, dword ptr [esi + 0x364]
// 004a10a2  3bcb                 cmp ecx, ebx
// 004a10a4  7408                 je 0x4a10ae
// 004a10a6  8b11                 mov edx, dword ptr [ecx]
// 004a10a8  8b02                 mov eax, dword ptr [edx]
// 004a10aa  6a01                 push 1
// 004a10ac  ffd0                 call eax
// 004a10ae  899e64030000         mov dword ptr [esi + 0x364], ebx
// 004a10b4  8b8660030000         mov eax, dword ptr [esi + 0x360]
// 004a10ba  885c2418             mov byte ptr [esp + 0x18], bl
// 004a10be  3bc3                 cmp eax, ebx
// 004a10c0  742d                 je 0x4a10ef
// 004a10c2  83c004               add eax, 4
// 004a10c5  50                   push eax
// 004a10c6  ffd7                 call edi
// 004a10c8  85c0                 test eax, eax
// 004a10ca  751d                 jne 0x4a10e9
// 004a10cc  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 004a10d2  e8a93cfaff           call 0x444d80
// 004a10d7  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 004a10dd  3bcb                 cmp ecx, ebx
// 004a10df  7408                 je 0x4a10e9
// 004a10e1  8b11                 mov edx, dword ptr [ecx]
// 004a10e3  8b02                 mov eax, dword ptr [edx]
// 004a10e5  6a01                 push 1
// 004a10e7  ffd0                 call eax
// 004a10e9  899e60030000         mov dword ptr [esi + 0x360], ebx
// 004a10ef  8b86c8020000         mov eax, dword ptr [esi + 0x2c8]
// 004a10f5  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004a10fd  3bc3                 cmp eax, ebx
// 004a10ff  742d                 je 0x4a112e
// 004a1101  83c004               add eax, 4
// 004a1104  50                   push eax
// 004a1105  ffd7                 call edi
// 004a1107  85c0                 test eax, eax
// 004a1109  751d                 jne 0x4a1128
// 004a110b  8b8ec8020000         mov ecx, dword ptr [esi + 0x2c8]
// 004a1111  e86a3cfaff           call 0x444d80
// 004a1116  8b8ec8020000         mov ecx, dword ptr [esi + 0x2c8]
// 004a111c  3bcb                 cmp ecx, ebx
// 004a111e  7408                 je 0x4a1128
// 004a1120  8b11                 mov edx, dword ptr [ecx]
// 004a1122  8b02                 mov eax, dword ptr [edx]
// 004a1124  6a01                 push 1
// 004a1126  ffd0                 call eax
// 004a1128  899ec8020000         mov dword ptr [esi + 0x2c8], ebx
// 004a112e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a1132  5f                   pop edi
// 004a1133  5e                   pop esi
// 004a1134  5b                   pop ebx
// 004a1135  64890d00000000       mov dword ptr fs:[0], ecx
// 004a113c  83c410               add esp, 0x10
// 004a113f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??1RenderState@RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
