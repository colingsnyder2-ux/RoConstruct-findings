// roc 2012-06 00449cb0  unit: CObjectBrowser  size: 373 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00449cb0
//
// 00449cb0  8b442404             mov eax, dword ptr [esp + 4]
// 00449cb4  83ec14               sub esp, 0x14
// 00449cb7  57                   push edi
// 00449cb8  50                   push eax
// 00449cb9  8bf9                 mov edi, ecx
// 00449cbb  e8468f5300           call 0x982c06
// 00449cc0  83f8ff               cmp eax, -1
// 00449cc3  7509                 jne 0x449cce
// 00449cc5  0bc0                 or eax, eax
// 00449cc7  5f                   pop edi
// 00449cc8  83c414               add esp, 0x14
// 00449ccb  c20400               ret 4
// 00449cce  8b5758               mov edx, dword ptr [edi + 0x58]
// 00449cd1  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 00449cd7  56                   push esi
// 00449cd8  6800e90000           push 0xe900
// 00449cdd  6800000050           push 0x50000000
// 00449ce2  6a02                 push 2
// 00449ce4  8d7758               lea esi, [edi + 0x58]
// 00449ce7  6a01                 push 1
// 00449ce9  57                   push edi
// 00449cea  8bce                 mov ecx, esi
// 00449cec  ffd0                 call eax
// 00449cee  85c0                 test eax, eax
// 00449cf0  750b                 jne 0x449cfd
// 00449cf2  5e                   pop esi
// 00449cf3  83c8ff               or eax, 0xffffffff
// 00449cf6  5f                   pop edi
// 00449cf7  83c414               add esp, 0x14
// 00449cfa  c20400               ret 4
// 00449cfd  8b16                 mov edx, dword ptr [esi]
// 00449cff  8b82d0010000         mov eax, dword ptr [edx + 0x1d0]
// 00449d05  53                   push ebx
// 00449d06  6a04                 push 4
// 00449d08  8bce                 mov ecx, esi
// 00449d0a  ffd0                 call eax
// 00449d0c  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 00449d0f  8b16                 mov edx, dword ptr [esi]
// 00449d11  33c0                 xor eax, eax
// 00449d13  89442410             mov dword ptr [esp + 0x10], eax
// 00449d17  894c2410             mov dword ptr [esp + 0x10], ecx
// 00449d1b  8d5c240c             lea ebx, [esp + 0xc]
// 00449d1f  53                   push ebx
// 00449d20  89442410             mov dword ptr [esp + 0x10], eax
// 00449d24  89442418             mov dword ptr [esp + 0x18], eax
// 00449d28  8944241c             mov dword ptr [esp + 0x1c], eax
// 00449d2c  89442420             mov dword ptr [esp + 0x20], eax
// 00449d30  b958020000           mov ecx, 0x258
// 00449d35  51                   push ecx
// 00449d36  b8c8000000           mov eax, 0xc8
// 00449d3b  50                   push eax
// 00449d3c  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 00449d42  688824b500           push 0xb52488
// 00449d47  6a00                 push 0
// 00449d49  6a00                 push 0
// 00449d4b  8bce                 mov ecx, esi
// 00449d4d  ffd0                 call eax
// 00449d4f  85c0                 test eax, eax
// 00449d51  0f8480000000         je 0x449dd7
// 00449d57  8b9f70010000         mov ebx, dword ptr [edi + 0x170]
// 00449d5d  6a01                 push 1
// 00449d5f  81c770010000         add edi, 0x170
// 00449d65  6a00                 push 0
// 00449d67  8bce                 mov ecx, esi
// 00449d69  e8028e5300           call 0x982b70
// 00449d6e  8b9348010000         mov edx, dword ptr [ebx + 0x148]
// 00449d74  50                   push eax
// 00449d75  6800008050           push 0x50800000
// 00449d7a  6a01                 push 1
// 00449d7c  6a02                 push 2
// 00449d7e  56                   push esi
// 00449d7f  8bcf                 mov ecx, edi
// 00449d81  ffd2                 call edx
// 00449d83  85c0                 test eax, eax
// 00449d85  7450                 je 0x449dd7
// 00449d87  8b17                 mov edx, dword ptr [edi]
// 00449d89  8d5c240c             lea ebx, [esp + 0xc]
// 00449d8d  53                   push ebx
// 00449d8e  b9c8000000           mov ecx, 0xc8
// 00449d93  51                   push ecx
// 00449d94  b82c010000           mov eax, 0x12c
// 00449d99  50                   push eax
// 00449d9a  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 00449da0  68c024b500           push 0xb524c0
// 00449da5  6a00                 push 0
// 00449da7  6a00                 push 0
// 00449da9  8bcf                 mov ecx, edi
// 00449dab  ffd0                 call eax
// 00449dad  85c0                 test eax, eax
// 00449daf  7426                 je 0x449dd7
// 00449db1  8b17                 mov edx, dword ptr [edi]
// 00449db3  53                   push ebx
// 00449db4  b9be000000           mov ecx, 0xbe
// 00449db9  51                   push ecx
// 00449dba  b864000000           mov eax, 0x64
// 00449dbf  50                   push eax
// 00449dc0  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 00449dc6  686c24b500           push 0xb5246c
// 00449dcb  6a00                 push 0
// 00449dcd  6a01                 push 1
// 00449dcf  8bcf                 mov ecx, edi
// 00449dd1  ffd0                 call eax
// 00449dd3  85c0                 test eax, eax
// 00449dd5  750c                 jne 0x449de3
// 00449dd7  5b                   pop ebx
// 00449dd8  5e                   pop esi
// 00449dd9  83c8ff               or eax, 0xffffffff
// 00449ddc  5f                   pop edi
// 00449ddd  83c414               add esp, 0x14
// 00449de0  c20400               ret 4
// 00449de3  6a00                 push 0
// 00449de5  6a00                 push 0
// 00449de7  8bce                 mov ecx, esi
// 00449de9  e8248e5300           call 0x982c12
// 00449dee  6a00                 push 0
// 00449df0  6a00                 push 0
// 00449df2  8bcf                 mov ecx, edi
// 00449df4  8bf0                 mov esi, eax
// 00449df6  e8178e5300           call 0x982c12
// 00449dfb  6a00                 push 0
// 00449dfd  6a01                 push 1
// 00449dff  8bcf                 mov ecx, edi
// 00449e01  8bd8                 mov ebx, eax
// 00449e03  e80a8e5300           call 0x982c12
// 00449e08  899ea8000000         mov dword ptr [esi + 0xa8], ebx
// 00449e0e  8986ac000000         mov dword ptr [esi + 0xac], eax
// 00449e14  8983b0000000         mov dword ptr [ebx + 0xb0], eax
// 00449e1a  5b                   pop ebx
// 00449e1b  5e                   pop esi
// 00449e1c  33c0                 xor eax, eax
// 00449e1e  5f                   pop edi
// 00449e1f  83c414               add esp, 0x14
// 00449e22  c20400               ret 4
// copied from an identical function in another client (function ?OnCreate@CObjectBrowser@@QAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_7576742091a0fd5e.cpp