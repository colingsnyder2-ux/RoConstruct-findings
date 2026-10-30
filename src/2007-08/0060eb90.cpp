// from server: 100% by auto
// roc 2007-08 0060eb90  unit: RBX::Ball  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060eb90
//
// 0060eb90  53                   push ebx
// 0060eb91  8bc2                 mov eax, edx
// 0060eb93  57                   push edi
// 0060eb94  8b7e08               mov edi, dword ptr [esi + 8]
// 0060eb97  8d5801               lea ebx, [eax + 1]
// 0060eb9a  8d9b00000000         lea ebx, [ebx]
// 0060eba0  8a08                 mov cl, byte ptr [eax]
// 0060eba2  83c001               add eax, 1
// 0060eba5  84c9                 test cl, cl
// 0060eba7  75f7                 jne 0x60eba0
// 0060eba9  2bc3                 sub eax, ebx
// 0060ebab  50                   push eax
// 0060ebac  52                   push edx
// 0060ebad  56                   push esi
// 0060ebae  e8bd410000           call 0x612d70
// 0060ebb3  8907                 mov dword ptr [edi], eax
// 0060ebb5  c7470804000000       mov dword ptr [edi + 8], 4
// 0060ebbc  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0060ebbf  2b4608               sub eax, dword ptr [esi + 8]
// 0060ebc2  bf10000000           mov edi, 0x10
// 0060ebc7  83c40c               add esp, 0xc
// 0060ebca  3bc7                 cmp eax, edi
// 0060ebcc  7f0b                 jg 0x60ebd9
// 0060ebce  6a01                 push 1
// 0060ebd0  56                   push esi
// 0060ebd1  e83a6ffbff           call 0x5c5b10
// 0060ebd6  83c408               add esp, 8
// 0060ebd9  017e08               add dword ptr [esi + 8], edi
// 0060ebdc  5f                   pop edi
// 0060ebdd  5b                   pop ebx
// 0060ebde  c3                   ret 
// library lua-5.1.4/lobject.c (function _pushstr)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
