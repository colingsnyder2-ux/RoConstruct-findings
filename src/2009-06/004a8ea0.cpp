// from server: 100% by auto
// roc 2009-06 004a8ea0  unit: G3D::Win32Window  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a8ea0
//
// 004a8ea0  53                   push ebx
// 004a8ea1  8a5c2408             mov bl, byte ptr [esp + 8]
// 004a8ea5  33c0                 xor eax, eax
// 004a8ea7  84db                 test bl, bl
// 004a8ea9  0f94c0               sete al
// 004a8eac  56                   push esi
// 004a8ead  8bf1                 mov esi, ecx
// 004a8eaf  894614               mov dword ptr [esi + 0x14], eax
// 004a8eb2  389eac000000         cmp byte ptr [esi + 0xac], bl
// 004a8eb8  7435                 je 0x4a8eef
// 004a8eba  57                   push edi
// 004a8ebb  8b3d7ced8900         mov edi, dword ptr [0x89ed7c]
// 004a8ec1  84db                 test bl, bl
// 004a8ec3  741b                 je 0x4a8ee0
// 004a8ec5  6a01                 push 1
// 004a8ec7  ffd7                 call edi
// 004a8ec9  85c0                 test eax, eax
// 004a8ecb  7cf8                 jl 0x4a8ec5
// 004a8ecd  5f                   pop edi
// 004a8ece  889eac000000         mov byte ptr [esi + 0xac], bl
// 004a8ed4  5e                   pop esi
// 004a8ed5  5b                   pop ebx
// 004a8ed6  c20400               ret 4
// 004a8ed9  8da42400000000       lea esp, [esp]
// 004a8ee0  6a00                 push 0
// 004a8ee2  ffd7                 call edi
// 004a8ee4  85c0                 test eax, eax
// 004a8ee6  7df8                 jge 0x4a8ee0
// 004a8ee8  889eac000000         mov byte ptr [esi + 0xac], bl
// 004a8eee  5f                   pop edi
// 004a8eef  5e                   pop esi
// 004a8ef0  5b                   pop ebx
// 004a8ef1  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?setMouseVisible@Win32Window@G3D@@UAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
