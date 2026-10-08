// from server: 100% by auto
// roc 2008-06 00479a70  unit: CInstanceRecord::CNameItem  size: 448 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00479a70
//
// 00479a70  6aff                 push -1
// 00479a72  68a44a7c00           push 0x7c4aa4
// 00479a77  64a100000000         mov eax, dword ptr fs:[0]
// 00479a7d  50                   push eax
// 00479a7e  64892500000000       mov dword ptr fs:[0], esp
// 00479a85  51                   push ecx
// 00479a86  53                   push ebx
// 00479a87  56                   push esi
// 00479a88  8bf1                 mov esi, ecx
// 00479a8a  57                   push edi
// 00479a8b  8974240c             mov dword ptr [esp + 0xc], esi
// 00479a8f  6840764d00           push 0x4d7640
// 00479a94  6a08                 push 8
// 00479a96  6a5c                 push 0x5c
// 00479a98  8d86a8030000         lea eax, [esi + 0x3a8]
// 00479a9e  50                   push eax
// 00479a9f  c744242805000000     mov dword ptr [esp + 0x28], 5
// 00479aa7  e8af7b2200           call 0x6a165b
// 00479aac  8b8670030000         mov eax, dword ptr [esi + 0x370]
// 00479ab2  8b3dac218000         mov edi, dword ptr [0x8021ac]
// 00479ab8  33db                 xor ebx, ebx
// 00479aba  c644241804           mov byte ptr [esp + 0x18], 4
// 00479abf  3bc3                 cmp eax, ebx
// 00479ac1  742d                 je 0x479af0
// 00479ac3  83c004               add eax, 4
// 00479ac6  50                   push eax
// 00479ac7  ffd7                 call edi
// 00479ac9  85c0                 test eax, eax
// 00479acb  751d                 jne 0x479aea
// 00479acd  8b8e70030000         mov ecx, dword ptr [esi + 0x370]
// 00479ad3  e8b812feff           call 0x45ad90
// 00479ad8  8b8e70030000         mov ecx, dword ptr [esi + 0x370]
// 00479ade  3bcb                 cmp ecx, ebx
// 00479ae0  7408                 je 0x479aea
// 00479ae2  8b11                 mov edx, dword ptr [ecx]
// 00479ae4  8b02                 mov eax, dword ptr [edx]
// 00479ae6  6a01                 push 1
// 00479ae8  ffd0                 call eax
// 00479aea  899e70030000         mov dword ptr [esi + 0x370], ebx
// 00479af0  8b866c030000         mov eax, dword ptr [esi + 0x36c]
// 00479af6  c644241803           mov byte ptr [esp + 0x18], 3
// 00479afb  3bc3                 cmp eax, ebx
// 00479afd  742d                 je 0x479b2c
// 00479aff  83c004               add eax, 4
// 00479b02  50                   push eax
// 00479b03  ffd7                 call edi
// 00479b05  85c0                 test eax, eax
// 00479b07  751d                 jne 0x479b26
// 00479b09  8b8e6c030000         mov ecx, dword ptr [esi + 0x36c]
// 00479b0f  e87c12feff           call 0x45ad90
// 00479b14  8b8e6c030000         mov ecx, dword ptr [esi + 0x36c]
// 00479b1a  3bcb                 cmp ecx, ebx
// 00479b1c  7408                 je 0x479b26
// 00479b1e  8b11                 mov edx, dword ptr [ecx]
// 00479b20  8b02                 mov eax, dword ptr [edx]
// 00479b22  6a01                 push 1
// 00479b24  ffd0                 call eax
// 00479b26  899e6c030000         mov dword ptr [esi + 0x36c], ebx
// 00479b2c  8b8668030000         mov eax, dword ptr [esi + 0x368]
// 00479b32  c644241802           mov byte ptr [esp + 0x18], 2
// 00479b37  3bc3                 cmp eax, ebx
// 00479b39  742d                 je 0x479b68
// 00479b3b  83c004               add eax, 4
// 00479b3e  50                   push eax
// 00479b3f  ffd7                 call edi
// 00479b41  85c0                 test eax, eax
// 00479b43  751d                 jne 0x479b62
// 00479b45  8b8e68030000         mov ecx, dword ptr [esi + 0x368]
// 00479b4b  e84012feff           call 0x45ad90
// 00479b50  8b8e68030000         mov ecx, dword ptr [esi + 0x368]
// 00479b56  3bcb                 cmp ecx, ebx
// 00479b58  7408                 je 0x479b62
// 00479b5a  8b11                 mov edx, dword ptr [ecx]
// 00479b5c  8b02                 mov eax, dword ptr [edx]
// 00479b5e  6a01                 push 1
// 00479b60  ffd0                 call eax
// 00479b62  899e68030000         mov dword ptr [esi + 0x368], ebx
// 00479b68  8b8664030000         mov eax, dword ptr [esi + 0x364]
// 00479b6e  c644241801           mov byte ptr [esp + 0x18], 1
// 00479b73  3bc3                 cmp eax, ebx
// 00479b75  742d                 je 0x479ba4
// 00479b77  83c004               add eax, 4
// 00479b7a  50                   push eax
// 00479b7b  ffd7                 call edi
// 00479b7d  85c0                 test eax, eax
// 00479b7f  751d                 jne 0x479b9e
// 00479b81  8b8e64030000         mov ecx, dword ptr [esi + 0x364]
// 00479b87  e80412feff           call 0x45ad90
// 00479b8c  8b8e64030000         mov ecx, dword ptr [esi + 0x364]
// 00479b92  3bcb                 cmp ecx, ebx
// 00479b94  7408                 je 0x479b9e
// 00479b96  8b11                 mov edx, dword ptr [ecx]
// 00479b98  8b02                 mov eax, dword ptr [edx]
// 00479b9a  6a01                 push 1
// 00479b9c  ffd0                 call eax
// 00479b9e  899e64030000         mov dword ptr [esi + 0x364], ebx
// 00479ba4  8b8660030000         mov eax, dword ptr [esi + 0x360]
// 00479baa  885c2418             mov byte ptr [esp + 0x18], bl
// 00479bae  3bc3                 cmp eax, ebx
// 00479bb0  742d                 je 0x479bdf
// 00479bb2  83c004               add eax, 4
// 00479bb5  50                   push eax
// 00479bb6  ffd7                 call edi
// 00479bb8  85c0                 test eax, eax
// 00479bba  751d                 jne 0x479bd9
// 00479bbc  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 00479bc2  e8c911feff           call 0x45ad90
// 00479bc7  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 00479bcd  3bcb                 cmp ecx, ebx
// 00479bcf  7408                 je 0x479bd9
// 00479bd1  8b11                 mov edx, dword ptr [ecx]
// 00479bd3  8b02                 mov eax, dword ptr [edx]
// 00479bd5  6a01                 push 1
// 00479bd7  ffd0                 call eax
// 00479bd9  899e60030000         mov dword ptr [esi + 0x360], ebx
// 00479bdf  8b86c8020000         mov eax, dword ptr [esi + 0x2c8]
// 00479be5  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00479bed  3bc3                 cmp eax, ebx
// 00479bef  742d                 je 0x479c1e
// 00479bf1  83c004               add eax, 4
// 00479bf4  50                   push eax
// 00479bf5  ffd7                 call edi
// 00479bf7  85c0                 test eax, eax
// 00479bf9  751d                 jne 0x479c18
// 00479bfb  8b8ec8020000         mov ecx, dword ptr [esi + 0x2c8]
// 00479c01  e88a11feff           call 0x45ad90
// 00479c06  8b8ec8020000         mov ecx, dword ptr [esi + 0x2c8]
// 00479c0c  3bcb                 cmp ecx, ebx
// 00479c0e  7408                 je 0x479c18
// 00479c10  8b11                 mov edx, dword ptr [ecx]
// 00479c12  8b02                 mov eax, dword ptr [edx]
// 00479c14  6a01                 push 1
// 00479c16  ffd0                 call eax
// 00479c18  899ec8020000         mov dword ptr [esi + 0x2c8], ebx
// 00479c1e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00479c22  5f                   pop edi
// 00479c23  5e                   pop esi
// 00479c24  5b                   pop ebx
// 00479c25  64890d00000000       mov dword ptr fs:[0], ecx
// 00479c2c  83c410               add esp, 0x10
// 00479c2f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??1RenderState@RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
