// roc 2007-08 00629730  unit: RBX::AssemblyStage  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00629730
//
// 00629730  833f0b               cmp dword ptr [edi], 0xb
// 00629733  7534                 jne 0x629769
// 00629735  8b0e                 mov ecx, dword ptr [esi]
// 00629737  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0062973a  8b4708               mov eax, dword ptr [edi + 8]
// 0062973d  8b0482               mov eax, dword ptr [edx + eax*4]
// 00629740  8bc8                 mov ecx, eax
// 00629742  83e13f               and ecx, 0x3f
// 00629745  80f913               cmp cl, 0x13
// 00629748  751f                 jne 0x629769
// 0062974a  834618ff             add dword ptr [esi + 0x18], -1
// 0062974e  33d2                 xor edx, edx
// 00629750  85db                 test ebx, ebx
// 00629752  0f94c2               sete dl
// 00629755  c1e817               shr eax, 0x17
// 00629758  8bce                 mov ecx, esi
// 0062975a  52                   push edx
// 0062975b  50                   push eax
// 0062975c  6a1a                 push 0x1a
// 0062975e  33c0                 xor eax, eax
// 00629760  e81bf8ffff           call 0x628f80
// 00629765  83c40c               add esp, 0xc
// 00629768  c3                   ret 
// 00629769  57                   push edi
// 0062976a  8bc6                 mov eax, esi
// 0062976c  e89ffaffff           call 0x629210
// 00629771  83c404               add esp, 4
// 00629774  833f0c               cmp dword ptr [edi], 0xc
// 00629777  7516                 jne 0x62978f
// 00629779  8b4708               mov eax, dword ptr [edi + 8]
// 0062977c  a900010000           test eax, 0x100
// 00629781  750c                 jne 0x62978f
// 00629783  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00629787  3bc1                 cmp eax, ecx
// 00629789  7c04                 jl 0x62978f
// 0062978b  834624ff             add dword ptr [esi + 0x24], -1
// 0062978f  8b4708               mov eax, dword ptr [edi + 8]
// 00629792  53                   push ebx
// 00629793  68ff000000           push 0xff
// 00629798  6a1b                 push 0x1b
// 0062979a  8bce                 mov ecx, esi
// 0062979c  e8dff7ffff           call 0x628f80
// 006297a1  83c40c               add esp, 0xc
// 006297a4  c3                   ret 
// library lua-5.1.4/lcode.c (function _jumponcond)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
