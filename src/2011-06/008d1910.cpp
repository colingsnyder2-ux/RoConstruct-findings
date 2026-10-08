// from server: 100% by auto
// roc 2011-06 008d1910  unit: CXTPShadowsManager::CShadowWnd  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d1910
//
// 008d1910  83ec20               sub esp, 0x20
// 008d1913  53                   push ebx
// 008d1914  56                   push esi
// 008d1915  8bf1                 mov esi, ecx
// 008d1917  56                   push esi
// 008d1918  8d4c240c             lea ecx, [esp + 0xc]
// 008d191c  e80fb4f8ff           call 0x85cd30
// 008d1921  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008d1925  8b5804               mov ebx, dword ptr [eax + 4]
// 008d1928  85db                 test ebx, ebx
// 008d192a  0f84ba000000         je 0x8d19ea
// 008d1930  55                   push ebp
// 008d1931  57                   push edi
// 008d1932  8bc3                 mov eax, ebx
// 008d1934  8b4008               mov eax, dword ptr [eax + 8]
// 008d1937  8b1b                 mov ebx, dword ptr [ebx]
// 008d1939  33c9                 xor ecx, ecx
// 008d193b  39485c               cmp dword ptr [eax + 0x5c], ecx
// 008d193e  0f94c1               sete cl
// 008d1941  394e5c               cmp dword ptr [esi + 0x5c], ecx
// 008d1944  0f8596000000         jne 0x8d19e0
// 008d194a  50                   push eax
// 008d194b  8d4c2424             lea ecx, [esp + 0x24]
// 008d194f  e8dcb3f8ff           call 0x85cd30
// 008d1954  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008d1958  7540                 jne 0x8d199a
// 008d195a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008d195e  8b542414             mov edx, dword ptr [esp + 0x14]
// 008d1962  8d41ff               lea eax, [ecx - 1]
// 008d1965  3bd0                 cmp edx, eax
// 008d1967  7577                 jne 0x8d19e0
// 008d1969  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d196d  3b442428             cmp eax, dword ptr [esp + 0x28]
// 008d1971  7d6d                 jge 0x8d19e0
// 008d1973  3b442420             cmp eax, dword ptr [esp + 0x20]
// 008d1977  7e67                 jle 0x8d19e0
// 008d1979  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008d197d  2bf9                 sub edi, ecx
// 008d197f  8d0c7a               lea ecx, [edx + edi*2]
// 008d1982  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d1986  6a00                 push 0
// 008d1988  2bd1                 sub edx, ecx
// 008d198a  52                   push edx
// 008d198b  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d198f  2bc2                 sub eax, edx
// 008d1991  50                   push eax
// 008d1992  51                   push ecx
// 008d1993  894c2424             mov dword ptr [esp + 0x24], ecx
// 008d1997  52                   push edx
// 008d1998  eb3f                 jmp 0x8d19d9
// 008d199a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d199e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008d19a2  8d41ff               lea eax, [ecx - 1]
// 008d19a5  3bf8                 cmp edi, eax
// 008d19a7  7537                 jne 0x8d19e0
// 008d19a9  8b542414             mov edx, dword ptr [esp + 0x14]
// 008d19ad  3b542424             cmp edx, dword ptr [esp + 0x24]
// 008d19b1  7e2d                 jle 0x8d19e0
// 008d19b3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d19b7  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 008d19bb  7d23                 jge 0x8d19e0
// 008d19bd  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 008d19c1  6a00                 push 0
// 008d19c3  2bc2                 sub eax, edx
// 008d19c5  50                   push eax
// 008d19c6  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d19ca  2be9                 sub ebp, ecx
// 008d19cc  8d4c6fff             lea ecx, [edi + ebp*2 - 1]
// 008d19d0  2bc1                 sub eax, ecx
// 008d19d2  50                   push eax
// 008d19d3  52                   push edx
// 008d19d4  894c2420             mov dword ptr [esp + 0x20], ecx
// 008d19d8  51                   push ecx
// 008d19d9  8bce                 mov ecx, esi
// 008d19db  e8508af3ff           call 0x80a430
// 008d19e0  85db                 test ebx, ebx
// 008d19e2  0f854affffff         jne 0x8d1932
// 008d19e8  5f                   pop edi
// 008d19e9  5d                   pop ebp
// 008d19ea  5e                   pop esi
// 008d19eb  5b                   pop ebx
// 008d19ec  83c420               add esp, 0x20
// 008d19ef  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPHookManager.cpp (function ?LongShadow@CShadowWnd@CXTPShadowManager@@QAEXPAVCShadowList@2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPHookManager.cpp
