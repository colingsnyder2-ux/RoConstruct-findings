// roc 2010-06 00889d60  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 395 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00889d60
//
// 00889d60  83ec10               sub esp, 0x10
// 00889d63  53                   push ebx
// 00889d64  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00889d68  55                   push ebp
// 00889d69  56                   push esi
// 00889d6a  57                   push edi
// 00889d6b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00889d6f  8bf1                 mov esi, ecx
// 00889d71  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00889d75  8b16                 mov edx, dword ptr [esi]
// 00889d77  8b5208               mov edx, dword ptr [edx + 8]
// 00889d7a  53                   push ebx
// 00889d7b  83ec10               sub esp, 0x10
// 00889d7e  8bc4                 mov eax, esp
// 00889d80  8908                 mov dword ptr [eax], ecx
// 00889d82  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00889d86  894804               mov dword ptr [eax + 4], ecx
// 00889d89  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00889d8d  894808               mov dword ptr [eax + 8], ecx
// 00889d90  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00889d94  89480c               mov dword ptr [eax + 0xc], ecx
// 00889d97  57                   push edi
// 00889d98  8bce                 mov ecx, esi
// 00889d9a  ffd2                 call edx
// 00889d9c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00889d9f  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00889da5  8b2f                 mov ebp, dword ptr [edi]
// 00889da7  8b11                 mov edx, dword ptr [ecx]
// 00889da9  53                   push ebx
// 00889daa  83ec10               sub esp, 0x10
// 00889dad  8bc4                 mov eax, esp
// 00889daf  8928                 mov dword ptr [eax], ebp
// 00889db1  8b6f04               mov ebp, dword ptr [edi + 4]
// 00889db4  896804               mov dword ptr [eax + 4], ebp
// 00889db7  8b6f08               mov ebp, dword ptr [edi + 8]
// 00889dba  896808               mov dword ptr [eax + 8], ebp
// 00889dbd  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 00889dc0  89680c               mov dword ptr [eax + 0xc], ebp
// 00889dc3  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00889dc7  8b420c               mov eax, dword ptr [edx + 0xc]
// 00889dca  55                   push ebp
// 00889dcb  ffd0                 call eax
// 00889dcd  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00889dd1  8b16                 mov edx, dword ptr [esi]
// 00889dd3  8b520c               mov edx, dword ptr [edx + 0xc]
// 00889dd6  53                   push ebx
// 00889dd7  83ec10               sub esp, 0x10
// 00889dda  8bc4                 mov eax, esp
// 00889ddc  8908                 mov dword ptr [eax], ecx
// 00889dde  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00889de2  894804               mov dword ptr [eax + 4], ecx
// 00889de5  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00889de9  894808               mov dword ptr [eax + 8], ecx
// 00889dec  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00889df0  89480c               mov dword ptr [eax + 0xc], ecx
// 00889df3  8d442424             lea eax, [esp + 0x24]
// 00889df7  50                   push eax
// 00889df8  8bce                 mov ecx, esi
// 00889dfa  ffd2                 call edx
// 00889dfc  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00889dff  83783800             cmp dword ptr [eax + 0x38], 0
// 00889e03  7570                 jne 0x889e75
// 00889e05  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00889e0b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00889e0f  8b11                 mov edx, dword ptr [ecx]
// 00889e11  53                   push ebx
// 00889e12  83ec10               sub esp, 0x10
// 00889e15  8bc4                 mov eax, esp
// 00889e17  8928                 mov dword ptr [eax], ebp
// 00889e19  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00889e1d  896804               mov dword ptr [eax + 4], ebp
// 00889e20  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00889e24  896808               mov dword ptr [eax + 8], ebp
// 00889e27  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00889e2b  89680c               mov dword ptr [eax + 0xc], ebp
// 00889e2e  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00889e32  8b4210               mov eax, dword ptr [edx + 0x10]
// 00889e35  55                   push ebp
// 00889e36  ffd0                 call eax
// 00889e38  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00889e3b  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00889e41  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 00889e47  83f9ff               cmp ecx, -1
// 00889e4a  7506                 jne 0x889e52
// 00889e4c  8b8854010000         mov ecx, dword ptr [eax + 0x154]
// 00889e52  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 00889e58  83faff               cmp edx, -1
// 00889e5b  7508                 jne 0x889e65
// 00889e5d  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 00889e63  eb02                 jmp 0x889e67
// 00889e65  8bc2                 mov eax, edx
// 00889e67  51                   push ecx
// 00889e68  50                   push eax
// 00889e69  8d542418             lea edx, [esp + 0x18]
// 00889e6d  52                   push edx
// 00889e6e  8bcd                 mov ecx, ebp
// 00889e70  e8c3e8f1ff           call 0x7a8738
// 00889e75  8b761c               mov esi, dword ptr [esi + 0x1c]
// 00889e78  837e3801             cmp dword ptr [esi + 0x38], 1
// 00889e7c  7561                 jne 0x889edf
// 00889e7e  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 00889e84  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 00889e8a  83f9ff               cmp ecx, -1
// 00889e8d  7506                 jne 0x889e95
// 00889e8f  8b8854010000         mov ecx, dword ptr [eax + 0x154]
// 00889e95  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 00889e9b  83faff               cmp edx, -1
// 00889e9e  7508                 jne 0x889ea8
// 00889ea0  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 00889ea6  eb02                 jmp 0x889eaa
// 00889ea8  8bc2                 mov eax, edx
// 00889eaa  51                   push ecx
// 00889eab  50                   push eax
// 00889eac  8b03                 mov eax, dword ptr [ebx]
// 00889eae  8b5048               mov edx, dword ptr [eax + 0x48]
// 00889eb1  8bcb                 mov ecx, ebx
// 00889eb3  ffd2                 call edx
// 00889eb5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00889eb9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00889ebd  50                   push eax
// 00889ebe  83ec10               sub esp, 0x10
// 00889ec1  8bc4                 mov eax, esp
// 00889ec3  8908                 mov dword ptr [eax], ecx
// 00889ec5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00889ec9  895004               mov dword ptr [eax + 4], edx
// 00889ecc  8b542438             mov edx, dword ptr [esp + 0x38]
// 00889ed0  894808               mov dword ptr [eax + 8], ecx
// 00889ed3  55                   push ebp
// 00889ed4  89500c               mov dword ptr [eax + 0xc], edx
// 00889ed7  e894eaffff           call 0x888970
// 00889edc  83c420               add esp, 0x20
// 00889edf  8bc7                 mov eax, edi
// 00889ee1  5f                   pop edi
// 00889ee2  5e                   pop esi
// 00889ee3  5d                   pop ebp
// 00889ee4  5b                   pop ebx
// 00889ee5  83c410               add esp, 0x10
// 00889ee8  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
