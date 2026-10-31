// roc 2007-03 00413e50  unit: seg_00410000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00413e50
//
// 00413e50  55                   push ebp
// 00413e51  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00413e55  85ed                 test ebp, ebp
// 00413e57  56                   push esi
// 00413e58  8bf1                 mov esi, ecx
// 00413e5a  750a                 jne 0x413e66
// 00413e5c  6805400080           push 0x80004005
// 00413e61  e89ad1feff           call 0x401000
// 00413e66  53                   push ebx
// 00413e67  57                   push edi
// 00413e68  33db                 xor ebx, ebx
// 00413e6a  33ff                 xor edi, edi
// 00413e6c  8d642400             lea esp, [esp]
// 00413e70  8b8730607800         mov eax, dword ptr [edi + 0x786030]
// 00413e76  85c0                 test eax, eax
// 00413e78  740f                 je 0x413e89
// 00413e7a  50                   push eax
// 00413e7b  55                   push ebp
// 00413e7c  ff158ce97700         call dword ptr [0x77e98c]
// 00413e82  83c408               add esp, 8
// 00413e85  85c0                 test eax, eax
// 00413e87  7439                 je 0x413ec2
// 00413e89  83c70c               add edi, 0xc
// 00413e8c  83c301               add ebx, 1
// 00413e8f  83ff60               cmp edi, 0x60
// 00413e92  72dc                 jb 0x413e70
// 00413e94  8bc5                 mov eax, ebp
// 00413e96  c78628120000ffffffff mov dword ptr [esi + 0x1228], 0xffffffff
// 00413ea0  8d5001               lea edx, [eax + 1]
// 00413ea3  8a08                 mov cl, byte ptr [eax]
// 00413ea5  83c001               add eax, 1
// 00413ea8  84c9                 test cl, cl
// 00413eaa  75f7                 jne 0x413ea3
// 00413eac  2bc2                 sub eax, edx
// 00413eae  83f820               cmp eax, 0x20
// 00413eb1  89862c120000         mov dword ptr [esi + 0x122c], eax
// 00413eb7  7635                 jbe 0x413eee
// 00413eb9  5f                   pop edi
// 00413eba  5b                   pop ebx
// 00413ebb  5e                   pop esi
// 00413ebc  33c0                 xor eax, eax
// 00413ebe  5d                   pop ebp
// 00413ebf  c20400               ret 4
// 00413ec2  83fbff               cmp ebx, -1
// 00413ec5  74cd                 je 0x413e94
// 00413ec7  8d045b               lea eax, [ebx + ebx*2]
// 00413eca  899e28120000         mov dword ptr [esi + 0x1228], ebx
// 00413ed0  8b0c8534607800       mov ecx, dword ptr [eax*4 + 0x786034]
// 00413ed7  898e2c120000         mov dword ptr [esi + 0x122c], ecx
// 00413edd  668b148538607800     mov dx, word ptr [eax*4 + 0x786038]
// 00413ee5  66899626120000       mov word ptr [esi + 0x1226], dx
// 00413eec  eb09                 jmp 0x413ef7
// 00413eee  66c786261200000000   mov word ptr [esi + 0x1226], 0
// 00413ef7  8b862c120000         mov eax, dword ptr [esi + 0x122c]
// 00413efd  50                   push eax
// 00413efe  55                   push ebp
// 00413eff  6a21                 push 0x21
// 00413f01  56                   push esi
// 00413f02  ff1538e97700         call dword ptr [0x77e938]
// 00413f08  50                   push eax
// 00413f09  e8e2d7feff           call 0x4016f0
// 00413f0e  8b862c120000         mov eax, dword ptr [esi + 0x122c]
// 00413f14  83c414               add esp, 0x14
// 00413f17  5f                   pop edi
// 00413f18  5b                   pop ebx
// 00413f19  c6040600             mov byte ptr [esi + eax], 0
// 00413f1d  5e                   pop esi
// 00413f1e  b801000000           mov eax, 1
// 00413f23  5d                   pop ebp
// 00413f24  c20400               ret 4
// copied from an identical function in another client (function ?SetSchemeName@CUrl@ATL@@QAEHPBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-8.0-dll roc_boost_atl_f4b0910a5d2d7185.cpp