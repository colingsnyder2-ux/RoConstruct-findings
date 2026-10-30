// from server: 100% by auto
// roc 2007-08 00629210  unit: RBX::AssemblyStage  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00629210
//
// 00629210  55                   push ebp
// 00629211  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00629215  837d000c             cmp dword ptr [ebp], 0xc
// 00629219  56                   push esi
// 0062921a  8bf0                 mov esi, eax
// 0062921c  7443                 je 0x629261
// 0062921e  8b06                 mov eax, dword ptr [esi]
// 00629220  0fb6484b             movzx ecx, byte ptr [eax + 0x4b]
// 00629224  53                   push ebx
// 00629225  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 00629228  83c301               add ebx, 1
// 0062922b  3bd9                 cmp ebx, ecx
// 0062922d  57                   push edi
// 0062922e  7e1e                 jle 0x62924e
// 00629230  81fbfa000000         cmp ebx, 0xfa
// 00629236  7c11                 jl 0x629249
// 00629238  8b560c               mov edx, dword ptr [esi + 0xc]
// 0062923b  68fc4b7c00           push 0x7c4bfc
// 00629240  52                   push edx
// 00629241  e87ae3feff           call 0x6175c0
// 00629246  83c408               add esp, 8
// 00629249  8b06                 mov eax, dword ptr [esi]
// 0062924b  88584b               mov byte ptr [eax + 0x4b], bl
// 0062924e  83462401             add dword ptr [esi + 0x24], 1
// 00629252  8b4624               mov eax, dword ptr [esi + 0x24]
// 00629255  8d78ff               lea edi, [eax - 1]
// 00629258  8bdd                 mov ebx, ebp
// 0062925a  e8a1feffff           call 0x629100
// 0062925f  5f                   pop edi
// 00629260  5b                   pop ebx
// 00629261  5e                   pop esi
// 00629262  5d                   pop ebp
// 00629263  c3                   ret 
// library lua-5.1.4/lcode.c (function _discharge2anyreg)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
