// roc 2009-12 008e9160  unit: CXTPTabPaintManager::CColorSetWhidbey  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e9160
//
// 008e9160  53                   push ebx
// 008e9161  55                   push ebp
// 008e9162  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 008e9166  56                   push esi
// 008e9167  57                   push edi
// 008e9168  8bf9                 mov edi, ecx
// 008e916a  8b07                 mov eax, dword ptr [edi]
// 008e916c  8b5024               mov edx, dword ptr [eax + 0x24]
// 008e916f  55                   push ebp
// 008e9170  ffd2                 call edx
// 008e9172  8b5d60               mov ebx, dword ptr [ebp + 0x60]
// 008e9175  8bf0                 mov esi, eax
// 008e9177  396b08               cmp dword ptr [ebx + 8], ebp
// 008e917a  7511                 jne 0x8e918d
// 008e917c  8bb788000000         mov esi, dword ptr [edi + 0x88]
// 008e9182  83feff               cmp esi, -1
// 008e9185  7506                 jne 0x8e918d
// 008e9187  8bb784000000         mov esi, dword ptr [edi + 0x84]
// 008e918d  83bf1802000000       cmp dword ptr [edi + 0x218], 0
// 008e9194  745a                 je 0x8e91f0
// 008e9196  e83568f4ff           call 0x82f9d0
// 008e919b  8be8                 mov ebp, eax
// 008e919d  8b03                 mov eax, dword ptr [ebx]
// 008e919f  8b5048               mov edx, dword ptr [eax + 0x48]
// 008e91a2  8bcb                 mov ecx, ebx
// 008e91a4  ffd2                 call edx
// 008e91a6  50                   push eax
// 008e91a7  56                   push esi
// 008e91a8  682c010000           push 0x12c
// 008e91ad  68ffffff00           push 0xffffff
// 008e91b2  56                   push esi
// 008e91b3  8bcd                 mov ecx, ebp
// 008e91b5  e8965ef4ff           call 0x82f050
// 008e91ba  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008e91be  8b542424             mov edx, dword ptr [esp + 0x24]
// 008e91c2  50                   push eax
// 008e91c3  83ec10               sub esp, 0x10
// 008e91c6  8bc4                 mov eax, esp
// 008e91c8  8908                 mov dword ptr [eax], ecx
// 008e91ca  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008e91ce  895004               mov dword ptr [eax + 4], edx
// 008e91d1  8b542440             mov edx, dword ptr [esp + 0x40]
// 008e91d5  894808               mov dword ptr [eax + 8], ecx
// 008e91d8  89500c               mov dword ptr [eax + 0xc], edx
// 008e91db  8b442430             mov eax, dword ptr [esp + 0x30]
// 008e91df  50                   push eax
// 008e91e0  8bcf                 mov ecx, edi
// 008e91e2  e889e2ffff           call 0x8e7470
// 008e91e7  8bc6                 mov eax, esi
// 008e91e9  5f                   pop edi
// 008e91ea  5e                   pop esi
// 008e91eb  5d                   pop ebp
// 008e91ec  5b                   pop ebx
// 008e91ed  c21800               ret 0x18
// 008e91f0  56                   push esi
// 008e91f1  8d4c241c             lea ecx, [esp + 0x1c]
// 008e91f5  51                   push ecx
// 008e91f6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e91fa  e8ffb3f0ff           call 0x7f45fe
// 008e91ff  5f                   pop edi
// 008e9200  8bc6                 mov eax, esi
// 008e9202  5e                   pop esi
// 008e9203  5d                   pop ebp
// 008e9204  5b                   pop ebx
// 008e9205  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillPropertyButton@CColorSetWhidbey@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
