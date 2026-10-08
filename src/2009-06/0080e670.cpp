// roc 2009-06 0080e670  unit: CXTPTabPaintManager::CColorSetWhidbey  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080e670
//
// 0080e670  53                   push ebx
// 0080e671  55                   push ebp
// 0080e672  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0080e676  56                   push esi
// 0080e677  57                   push edi
// 0080e678  8bf9                 mov edi, ecx
// 0080e67a  8b07                 mov eax, dword ptr [edi]
// 0080e67c  8b5024               mov edx, dword ptr [eax + 0x24]
// 0080e67f  55                   push ebp
// 0080e680  ffd2                 call edx
// 0080e682  8b5d60               mov ebx, dword ptr [ebp + 0x60]
// 0080e685  8bf0                 mov esi, eax
// 0080e687  396b08               cmp dword ptr [ebx + 8], ebp
// 0080e68a  7511                 jne 0x80e69d
// 0080e68c  8bb788000000         mov esi, dword ptr [edi + 0x88]
// 0080e692  83feff               cmp esi, -1
// 0080e695  7506                 jne 0x80e69d
// 0080e697  8bb784000000         mov esi, dword ptr [edi + 0x84]
// 0080e69d  83bf1802000000       cmp dword ptr [edi + 0x218], 0
// 0080e6a4  745a                 je 0x80e700
// 0080e6a6  e87564f4ff           call 0x754b20
// 0080e6ab  8be8                 mov ebp, eax
// 0080e6ad  8b03                 mov eax, dword ptr [ebx]
// 0080e6af  8b5048               mov edx, dword ptr [eax + 0x48]
// 0080e6b2  8bcb                 mov ecx, ebx
// 0080e6b4  ffd2                 call edx
// 0080e6b6  50                   push eax
// 0080e6b7  56                   push esi
// 0080e6b8  682c010000           push 0x12c
// 0080e6bd  68ffffff00           push 0xffffff
// 0080e6c2  56                   push esi
// 0080e6c3  8bcd                 mov ecx, ebp
// 0080e6c5  e8265bf4ff           call 0x7541f0
// 0080e6ca  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0080e6ce  8b542424             mov edx, dword ptr [esp + 0x24]
// 0080e6d2  50                   push eax
// 0080e6d3  83ec10               sub esp, 0x10
// 0080e6d6  8bc4                 mov eax, esp
// 0080e6d8  8908                 mov dword ptr [eax], ecx
// 0080e6da  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0080e6de  895004               mov dword ptr [eax + 4], edx
// 0080e6e1  8b542440             mov edx, dword ptr [esp + 0x40]
// 0080e6e5  894808               mov dword ptr [eax + 8], ecx
// 0080e6e8  89500c               mov dword ptr [eax + 0xc], edx
// 0080e6eb  8b442430             mov eax, dword ptr [esp + 0x30]
// 0080e6ef  50                   push eax
// 0080e6f0  8bcf                 mov ecx, edi
// 0080e6f2  e889e2ffff           call 0x80c980
// 0080e6f7  8bc6                 mov eax, esi
// 0080e6f9  5f                   pop edi
// 0080e6fa  5e                   pop esi
// 0080e6fb  5d                   pop ebp
// 0080e6fc  5b                   pop ebx
// 0080e6fd  c21800               ret 0x18
// 0080e700  56                   push esi
// 0080e701  8d4c241c             lea ecx, [esp + 0x1c]
// 0080e705  51                   push ecx
// 0080e706  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0080e70a  e8c1b0f0ff           call 0x7197d0
// 0080e70f  5f                   pop edi
// 0080e710  8bc6                 mov eax, esi
// 0080e712  5e                   pop esi
// 0080e713  5d                   pop ebp
// 0080e714  5b                   pop ebx
// 0080e715  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillPropertyButton@CColorSetWhidbey@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
