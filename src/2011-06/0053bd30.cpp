// roc 2011-06 0053bd30  unit: G3D::Log  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053bd30
//
// 0053bd30  6890a0cb00           push 0xcba090
// 0053bd35  ff15a41ba400         call dword ptr [0xa41ba4]
// 0053bd3b  a1aca0cb00           mov eax, dword ptr [0xcba0ac]
// 0053bd40  8b0da8a0cb00         mov ecx, dword ptr [0xcba0a8]
// 0053bd46  50                   push eax
// 0053bd47  51                   push ecx
// 0053bd48  ff15bc1ba400         call dword ptr [0xa41bbc]
// 0053bd4e  8b158ca0cb00         mov edx, dword ptr [0xcba08c]
// 0053bd54  52                   push edx
// 0053bd55  ff15f41ba400         call dword ptr [0xa41bf4]
// 0053bd5b  a1a4a0cb00           mov eax, dword ptr [0xcba0a4]
// 0053bd60  85c0                 test eax, eax
// 0053bd62  7d1d                 jge 0x53bd81
// 0053bd64  56                   push esi
// 0053bd65  33f6                 xor esi, esi
// 0053bd67  85c0                 test eax, eax
// 0053bd69  7d15                 jge 0x53bd80
// 0053bd6b  57                   push edi
// 0053bd6c  8b3d9c1ba400         mov edi, dword ptr [0xa41b9c]
// 0053bd72  6a00                 push 0
// 0053bd74  ffd7                 call edi
// 0053bd76  4e                   dec esi
// 0053bd77  3b35a4a0cb00         cmp esi, dword ptr [0xcba0a4]
// 0053bd7d  7ff3                 jg 0x53bd72
// 0053bd7f  5f                   pop edi
// 0053bd80  5e                   pop esi
// 0053bd81  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?_restoreInputGrab_@_internal@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
