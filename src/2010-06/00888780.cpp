// roc 2010-06 00888780  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00888780
//
// 00888780  83ec10               sub esp, 0x10
// 00888783  53                   push ebx
// 00888784  56                   push esi
// 00888785  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00888789  57                   push edi
// 0088878a  8bf9                 mov edi, ecx
// 0088878c  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0088878f  33c9                 xor ecx, ecx
// 00888791  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00888799  894c2418             mov dword ptr [esp + 0x18], ecx
// 0088879d  8b586c               mov ebx, dword ptr [eax + 0x6c]
// 008887a0  035864               add ebx, dword ptr [eax + 0x64]
// 008887a3  85f6                 test esi, esi
// 008887a5  7415                 je 0x8887bc
// 008887a7  8b06                 mov eax, dword ptr [esi]
// 008887a9  8b5028               mov edx, dword ptr [eax + 0x28]
// 008887ac  51                   push ecx
// 008887ad  8d4c2418             lea ecx, [esp + 0x18]
// 008887b1  51                   push ecx
// 008887b2  6a00                 push 0
// 008887b4  8bce                 mov ecx, esi
// 008887b6  ffd2                 call edx
// 008887b8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008887bc  8b4718               mov eax, dword ptr [edi + 0x18]
// 008887bf  03c3                 add eax, ebx
// 008887c1  3bc1                 cmp eax, ecx
// 008887c3  89442420             mov dword ptr [esp + 0x20], eax
// 008887c7  7f04                 jg 0x8887cd
// 008887c9  894c2420             mov dword ptr [esp + 0x20], ecx
// 008887cd  8b471c               mov eax, dword ptr [edi + 0x1c]
// 008887d0  83782400             cmp dword ptr [eax + 0x24], 0
// 008887d4  750d                 jne 0x8887e3
// 008887d6  8b442420             mov eax, dword ptr [esp + 0x20]
// 008887da  5f                   pop edi
// 008887db  5e                   pop esi
// 008887dc  5b                   pop ebx
// 008887dd  83c410               add esp, 0x10
// 008887e0  c20400               ret 4
// 008887e3  8b8888000000         mov ecx, dword ptr [eax + 0x88]
// 008887e9  894c240c             mov dword ptr [esp + 0xc], ecx
// 008887ed  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 008887f3  89442410             mov dword ptr [esp + 0x10], eax
// 008887f7  85f6                 test esi, esi
// 008887f9  742e                 je 0x888829
// 008887fb  8d4c240c             lea ecx, [esp + 0xc]
// 008887ff  51                   push ecx
// 00888800  6a00                 push 0
// 00888802  6a00                 push 0
// 00888804  83ec08               sub esp, 8
// 00888807  8bc4                 mov eax, esp
// 00888809  c70000000000         mov dword ptr [eax], 0
// 0088880f  c7400400000000       mov dword ptr [eax + 4], 0
// 00888816  8b16                 mov edx, dword ptr [esi]
// 00888818  8b4244               mov eax, dword ptr [edx + 0x44]
// 0088881b  6a00                 push 0
// 0088881d  8bce                 mov ecx, esi
// 0088881f  ffd0                 call eax
// 00888821  8b442410             mov eax, dword ptr [esp + 0x10]
// 00888825  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00888829  3bc8                 cmp ecx, eax
// 0088882b  8bd1                 mov edx, ecx
// 0088882d  7f02                 jg 0x888831
// 0088882f  8bd0                 mov edx, eax
// 00888831  8d741a04             lea esi, [edx + ebx + 4]
// 00888835  8b542420             mov edx, dword ptr [esp + 0x20]
// 00888839  3bf2                 cmp esi, edx
// 0088883b  7e13                 jle 0x888850
// 0088883d  3bc8                 cmp ecx, eax
// 0088883f  7e02                 jle 0x888843
// 00888841  8bc1                 mov eax, ecx
// 00888843  8d441804             lea eax, [eax + ebx + 4]
// 00888847  5f                   pop edi
// 00888848  5e                   pop esi
// 00888849  5b                   pop ebx
// 0088884a  83c410               add esp, 0x10
// 0088884d  c20400               ret 4
// 00888850  5f                   pop edi
// 00888851  5e                   pop esi
// 00888852  8bc2                 mov eax, edx
// 00888854  5b                   pop ebx
// 00888855  83c410               add esp, 0x10
// 00888858  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonHeight@CAppearanceSet@CXTPTabPaintManager@@UAEHPBVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
