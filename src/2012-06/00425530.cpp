// roc 2012-06 00425530  unit: RBX::FunctionMarshaller  size: 476 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00425530
//
// 00425530  64a100000000         mov eax, dword ptr fs:[0]
// 00425536  6aff                 push -1
// 00425538  68e8bca900           push 0xa9bce8
// 0042553d  50                   push eax
// 0042553e  64892500000000       mov dword ptr fs:[0], esp
// 00425545  83ec70               sub esp, 0x70
// 00425548  55                   push ebp
// 00425549  56                   push esi
// 0042554a  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 00425551  85f6                 test esi, esi
// 00425553  0f84a0010000         je 0x4256f9
// 00425559  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00425560  85c0                 test eax, eax
// 00425562  0f8491010000         je 0x4256f9
// 00425568  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 0042556f  85ed                 test ebp, ebp
// 00425571  0f8482010000         je 0x4256f9
// 00425577  83bc249400000000     cmp dword ptr [esp + 0x94], 0
// 0042557f  0f8474010000         je 0x4256f9
// 00425585  66837d4000           cmp word ptr [ebp + 0x40], 0
// 0042558a  53                   push ebx
// 0042558b  57                   push edi
// 0042558c  0f853e010000         jne 0x4256d0
// 00425592  83c004               add eax, 4
// 00425595  89442418             mov dword ptr [esp + 0x18], eax
// 00425599  c644241c00           mov byte ptr [esp + 0x1c], 0
// 0042559e  8d4c2418             lea ecx, [esp + 0x18]
// 004255a2  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 004255ad  e8ae1dfeff           call 0x407360
// 004255b2  85c0                 test eax, eax
// 004255b4  7c4f                 jl 0x425605
// 004255b6  66837d4000           cmp word ptr [ebp + 0x40], 0
// 004255bb  0f8506010000         jne 0x4256c7
// 004255c1  8b4530               mov eax, dword ptr [ebp + 0x30]
// 004255c4  8b1d983ab200         mov ebx, dword ptr [0xb23a98]
// 004255ca  85c0                 test eax, eax
// 004255cc  747f                 je 0x42564d
// 004255ce  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 004255d1  8b5508               mov edx, dword ptr [ebp + 8]
// 004255d4  894c2410             mov dword ptr [esp + 0x10], ecx
// 004255d8  8d4c2420             lea ecx, [esp + 0x20]
// 004255dc  51                   push ecx
// 004255dd  50                   push eax
// 004255de  6a00                 push 0
// 004255e0  89542420             mov dword ptr [esp + 0x20], edx
// 004255e4  c744242c30000000     mov dword ptr [esp + 0x2c], 0x30
// 004255ec  ffd3                 call ebx
// 004255ee  85c0                 test eax, eax
// 004255f0  7531                 jne 0x425623
// 004255f2  8b4530               mov eax, dword ptr [ebp + 0x30]
// 004255f5  8b4e04               mov ecx, dword ptr [esi + 4]
// 004255f8  8d542420             lea edx, [esp + 0x20]
// 004255fc  52                   push edx
// 004255fd  50                   push eax
// 004255fe  51                   push ecx
// 004255ff  ffd3                 call ebx
// 00425601  85c0                 test eax, eax
// 00425603  751e                 jne 0x425623
// 00425605  8d4c2418             lea ecx, [esp + 0x18]
// 00425609  e88220feff           call 0x407690
// 0042560e  5f                   pop edi
// 0042560f  5b                   pop ebx
// 00425610  5e                   pop esi
// 00425611  33c0                 xor eax, eax
// 00425613  5d                   pop ebp
// 00425614  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00425618  64890d00000000       mov dword ptr fs:[0], ecx
// 0042561f  83c47c               add esp, 0x7c
// 00425622  c3                   ret 
// 00425623  8b542414             mov edx, dword ptr [esp + 0x14]
// 00425627  b90c000000           mov ecx, 0xc
// 0042562c  8d742420             lea esi, [esp + 0x20]
// 00425630  8bfd                 mov edi, ebp
// 00425632  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00425634  8b4508               mov eax, dword ptr [ebp + 8]
// 00425637  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0042563b  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 00425642  894534               mov dword ptr [ebp + 0x34], eax
// 00425645  894d28               mov dword ptr [ebp + 0x28], ecx
// 00425648  895508               mov dword ptr [ebp + 8], edx
// 0042564b  eb1b                 jmp 0x425668
// 0042564d  837d3c00             cmp dword ptr [ebp + 0x3c], 0
// 00425651  7404                 je 0x425657
// 00425653  33c0                 xor eax, eax
// 00425655  eb03                 jmp 0x42565a
// 00425657  8b4608               mov eax, dword ptr [esi + 8]
// 0042565a  8b4d38               mov ecx, dword ptr [ebp + 0x38]
// 0042565d  51                   push ecx
// 0042565e  50                   push eax
// 0042565f  ff159c3ab200         call dword ptr [0xb23a9c]
// 00425665  89451c               mov dword ptr [ebp + 0x1c], eax
// 00425668  8b4604               mov eax, dword ptr [esi + 4]
// 0042566b  816504ffbfffff       and dword ptr [ebp + 4], 0xffffbfff
// 00425672  837d2800             cmp dword ptr [ebp + 0x28], 0
// 00425676  894514               mov dword ptr [ebp + 0x14], eax
// 00425679  7512                 jne 0x42568d
// 0042567b  55                   push ebp
// 0042567c  8d7542               lea esi, [ebp + 0x42]
// 0042567f  6a25                 push 0x25
// 00425681  56                   push esi
// 00425682  e8c9f6ffff           call 0x424d50
// 00425687  83c40c               add esp, 0xc
// 0042568a  897528               mov dword ptr [ebp + 0x28], esi
// 0042568d  8b4528               mov eax, dword ptr [ebp + 0x28]
// 00425690  8d542450             lea edx, [esp + 0x50]
// 00425694  52                   push edx
// 00425695  b90c000000           mov ecx, 0xc
// 0042569a  8bf5                 mov esi, ebp
// 0042569c  8d7c2454             lea edi, [esp + 0x54]
// 004256a0  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004256a2  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 004256a5  50                   push eax
// 004256a6  51                   push ecx
// 004256a7  ffd3                 call ebx
// 004256a9  66894540             mov word ptr [ebp + 0x40], ax
// 004256ad  6685c0               test ax, ax
// 004256b0  7515                 jne 0x4256c7
// 004256b2  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 004256b9  55                   push ebp
// 004256ba  50                   push eax
// 004256bb  e820fcffff           call 0x4252e0
// 004256c0  83c408               add esp, 8
// 004256c3  66894540             mov word ptr [ebp + 0x40], ax
// 004256c7  8d4c2418             lea ecx, [esp + 0x18]
// 004256cb  e8c01ffeff           call 0x407690
// 004256d0  837d3000             cmp dword ptr [ebp + 0x30], 0
// 004256d4  740c                 je 0x4256e2
// 004256d6  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 004256d9  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 004256e0  890a                 mov dword ptr [edx], ecx
// 004256e2  668b4540             mov ax, word ptr [ebp + 0x40]
// 004256e6  5f                   pop edi
// 004256e7  5b                   pop ebx
// 004256e8  5e                   pop esi
// 004256e9  5d                   pop ebp
// 004256ea  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 004256ee  64890d00000000       mov dword ptr fs:[0], ecx
// 004256f5  83c47c               add esp, 0x7c
// 004256f8  c3                   ret 
// 004256f9  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 004256fd  5e                   pop esi
// 004256fe  33c0                 xor eax, eax
// 00425700  5d                   pop ebp
// 00425701  64890d00000000       mov dword ptr fs:[0], ecx
// 00425708  83c47c               add esp, 0x7c
// 0042570b  c3                   ret 
// copied from an identical function in another client (function ??$AtlModuleRegisterWndClassInfoT@VAtlModuleRegisterWndClassInfoParamA@ATL@@@ATL@@YAGPAU_ATL_BASE_MODULE70@0@PAU_ATL_WIN_MODULE70@0@PAU_ATL_WNDCLASSINFOA@0@PAP6GJPAUHWND__@@IIJ@ZVAtlModuleRegisterWndClassInfoParamA@0@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp