// roc 2007-08 00712a80  unit: CXTShadowWnd  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00712a80
//
// 00712a80  83ec20               sub esp, 0x20
// 00712a83  53                   push ebx
// 00712a84  56                   push esi
// 00712a85  8bf1                 mov esi, ecx
// 00712a87  56                   push esi
// 00712a88  8d4c240c             lea ecx, [esp + 0xc]
// 00712a8c  e80fd5f6ff           call 0x67ffa0
// 00712a91  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00712a95  8b5804               mov ebx, dword ptr [eax + 4]
// 00712a98  85db                 test ebx, ebx
// 00712a9a  0f84ba000000         je 0x712b5a
// 00712aa0  55                   push ebp
// 00712aa1  57                   push edi
// 00712aa2  8bc3                 mov eax, ebx
// 00712aa4  8b4008               mov eax, dword ptr [eax + 8]
// 00712aa7  8b1b                 mov ebx, dword ptr [ebx]
// 00712aa9  33c9                 xor ecx, ecx
// 00712aab  39485c               cmp dword ptr [eax + 0x5c], ecx
// 00712aae  0f94c1               sete cl
// 00712ab1  394e5c               cmp dword ptr [esi + 0x5c], ecx
// 00712ab4  0f8596000000         jne 0x712b50
// 00712aba  50                   push eax
// 00712abb  8d4c2424             lea ecx, [esp + 0x24]
// 00712abf  e8dcd4f6ff           call 0x67ffa0
// 00712ac4  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 00712ac8  7540                 jne 0x712b0a
// 00712aca  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00712ace  8b542414             mov edx, dword ptr [esp + 0x14]
// 00712ad2  8d41ff               lea eax, [ecx - 1]
// 00712ad5  3bd0                 cmp edx, eax
// 00712ad7  7577                 jne 0x712b50
// 00712ad9  8b442418             mov eax, dword ptr [esp + 0x18]
// 00712add  3b442428             cmp eax, dword ptr [esp + 0x28]
// 00712ae1  7d6d                 jge 0x712b50
// 00712ae3  3b442420             cmp eax, dword ptr [esp + 0x20]
// 00712ae7  7e67                 jle 0x712b50
// 00712ae9  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00712aed  2bf9                 sub edi, ecx
// 00712aef  8d0c7a               lea ecx, [edx + edi*2]
// 00712af2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00712af6  6a01                 push 1
// 00712af8  2bd1                 sub edx, ecx
// 00712afa  52                   push edx
// 00712afb  8b542418             mov edx, dword ptr [esp + 0x18]
// 00712aff  2bc2                 sub eax, edx
// 00712b01  50                   push eax
// 00712b02  51                   push ecx
// 00712b03  894c2424             mov dword ptr [esp + 0x24], ecx
// 00712b07  52                   push edx
// 00712b08  eb3f                 jmp 0x712b49
// 00712b0a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00712b0e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00712b12  8d41ff               lea eax, [ecx - 1]
// 00712b15  3bf8                 cmp edi, eax
// 00712b17  7537                 jne 0x712b50
// 00712b19  8b542414             mov edx, dword ptr [esp + 0x14]
// 00712b1d  3b542424             cmp edx, dword ptr [esp + 0x24]
// 00712b21  7e2d                 jle 0x712b50
// 00712b23  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00712b27  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 00712b2b  7d23                 jge 0x712b50
// 00712b2d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00712b31  6a01                 push 1
// 00712b33  2bc2                 sub eax, edx
// 00712b35  50                   push eax
// 00712b36  8b442420             mov eax, dword ptr [esp + 0x20]
// 00712b3a  2be9                 sub ebp, ecx
// 00712b3c  8d4c6fff             lea ecx, [edi + ebp*2 - 1]
// 00712b40  2bc1                 sub eax, ecx
// 00712b42  50                   push eax
// 00712b43  52                   push edx
// 00712b44  894c2420             mov dword ptr [esp + 0x20], ecx
// 00712b48  51                   push ecx
// 00712b49  8bce                 mov ecx, esi
// 00712b4b  e8e4d4f1ff           call 0x630034
// 00712b50  85db                 test ebx, ebx
// 00712b52  0f854affffff         jne 0x712aa2
// 00712b58  5f                   pop edi
// 00712b59  5d                   pop ebp
// 00712b5a  5e                   pop esi
// 00712b5b  5b                   pop ebx
// 00712b5c  83c420               add esp, 0x20
// 00712b5f  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTWndShadow.cpp (function ?LongShadow@CXTShadowWnd@@IAEXPAVCShadowList@CXTShadowsManager@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTWndShadow.cpp
