// roc 2011-06 008f6ae0  unit: CXTPTabPaintManager::CColorSetWhidbey  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f6ae0
//
// 008f6ae0  53                   push ebx
// 008f6ae1  55                   push ebp
// 008f6ae2  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 008f6ae6  56                   push esi
// 008f6ae7  57                   push edi
// 008f6ae8  8bf9                 mov edi, ecx
// 008f6aea  8b07                 mov eax, dword ptr [edi]
// 008f6aec  8b5024               mov edx, dword ptr [eax + 0x24]
// 008f6aef  55                   push ebp
// 008f6af0  ffd2                 call edx
// 008f6af2  8b5d60               mov ebx, dword ptr [ebp + 0x60]
// 008f6af5  8bf0                 mov esi, eax
// 008f6af7  396b08               cmp dword ptr [ebx + 8], ebp
// 008f6afa  7511                 jne 0x8f6b0d
// 008f6afc  8bb788000000         mov esi, dword ptr [edi + 0x88]
// 008f6b02  83feff               cmp esi, -1
// 008f6b05  7506                 jne 0x8f6b0d
// 008f6b07  8bb784000000         mov esi, dword ptr [edi + 0x84]
// 008f6b0d  83bf1802000000       cmp dword ptr [edi + 0x218], 0
// 008f6b14  745a                 je 0x8f6b70
// 008f6b16  e8c5e8f4ff           call 0x8453e0
// 008f6b1b  8be8                 mov ebp, eax
// 008f6b1d  8b03                 mov eax, dword ptr [ebx]
// 008f6b1f  8b5048               mov edx, dword ptr [eax + 0x48]
// 008f6b22  8bcb                 mov ecx, ebx
// 008f6b24  ffd2                 call edx
// 008f6b26  50                   push eax
// 008f6b27  56                   push esi
// 008f6b28  682c010000           push 0x12c
// 008f6b2d  68ffffff00           push 0xffffff
// 008f6b32  56                   push esi
// 008f6b33  8bcd                 mov ecx, ebp
// 008f6b35  e8c6dff4ff           call 0x844b00
// 008f6b3a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008f6b3e  8b542424             mov edx, dword ptr [esp + 0x24]
// 008f6b42  50                   push eax
// 008f6b43  83ec10               sub esp, 0x10
// 008f6b46  8bc4                 mov eax, esp
// 008f6b48  8908                 mov dword ptr [eax], ecx
// 008f6b4a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008f6b4e  895004               mov dword ptr [eax + 4], edx
// 008f6b51  8b542440             mov edx, dword ptr [esp + 0x40]
// 008f6b55  894808               mov dword ptr [eax + 8], ecx
// 008f6b58  89500c               mov dword ptr [eax + 0xc], edx
// 008f6b5b  8b442430             mov eax, dword ptr [esp + 0x30]
// 008f6b5f  50                   push eax
// 008f6b60  8bcf                 mov ecx, edi
// 008f6b62  e889e2ffff           call 0x8f4df0
// 008f6b67  8bc6                 mov eax, esi
// 008f6b69  5f                   pop edi
// 008f6b6a  5e                   pop esi
// 008f6b6b  5d                   pop ebp
// 008f6b6c  5b                   pop ebx
// 008f6b6d  c21800               ret 0x18
// 008f6b70  56                   push esi
// 008f6b71  8d4c241c             lea ecx, [esp + 0x1c]
// 008f6b75  51                   push ecx
// 008f6b76  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008f6b7a  e8a142f1ff           call 0x80ae20
// 008f6b7f  5f                   pop edi
// 008f6b80  8bc6                 mov eax, esi
// 008f6b82  5e                   pop esi
// 008f6b83  5d                   pop ebp
// 008f6b84  5b                   pop ebx
// 008f6b85  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillPropertyButton@CColorSetWhidbey@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
