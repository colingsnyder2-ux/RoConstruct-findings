// roc 2007-03 0070e1f0  unit: seg_00700000  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070e1f0
//
// 0070e1f0  53                   push ebx
// 0070e1f1  55                   push ebp
// 0070e1f2  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0070e1f6  56                   push esi
// 0070e1f7  57                   push edi
// 0070e1f8  8bf9                 mov edi, ecx
// 0070e1fa  8b07                 mov eax, dword ptr [edi]
// 0070e1fc  8b5024               mov edx, dword ptr [eax + 0x24]
// 0070e1ff  55                   push ebp
// 0070e200  ffd2                 call edx
// 0070e202  8b5d60               mov ebx, dword ptr [ebp + 0x60]
// 0070e205  396b08               cmp dword ptr [ebx + 8], ebp
// 0070e208  8bf0                 mov esi, eax
// 0070e20a  7511                 jne 0x70e21d
// 0070e20c  8bb788000000         mov esi, dword ptr [edi + 0x88]
// 0070e212  83feff               cmp esi, -1
// 0070e215  7506                 jne 0x70e21d
// 0070e217  8bb784000000         mov esi, dword ptr [edi + 0x84]
// 0070e21d  83bf1802000000       cmp dword ptr [edi + 0x218], 0
// 0070e224  745a                 je 0x70e280
// 0070e226  e8756df4ff           call 0x654fa0
// 0070e22b  8be8                 mov ebp, eax
// 0070e22d  8b03                 mov eax, dword ptr [ebx]
// 0070e22f  8b5048               mov edx, dword ptr [eax + 0x48]
// 0070e232  8bcb                 mov ecx, ebx
// 0070e234  ffd2                 call edx
// 0070e236  50                   push eax
// 0070e237  56                   push esi
// 0070e238  682c010000           push 0x12c
// 0070e23d  68ffffff00           push 0xffffff
// 0070e242  56                   push esi
// 0070e243  8bcd                 mov ecx, ebp
// 0070e245  e8c664f4ff           call 0x654710
// 0070e24a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0070e24e  8b542424             mov edx, dword ptr [esp + 0x24]
// 0070e252  50                   push eax
// 0070e253  83ec10               sub esp, 0x10
// 0070e256  8bc4                 mov eax, esp
// 0070e258  8908                 mov dword ptr [eax], ecx
// 0070e25a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0070e25e  895004               mov dword ptr [eax + 4], edx
// 0070e261  8b542440             mov edx, dword ptr [esp + 0x40]
// 0070e265  894808               mov dword ptr [eax + 8], ecx
// 0070e268  89500c               mov dword ptr [eax + 0xc], edx
// 0070e26b  8b442430             mov eax, dword ptr [esp + 0x30]
// 0070e26f  50                   push eax
// 0070e270  8bcf                 mov ecx, edi
// 0070e272  e8b9e3ffff           call 0x70c630
// 0070e277  8bc6                 mov eax, esi
// 0070e279  5f                   pop edi
// 0070e27a  5e                   pop esi
// 0070e27b  5d                   pop ebp
// 0070e27c  5b                   pop ebx
// 0070e27d  c21800               ret 0x18
// 0070e280  56                   push esi
// 0070e281  8d4c241c             lea ecx, [esp + 0x1c]
// 0070e285  51                   push ecx
// 0070e286  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0070e28a  e88b0af1ff           call 0x61ed1a
// 0070e28f  5f                   pop edi
// 0070e290  8bc6                 mov eax, esi
// 0070e292  5e                   pop esi
// 0070e293  5d                   pop ebp
// 0070e294  5b                   pop ebx
// 0070e295  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillPropertyButton@CColorSetWhidbey@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerColors.cpp
