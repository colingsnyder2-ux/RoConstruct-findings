// from server: 100% by auto
// roc 2008-06 00782950  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 395 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00782950
//
// 00782950  83ec10               sub esp, 0x10
// 00782953  53                   push ebx
// 00782954  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00782958  55                   push ebp
// 00782959  56                   push esi
// 0078295a  57                   push edi
// 0078295b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0078295f  8bf1                 mov esi, ecx
// 00782961  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00782965  8b16                 mov edx, dword ptr [esi]
// 00782967  8b5208               mov edx, dword ptr [edx + 8]
// 0078296a  53                   push ebx
// 0078296b  83ec10               sub esp, 0x10
// 0078296e  8bc4                 mov eax, esp
// 00782970  8908                 mov dword ptr [eax], ecx
// 00782972  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00782976  894804               mov dword ptr [eax + 4], ecx
// 00782979  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0078297d  894808               mov dword ptr [eax + 8], ecx
// 00782980  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00782984  89480c               mov dword ptr [eax + 0xc], ecx
// 00782987  57                   push edi
// 00782988  8bce                 mov ecx, esi
// 0078298a  ffd2                 call edx
// 0078298c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0078298f  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00782995  8b2f                 mov ebp, dword ptr [edi]
// 00782997  8b11                 mov edx, dword ptr [ecx]
// 00782999  53                   push ebx
// 0078299a  83ec10               sub esp, 0x10
// 0078299d  8bc4                 mov eax, esp
// 0078299f  8928                 mov dword ptr [eax], ebp
// 007829a1  8b6f04               mov ebp, dword ptr [edi + 4]
// 007829a4  896804               mov dword ptr [eax + 4], ebp
// 007829a7  8b6f08               mov ebp, dword ptr [edi + 8]
// 007829aa  896808               mov dword ptr [eax + 8], ebp
// 007829ad  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 007829b0  89680c               mov dword ptr [eax + 0xc], ebp
// 007829b3  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 007829b7  8b420c               mov eax, dword ptr [edx + 0xc]
// 007829ba  55                   push ebp
// 007829bb  ffd0                 call eax
// 007829bd  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007829c1  8b16                 mov edx, dword ptr [esi]
// 007829c3  8b520c               mov edx, dword ptr [edx + 0xc]
// 007829c6  53                   push ebx
// 007829c7  83ec10               sub esp, 0x10
// 007829ca  8bc4                 mov eax, esp
// 007829cc  8908                 mov dword ptr [eax], ecx
// 007829ce  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007829d2  894804               mov dword ptr [eax + 4], ecx
// 007829d5  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007829d9  894808               mov dword ptr [eax + 8], ecx
// 007829dc  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007829e0  89480c               mov dword ptr [eax + 0xc], ecx
// 007829e3  8d442424             lea eax, [esp + 0x24]
// 007829e7  50                   push eax
// 007829e8  8bce                 mov ecx, esi
// 007829ea  ffd2                 call edx
// 007829ec  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007829ef  83783800             cmp dword ptr [eax + 0x38], 0
// 007829f3  7570                 jne 0x782a65
// 007829f5  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 007829fb  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007829ff  8b11                 mov edx, dword ptr [ecx]
// 00782a01  53                   push ebx
// 00782a02  83ec10               sub esp, 0x10
// 00782a05  8bc4                 mov eax, esp
// 00782a07  8928                 mov dword ptr [eax], ebp
// 00782a09  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00782a0d  896804               mov dword ptr [eax + 4], ebp
// 00782a10  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00782a14  896808               mov dword ptr [eax + 8], ebp
// 00782a17  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00782a1b  89680c               mov dword ptr [eax + 0xc], ebp
// 00782a1e  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00782a22  8b4210               mov eax, dword ptr [edx + 0x10]
// 00782a25  55                   push ebp
// 00782a26  ffd0                 call eax
// 00782a28  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00782a2b  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00782a31  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 00782a37  83f9ff               cmp ecx, -1
// 00782a3a  7506                 jne 0x782a42
// 00782a3c  8b8854010000         mov ecx, dword ptr [eax + 0x154]
// 00782a42  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 00782a48  83faff               cmp edx, -1
// 00782a4b  7508                 jne 0x782a55
// 00782a4d  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 00782a53  eb02                 jmp 0x782a57
// 00782a55  8bc2                 mov eax, edx
// 00782a57  51                   push ecx
// 00782a58  50                   push eax
// 00782a59  8d542418             lea edx, [esp + 0x18]
// 00782a5d  52                   push edx
// 00782a5e  8bcd                 mov ecx, ebp
// 00782a60  e8f3e8f1ff           call 0x6a1358
// 00782a65  8b761c               mov esi, dword ptr [esi + 0x1c]
// 00782a68  837e3801             cmp dword ptr [esi + 0x38], 1
// 00782a6c  7561                 jne 0x782acf
// 00782a6e  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 00782a74  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 00782a7a  83f9ff               cmp ecx, -1
// 00782a7d  7506                 jne 0x782a85
// 00782a7f  8b8854010000         mov ecx, dword ptr [eax + 0x154]
// 00782a85  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 00782a8b  83faff               cmp edx, -1
// 00782a8e  7508                 jne 0x782a98
// 00782a90  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 00782a96  eb02                 jmp 0x782a9a
// 00782a98  8bc2                 mov eax, edx
// 00782a9a  51                   push ecx
// 00782a9b  50                   push eax
// 00782a9c  8b03                 mov eax, dword ptr [ebx]
// 00782a9e  8b5048               mov edx, dword ptr [eax + 0x48]
// 00782aa1  8bcb                 mov ecx, ebx
// 00782aa3  ffd2                 call edx
// 00782aa5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00782aa9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00782aad  50                   push eax
// 00782aae  83ec10               sub esp, 0x10
// 00782ab1  8bc4                 mov eax, esp
// 00782ab3  8908                 mov dword ptr [eax], ecx
// 00782ab5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00782ab9  895004               mov dword ptr [eax + 4], edx
// 00782abc  8b542438             mov edx, dword ptr [esp + 0x38]
// 00782ac0  894808               mov dword ptr [eax + 8], ecx
// 00782ac3  55                   push ebp
// 00782ac4  89500c               mov dword ptr [eax + 0xc], edx
// 00782ac7  e8d4eaffff           call 0x7815a0
// 00782acc  83c420               add esp, 0x20
// 00782acf  8bc7                 mov eax, edi
// 00782ad1  5f                   pop edi
// 00782ad2  5e                   pop esi
// 00782ad3  5d                   pop ebp
// 00782ad4  5b                   pop ebx
// 00782ad5  83c410               add esp, 0x10
// 00782ad8  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
