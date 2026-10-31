// roc 2007-08 00412f30  unit: std::runtime_error  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00412f30
//
// 00412f30  55                   push ebp
// 00412f31  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00412f35  85ed                 test ebp, ebp
// 00412f37  56                   push esi
// 00412f38  8bf1                 mov esi, ecx
// 00412f3a  750a                 jne 0x412f46
// 00412f3c  6805400080           push 0x80004005
// 00412f41  e8bae0feff           call 0x401000
// 00412f46  53                   push ebx
// 00412f47  57                   push edi
// 00412f48  33db                 xor ebx, ebx
// 00412f4a  33ff                 xor edi, edi
// 00412f4c  8d642400             lea esp, [esp]
// 00412f50  8b87806f7800         mov eax, dword ptr [edi + 0x786f80]
// 00412f56  85c0                 test eax, eax
// 00412f58  740f                 je 0x412f69
// 00412f5a  50                   push eax
// 00412f5b  55                   push ebp
// 00412f5c  ff151ce77700         call dword ptr [0x77e71c]
// 00412f62  83c408               add esp, 8
// 00412f65  85c0                 test eax, eax
// 00412f67  7439                 je 0x412fa2
// 00412f69  83c70c               add edi, 0xc
// 00412f6c  83c301               add ebx, 1
// 00412f6f  83ff60               cmp edi, 0x60
// 00412f72  72dc                 jb 0x412f50
// 00412f74  8bc5                 mov eax, ebp
// 00412f76  c78628120000ffffffff mov dword ptr [esi + 0x1228], 0xffffffff
// 00412f80  8d5001               lea edx, [eax + 1]
// 00412f83  8a08                 mov cl, byte ptr [eax]
// 00412f85  83c001               add eax, 1
// 00412f88  84c9                 test cl, cl
// 00412f8a  75f7                 jne 0x412f83
// 00412f8c  2bc2                 sub eax, edx
// 00412f8e  83f820               cmp eax, 0x20
// 00412f91  89862c120000         mov dword ptr [esi + 0x122c], eax
// 00412f97  7635                 jbe 0x412fce
// 00412f99  5f                   pop edi
// 00412f9a  5b                   pop ebx
// 00412f9b  5e                   pop esi
// 00412f9c  33c0                 xor eax, eax
// 00412f9e  5d                   pop ebp
// 00412f9f  c20400               ret 4
// 00412fa2  83fbff               cmp ebx, -1
// 00412fa5  74cd                 je 0x412f74
// 00412fa7  8d045b               lea eax, [ebx + ebx*2]
// 00412faa  899e28120000         mov dword ptr [esi + 0x1228], ebx
// 00412fb0  8b0c85846f7800       mov ecx, dword ptr [eax*4 + 0x786f84]
// 00412fb7  898e2c120000         mov dword ptr [esi + 0x122c], ecx
// 00412fbd  668b1485886f7800     mov dx, word ptr [eax*4 + 0x786f88]
// 00412fc5  66899626120000       mov word ptr [esi + 0x1226], dx
// 00412fcc  eb09                 jmp 0x412fd7
// 00412fce  66c786261200000000   mov word ptr [esi + 0x1226], 0
// 00412fd7  8b862c120000         mov eax, dword ptr [esi + 0x122c]
// 00412fdd  50                   push eax
// 00412fde  55                   push ebp
// 00412fdf  6a21                 push 0x21
// 00412fe1  56                   push esi
// 00412fe2  ff15cce67700         call dword ptr [0x77e6cc]
// 00412fe8  50                   push eax
// 00412fe9  e8f2e6feff           call 0x4016e0
// 00412fee  8b862c120000         mov eax, dword ptr [esi + 0x122c]
// 00412ff4  83c414               add esp, 0x14
// 00412ff7  5f                   pop edi
// 00412ff8  5b                   pop ebx
// 00412ff9  c6040600             mov byte ptr [esi + eax], 0
// 00412ffd  5e                   pop esi
// 00412ffe  b801000000           mov eax, 1
// 00413003  5d                   pop ebp
// 00413004  c20400               ret 4
// copied from an identical function in another client (function ?SetSchemeName@CUrl@ATL@@QAEHPBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-8.0-dll roc_boost_atl_f4b0910a5d2d7185.cpp