// roc 2010-06 004879a0  unit: G3D::Win32Window  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004879a0
//
// 004879a0  53                   push ebx
// 004879a1  8a5c2408             mov bl, byte ptr [esp + 8]
// 004879a5  33c0                 xor eax, eax
// 004879a7  84db                 test bl, bl
// 004879a9  0f94c0               sete al
// 004879ac  56                   push esi
// 004879ad  8bf1                 mov esi, ecx
// 004879af  894614               mov dword ptr [esi + 0x14], eax
// 004879b2  389eac000000         cmp byte ptr [esi + 0xac], bl
// 004879b8  7435                 je 0x4879ef
// 004879ba  57                   push edi
// 004879bb  8b3d9cbb9e00         mov edi, dword ptr [0x9ebb9c]
// 004879c1  84db                 test bl, bl
// 004879c3  741b                 je 0x4879e0
// 004879c5  6a01                 push 1
// 004879c7  ffd7                 call edi
// 004879c9  85c0                 test eax, eax
// 004879cb  7cf8                 jl 0x4879c5
// 004879cd  5f                   pop edi
// 004879ce  889eac000000         mov byte ptr [esi + 0xac], bl
// 004879d4  5e                   pop esi
// 004879d5  5b                   pop ebx
// 004879d6  c20400               ret 4
// 004879d9  8da42400000000       lea esp, [esp]
// 004879e0  6a00                 push 0
// 004879e2  ffd7                 call edi
// 004879e4  85c0                 test eax, eax
// 004879e6  7df8                 jge 0x4879e0
// 004879e8  889eac000000         mov byte ptr [esi + 0xac], bl
// 004879ee  5f                   pop edi
// 004879ef  5e                   pop esi
// 004879f0  5b                   pop ebx
// 004879f1  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?setMouseVisible@Win32Window@G3D@@UAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
