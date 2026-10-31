// roc 2009-06 004066c0  unit: VCApp::?$CComObject  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004066c0
//
// 004066c0  55                   push ebp
// 004066c1  8bec                 mov ebp, esp
// 004066c3  6aff                 push -1
// 004066c5  68b0cc8400           push 0x84ccb0
// 004066ca  64a100000000         mov eax, dword ptr fs:[0]
// 004066d0  50                   push eax
// 004066d1  64892500000000       mov dword ptr fs:[0], esp
// 004066d8  83ec0c               sub esp, 0xc
// 004066db  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004066de  53                   push ebx
// 004066df  56                   push esi
// 004066e0  33db                 xor ebx, ebx
// 004066e2  57                   push edi
// 004066e3  8965f0               mov dword ptr [ebp - 0x10], esp
// 004066e6  3bc3                 cmp eax, ebx
// 004066e8  7518                 jne 0x406702
// 004066ea  b803400080           mov eax, 0x80004003
// 004066ef  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004066f2  64890d00000000       mov dword ptr fs:[0], ecx
// 004066f9  5f                   pop edi
// 004066fa  5e                   pop esi
// 004066fb  5b                   pop ebx
// 004066fc  8be5                 mov esp, ebp
// 004066fe  5d                   pop ebp
// 004066ff  c20c00               ret 0xc
// 00406702  bf0e000780           mov edi, 0x8007000e
// 00406707  6a28                 push 0x28
// 00406709  8918                 mov dword ptr [eax], ebx
// 0040670b  897dec               mov dword ptr [ebp - 0x14], edi
// 0040670e  895dfc               mov dword ptr [ebp - 4], ebx
// 00406711  e822233100           call 0x718a38
// 00406716  83c404               add esp, 4
// 00406719  3bc3                 cmp eax, ebx
// 0040671b  7424                 je 0x406741
// 0040671d  895804               mov dword ptr [eax + 4], ebx
// 00406720  33c9                 xor ecx, ecx
// 00406722  894808               mov dword ptr [eax + 8], ecx
// 00406725  89480c               mov dword ptr [eax + 0xc], ecx
// 00406728  894810               mov dword ptr [eax + 0x10], ecx
// 0040672b  894814               mov dword ptr [eax + 0x14], ecx
// 0040672e  894818               mov dword ptr [eax + 0x18], ecx
// 00406731  89481c               mov dword ptr [eax + 0x1c], ecx
// 00406734  885820               mov byte ptr [eax + 0x20], bl
// 00406737  c700f4ce8a00         mov dword ptr [eax], 0x8acef4
// 0040673d  8bf0                 mov esi, eax
// 0040673f  eb02                 jmp 0x406743
// 00406741  33f6                 xor esi, esi
// 00406743  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040674a  3bf3                 cmp esi, ebx
// 0040674c  7451                 je 0x40679f
// 0040674e  8b4508               mov eax, dword ptr [ebp + 8]
// 00406751  8d7e08               lea edi, [esi + 8]
// 00406754  8bcf                 mov ecx, edi
// 00406756  894624               mov dword ptr [esi + 0x24], eax
// 00406759  e8c2c7ffff           call 0x402f20
// 0040675e  3bc3                 cmp eax, ebx
// 00406760  7c04                 jl 0x406766
// 00406762  c6471801             mov byte ptr [edi + 0x18], 1
// 00406766  3bc3                 cmp eax, ebx
// 00406768  8bf8                 mov edi, eax
// 0040676a  7c15                 jl 0x406781
// 0040676c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0040676f  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00406772  8b0e                 mov ecx, dword ptr [esi]
// 00406774  8b09                 mov ecx, dword ptr [ecx]
// 00406776  52                   push edx
// 00406777  50                   push eax
// 00406778  56                   push esi
// 00406779  ffd1                 call ecx
// 0040677b  8bf8                 mov edi, eax
// 0040677d  3bfb                 cmp edi, ebx
// 0040677f  741e                 je 0x40679f
// 00406781  8b16                 mov edx, dword ptr [esi]
// 00406783  8b4214               mov eax, dword ptr [edx + 0x14]
// 00406786  6a01                 push 1
// 00406788  8bce                 mov ecx, esi
// 0040678a  ffd0                 call eax
// 0040678c  eb11                 jmp 0x40679f
// 0040678e  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 00406791  e87e253100           call 0x718d14
// 00406796  b89c674000           mov eax, 0x40679c
// 0040679b  c3                   ret 
// 0040679c  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 0040679f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004067a2  8bc7                 mov eax, edi
// 004067a4  5f                   pop edi
// 004067a5  5e                   pop esi
// 004067a6  64890d00000000       mov dword ptr fs:[0], ecx
// 004067ad  5b                   pop ebx
// 004067ae  8be5                 mov esp, ebp
// 004067b0  5d                   pop ebp
// 004067b1  c20c00               ret 0xc
// copied from an identical function in another client (function ?CreateInstance@?$CComCreator@V?$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@@ATL@@SGJPAXABU_GUID@@PAPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_1f2246b5cad71147.cpp