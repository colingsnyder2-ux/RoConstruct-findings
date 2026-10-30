// roc 2010-06 0089df80  unit: CXTPTabPaintManager::CColorSetWhidbey  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089df80
//
// 0089df80  53                   push ebx
// 0089df81  55                   push ebp
// 0089df82  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0089df86  56                   push esi
// 0089df87  57                   push edi
// 0089df88  8bf9                 mov edi, ecx
// 0089df8a  8b07                 mov eax, dword ptr [edi]
// 0089df8c  8b5024               mov edx, dword ptr [eax + 0x24]
// 0089df8f  55                   push ebp
// 0089df90  ffd2                 call edx
// 0089df92  8b5d60               mov ebx, dword ptr [ebp + 0x60]
// 0089df95  8bf0                 mov esi, eax
// 0089df97  396b08               cmp dword ptr [ebx + 8], ebp
// 0089df9a  7511                 jne 0x89dfad
// 0089df9c  8bb788000000         mov esi, dword ptr [edi + 0x88]
// 0089dfa2  83feff               cmp esi, -1
// 0089dfa5  7506                 jne 0x89dfad
// 0089dfa7  8bb784000000         mov esi, dword ptr [edi + 0x84]
// 0089dfad  83bf1802000000       cmp dword ptr [edi + 0x218], 0
// 0089dfb4  745a                 je 0x89e010
// 0089dfb6  e8655bf4ff           call 0x7e3b20
// 0089dfbb  8be8                 mov ebp, eax
// 0089dfbd  8b03                 mov eax, dword ptr [ebx]
// 0089dfbf  8b5048               mov edx, dword ptr [eax + 0x48]
// 0089dfc2  8bcb                 mov ecx, ebx
// 0089dfc4  ffd2                 call edx
// 0089dfc6  50                   push eax
// 0089dfc7  56                   push esi
// 0089dfc8  682c010000           push 0x12c
// 0089dfcd  68ffffff00           push 0xffffff
// 0089dfd2  56                   push esi
// 0089dfd3  8bcd                 mov ecx, ebp
// 0089dfd5  e82652f4ff           call 0x7e3200
// 0089dfda  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0089dfde  8b542424             mov edx, dword ptr [esp + 0x24]
// 0089dfe2  50                   push eax
// 0089dfe3  83ec10               sub esp, 0x10
// 0089dfe6  8bc4                 mov eax, esp
// 0089dfe8  8908                 mov dword ptr [eax], ecx
// 0089dfea  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0089dfee  895004               mov dword ptr [eax + 4], edx
// 0089dff1  8b542440             mov edx, dword ptr [esp + 0x40]
// 0089dff5  894808               mov dword ptr [eax + 8], ecx
// 0089dff8  89500c               mov dword ptr [eax + 0xc], edx
// 0089dffb  8b442430             mov eax, dword ptr [esp + 0x30]
// 0089dfff  50                   push eax
// 0089e000  8bcf                 mov ecx, edi
// 0089e002  e889e2ffff           call 0x89c290
// 0089e007  8bc6                 mov eax, esi
// 0089e009  5f                   pop edi
// 0089e00a  5e                   pop esi
// 0089e00b  5d                   pop ebp
// 0089e00c  5b                   pop ebx
// 0089e00d  c21800               ret 0x18
// 0089e010  56                   push esi
// 0089e011  8d4c241c             lea ecx, [esp + 0x1c]
// 0089e015  51                   push ecx
// 0089e016  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0089e01a  e81fa7f0ff           call 0x7a873e
// 0089e01f  5f                   pop edi
// 0089e020  8bc6                 mov eax, esi
// 0089e022  5e                   pop esi
// 0089e023  5d                   pop ebp
// 0089e024  5b                   pop ebx
// 0089e025  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillPropertyButton@CColorSetWhidbey@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
