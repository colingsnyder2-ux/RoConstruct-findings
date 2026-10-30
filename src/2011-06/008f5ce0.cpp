// roc 2011-06 008f5ce0  unit: CXTPTabPaintManager::CColorSetOffice2003  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f5ce0
//
// 008f5ce0  53                   push ebx
// 008f5ce1  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008f5ce5  55                   push ebp
// 008f5ce6  56                   push esi
// 008f5ce7  57                   push edi
// 008f5ce8  8bf9                 mov edi, ecx
// 008f5cea  8b07                 mov eax, dword ptr [edi]
// 008f5cec  8b5024               mov edx, dword ptr [eax + 0x24]
// 008f5cef  53                   push ebx
// 008f5cf0  ffd2                 call edx
// 008f5cf2  8b6b60               mov ebp, dword ptr [ebx + 0x60]
// 008f5cf5  8bf0                 mov esi, eax
// 008f5cf7  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 008f5cfa  7513                 jne 0x8f5d0f
// 008f5cfc  8bb794000000         mov esi, dword ptr [edi + 0x94]
// 008f5d02  83feff               cmp esi, -1
// 008f5d05  751e                 jne 0x8f5d25
// 008f5d07  8bb790000000         mov esi, dword ptr [edi + 0x90]
// 008f5d0d  eb16                 jmp 0x8f5d25
// 008f5d0f  395d08               cmp dword ptr [ebp + 8], ebx
// 008f5d12  7511                 jne 0x8f5d25
// 008f5d14  8bb788000000         mov esi, dword ptr [edi + 0x88]
// 008f5d1a  83feff               cmp esi, -1
// 008f5d1d  7506                 jne 0x8f5d25
// 008f5d1f  8bb784000000         mov esi, dword ptr [edi + 0x84]
// 008f5d25  e8b6f6f4ff           call 0x8453e0
// 008f5d2a  8bd8                 mov ebx, eax
// 008f5d2c  8b4500               mov eax, dword ptr [ebp]
// 008f5d2f  8b5048               mov edx, dword ptr [eax + 0x48]
// 008f5d32  8bcd                 mov ecx, ebp
// 008f5d34  ffd2                 call edx
// 008f5d36  50                   push eax
// 008f5d37  56                   push esi
// 008f5d38  682c010000           push 0x12c
// 008f5d3d  68ffffff00           push 0xffffff
// 008f5d42  56                   push esi
// 008f5d43  8bcb                 mov ecx, ebx
// 008f5d45  e8b6edf4ff           call 0x844b00
// 008f5d4a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008f5d4e  8b542424             mov edx, dword ptr [esp + 0x24]
// 008f5d52  50                   push eax
// 008f5d53  83ec10               sub esp, 0x10
// 008f5d56  8bc4                 mov eax, esp
// 008f5d58  8908                 mov dword ptr [eax], ecx
// 008f5d5a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008f5d5e  895004               mov dword ptr [eax + 4], edx
// 008f5d61  8b542440             mov edx, dword ptr [esp + 0x40]
// 008f5d65  894808               mov dword ptr [eax + 8], ecx
// 008f5d68  89500c               mov dword ptr [eax + 0xc], edx
// 008f5d6b  8b442430             mov eax, dword ptr [esp + 0x30]
// 008f5d6f  50                   push eax
// 008f5d70  8bcf                 mov ecx, edi
// 008f5d72  e879f0ffff           call 0x8f4df0
// 008f5d77  5f                   pop edi
// 008f5d78  8bc6                 mov eax, esi
// 008f5d7a  5e                   pop esi
// 008f5d7b  5d                   pop ebp
// 008f5d7c  5b                   pop ebx
// 008f5d7d  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillPropertyButton@CColorSetOffice2003@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
