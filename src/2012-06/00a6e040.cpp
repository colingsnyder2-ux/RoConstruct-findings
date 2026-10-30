// roc 2012-06 00a6e040  unit: CXTPTabPaintManager::CColorSetOffice2003  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6e040
//
// 00a6e040  53                   push ebx
// 00a6e041  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00a6e045  55                   push ebp
// 00a6e046  56                   push esi
// 00a6e047  57                   push edi
// 00a6e048  8bf9                 mov edi, ecx
// 00a6e04a  8b07                 mov eax, dword ptr [edi]
// 00a6e04c  8b5024               mov edx, dword ptr [eax + 0x24]
// 00a6e04f  53                   push ebx
// 00a6e050  ffd2                 call edx
// 00a6e052  8b6b60               mov ebp, dword ptr [ebx + 0x60]
// 00a6e055  8bf0                 mov esi, eax
// 00a6e057  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 00a6e05a  7513                 jne 0xa6e06f
// 00a6e05c  8bb794000000         mov esi, dword ptr [edi + 0x94]
// 00a6e062  83feff               cmp esi, -1
// 00a6e065  751e                 jne 0xa6e085
// 00a6e067  8bb790000000         mov esi, dword ptr [edi + 0x90]
// 00a6e06d  eb16                 jmp 0xa6e085
// 00a6e06f  395d08               cmp dword ptr [ebp + 8], ebx
// 00a6e072  7511                 jne 0xa6e085
// 00a6e074  8bb788000000         mov esi, dword ptr [edi + 0x88]
// 00a6e07a  83feff               cmp esi, -1
// 00a6e07d  7506                 jne 0xa6e085
// 00a6e07f  8bb784000000         mov esi, dword ptr [edi + 0x84]
// 00a6e085  e8d6f7f4ff           call 0x9bd860
// 00a6e08a  8bd8                 mov ebx, eax
// 00a6e08c  8b4500               mov eax, dword ptr [ebp]
// 00a6e08f  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a6e092  8bcd                 mov ecx, ebp
// 00a6e094  ffd2                 call edx
// 00a6e096  50                   push eax
// 00a6e097  56                   push esi
// 00a6e098  682c010000           push 0x12c
// 00a6e09d  68ffffff00           push 0xffffff
// 00a6e0a2  56                   push esi
// 00a6e0a3  8bcb                 mov ecx, ebx
// 00a6e0a5  e886eef4ff           call 0x9bcf30
// 00a6e0aa  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a6e0ae  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a6e0b2  50                   push eax
// 00a6e0b3  83ec10               sub esp, 0x10
// 00a6e0b6  8bc4                 mov eax, esp
// 00a6e0b8  8908                 mov dword ptr [eax], ecx
// 00a6e0ba  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a6e0be  895004               mov dword ptr [eax + 4], edx
// 00a6e0c1  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a6e0c5  894808               mov dword ptr [eax + 8], ecx
// 00a6e0c8  89500c               mov dword ptr [eax + 0xc], edx
// 00a6e0cb  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a6e0cf  50                   push eax
// 00a6e0d0  8bcf                 mov ecx, edi
// 00a6e0d2  e879f0ffff           call 0xa6d150
// 00a6e0d7  5f                   pop edi
// 00a6e0d8  8bc6                 mov eax, esi
// 00a6e0da  5e                   pop esi
// 00a6e0db  5d                   pop ebp
// 00a6e0dc  5b                   pop ebx
// 00a6e0dd  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillPropertyButton@CColorSetOffice2003@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
