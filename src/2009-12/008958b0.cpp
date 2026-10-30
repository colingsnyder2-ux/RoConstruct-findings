// roc 2009-12 008958b0  unit: CXTPRibbonBar::CControlCaptionButton  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008958b0
//
// 008958b0  83ec14               sub esp, 0x14
// 008958b3  53                   push ebx
// 008958b4  55                   push ebp
// 008958b5  56                   push esi
// 008958b6  8bf1                 mov esi, ecx
// 008958b8  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 008958bf  57                   push edi
// 008958c0  7414                 je 0x8958d6
// 008958c2  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 008958c8  83781800             cmp dword ptr [eax + 0x18], 0
// 008958cc  c744241001000000     mov dword ptr [esp + 0x10], 1
// 008958d4  7508                 jne 0x8958de
// 008958d6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008958de  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008958e4  e887f3ffff           call 0x894c70
// 008958e9  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 008958ef  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 008958f5  8bae84000000         mov ebp, dword ptr [esi + 0x84]
// 008958fb  8bd8                 mov ebx, eax
// 008958fd  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00895903  8b3b                 mov edi, dword ptr [ebx]
// 00895905  894c2414             mov dword ptr [esp + 0x14], ecx
// 00895909  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 0089590f  89542418             mov dword ptr [esp + 0x18], edx
// 00895913  8b542410             mov edx, dword ptr [esp + 0x10]
// 00895917  8944241c             mov dword ptr [esp + 0x1c], eax
// 0089591b  8b06                 mov eax, dword ptr [esi]
// 0089591d  894c2420             mov dword ptr [esp + 0x20], ecx
// 00895921  52                   push edx
// 00895922  8b5078               mov edx, dword ptr [eax + 0x78]
// 00895925  8bce                 mov ecx, esi
// 00895927  81c730010000         add edi, 0x130
// 0089592d  ffd2                 call edx
// 0089592f  50                   push eax
// 00895930  8b06                 mov eax, dword ptr [esi]
// 00895932  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00895935  8bce                 mov ecx, esi
// 00895937  ffd2                 call edx
// 00895939  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0089593d  8b542420             mov edx, dword ptr [esp + 0x20]
// 00895941  50                   push eax
// 00895942  55                   push ebp
// 00895943  83ec10               sub esp, 0x10
// 00895946  8bc4                 mov eax, esp
// 00895948  8908                 mov dword ptr [eax], ecx
// 0089594a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0089594e  895004               mov dword ptr [eax + 4], edx
// 00895951  8b542440             mov edx, dword ptr [esp + 0x40]
// 00895955  894808               mov dword ptr [eax + 8], ecx
// 00895958  89500c               mov dword ptr [eax + 0xc], edx
// 0089595b  8b442448             mov eax, dword ptr [esp + 0x48]
// 0089595f  8b17                 mov edx, dword ptr [edi]
// 00895961  50                   push eax
// 00895962  8bcb                 mov ecx, ebx
// 00895964  ffd2                 call edx
// 00895966  5f                   pop edi
// 00895967  5e                   pop esi
// 00895968  5d                   pop ebp
// 00895969  5b                   pop ebx
// 0089596a  83c414               add esp, 0x14
// 0089596d  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CControlCaptionButton@CXTPRibbonBar@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp