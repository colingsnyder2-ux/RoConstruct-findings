// roc 2007-03 004769c0  unit: seg_00470000  size: 460 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004769c0
//
// 004769c0  6aff                 push -1
// 004769c2  68f4737400           push 0x7473f4
// 004769c7  64a100000000         mov eax, dword ptr fs:[0]
// 004769cd  50                   push eax
// 004769ce  51                   push ecx
// 004769cf  53                   push ebx
// 004769d0  56                   push esi
// 004769d1  57                   push edi
// 004769d2  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004769d7  33c4                 xor eax, esp
// 004769d9  50                   push eax
// 004769da  8d442414             lea eax, [esp + 0x14]
// 004769de  64a300000000         mov dword ptr fs:[0], eax
// 004769e4  8bf1                 mov esi, ecx
// 004769e6  89742410             mov dword ptr [esp + 0x10], esi
// 004769ea  68a0234c00           push 0x4c23a0
// 004769ef  6a08                 push 8
// 004769f1  6a5c                 push 0x5c
// 004769f3  8d86a8030000         lea eax, [esi + 0x3a8]
// 004769f9  50                   push eax
// 004769fa  c744242c05000000     mov dword ptr [esp + 0x2c], 5
// 00476a02  e87e851a00           call 0x61ef85
// 00476a07  8b8670030000         mov eax, dword ptr [esi + 0x370]
// 00476a0d  8b3da8d27700         mov edi, dword ptr [0x77d2a8]
// 00476a13  33db                 xor ebx, ebx
// 00476a15  3bc3                 cmp eax, ebx
// 00476a17  c644241c04           mov byte ptr [esp + 0x1c], 4
// 00476a1c  742d                 je 0x476a4b
// 00476a1e  83c004               add eax, 4
// 00476a21  50                   push eax
// 00476a22  ffd7                 call edi
// 00476a24  85c0                 test eax, eax
// 00476a26  751d                 jne 0x476a45
// 00476a28  8b8e70030000         mov ecx, dword ptr [esi + 0x370]
// 00476a2e  e88dc9feff           call 0x4633c0
// 00476a33  8b8e70030000         mov ecx, dword ptr [esi + 0x370]
// 00476a39  3bcb                 cmp ecx, ebx
// 00476a3b  7408                 je 0x476a45
// 00476a3d  8b11                 mov edx, dword ptr [ecx]
// 00476a3f  8b02                 mov eax, dword ptr [edx]
// 00476a41  6a01                 push 1
// 00476a43  ffd0                 call eax
// 00476a45  899e70030000         mov dword ptr [esi + 0x370], ebx
// 00476a4b  8b866c030000         mov eax, dword ptr [esi + 0x36c]
// 00476a51  3bc3                 cmp eax, ebx
// 00476a53  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00476a58  742d                 je 0x476a87
// 00476a5a  83c004               add eax, 4
// 00476a5d  50                   push eax
// 00476a5e  ffd7                 call edi
// 00476a60  85c0                 test eax, eax
// 00476a62  751d                 jne 0x476a81
// 00476a64  8b8e6c030000         mov ecx, dword ptr [esi + 0x36c]
// 00476a6a  e851c9feff           call 0x4633c0
// 00476a6f  8b8e6c030000         mov ecx, dword ptr [esi + 0x36c]
// 00476a75  3bcb                 cmp ecx, ebx
// 00476a77  7408                 je 0x476a81
// 00476a79  8b11                 mov edx, dword ptr [ecx]
// 00476a7b  8b02                 mov eax, dword ptr [edx]
// 00476a7d  6a01                 push 1
// 00476a7f  ffd0                 call eax
// 00476a81  899e6c030000         mov dword ptr [esi + 0x36c], ebx
// 00476a87  8b8668030000         mov eax, dword ptr [esi + 0x368]
// 00476a8d  3bc3                 cmp eax, ebx
// 00476a8f  c644241c02           mov byte ptr [esp + 0x1c], 2
// 00476a94  742d                 je 0x476ac3
// 00476a96  83c004               add eax, 4
// 00476a99  50                   push eax
// 00476a9a  ffd7                 call edi
// 00476a9c  85c0                 test eax, eax
// 00476a9e  751d                 jne 0x476abd
// 00476aa0  8b8e68030000         mov ecx, dword ptr [esi + 0x368]
// 00476aa6  e815c9feff           call 0x4633c0
// 00476aab  8b8e68030000         mov ecx, dword ptr [esi + 0x368]
// 00476ab1  3bcb                 cmp ecx, ebx
// 00476ab3  7408                 je 0x476abd
// 00476ab5  8b11                 mov edx, dword ptr [ecx]
// 00476ab7  8b02                 mov eax, dword ptr [edx]
// 00476ab9  6a01                 push 1
// 00476abb  ffd0                 call eax
// 00476abd  899e68030000         mov dword ptr [esi + 0x368], ebx
// 00476ac3  8b8664030000         mov eax, dword ptr [esi + 0x364]
// 00476ac9  3bc3                 cmp eax, ebx
// 00476acb  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00476ad0  742d                 je 0x476aff
// 00476ad2  83c004               add eax, 4
// 00476ad5  50                   push eax
// 00476ad6  ffd7                 call edi
// 00476ad8  85c0                 test eax, eax
// 00476ada  751d                 jne 0x476af9
// 00476adc  8b8e64030000         mov ecx, dword ptr [esi + 0x364]
// 00476ae2  e8d9c8feff           call 0x4633c0
// 00476ae7  8b8e64030000         mov ecx, dword ptr [esi + 0x364]
// 00476aed  3bcb                 cmp ecx, ebx
// 00476aef  7408                 je 0x476af9
// 00476af1  8b11                 mov edx, dword ptr [ecx]
// 00476af3  8b02                 mov eax, dword ptr [edx]
// 00476af5  6a01                 push 1
// 00476af7  ffd0                 call eax
// 00476af9  899e64030000         mov dword ptr [esi + 0x364], ebx
// 00476aff  8b8660030000         mov eax, dword ptr [esi + 0x360]
// 00476b05  3bc3                 cmp eax, ebx
// 00476b07  885c241c             mov byte ptr [esp + 0x1c], bl
// 00476b0b  742d                 je 0x476b3a
// 00476b0d  83c004               add eax, 4
// 00476b10  50                   push eax
// 00476b11  ffd7                 call edi
// 00476b13  85c0                 test eax, eax
// 00476b15  751d                 jne 0x476b34
// 00476b17  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 00476b1d  e89ec8feff           call 0x4633c0
// 00476b22  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 00476b28  3bcb                 cmp ecx, ebx
// 00476b2a  7408                 je 0x476b34
// 00476b2c  8b11                 mov edx, dword ptr [ecx]
// 00476b2e  8b02                 mov eax, dword ptr [edx]
// 00476b30  6a01                 push 1
// 00476b32  ffd0                 call eax
// 00476b34  899e60030000         mov dword ptr [esi + 0x360], ebx
// 00476b3a  8b86c8020000         mov eax, dword ptr [esi + 0x2c8]
// 00476b40  3bc3                 cmp eax, ebx
// 00476b42  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00476b4a  742d                 je 0x476b79
// 00476b4c  83c004               add eax, 4
// 00476b4f  50                   push eax
// 00476b50  ffd7                 call edi
// 00476b52  85c0                 test eax, eax
// 00476b54  751d                 jne 0x476b73
// 00476b56  8b8ec8020000         mov ecx, dword ptr [esi + 0x2c8]
// 00476b5c  e85fc8feff           call 0x4633c0
// 00476b61  8b8ec8020000         mov ecx, dword ptr [esi + 0x2c8]
// 00476b67  3bcb                 cmp ecx, ebx
// 00476b69  7408                 je 0x476b73
// 00476b6b  8b11                 mov edx, dword ptr [ecx]
// 00476b6d  8b02                 mov eax, dword ptr [edx]
// 00476b6f  6a01                 push 1
// 00476b71  ffd0                 call eax
// 00476b73  899ec8020000         mov dword ptr [esi + 0x2c8], ebx
// 00476b79  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00476b7d  64890d00000000       mov dword ptr fs:[0], ecx
// 00476b84  59                   pop ecx
// 00476b85  5f                   pop edi
// 00476b86  5e                   pop esi
// 00476b87  5b                   pop ebx
// 00476b88  83c410               add esp, 0x10
// 00476b8b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??1RenderState@RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
