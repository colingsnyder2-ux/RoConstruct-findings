// roc 2008-06 0079dfe0  unit: CXTPTabPaintManager::CColorSetWhidbey  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079dfe0
//
// 0079dfe0  53                   push ebx
// 0079dfe1  55                   push ebp
// 0079dfe2  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0079dfe6  56                   push esi
// 0079dfe7  57                   push edi
// 0079dfe8  8bf9                 mov edi, ecx
// 0079dfea  8b07                 mov eax, dword ptr [edi]
// 0079dfec  8b5024               mov edx, dword ptr [eax + 0x24]
// 0079dfef  55                   push ebp
// 0079dff0  ffd2                 call edx
// 0079dff2  8b5d60               mov ebx, dword ptr [ebp + 0x60]
// 0079dff5  8bf0                 mov esi, eax
// 0079dff7  396b08               cmp dword ptr [ebx + 8], ebp
// 0079dffa  7511                 jne 0x79e00d
// 0079dffc  8bb788000000         mov esi, dword ptr [edi + 0x88]
// 0079e002  83feff               cmp esi, -1
// 0079e005  7506                 jne 0x79e00d
// 0079e007  8bb784000000         mov esi, dword ptr [edi + 0x84]
// 0079e00d  83bf1802000000       cmp dword ptr [edi + 0x218], 0
// 0079e014  745a                 je 0x79e070
// 0079e016  e8251df4ff           call 0x6dfd40
// 0079e01b  8be8                 mov ebp, eax
// 0079e01d  8b03                 mov eax, dword ptr [ebx]
// 0079e01f  8b5048               mov edx, dword ptr [eax + 0x48]
// 0079e022  8bcb                 mov ecx, ebx
// 0079e024  ffd2                 call edx
// 0079e026  50                   push eax
// 0079e027  56                   push esi
// 0079e028  682c010000           push 0x12c
// 0079e02d  68ffffff00           push 0xffffff
// 0079e032  56                   push esi
// 0079e033  8bcd                 mov ecx, ebp
// 0079e035  e83614f4ff           call 0x6df470
// 0079e03a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0079e03e  8b542424             mov edx, dword ptr [esp + 0x24]
// 0079e042  50                   push eax
// 0079e043  83ec10               sub esp, 0x10
// 0079e046  8bc4                 mov eax, esp
// 0079e048  8908                 mov dword ptr [eax], ecx
// 0079e04a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0079e04e  895004               mov dword ptr [eax + 4], edx
// 0079e051  8b542440             mov edx, dword ptr [esp + 0x40]
// 0079e055  894808               mov dword ptr [eax + 8], ecx
// 0079e058  89500c               mov dword ptr [eax + 0xc], edx
// 0079e05b  8b442430             mov eax, dword ptr [esp + 0x30]
// 0079e05f  50                   push eax
// 0079e060  8bcf                 mov ecx, edi
// 0079e062  e889e2ffff           call 0x79c2f0
// 0079e067  8bc6                 mov eax, esi
// 0079e069  5f                   pop edi
// 0079e06a  5e                   pop esi
// 0079e06b  5d                   pop ebp
// 0079e06c  5b                   pop ebx
// 0079e06d  c21800               ret 0x18
// 0079e070  56                   push esi
// 0079e071  8d4c241c             lea ecx, [esp + 0x1c]
// 0079e075  51                   push ecx
// 0079e076  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0079e07a  e8df32f0ff           call 0x6a135e
// 0079e07f  5f                   pop edi
// 0079e080  8bc6                 mov eax, esi
// 0079e082  5e                   pop esi
// 0079e083  5d                   pop ebp
// 0079e084  5b                   pop ebx
// 0079e085  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillPropertyButton@CColorSetWhidbey@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
