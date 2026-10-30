// roc 2007-03 00624ca0  unit: seg_00620000  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00624ca0
//
// 00624ca0  8b442404             mov eax, dword ptr [esp + 4]
// 00624ca4  83ec0c               sub esp, 0xc
// 00624ca7  57                   push edi
// 00624ca8  6a00                 push 0
// 00624caa  6880000000           push 0x80
// 00624caf  6a03                 push 3
// 00624cb1  6a00                 push 0
// 00624cb3  6a00                 push 0
// 00624cb5  6800000080           push 0x80000000
// 00624cba  50                   push eax
// 00624cbb  ff15f4d17700         call dword ptr [0x77d1f4]
// 00624cc1  8bf8                 mov edi, eax
// 00624cc3  83ffff               cmp edi, -1
// 00624cc6  0f84de000000         je 0x624daa
// 00624ccc  6a00                 push 0
// 00624cce  8d4c240c             lea ecx, [esp + 0xc]
// 00624cd2  51                   push ecx
// 00624cd3  6a04                 push 4
// 00624cd5  8d542418             lea edx, [esp + 0x18]
// 00624cd9  52                   push edx
// 00624cda  57                   push edi
// 00624cdb  c644241889           mov byte ptr [esp + 0x18], 0x89
// 00624ce0  c644241950           mov byte ptr [esp + 0x19], 0x50
// 00624ce5  c644241a4e           mov byte ptr [esp + 0x1a], 0x4e
// 00624cea  c644241b47           mov byte ptr [esp + 0x1b], 0x47
// 00624cef  ff15dcd27700         call dword ptr [0x77d2dc]
// 00624cf5  85c0                 test eax, eax
// 00624cf7  0f84a6000000         je 0x624da3
// 00624cfd  837c240804           cmp dword ptr [esp + 8], 4
// 00624d02  0f859b000000         jne 0x624da3
// 00624d08  53                   push ebx
// 00624d09  56                   push esi
// 00624d0a  b804000000           mov eax, 4
// 00624d0f  8d54240c             lea edx, [esp + 0xc]
// 00624d13  8d742414             lea esi, [esp + 0x14]
// 00624d17  8b0e                 mov ecx, dword ptr [esi]
// 00624d19  3b0a                 cmp ecx, dword ptr [edx]
// 00624d1b  7512                 jne 0x624d2f
// 00624d1d  83e804               sub eax, 4
// 00624d20  83c204               add edx, 4
// 00624d23  83c604               add esi, 4
// 00624d26  83f804               cmp eax, 4
// 00624d29  73ec                 jae 0x624d17
// 00624d2b  85c0                 test eax, eax
// 00624d2d  745d                 je 0x624d8c
// 00624d2f  0fb61a               movzx ebx, byte ptr [edx]
// 00624d32  0fb60e               movzx ecx, byte ptr [esi]
// 00624d35  2bcb                 sub ecx, ebx
// 00624d37  7545                 jne 0x624d7e
// 00624d39  83e801               sub eax, 1
// 00624d3c  83c201               add edx, 1
// 00624d3f  83c601               add esi, 1
// 00624d42  85c0                 test eax, eax
// 00624d44  7446                 je 0x624d8c
// 00624d46  0fb61a               movzx ebx, byte ptr [edx]
// 00624d49  0fb60e               movzx ecx, byte ptr [esi]
// 00624d4c  2bcb                 sub ecx, ebx
// 00624d4e  752e                 jne 0x624d7e
// 00624d50  83e801               sub eax, 1
// 00624d53  83c201               add edx, 1
// 00624d56  83c601               add esi, 1
// 00624d59  85c0                 test eax, eax
// 00624d5b  742f                 je 0x624d8c
// 00624d5d  0fb61a               movzx ebx, byte ptr [edx]
// 00624d60  0fb60e               movzx ecx, byte ptr [esi]
// 00624d63  2bcb                 sub ecx, ebx
// 00624d65  7517                 jne 0x624d7e
// 00624d67  83e801               sub eax, 1
// 00624d6a  83c201               add edx, 1
// 00624d6d  83c601               add esi, 1
// 00624d70  85c0                 test eax, eax
// 00624d72  7418                 je 0x624d8c
// 00624d74  0fb612               movzx edx, byte ptr [edx]
// 00624d77  0fb60e               movzx ecx, byte ptr [esi]
// 00624d7a  2bca                 sub ecx, edx
// 00624d7c  740e                 je 0x624d8c
// 00624d7e  85c9                 test ecx, ecx
// 00624d80  be01000000           mov esi, 1
// 00624d85  7f07                 jg 0x624d8e
// 00624d87  83ceff               or esi, 0xffffffff
// 00624d8a  eb02                 jmp 0x624d8e
// 00624d8c  33f6                 xor esi, esi
// 00624d8e  57                   push edi
// 00624d8f  ff15fcd17700         call dword ptr [0x77d1fc]
// 00624d95  33c0                 xor eax, eax
// 00624d97  85f6                 test esi, esi
// 00624d99  5e                   pop esi
// 00624d9a  5b                   pop ebx
// 00624d9b  0f94c0               sete al
// 00624d9e  5f                   pop edi
// 00624d9f  83c40c               add esp, 0xc
// 00624da2  c3                   ret 
// 00624da3  57                   push edi
// 00624da4  ff15fcd17700         call dword ptr [0x77d1fc]
// 00624daa  33c0                 xor eax, eax
// 00624dac  5f                   pop edi
// 00624dad  83c40c               add esp, 0xc
// 00624db0  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPImageManager.cpp (function ?IsPngBitmapFile@CXTPImageManagerIcon@@SAHPBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPImageManager.cpp
