// roc 2008-06 00722d00  unit: CXTPRibbonBar::CControlCaptionButton  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722d00
//
// 00722d00  83ec14               sub esp, 0x14
// 00722d03  53                   push ebx
// 00722d04  55                   push ebp
// 00722d05  56                   push esi
// 00722d06  8bf1                 mov esi, ecx
// 00722d08  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 00722d0f  57                   push edi
// 00722d10  7414                 je 0x722d26
// 00722d12  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 00722d18  83781800             cmp dword ptr [eax + 0x18], 0
// 00722d1c  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00722d24  7508                 jne 0x722d2e
// 00722d26  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00722d2e  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00722d34  e887f3ffff           call 0x7220c0
// 00722d39  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00722d3f  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 00722d45  8bae84000000         mov ebp, dword ptr [esi + 0x84]
// 00722d4b  8bd8                 mov ebx, eax
// 00722d4d  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00722d53  8b3b                 mov edi, dword ptr [ebx]
// 00722d55  894c2414             mov dword ptr [esp + 0x14], ecx
// 00722d59  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00722d5f  89542418             mov dword ptr [esp + 0x18], edx
// 00722d63  8b542410             mov edx, dword ptr [esp + 0x10]
// 00722d67  8944241c             mov dword ptr [esp + 0x1c], eax
// 00722d6b  8b06                 mov eax, dword ptr [esi]
// 00722d6d  894c2420             mov dword ptr [esp + 0x20], ecx
// 00722d71  52                   push edx
// 00722d72  8b5078               mov edx, dword ptr [eax + 0x78]
// 00722d75  8bce                 mov ecx, esi
// 00722d77  81c730010000         add edi, 0x130
// 00722d7d  ffd2                 call edx
// 00722d7f  50                   push eax
// 00722d80  8b06                 mov eax, dword ptr [esi]
// 00722d82  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00722d85  8bce                 mov ecx, esi
// 00722d87  ffd2                 call edx
// 00722d89  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00722d8d  8b542420             mov edx, dword ptr [esp + 0x20]
// 00722d91  50                   push eax
// 00722d92  55                   push ebp
// 00722d93  83ec10               sub esp, 0x10
// 00722d96  8bc4                 mov eax, esp
// 00722d98  8908                 mov dword ptr [eax], ecx
// 00722d9a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00722d9e  895004               mov dword ptr [eax + 4], edx
// 00722da1  8b542440             mov edx, dword ptr [esp + 0x40]
// 00722da5  894808               mov dword ptr [eax + 8], ecx
// 00722da8  89500c               mov dword ptr [eax + 0xc], edx
// 00722dab  8b442448             mov eax, dword ptr [esp + 0x48]
// 00722daf  8b17                 mov edx, dword ptr [edi]
// 00722db1  50                   push eax
// 00722db2  8bcb                 mov ecx, ebx
// 00722db4  ffd2                 call edx
// 00722db6  5f                   pop edi
// 00722db7  5e                   pop esi
// 00722db8  5d                   pop ebp
// 00722db9  5b                   pop ebx
// 00722dba  83c414               add esp, 0x14
// 00722dbd  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonBar.cpp (function ?Draw@CControlCaptionButton@CXTPRibbonBar@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp
