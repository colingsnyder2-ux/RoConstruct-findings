// roc 2009-06 007fb010  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 395 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007fb010
//
// 007fb010  83ec10               sub esp, 0x10
// 007fb013  53                   push ebx
// 007fb014  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007fb018  55                   push ebp
// 007fb019  56                   push esi
// 007fb01a  57                   push edi
// 007fb01b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007fb01f  8bf1                 mov esi, ecx
// 007fb021  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007fb025  8b16                 mov edx, dword ptr [esi]
// 007fb027  8b5208               mov edx, dword ptr [edx + 8]
// 007fb02a  53                   push ebx
// 007fb02b  83ec10               sub esp, 0x10
// 007fb02e  8bc4                 mov eax, esp
// 007fb030  8908                 mov dword ptr [eax], ecx
// 007fb032  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007fb036  894804               mov dword ptr [eax + 4], ecx
// 007fb039  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007fb03d  894808               mov dword ptr [eax + 8], ecx
// 007fb040  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007fb044  89480c               mov dword ptr [eax + 0xc], ecx
// 007fb047  57                   push edi
// 007fb048  8bce                 mov ecx, esi
// 007fb04a  ffd2                 call edx
// 007fb04c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007fb04f  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 007fb055  8b2f                 mov ebp, dword ptr [edi]
// 007fb057  8b11                 mov edx, dword ptr [ecx]
// 007fb059  53                   push ebx
// 007fb05a  83ec10               sub esp, 0x10
// 007fb05d  8bc4                 mov eax, esp
// 007fb05f  8928                 mov dword ptr [eax], ebp
// 007fb061  8b6f04               mov ebp, dword ptr [edi + 4]
// 007fb064  896804               mov dword ptr [eax + 4], ebp
// 007fb067  8b6f08               mov ebp, dword ptr [edi + 8]
// 007fb06a  896808               mov dword ptr [eax + 8], ebp
// 007fb06d  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 007fb070  89680c               mov dword ptr [eax + 0xc], ebp
// 007fb073  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 007fb077  8b420c               mov eax, dword ptr [edx + 0xc]
// 007fb07a  55                   push ebp
// 007fb07b  ffd0                 call eax
// 007fb07d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007fb081  8b16                 mov edx, dword ptr [esi]
// 007fb083  8b520c               mov edx, dword ptr [edx + 0xc]
// 007fb086  53                   push ebx
// 007fb087  83ec10               sub esp, 0x10
// 007fb08a  8bc4                 mov eax, esp
// 007fb08c  8908                 mov dword ptr [eax], ecx
// 007fb08e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007fb092  894804               mov dword ptr [eax + 4], ecx
// 007fb095  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007fb099  894808               mov dword ptr [eax + 8], ecx
// 007fb09c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007fb0a0  89480c               mov dword ptr [eax + 0xc], ecx
// 007fb0a3  8d442424             lea eax, [esp + 0x24]
// 007fb0a7  50                   push eax
// 007fb0a8  8bce                 mov ecx, esi
// 007fb0aa  ffd2                 call edx
// 007fb0ac  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007fb0af  83783800             cmp dword ptr [eax + 0x38], 0
// 007fb0b3  7570                 jne 0x7fb125
// 007fb0b5  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 007fb0bb  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007fb0bf  8b11                 mov edx, dword ptr [ecx]
// 007fb0c1  53                   push ebx
// 007fb0c2  83ec10               sub esp, 0x10
// 007fb0c5  8bc4                 mov eax, esp
// 007fb0c7  8928                 mov dword ptr [eax], ebp
// 007fb0c9  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 007fb0cd  896804               mov dword ptr [eax + 4], ebp
// 007fb0d0  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007fb0d4  896808               mov dword ptr [eax + 8], ebp
// 007fb0d7  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 007fb0db  89680c               mov dword ptr [eax + 0xc], ebp
// 007fb0de  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 007fb0e2  8b4210               mov eax, dword ptr [edx + 0x10]
// 007fb0e5  55                   push ebp
// 007fb0e6  ffd0                 call eax
// 007fb0e8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 007fb0eb  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 007fb0f1  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 007fb0f7  83f9ff               cmp ecx, -1
// 007fb0fa  7506                 jne 0x7fb102
// 007fb0fc  8b8854010000         mov ecx, dword ptr [eax + 0x154]
// 007fb102  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 007fb108  83faff               cmp edx, -1
// 007fb10b  7508                 jne 0x7fb115
// 007fb10d  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 007fb113  eb02                 jmp 0x7fb117
// 007fb115  8bc2                 mov eax, edx
// 007fb117  51                   push ecx
// 007fb118  50                   push eax
// 007fb119  8d542418             lea edx, [esp + 0x18]
// 007fb11d  52                   push edx
// 007fb11e  8bcd                 mov ecx, ebp
// 007fb120  e8a5e6f1ff           call 0x7197ca
// 007fb125  8b761c               mov esi, dword ptr [esi + 0x1c]
// 007fb128  837e3801             cmp dword ptr [esi + 0x38], 1
// 007fb12c  7561                 jne 0x7fb18f
// 007fb12e  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 007fb134  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 007fb13a  83f9ff               cmp ecx, -1
// 007fb13d  7506                 jne 0x7fb145
// 007fb13f  8b8854010000         mov ecx, dword ptr [eax + 0x154]
// 007fb145  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 007fb14b  83faff               cmp edx, -1
// 007fb14e  7508                 jne 0x7fb158
// 007fb150  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 007fb156  eb02                 jmp 0x7fb15a
// 007fb158  8bc2                 mov eax, edx
// 007fb15a  51                   push ecx
// 007fb15b  50                   push eax
// 007fb15c  8b03                 mov eax, dword ptr [ebx]
// 007fb15e  8b5048               mov edx, dword ptr [eax + 0x48]
// 007fb161  8bcb                 mov ecx, ebx
// 007fb163  ffd2                 call edx
// 007fb165  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007fb169  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007fb16d  50                   push eax
// 007fb16e  83ec10               sub esp, 0x10
// 007fb171  8bc4                 mov eax, esp
// 007fb173  8908                 mov dword ptr [eax], ecx
// 007fb175  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007fb179  895004               mov dword ptr [eax + 4], edx
// 007fb17c  8b542438             mov edx, dword ptr [esp + 0x38]
// 007fb180  894808               mov dword ptr [eax + 8], ecx
// 007fb183  55                   push ebp
// 007fb184  89500c               mov dword ptr [eax + 0xc], edx
// 007fb187  e894eaffff           call 0x7f9c20
// 007fb18c  83c420               add esp, 0x20
// 007fb18f  8bc7                 mov eax, edi
// 007fb191  5f                   pop edi
// 007fb192  5e                   pop esi
// 007fb193  5d                   pop ebp
// 007fb194  5b                   pop ebx
// 007fb195  83c410               add esp, 0x10
// 007fb198  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
