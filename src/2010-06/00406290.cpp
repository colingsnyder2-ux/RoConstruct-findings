// roc 2010-06 00406290  unit: VCApp::?$CComObject  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00406290
//
// 00406290  55                   push ebp
// 00406291  8bec                 mov ebp, esp
// 00406293  6aff                 push -1
// 00406295  6850db9700           push 0x97db50
// 0040629a  64a100000000         mov eax, dword ptr fs:[0]
// 004062a0  50                   push eax
// 004062a1  64892500000000       mov dword ptr fs:[0], esp
// 004062a8  83ec0c               sub esp, 0xc
// 004062ab  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004062ae  53                   push ebx
// 004062af  56                   push esi
// 004062b0  33db                 xor ebx, ebx
// 004062b2  57                   push edi
// 004062b3  8965f0               mov dword ptr [ebp - 0x10], esp
// 004062b6  3bc3                 cmp eax, ebx
// 004062b8  7518                 jne 0x4062d2
// 004062ba  b803400080           mov eax, 0x80004003
// 004062bf  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004062c2  64890d00000000       mov dword ptr fs:[0], ecx
// 004062c9  5f                   pop edi
// 004062ca  5e                   pop esi
// 004062cb  5b                   pop ebx
// 004062cc  8be5                 mov esp, ebp
// 004062ce  5d                   pop ebp
// 004062cf  c20c00               ret 0xc
// 004062d2  bf0e000780           mov edi, 0x8007000e
// 004062d7  6a28                 push 0x28
// 004062d9  8918                 mov dword ptr [eax], ebx
// 004062db  897dec               mov dword ptr [ebp - 0x14], edi
// 004062de  895dfc               mov dword ptr [ebp - 4], ebx
// 004062e1  e8ba163a00           call 0x7a79a0
// 004062e6  83c404               add esp, 4
// 004062e9  3bc3                 cmp eax, ebx
// 004062eb  7424                 je 0x406311
// 004062ed  895804               mov dword ptr [eax + 4], ebx
// 004062f0  33c9                 xor ecx, ecx
// 004062f2  894808               mov dword ptr [eax + 8], ecx
// 004062f5  89480c               mov dword ptr [eax + 0xc], ecx
// 004062f8  894810               mov dword ptr [eax + 0x10], ecx
// 004062fb  894814               mov dword ptr [eax + 0x14], ecx
// 004062fe  894818               mov dword ptr [eax + 0x18], ecx
// 00406301  89481c               mov dword ptr [eax + 0x1c], ecx
// 00406304  885820               mov byte ptr [eax + 0x20], bl
// 00406307  c700d805a000         mov dword ptr [eax], 0xa005d8
// 0040630d  8bf0                 mov esi, eax
// 0040630f  eb02                 jmp 0x406313
// 00406311  33f6                 xor esi, esi
// 00406313  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040631a  3bf3                 cmp esi, ebx
// 0040631c  7451                 je 0x40636f
// 0040631e  8b4508               mov eax, dword ptr [ebp + 8]
// 00406321  8d7e08               lea edi, [esi + 8]
// 00406324  8bcf                 mov ecx, edi
// 00406326  894624               mov dword ptr [esi + 0x24], eax
// 00406329  e812c9ffff           call 0x402c40
// 0040632e  3bc3                 cmp eax, ebx
// 00406330  7c04                 jl 0x406336
// 00406332  c6471801             mov byte ptr [edi + 0x18], 1
// 00406336  3bc3                 cmp eax, ebx
// 00406338  8bf8                 mov edi, eax
// 0040633a  7c15                 jl 0x406351
// 0040633c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0040633f  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00406342  8b0e                 mov ecx, dword ptr [esi]
// 00406344  8b09                 mov ecx, dword ptr [ecx]
// 00406346  52                   push edx
// 00406347  50                   push eax
// 00406348  56                   push esi
// 00406349  ffd1                 call ecx
// 0040634b  8bf8                 mov edi, eax
// 0040634d  3bfb                 cmp edi, ebx
// 0040634f  741e                 je 0x40636f
// 00406351  8b16                 mov edx, dword ptr [esi]
// 00406353  8b4214               mov eax, dword ptr [edx + 0x14]
// 00406356  6a01                 push 1
// 00406358  8bce                 mov ecx, esi
// 0040635a  ffd0                 call eax
// 0040635c  eb11                 jmp 0x40636f
// 0040635e  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 00406361  e816193a00           call 0x7a7c7c
// 00406366  b86c634000           mov eax, 0x40636c
// 0040636b  c3                   ret 
// 0040636c  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 0040636f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00406372  8bc7                 mov eax, edi
// 00406374  5f                   pop edi
// 00406375  5e                   pop esi
// 00406376  64890d00000000       mov dword ptr fs:[0], ecx
// 0040637d  5b                   pop ebx
// 0040637e  8be5                 mov esp, ebp
// 00406380  5d                   pop ebp
// 00406381  c20c00               ret 0xc
// copied from an identical function in another client (function ?CreateInstance@?$CComCreator@V?$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@@ATL@@SGJPAXABU_GUID@@PAPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_1f2246b5cad71147.cpp