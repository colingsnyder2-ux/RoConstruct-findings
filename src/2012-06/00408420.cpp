// roc 2012-06 00408420  unit: VCApp::?$CComObject  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00408420
//
// 00408420  55                   push ebp
// 00408421  8bec                 mov ebp, esp
// 00408423  6aff                 push -1
// 00408425  6860a3a900           push 0xa9a360
// 0040842a  64a100000000         mov eax, dword ptr fs:[0]
// 00408430  50                   push eax
// 00408431  64892500000000       mov dword ptr fs:[0], esp
// 00408438  83ec0c               sub esp, 0xc
// 0040843b  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0040843e  53                   push ebx
// 0040843f  56                   push esi
// 00408440  33db                 xor ebx, ebx
// 00408442  57                   push edi
// 00408443  8965f0               mov dword ptr [ebp - 0x10], esp
// 00408446  3bc3                 cmp eax, ebx
// 00408448  7518                 jne 0x408462
// 0040844a  b803400080           mov eax, 0x80004003
// 0040844f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00408452  64890d00000000       mov dword ptr fs:[0], ecx
// 00408459  5f                   pop edi
// 0040845a  5e                   pop esi
// 0040845b  5b                   pop ebx
// 0040845c  8be5                 mov esp, ebp
// 0040845e  5d                   pop ebp
// 0040845f  c20c00               ret 0xc
// 00408462  bf0e000780           mov edi, 0x8007000e
// 00408467  6a28                 push 0x28
// 00408469  8918                 mov dword ptr [eax], ebx
// 0040846b  897dec               mov dword ptr [ebp - 0x14], edi
// 0040846e  895dfc               mov dword ptr [ebp - 4], ebx
// 00408471  e8a49c5700           call 0x98211a
// 00408476  83c404               add esp, 4
// 00408479  3bc3                 cmp eax, ebx
// 0040847b  7424                 je 0x4084a1
// 0040847d  895804               mov dword ptr [eax + 4], ebx
// 00408480  33c9                 xor ecx, ecx
// 00408482  894808               mov dword ptr [eax + 8], ecx
// 00408485  89480c               mov dword ptr [eax + 0xc], ecx
// 00408488  894810               mov dword ptr [eax + 0x10], ecx
// 0040848b  894814               mov dword ptr [eax + 0x14], ecx
// 0040848e  894818               mov dword ptr [eax + 0x18], ecx
// 00408491  89481c               mov dword ptr [eax + 0x1c], ecx
// 00408494  885820               mov byte ptr [eax + 0x20], bl
// 00408497  c7008439b400         mov dword ptr [eax], 0xb43984
// 0040849d  8bf0                 mov esi, eax
// 0040849f  eb02                 jmp 0x4084a3
// 004084a1  33f6                 xor esi, esi
// 004084a3  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004084aa  3bf3                 cmp esi, ebx
// 004084ac  7451                 je 0x4084ff
// 004084ae  8b4508               mov eax, dword ptr [ebp + 8]
// 004084b1  8d7e08               lea edi, [esi + 8]
// 004084b4  8bcf                 mov ecx, edi
// 004084b6  894624               mov dword ptr [esi + 0x24], eax
// 004084b9  e862bdffff           call 0x404220
// 004084be  3bc3                 cmp eax, ebx
// 004084c0  7c04                 jl 0x4084c6
// 004084c2  c6471801             mov byte ptr [edi + 0x18], 1
// 004084c6  3bc3                 cmp eax, ebx
// 004084c8  8bf8                 mov edi, eax
// 004084ca  7c15                 jl 0x4084e1
// 004084cc  8b5510               mov edx, dword ptr [ebp + 0x10]
// 004084cf  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004084d2  8b0e                 mov ecx, dword ptr [esi]
// 004084d4  8b09                 mov ecx, dword ptr [ecx]
// 004084d6  52                   push edx
// 004084d7  50                   push eax
// 004084d8  56                   push esi
// 004084d9  ffd1                 call ecx
// 004084db  8bf8                 mov edi, eax
// 004084dd  3bfb                 cmp edi, ebx
// 004084df  741e                 je 0x4084ff
// 004084e1  8b16                 mov edx, dword ptr [esi]
// 004084e3  8b4214               mov eax, dword ptr [edx + 0x14]
// 004084e6  6a01                 push 1
// 004084e8  8bce                 mov ecx, esi
// 004084ea  ffd0                 call eax
// 004084ec  eb11                 jmp 0x4084ff
// 004084ee  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 004084f1  e8f49e5700           call 0x9823ea
// 004084f6  b8fc844000           mov eax, 0x4084fc
// 004084fb  c3                   ret 
// 004084fc  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 004084ff  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00408502  8bc7                 mov eax, edi
// 00408504  5f                   pop edi
// 00408505  5e                   pop esi
// 00408506  64890d00000000       mov dword ptr fs:[0], ecx
// 0040850d  5b                   pop ebx
// 0040850e  8be5                 mov esp, ebp
// 00408510  5d                   pop ebp
// 00408511  c20c00               ret 0xc
// copied from an identical function in another client (function ?CreateInstance@?$CComCreator@V?$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@@ATL@@SGJPAXABU_GUID@@PAPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_1f2246b5cad71147.cpp