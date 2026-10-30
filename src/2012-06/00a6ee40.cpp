// roc 2012-06 00a6ee40  unit: CXTPTabPaintManager::CColorSetWhidbey  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6ee40
//
// 00a6ee40  53                   push ebx
// 00a6ee41  55                   push ebp
// 00a6ee42  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00a6ee46  56                   push esi
// 00a6ee47  57                   push edi
// 00a6ee48  8bf9                 mov edi, ecx
// 00a6ee4a  8b07                 mov eax, dword ptr [edi]
// 00a6ee4c  8b5024               mov edx, dword ptr [eax + 0x24]
// 00a6ee4f  55                   push ebp
// 00a6ee50  ffd2                 call edx
// 00a6ee52  8b5d60               mov ebx, dword ptr [ebp + 0x60]
// 00a6ee55  8bf0                 mov esi, eax
// 00a6ee57  396b08               cmp dword ptr [ebx + 8], ebp
// 00a6ee5a  7511                 jne 0xa6ee6d
// 00a6ee5c  8bb788000000         mov esi, dword ptr [edi + 0x88]
// 00a6ee62  83feff               cmp esi, -1
// 00a6ee65  7506                 jne 0xa6ee6d
// 00a6ee67  8bb784000000         mov esi, dword ptr [edi + 0x84]
// 00a6ee6d  83bf1802000000       cmp dword ptr [edi + 0x218], 0
// 00a6ee74  745a                 je 0xa6eed0
// 00a6ee76  e8e5e9f4ff           call 0x9bd860
// 00a6ee7b  8be8                 mov ebp, eax
// 00a6ee7d  8b03                 mov eax, dword ptr [ebx]
// 00a6ee7f  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a6ee82  8bcb                 mov ecx, ebx
// 00a6ee84  ffd2                 call edx
// 00a6ee86  50                   push eax
// 00a6ee87  56                   push esi
// 00a6ee88  682c010000           push 0x12c
// 00a6ee8d  68ffffff00           push 0xffffff
// 00a6ee92  56                   push esi
// 00a6ee93  8bcd                 mov ecx, ebp
// 00a6ee95  e896e0f4ff           call 0x9bcf30
// 00a6ee9a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a6ee9e  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a6eea2  50                   push eax
// 00a6eea3  83ec10               sub esp, 0x10
// 00a6eea6  8bc4                 mov eax, esp
// 00a6eea8  8908                 mov dword ptr [eax], ecx
// 00a6eeaa  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a6eeae  895004               mov dword ptr [eax + 4], edx
// 00a6eeb1  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a6eeb5  894808               mov dword ptr [eax + 8], ecx
// 00a6eeb8  89500c               mov dword ptr [eax + 0xc], edx
// 00a6eebb  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a6eebf  50                   push eax
// 00a6eec0  8bcf                 mov ecx, edi
// 00a6eec2  e889e2ffff           call 0xa6d150
// 00a6eec7  8bc6                 mov eax, esi
// 00a6eec9  5f                   pop edi
// 00a6eeca  5e                   pop esi
// 00a6eecb  5d                   pop ebp
// 00a6eecc  5b                   pop ebx
// 00a6eecd  c21800               ret 0x18
// 00a6eed0  56                   push esi
// 00a6eed1  8d4c241c             lea ecx, [esp + 0x1c]
// 00a6eed5  51                   push ecx
// 00a6eed6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a6eeda  e8cd3ff1ff           call 0x982eac
// 00a6eedf  5f                   pop edi
// 00a6eee0  8bc6                 mov eax, esi
// 00a6eee2  5e                   pop esi
// 00a6eee3  5d                   pop ebp
// 00a6eee4  5b                   pop ebx
// 00a6eee5  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillPropertyButton@CColorSetWhidbey@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
