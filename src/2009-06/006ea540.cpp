// from server: 100% by auto
// roc 2009-06 006ea540  unit: RBX::PartDropTool  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ea540
//
// 006ea540  8b4708               mov eax, dword ptr [edi + 8]
// 006ea543  55                   push ebp
// 006ea544  8b6c2408             mov ebp, dword ptr [esp + 8]
// 006ea548  3b4608               cmp eax, dword ptr [esi + 8]
// 006ea54b  740d                 je 0x6ea55a
// 006ea54d  56                   push esi
// 006ea54e  57                   push edi
// 006ea54f  55                   push ebp
// 006ea550  e81be6fdff           call 0x6c8b70
// 006ea555  83c40c               add esp, 0xc
// 006ea558  5d                   pop ebp
// 006ea559  c3                   ret 
// 006ea55a  83f803               cmp eax, 3
// 006ea55d  7516                 jne 0x6ea575
// 006ea55f  dd06                 fld qword ptr [esi]
// 006ea561  dc1f                 fcomp qword ptr [edi]
// 006ea563  dfe0                 fnstsw ax
// 006ea565  f6c401               test ah, 1
// 006ea568  7507                 jne 0x6ea571
// 006ea56a  b801000000           mov eax, 1
// 006ea56f  5d                   pop ebp
// 006ea570  c3                   ret 
// 006ea571  33c0                 xor eax, eax
// 006ea573  5d                   pop ebp
// 006ea574  c3                   ret 
// 006ea575  83f804               cmp eax, 4
// 006ea578  7514                 jne 0x6ea58e
// 006ea57a  8b06                 mov eax, dword ptr [esi]
// 006ea57c  8b0f                 mov ecx, dword ptr [edi]
// 006ea57e  e8bdfeffff           call 0x6ea440
// 006ea583  33c9                 xor ecx, ecx
// 006ea585  85c0                 test eax, eax
// 006ea587  0f9ec1               setle cl
// 006ea58a  5d                   pop ebp
// 006ea58b  8bc1                 mov eax, ecx
// 006ea58d  c3                   ret 
// 006ea58e  53                   push ebx
// 006ea58f  6a0e                 push 0xe
// 006ea591  57                   push edi
// 006ea592  8bde                 mov ebx, esi
// 006ea594  8bc5                 mov eax, ebp
// 006ea596  e825feffff           call 0x6ea3c0
// 006ea59b  83c408               add esp, 8
// 006ea59e  83f8ff               cmp eax, -1
// 006ea5a1  752b                 jne 0x6ea5ce
// 006ea5a3  6a0d                 push 0xd
// 006ea5a5  56                   push esi
// 006ea5a6  8bdf                 mov ebx, edi
// 006ea5a8  8bc5                 mov eax, ebp
// 006ea5aa  e811feffff           call 0x6ea3c0
// 006ea5af  83c408               add esp, 8
// 006ea5b2  83f8ff               cmp eax, -1
// 006ea5b5  740c                 je 0x6ea5c3
// 006ea5b7  33d2                 xor edx, edx
// 006ea5b9  85c0                 test eax, eax
// 006ea5bb  0f94c2               sete dl
// 006ea5be  5b                   pop ebx
// 006ea5bf  5d                   pop ebp
// 006ea5c0  8bc2                 mov eax, edx
// 006ea5c2  c3                   ret 
// 006ea5c3  56                   push esi
// 006ea5c4  57                   push edi
// 006ea5c5  55                   push ebp
// 006ea5c6  e8a5e5fdff           call 0x6c8b70
// 006ea5cb  83c40c               add esp, 0xc
// 006ea5ce  5b                   pop ebx
// 006ea5cf  5d                   pop ebp
// 006ea5d0  c3                   ret 
// library lua-5.1.4/lvm.c (function _lessequal)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
