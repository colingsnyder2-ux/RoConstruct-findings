// from server: 100% by auto
// roc 2008-06 007842b0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 429 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007842b0
//
// 007842b0  83ec10               sub esp, 0x10
// 007842b3  53                   push ebx
// 007842b4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007842b8  55                   push ebp
// 007842b9  56                   push esi
// 007842ba  57                   push edi
// 007842bb  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 007842bf  8bf1                 mov esi, ecx
// 007842c1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007842c5  8b16                 mov edx, dword ptr [esi]
// 007842c7  8b5208               mov edx, dword ptr [edx + 8]
// 007842ca  57                   push edi
// 007842cb  83ec10               sub esp, 0x10
// 007842ce  8bc4                 mov eax, esp
// 007842d0  8908                 mov dword ptr [eax], ecx
// 007842d2  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007842d6  894804               mov dword ptr [eax + 4], ecx
// 007842d9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007842dd  894808               mov dword ptr [eax + 8], ecx
// 007842e0  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007842e4  89480c               mov dword ptr [eax + 0xc], ecx
// 007842e7  53                   push ebx
// 007842e8  8bce                 mov ecx, esi
// 007842ea  ffd2                 call edx
// 007842ec  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007842ef  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 007842f5  8b2b                 mov ebp, dword ptr [ebx]
// 007842f7  8b11                 mov edx, dword ptr [ecx]
// 007842f9  8b520c               mov edx, dword ptr [edx + 0xc]
// 007842fc  57                   push edi
// 007842fd  83ec10               sub esp, 0x10
// 00784300  8bc4                 mov eax, esp
// 00784302  8928                 mov dword ptr [eax], ebp
// 00784304  8b6b04               mov ebp, dword ptr [ebx + 4]
// 00784307  896804               mov dword ptr [eax + 4], ebp
// 0078430a  8b6b08               mov ebp, dword ptr [ebx + 8]
// 0078430d  896808               mov dword ptr [eax + 8], ebp
// 00784310  8b6b0c               mov ebp, dword ptr [ebx + 0xc]
// 00784313  89680c               mov dword ptr [eax + 0xc], ebp
// 00784316  8b442440             mov eax, dword ptr [esp + 0x40]
// 0078431a  50                   push eax
// 0078431b  ffd2                 call edx
// 0078431d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00784321  8b16                 mov edx, dword ptr [esi]
// 00784323  8b520c               mov edx, dword ptr [edx + 0xc]
// 00784326  57                   push edi
// 00784327  83ec10               sub esp, 0x10
// 0078432a  8bc4                 mov eax, esp
// 0078432c  8908                 mov dword ptr [eax], ecx
// 0078432e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00784332  894804               mov dword ptr [eax + 4], ecx
// 00784335  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00784339  894808               mov dword ptr [eax + 8], ecx
// 0078433c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00784340  89480c               mov dword ptr [eax + 0xc], ecx
// 00784343  8d442424             lea eax, [esp + 0x24]
// 00784347  50                   push eax
// 00784348  8bce                 mov ecx, esi
// 0078434a  ffd2                 call edx
// 0078434c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0078434f  83783800             cmp dword ptr [eax + 0x38], 0
// 00784353  7564                 jne 0x7843b9
// 00784355  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 0078435b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0078435f  8b11                 mov edx, dword ptr [ecx]
// 00784361  57                   push edi
// 00784362  83ec10               sub esp, 0x10
// 00784365  8bc4                 mov eax, esp
// 00784367  8928                 mov dword ptr [eax], ebp
// 00784369  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0078436d  896804               mov dword ptr [eax + 4], ebp
// 00784370  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00784374  896808               mov dword ptr [eax + 8], ebp
// 00784377  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0078437b  89680c               mov dword ptr [eax + 0xc], ebp
// 0078437e  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00784382  8b4210               mov eax, dword ptr [edx + 0x10]
// 00784385  55                   push ebp
// 00784386  ffd0                 call eax
// 00784388  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0078438b  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00784391  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00784394  83f9ff               cmp ecx, -1
// 00784397  7503                 jne 0x78439c
// 00784399  8b4848               mov ecx, dword ptr [eax + 0x48]
// 0078439c  8b504c               mov edx, dword ptr [eax + 0x4c]
// 0078439f  83faff               cmp edx, -1
// 007843a2  7505                 jne 0x7843a9
// 007843a4  8b4048               mov eax, dword ptr [eax + 0x48]
// 007843a7  eb02                 jmp 0x7843ab
// 007843a9  8bc2                 mov eax, edx
// 007843ab  51                   push ecx
// 007843ac  50                   push eax
// 007843ad  8d542418             lea edx, [esp + 0x18]
// 007843b1  52                   push edx
// 007843b2  8bcd                 mov ecx, ebp
// 007843b4  e89fcff1ff           call 0x6a1358
// 007843b9  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007843bc  83783801             cmp dword ptr [eax + 0x38], 1
// 007843c0  0f858b000000         jne 0x784451
// 007843c6  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 007843cc  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007843d0  8b11                 mov edx, dword ptr [ecx]
// 007843d2  57                   push edi
// 007843d3  83ec10               sub esp, 0x10
// 007843d6  8bc4                 mov eax, esp
// 007843d8  8928                 mov dword ptr [eax], ebp
// 007843da  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 007843de  896804               mov dword ptr [eax + 4], ebp
// 007843e1  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007843e5  896808               mov dword ptr [eax + 8], ebp
// 007843e8  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 007843ec  89680c               mov dword ptr [eax + 0xc], ebp
// 007843ef  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 007843f3  8b4210               mov eax, dword ptr [edx + 0x10]
// 007843f6  55                   push ebp
// 007843f7  ffd0                 call eax
// 007843f9  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 007843fc  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00784402  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00784405  83f9ff               cmp ecx, -1
// 00784408  7503                 jne 0x78440d
// 0078440a  8b4848               mov ecx, dword ptr [eax + 0x48]
// 0078440d  8b504c               mov edx, dword ptr [eax + 0x4c]
// 00784410  83faff               cmp edx, -1
// 00784413  7505                 jne 0x78441a
// 00784415  8b4048               mov eax, dword ptr [eax + 0x48]
// 00784418  eb02                 jmp 0x78441c
// 0078441a  8bc2                 mov eax, edx
// 0078441c  8b17                 mov edx, dword ptr [edi]
// 0078441e  51                   push ecx
// 0078441f  50                   push eax
// 00784420  8b4248               mov eax, dword ptr [edx + 0x48]
// 00784423  8bcf                 mov ecx, edi
// 00784425  ffd0                 call eax
// 00784427  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0078442b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0078442f  50                   push eax
// 00784430  83ec10               sub esp, 0x10
// 00784433  8bc4                 mov eax, esp
// 00784435  8908                 mov dword ptr [eax], ecx
// 00784437  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0078443b  895004               mov dword ptr [eax + 4], edx
// 0078443e  8b542438             mov edx, dword ptr [esp + 0x38]
// 00784442  894808               mov dword ptr [eax + 8], ecx
// 00784445  55                   push ebp
// 00784446  89500c               mov dword ptr [eax + 0xc], edx
// 00784449  e852d1ffff           call 0x7815a0
// 0078444e  83c420               add esp, 0x20
// 00784451  5f                   pop edi
// 00784452  5e                   pop esi
// 00784453  5d                   pop ebp
// 00784454  8bc3                 mov eax, ebx
// 00784456  5b                   pop ebx
// 00784457  83c410               add esp, 0x10
// 0078445a  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetFlat@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
