// roc 2007-08 0047b780  unit: G3D::Win32Window  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047b780
//
// 0047b780  53                   push ebx
// 0047b781  8a5c2408             mov bl, byte ptr [esp + 8]
// 0047b785  33c0                 xor eax, eax
// 0047b787  84db                 test bl, bl
// 0047b789  0f94c0               sete al
// 0047b78c  56                   push esi
// 0047b78d  8bf1                 mov esi, ecx
// 0047b78f  389eac000000         cmp byte ptr [esi + 0xac], bl
// 0047b795  894614               mov dword ptr [esi + 0x14], eax
// 0047b798  7435                 je 0x47b7cf
// 0047b79a  84db                 test bl, bl
// 0047b79c  57                   push edi
// 0047b79d  8b3d4ced7700         mov edi, dword ptr [0x77ed4c]
// 0047b7a3  741b                 je 0x47b7c0
// 0047b7a5  6a01                 push 1
// 0047b7a7  ffd7                 call edi
// 0047b7a9  85c0                 test eax, eax
// 0047b7ab  7cf8                 jl 0x47b7a5
// 0047b7ad  5f                   pop edi
// 0047b7ae  889eac000000         mov byte ptr [esi + 0xac], bl
// 0047b7b4  5e                   pop esi
// 0047b7b5  5b                   pop ebx
// 0047b7b6  c20400               ret 4
// 0047b7b9  8da42400000000       lea esp, [esp]
// 0047b7c0  6a00                 push 0
// 0047b7c2  ffd7                 call edi
// 0047b7c4  85c0                 test eax, eax
// 0047b7c6  7df8                 jge 0x47b7c0
// 0047b7c8  889eac000000         mov byte ptr [esi + 0xac], bl
// 0047b7ce  5f                   pop edi
// 0047b7cf  5e                   pop esi
// 0047b7d0  5b                   pop ebx
// 0047b7d1  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?setMouseVisible@Win32Window@G3D@@UAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
