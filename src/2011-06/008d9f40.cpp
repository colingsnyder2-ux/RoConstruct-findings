// roc 2011-06 008d9f40  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio  size: 383 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d9f40
//
// 008d9f40  83ec10               sub esp, 0x10
// 008d9f43  53                   push ebx
// 008d9f44  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008d9f48  55                   push ebp
// 008d9f49  56                   push esi
// 008d9f4a  57                   push edi
// 008d9f4b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008d9f4f  8bf1                 mov esi, ecx
// 008d9f51  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008d9f55  8b16                 mov edx, dword ptr [esi]
// 008d9f57  8b5208               mov edx, dword ptr [edx + 8]
// 008d9f5a  53                   push ebx
// 008d9f5b  83ec10               sub esp, 0x10
// 008d9f5e  8bc4                 mov eax, esp
// 008d9f60  8908                 mov dword ptr [eax], ecx
// 008d9f62  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008d9f66  894804               mov dword ptr [eax + 4], ecx
// 008d9f69  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008d9f6d  894808               mov dword ptr [eax + 8], ecx
// 008d9f70  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008d9f74  89480c               mov dword ptr [eax + 0xc], ecx
// 008d9f77  57                   push edi
// 008d9f78  8bce                 mov ecx, esi
// 008d9f7a  ffd2                 call edx
// 008d9f7c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d9f7f  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008d9f85  8b2f                 mov ebp, dword ptr [edi]
// 008d9f87  8b11                 mov edx, dword ptr [ecx]
// 008d9f89  53                   push ebx
// 008d9f8a  83ec10               sub esp, 0x10
// 008d9f8d  8bc4                 mov eax, esp
// 008d9f8f  8928                 mov dword ptr [eax], ebp
// 008d9f91  8b6f04               mov ebp, dword ptr [edi + 4]
// 008d9f94  896804               mov dword ptr [eax + 4], ebp
// 008d9f97  8b6f08               mov ebp, dword ptr [edi + 8]
// 008d9f9a  896808               mov dword ptr [eax + 8], ebp
// 008d9f9d  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 008d9fa0  89680c               mov dword ptr [eax + 0xc], ebp
// 008d9fa3  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 008d9fa7  8b420c               mov eax, dword ptr [edx + 0xc]
// 008d9faa  55                   push ebp
// 008d9fab  ffd0                 call eax
// 008d9fad  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008d9fb1  8b16                 mov edx, dword ptr [esi]
// 008d9fb3  8b520c               mov edx, dword ptr [edx + 0xc]
// 008d9fb6  53                   push ebx
// 008d9fb7  83ec10               sub esp, 0x10
// 008d9fba  8bc4                 mov eax, esp
// 008d9fbc  8908                 mov dword ptr [eax], ecx
// 008d9fbe  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008d9fc2  894804               mov dword ptr [eax + 4], ecx
// 008d9fc5  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008d9fc9  894808               mov dword ptr [eax + 8], ecx
// 008d9fcc  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008d9fd0  89480c               mov dword ptr [eax + 0xc], ecx
// 008d9fd3  8d442424             lea eax, [esp + 0x24]
// 008d9fd7  50                   push eax
// 008d9fd8  8bce                 mov ecx, esi
// 008d9fda  ffd2                 call edx
// 008d9fdc  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d9fdf  83783800             cmp dword ptr [eax + 0x38], 0
// 008d9fe3  756a                 jne 0x8da04f
// 008d9fe5  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008d9feb  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008d9fef  8b11                 mov edx, dword ptr [ecx]
// 008d9ff1  53                   push ebx
// 008d9ff2  83ec10               sub esp, 0x10
// 008d9ff5  8bc4                 mov eax, esp
// 008d9ff7  8928                 mov dword ptr [eax], ebp
// 008d9ff9  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008d9ffd  896804               mov dword ptr [eax + 4], ebp
// 008da000  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008da004  896808               mov dword ptr [eax + 8], ebp
// 008da007  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008da00b  89680c               mov dword ptr [eax + 0xc], ebp
// 008da00e  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 008da012  8b4210               mov eax, dword ptr [edx + 0x10]
// 008da015  55                   push ebp
// 008da016  ffd0                 call eax
// 008da018  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 008da01b  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008da021  8b88c4000000         mov ecx, dword ptr [eax + 0xc4]
// 008da027  83f9ff               cmp ecx, -1
// 008da02a  7506                 jne 0x8da032
// 008da02c  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 008da032  8b5070               mov edx, dword ptr [eax + 0x70]
// 008da035  83faff               cmp edx, -1
// 008da038  7505                 jne 0x8da03f
// 008da03a  8b406c               mov eax, dword ptr [eax + 0x6c]
// 008da03d  eb02                 jmp 0x8da041
// 008da03f  8bc2                 mov eax, edx
// 008da041  51                   push ecx
// 008da042  50                   push eax
// 008da043  8d542418             lea edx, [esp + 0x18]
// 008da047  52                   push edx
// 008da048  8bcd                 mov ecx, ebp
// 008da04a  e8cb0df3ff           call 0x80ae1a
// 008da04f  8b761c               mov esi, dword ptr [esi + 0x1c]
// 008da052  837e3801             cmp dword ptr [esi + 0x38], 1
// 008da056  755b                 jne 0x8da0b3
// 008da058  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 008da05e  8b88c4000000         mov ecx, dword ptr [eax + 0xc4]
// 008da064  83f9ff               cmp ecx, -1
// 008da067  7506                 jne 0x8da06f
// 008da069  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 008da06f  8b5070               mov edx, dword ptr [eax + 0x70]
// 008da072  83faff               cmp edx, -1
// 008da075  7505                 jne 0x8da07c
// 008da077  8b406c               mov eax, dword ptr [eax + 0x6c]
// 008da07a  eb02                 jmp 0x8da07e
// 008da07c  8bc2                 mov eax, edx
// 008da07e  51                   push ecx
// 008da07f  50                   push eax
// 008da080  8b03                 mov eax, dword ptr [ebx]
// 008da082  8b5048               mov edx, dword ptr [eax + 0x48]
// 008da085  8bcb                 mov ecx, ebx
// 008da087  ffd2                 call edx
// 008da089  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008da08d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008da091  50                   push eax
// 008da092  83ec10               sub esp, 0x10
// 008da095  8bc4                 mov eax, esp
// 008da097  8908                 mov dword ptr [eax], ecx
// 008da099  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008da09d  895004               mov dword ptr [eax + 4], edx
// 008da0a0  8b542438             mov edx, dword ptr [esp + 0x38]
// 008da0a4  894808               mov dword ptr [eax + 8], ecx
// 008da0a7  55                   push ebp
// 008da0a8  89500c               mov dword ptr [eax + 0xc], edx
// 008da0ab  e840f8ffff           call 0x8d98f0
// 008da0b0  83c420               add esp, 0x20
// 008da0b3  8bc7                 mov eax, edi
// 008da0b5  5f                   pop edi
// 008da0b6  5e                   pop esi
// 008da0b7  5d                   pop ebp
// 008da0b8  5b                   pop ebx
// 008da0b9  83c410               add esp, 0x10
// 008da0bc  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetVisualStudio@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
