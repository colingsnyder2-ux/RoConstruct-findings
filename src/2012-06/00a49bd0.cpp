// roc 2012-06 00a49bd0  unit: CXTPShadowsManager::CShadowWnd  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a49bd0
//
// 00a49bd0  83ec20               sub esp, 0x20
// 00a49bd3  53                   push ebx
// 00a49bd4  56                   push esi
// 00a49bd5  8bf1                 mov esi, ecx
// 00a49bd7  56                   push esi
// 00a49bd8  8d4c240c             lea ecx, [esp + 0xc]
// 00a49bdc  e85fb5f8ff           call 0x9d5140
// 00a49be1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a49be5  8b5804               mov ebx, dword ptr [eax + 4]
// 00a49be8  85db                 test ebx, ebx
// 00a49bea  0f84ba000000         je 0xa49caa
// 00a49bf0  55                   push ebp
// 00a49bf1  57                   push edi
// 00a49bf2  8bc3                 mov eax, ebx
// 00a49bf4  8b4008               mov eax, dword ptr [eax + 8]
// 00a49bf7  8b1b                 mov ebx, dword ptr [ebx]
// 00a49bf9  33c9                 xor ecx, ecx
// 00a49bfb  39485c               cmp dword ptr [eax + 0x5c], ecx
// 00a49bfe  0f94c1               sete cl
// 00a49c01  394e5c               cmp dword ptr [esi + 0x5c], ecx
// 00a49c04  0f8596000000         jne 0xa49ca0
// 00a49c0a  50                   push eax
// 00a49c0b  8d4c2424             lea ecx, [esp + 0x24]
// 00a49c0f  e82cb5f8ff           call 0x9d5140
// 00a49c14  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 00a49c18  7540                 jne 0xa49c5a
// 00a49c1a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a49c1e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a49c22  8d41ff               lea eax, [ecx - 1]
// 00a49c25  3bd0                 cmp edx, eax
// 00a49c27  7577                 jne 0xa49ca0
// 00a49c29  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a49c2d  3b442428             cmp eax, dword ptr [esp + 0x28]
// 00a49c31  7d6d                 jge 0xa49ca0
// 00a49c33  3b442420             cmp eax, dword ptr [esp + 0x20]
// 00a49c37  7e67                 jle 0xa49ca0
// 00a49c39  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00a49c3d  2bf9                 sub edi, ecx
// 00a49c3f  8d0c7a               lea ecx, [edx + edi*2]
// 00a49c42  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a49c46  6a00                 push 0
// 00a49c48  2bd1                 sub edx, ecx
// 00a49c4a  52                   push edx
// 00a49c4b  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a49c4f  2bc2                 sub eax, edx
// 00a49c51  50                   push eax
// 00a49c52  51                   push ecx
// 00a49c53  894c2424             mov dword ptr [esp + 0x24], ecx
// 00a49c57  52                   push edx
// 00a49c58  eb3f                 jmp 0xa49c99
// 00a49c5a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a49c5e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00a49c62  8d41ff               lea eax, [ecx - 1]
// 00a49c65  3bf8                 cmp edi, eax
// 00a49c67  7537                 jne 0xa49ca0
// 00a49c69  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a49c6d  3b542424             cmp edx, dword ptr [esp + 0x24]
// 00a49c71  7e2d                 jle 0xa49ca0
// 00a49c73  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a49c77  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 00a49c7b  7d23                 jge 0xa49ca0
// 00a49c7d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00a49c81  6a00                 push 0
// 00a49c83  2bc2                 sub eax, edx
// 00a49c85  50                   push eax
// 00a49c86  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a49c8a  2be9                 sub ebp, ecx
// 00a49c8c  8d4c6fff             lea ecx, [edi + ebp*2 - 1]
// 00a49c90  2bc1                 sub eax, ecx
// 00a49c92  50                   push eax
// 00a49c93  52                   push edx
// 00a49c94  894c2420             mov dword ptr [esp + 0x20], ecx
// 00a49c98  51                   push ecx
// 00a49c99  8bce                 mov ecx, esi
// 00a49c9b  e83a88f3ff           call 0x9824da
// 00a49ca0  85db                 test ebx, ebx
// 00a49ca2  0f854affffff         jne 0xa49bf2
// 00a49ca8  5f                   pop edi
// 00a49ca9  5d                   pop ebp
// 00a49caa  5e                   pop esi
// 00a49cab  5b                   pop ebx
// 00a49cac  83c420               add esp, 0x20
// 00a49caf  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPHookManager.cpp (function ?LongShadow@CShadowWnd@CXTPShadowManager@@QAEXPAVCShadowList@2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPHookManager.cpp
