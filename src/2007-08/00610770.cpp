// from server: 100% by auto
// roc 2007-08 00610770  unit: RBX::Ball  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00610770
//
// 00610770  8b4708               mov eax, dword ptr [edi + 8]
// 00610773  3b4608               cmp eax, dword ptr [esi + 8]
// 00610776  55                   push ebp
// 00610777  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0061077b  740d                 je 0x61078a
// 0061077d  56                   push esi
// 0061077e  57                   push edi
// 0061077f  55                   push ebp
// 00610780  e89b6bfbff           call 0x5c7320
// 00610785  83c40c               add esp, 0xc
// 00610788  5d                   pop ebp
// 00610789  c3                   ret 
// 0061078a  83f803               cmp eax, 3
// 0061078d  7516                 jne 0x6107a5
// 0061078f  dd06                 fld qword ptr [esi]
// 00610791  dc1f                 fcomp qword ptr [edi]
// 00610793  dfe0                 fnstsw ax
// 00610795  f6c401               test ah, 1
// 00610798  7507                 jne 0x6107a1
// 0061079a  b801000000           mov eax, 1
// 0061079f  5d                   pop ebp
// 006107a0  c3                   ret 
// 006107a1  33c0                 xor eax, eax
// 006107a3  5d                   pop ebp
// 006107a4  c3                   ret 
// 006107a5  83f804               cmp eax, 4
// 006107a8  7514                 jne 0x6107be
// 006107aa  8b06                 mov eax, dword ptr [esi]
// 006107ac  8b0f                 mov ecx, dword ptr [edi]
// 006107ae  e8bdfeffff           call 0x610670
// 006107b3  33c9                 xor ecx, ecx
// 006107b5  85c0                 test eax, eax
// 006107b7  0f9ec1               setle cl
// 006107ba  5d                   pop ebp
// 006107bb  8bc1                 mov eax, ecx
// 006107bd  c3                   ret 
// 006107be  53                   push ebx
// 006107bf  6a0e                 push 0xe
// 006107c1  57                   push edi
// 006107c2  8bde                 mov ebx, esi
// 006107c4  8bc5                 mov eax, ebp
// 006107c6  e825feffff           call 0x6105f0
// 006107cb  83c408               add esp, 8
// 006107ce  83f8ff               cmp eax, -1
// 006107d1  752b                 jne 0x6107fe
// 006107d3  6a0d                 push 0xd
// 006107d5  56                   push esi
// 006107d6  8bdf                 mov ebx, edi
// 006107d8  8bc5                 mov eax, ebp
// 006107da  e811feffff           call 0x6105f0
// 006107df  83c408               add esp, 8
// 006107e2  83f8ff               cmp eax, -1
// 006107e5  740c                 je 0x6107f3
// 006107e7  33d2                 xor edx, edx
// 006107e9  85c0                 test eax, eax
// 006107eb  0f94c2               sete dl
// 006107ee  5b                   pop ebx
// 006107ef  5d                   pop ebp
// 006107f0  8bc2                 mov eax, edx
// 006107f2  c3                   ret 
// 006107f3  56                   push esi
// 006107f4  57                   push edi
// 006107f5  55                   push ebp
// 006107f6  e8256bfbff           call 0x5c7320
// 006107fb  83c40c               add esp, 0xc
// 006107fe  5b                   pop ebx
// 006107ff  5d                   pop ebp
// 00610800  c3                   ret 
// library lua-5.1.4/lvm.c (function _lessequal)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
