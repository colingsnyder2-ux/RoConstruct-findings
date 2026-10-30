// from server: 100% by auto
// roc 2008-06 0065ccf0  unit: RBX::BallBallContact  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065ccf0
//
// 0065ccf0  8b4708               mov eax, dword ptr [edi + 8]
// 0065ccf3  55                   push ebp
// 0065ccf4  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0065ccf8  3b4608               cmp eax, dword ptr [esi + 8]
// 0065ccfb  740d                 je 0x65cd0a
// 0065ccfd  56                   push esi
// 0065ccfe  57                   push edi
// 0065ccff  55                   push ebp
// 0065cd00  e8eb6dfcff           call 0x623af0
// 0065cd05  83c40c               add esp, 0xc
// 0065cd08  5d                   pop ebp
// 0065cd09  c3                   ret 
// 0065cd0a  83f803               cmp eax, 3
// 0065cd0d  7516                 jne 0x65cd25
// 0065cd0f  dd06                 fld qword ptr [esi]
// 0065cd11  dc1f                 fcomp qword ptr [edi]
// 0065cd13  dfe0                 fnstsw ax
// 0065cd15  f6c401               test ah, 1
// 0065cd18  7507                 jne 0x65cd21
// 0065cd1a  b801000000           mov eax, 1
// 0065cd1f  5d                   pop ebp
// 0065cd20  c3                   ret 
// 0065cd21  33c0                 xor eax, eax
// 0065cd23  5d                   pop ebp
// 0065cd24  c3                   ret 
// 0065cd25  83f804               cmp eax, 4
// 0065cd28  7514                 jne 0x65cd3e
// 0065cd2a  8b06                 mov eax, dword ptr [esi]
// 0065cd2c  8b0f                 mov ecx, dword ptr [edi]
// 0065cd2e  e8bdfeffff           call 0x65cbf0
// 0065cd33  33c9                 xor ecx, ecx
// 0065cd35  85c0                 test eax, eax
// 0065cd37  0f9ec1               setle cl
// 0065cd3a  5d                   pop ebp
// 0065cd3b  8bc1                 mov eax, ecx
// 0065cd3d  c3                   ret 
// 0065cd3e  53                   push ebx
// 0065cd3f  6a0e                 push 0xe
// 0065cd41  57                   push edi
// 0065cd42  8bde                 mov ebx, esi
// 0065cd44  8bc5                 mov eax, ebp
// 0065cd46  e825feffff           call 0x65cb70
// 0065cd4b  83c408               add esp, 8
// 0065cd4e  83f8ff               cmp eax, -1
// 0065cd51  752b                 jne 0x65cd7e
// 0065cd53  6a0d                 push 0xd
// 0065cd55  56                   push esi
// 0065cd56  8bdf                 mov ebx, edi
// 0065cd58  8bc5                 mov eax, ebp
// 0065cd5a  e811feffff           call 0x65cb70
// 0065cd5f  83c408               add esp, 8
// 0065cd62  83f8ff               cmp eax, -1
// 0065cd65  740c                 je 0x65cd73
// 0065cd67  33d2                 xor edx, edx
// 0065cd69  85c0                 test eax, eax
// 0065cd6b  0f94c2               sete dl
// 0065cd6e  5b                   pop ebx
// 0065cd6f  5d                   pop ebp
// 0065cd70  8bc2                 mov eax, edx
// 0065cd72  c3                   ret 
// 0065cd73  56                   push esi
// 0065cd74  57                   push edi
// 0065cd75  55                   push ebp
// 0065cd76  e8756dfcff           call 0x623af0
// 0065cd7b  83c40c               add esp, 0xc
// 0065cd7e  5b                   pop ebx
// 0065cd7f  5d                   pop ebp
// 0065cd80  c3                   ret 
// library lua-5.1.4/lvm.c (function _lessequal)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
