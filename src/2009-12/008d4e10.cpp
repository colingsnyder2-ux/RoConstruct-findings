// roc 2009-12 008d4e10  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio  size: 383 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d4e10
//
// 008d4e10  83ec10               sub esp, 0x10
// 008d4e13  53                   push ebx
// 008d4e14  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008d4e18  55                   push ebp
// 008d4e19  56                   push esi
// 008d4e1a  57                   push edi
// 008d4e1b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008d4e1f  8bf1                 mov esi, ecx
// 008d4e21  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008d4e25  8b16                 mov edx, dword ptr [esi]
// 008d4e27  8b5208               mov edx, dword ptr [edx + 8]
// 008d4e2a  53                   push ebx
// 008d4e2b  83ec10               sub esp, 0x10
// 008d4e2e  8bc4                 mov eax, esp
// 008d4e30  8908                 mov dword ptr [eax], ecx
// 008d4e32  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008d4e36  894804               mov dword ptr [eax + 4], ecx
// 008d4e39  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008d4e3d  894808               mov dword ptr [eax + 8], ecx
// 008d4e40  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008d4e44  89480c               mov dword ptr [eax + 0xc], ecx
// 008d4e47  57                   push edi
// 008d4e48  8bce                 mov ecx, esi
// 008d4e4a  ffd2                 call edx
// 008d4e4c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d4e4f  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008d4e55  8b2f                 mov ebp, dword ptr [edi]
// 008d4e57  8b11                 mov edx, dword ptr [ecx]
// 008d4e59  53                   push ebx
// 008d4e5a  83ec10               sub esp, 0x10
// 008d4e5d  8bc4                 mov eax, esp
// 008d4e5f  8928                 mov dword ptr [eax], ebp
// 008d4e61  8b6f04               mov ebp, dword ptr [edi + 4]
// 008d4e64  896804               mov dword ptr [eax + 4], ebp
// 008d4e67  8b6f08               mov ebp, dword ptr [edi + 8]
// 008d4e6a  896808               mov dword ptr [eax + 8], ebp
// 008d4e6d  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 008d4e70  89680c               mov dword ptr [eax + 0xc], ebp
// 008d4e73  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 008d4e77  8b420c               mov eax, dword ptr [edx + 0xc]
// 008d4e7a  55                   push ebp
// 008d4e7b  ffd0                 call eax
// 008d4e7d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008d4e81  8b16                 mov edx, dword ptr [esi]
// 008d4e83  8b520c               mov edx, dword ptr [edx + 0xc]
// 008d4e86  53                   push ebx
// 008d4e87  83ec10               sub esp, 0x10
// 008d4e8a  8bc4                 mov eax, esp
// 008d4e8c  8908                 mov dword ptr [eax], ecx
// 008d4e8e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008d4e92  894804               mov dword ptr [eax + 4], ecx
// 008d4e95  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008d4e99  894808               mov dword ptr [eax + 8], ecx
// 008d4e9c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008d4ea0  89480c               mov dword ptr [eax + 0xc], ecx
// 008d4ea3  8d442424             lea eax, [esp + 0x24]
// 008d4ea7  50                   push eax
// 008d4ea8  8bce                 mov ecx, esi
// 008d4eaa  ffd2                 call edx
// 008d4eac  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d4eaf  83783800             cmp dword ptr [eax + 0x38], 0
// 008d4eb3  756a                 jne 0x8d4f1f
// 008d4eb5  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008d4ebb  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008d4ebf  8b11                 mov edx, dword ptr [ecx]
// 008d4ec1  53                   push ebx
// 008d4ec2  83ec10               sub esp, 0x10
// 008d4ec5  8bc4                 mov eax, esp
// 008d4ec7  8928                 mov dword ptr [eax], ebp
// 008d4ec9  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008d4ecd  896804               mov dword ptr [eax + 4], ebp
// 008d4ed0  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008d4ed4  896808               mov dword ptr [eax + 8], ebp
// 008d4ed7  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008d4edb  89680c               mov dword ptr [eax + 0xc], ebp
// 008d4ede  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 008d4ee2  8b4210               mov eax, dword ptr [edx + 0x10]
// 008d4ee5  55                   push ebp
// 008d4ee6  ffd0                 call eax
// 008d4ee8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 008d4eeb  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008d4ef1  8b88c4000000         mov ecx, dword ptr [eax + 0xc4]
// 008d4ef7  83f9ff               cmp ecx, -1
// 008d4efa  7506                 jne 0x8d4f02
// 008d4efc  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 008d4f02  8b5070               mov edx, dword ptr [eax + 0x70]
// 008d4f05  83faff               cmp edx, -1
// 008d4f08  7505                 jne 0x8d4f0f
// 008d4f0a  8b406c               mov eax, dword ptr [eax + 0x6c]
// 008d4f0d  eb02                 jmp 0x8d4f11
// 008d4f0f  8bc2                 mov eax, edx
// 008d4f11  51                   push ecx
// 008d4f12  50                   push eax
// 008d4f13  8d542418             lea edx, [esp + 0x18]
// 008d4f17  52                   push edx
// 008d4f18  8bcd                 mov ecx, ebp
// 008d4f1a  e8d9f6f1ff           call 0x7f45f8
// 008d4f1f  8b761c               mov esi, dword ptr [esi + 0x1c]
// 008d4f22  837e3801             cmp dword ptr [esi + 0x38], 1
// 008d4f26  755b                 jne 0x8d4f83
// 008d4f28  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 008d4f2e  8b88c4000000         mov ecx, dword ptr [eax + 0xc4]
// 008d4f34  83f9ff               cmp ecx, -1
// 008d4f37  7506                 jne 0x8d4f3f
// 008d4f39  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 008d4f3f  8b5070               mov edx, dword ptr [eax + 0x70]
// 008d4f42  83faff               cmp edx, -1
// 008d4f45  7505                 jne 0x8d4f4c
// 008d4f47  8b406c               mov eax, dword ptr [eax + 0x6c]
// 008d4f4a  eb02                 jmp 0x8d4f4e
// 008d4f4c  8bc2                 mov eax, edx
// 008d4f4e  51                   push ecx
// 008d4f4f  50                   push eax
// 008d4f50  8b03                 mov eax, dword ptr [ebx]
// 008d4f52  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d4f55  8bcb                 mov ecx, ebx
// 008d4f57  ffd2                 call edx
// 008d4f59  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d4f5d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d4f61  50                   push eax
// 008d4f62  83ec10               sub esp, 0x10
// 008d4f65  8bc4                 mov eax, esp
// 008d4f67  8908                 mov dword ptr [eax], ecx
// 008d4f69  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008d4f6d  895004               mov dword ptr [eax + 4], edx
// 008d4f70  8b542438             mov edx, dword ptr [esp + 0x38]
// 008d4f74  894808               mov dword ptr [eax + 8], ecx
// 008d4f77  55                   push ebp
// 008d4f78  89500c               mov dword ptr [eax + 0xc], edx
// 008d4f7b  e840f8ffff           call 0x8d47c0
// 008d4f80  83c420               add esp, 0x20
// 008d4f83  8bc7                 mov eax, edi
// 008d4f85  5f                   pop edi
// 008d4f86  5e                   pop esi
// 008d4f87  5d                   pop ebp
// 008d4f88  5b                   pop ebx
// 008d4f89  83c410               add esp, 0x10
// 008d4f8c  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetVisualStudio@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
