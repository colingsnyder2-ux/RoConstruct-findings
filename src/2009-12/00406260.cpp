// roc 2009-12 00406260  unit: VCApp::?$CComObject  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00406260
//
// 00406260  55                   push ebp
// 00406261  8bec                 mov ebp, esp
// 00406263  6aff                 push -1
// 00406265  6800729200           push 0x927200
// 0040626a  64a100000000         mov eax, dword ptr fs:[0]
// 00406270  50                   push eax
// 00406271  64892500000000       mov dword ptr fs:[0], esp
// 00406278  83ec0c               sub esp, 0xc
// 0040627b  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0040627e  53                   push ebx
// 0040627f  56                   push esi
// 00406280  33db                 xor ebx, ebx
// 00406282  57                   push edi
// 00406283  8965f0               mov dword ptr [ebp - 0x10], esp
// 00406286  3bc3                 cmp eax, ebx
// 00406288  7518                 jne 0x4062a2
// 0040628a  b803400080           mov eax, 0x80004003
// 0040628f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00406292  64890d00000000       mov dword ptr fs:[0], ecx
// 00406299  5f                   pop edi
// 0040629a  5e                   pop esi
// 0040629b  5b                   pop ebx
// 0040629c  8be5                 mov esp, ebp
// 0040629e  5d                   pop ebp
// 0040629f  c20c00               ret 0xc
// 004062a2  bf0e000780           mov edi, 0x8007000e
// 004062a7  6a28                 push 0x28
// 004062a9  8918                 mov dword ptr [eax], ebx
// 004062ab  897dec               mov dword ptr [ebp - 0x14], edi
// 004062ae  895dfc               mov dword ptr [ebp - 4], ebx
// 004062b1  e8aad53e00           call 0x7f3860
// 004062b6  83c404               add esp, 4
// 004062b9  3bc3                 cmp eax, ebx
// 004062bb  7424                 je 0x4062e1
// 004062bd  895804               mov dword ptr [eax + 4], ebx
// 004062c0  33c9                 xor ecx, ecx
// 004062c2  894808               mov dword ptr [eax + 8], ecx
// 004062c5  89480c               mov dword ptr [eax + 0xc], ecx
// 004062c8  894810               mov dword ptr [eax + 0x10], ecx
// 004062cb  894814               mov dword ptr [eax + 0x14], ecx
// 004062ce  894818               mov dword ptr [eax + 0x18], ecx
// 004062d1  89481c               mov dword ptr [eax + 0x1c], ecx
// 004062d4  885820               mov byte ptr [eax + 0x20], bl
// 004062d7  c70034fa9900         mov dword ptr [eax], 0x99fa34
// 004062dd  8bf0                 mov esi, eax
// 004062df  eb02                 jmp 0x4062e3
// 004062e1  33f6                 xor esi, esi
// 004062e3  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004062ea  3bf3                 cmp esi, ebx
// 004062ec  7451                 je 0x40633f
// 004062ee  8b4508               mov eax, dword ptr [ebp + 8]
// 004062f1  8d7e08               lea edi, [esi + 8]
// 004062f4  8bcf                 mov ecx, edi
// 004062f6  894624               mov dword ptr [esi + 0x24], eax
// 004062f9  e8f2c8ffff           call 0x402bf0
// 004062fe  3bc3                 cmp eax, ebx
// 00406300  7c04                 jl 0x406306
// 00406302  c6471801             mov byte ptr [edi + 0x18], 1
// 00406306  3bc3                 cmp eax, ebx
// 00406308  8bf8                 mov edi, eax
// 0040630a  7c15                 jl 0x406321
// 0040630c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0040630f  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00406312  8b0e                 mov ecx, dword ptr [esi]
// 00406314  8b09                 mov ecx, dword ptr [ecx]
// 00406316  52                   push edx
// 00406317  50                   push eax
// 00406318  56                   push esi
// 00406319  ffd1                 call ecx
// 0040631b  8bf8                 mov edi, eax
// 0040631d  3bfb                 cmp edi, ebx
// 0040631f  741e                 je 0x40633f
// 00406321  8b16                 mov edx, dword ptr [esi]
// 00406323  8b4214               mov eax, dword ptr [edx + 0x14]
// 00406326  6a01                 push 1
// 00406328  8bce                 mov ecx, esi
// 0040632a  ffd0                 call eax
// 0040632c  eb11                 jmp 0x40633f
// 0040632e  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 00406331  e806d83e00           call 0x7f3b3c
// 00406336  b83c634000           mov eax, 0x40633c
// 0040633b  c3                   ret 
// 0040633c  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 0040633f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00406342  8bc7                 mov eax, edi
// 00406344  5f                   pop edi
// 00406345  5e                   pop esi
// 00406346  64890d00000000       mov dword ptr fs:[0], ecx
// 0040634d  5b                   pop ebx
// 0040634e  8be5                 mov esp, ebp
// 00406350  5d                   pop ebp
// 00406351  c20c00               ret 0xc
// copied from an identical function in another client (function ?CreateInstance@?$CComCreator@V?$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@@ATL@@SGJPAXABU_GUID@@PAPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_1f2246b5cad71147.cpp