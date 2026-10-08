// roc 2009-12 004d5a70  unit: G3D::Win32Window  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d5a70
//
// 004d5a70  53                   push ebx
// 004d5a71  8a5c2408             mov bl, byte ptr [esp + 8]
// 004d5a75  33c0                 xor eax, eax
// 004d5a77  84db                 test bl, bl
// 004d5a79  0f94c0               sete al
// 004d5a7c  56                   push esi
// 004d5a7d  8bf1                 mov esi, ecx
// 004d5a7f  894614               mov dword ptr [esi + 0x14], eax
// 004d5a82  389eac000000         cmp byte ptr [esi + 0xac], bl
// 004d5a88  7435                 je 0x4d5abf
// 004d5a8a  57                   push edi
// 004d5a8b  8b3d10ca9800         mov edi, dword ptr [0x98ca10]
// 004d5a91  84db                 test bl, bl
// 004d5a93  741b                 je 0x4d5ab0
// 004d5a95  6a01                 push 1
// 004d5a97  ffd7                 call edi
// 004d5a99  85c0                 test eax, eax
// 004d5a9b  7cf8                 jl 0x4d5a95
// 004d5a9d  5f                   pop edi
// 004d5a9e  889eac000000         mov byte ptr [esi + 0xac], bl
// 004d5aa4  5e                   pop esi
// 004d5aa5  5b                   pop ebx
// 004d5aa6  c20400               ret 4
// 004d5aa9  8da42400000000       lea esp, [esp]
// 004d5ab0  6a00                 push 0
// 004d5ab2  ffd7                 call edi
// 004d5ab4  85c0                 test eax, eax
// 004d5ab6  7df8                 jge 0x4d5ab0
// 004d5ab8  889eac000000         mov byte ptr [esi + 0xac], bl
// 004d5abe  5f                   pop edi
// 004d5abf  5e                   pop esi
// 004d5ac0  5b                   pop ebx
// 004d5ac1  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?setMouseVisible@Win32Window@G3D@@UAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
