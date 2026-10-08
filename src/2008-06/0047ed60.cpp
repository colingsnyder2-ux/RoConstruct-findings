// from server: 100% by auto
// roc 2008-06 0047ed60  unit: G3D::Win32Window  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047ed60
//
// 0047ed60  53                   push ebx
// 0047ed61  8a5c2408             mov bl, byte ptr [esp + 8]
// 0047ed65  33c0                 xor eax, eax
// 0047ed67  84db                 test bl, bl
// 0047ed69  0f94c0               sete al
// 0047ed6c  56                   push esi
// 0047ed6d  8bf1                 mov esi, ecx
// 0047ed6f  894614               mov dword ptr [esi + 0x14], eax
// 0047ed72  389eac000000         cmp byte ptr [esi + 0xac], bl
// 0047ed78  7435                 je 0x47edaf
// 0047ed7a  57                   push edi
// 0047ed7b  8b3de82c8000         mov edi, dword ptr [0x802ce8]
// 0047ed81  84db                 test bl, bl
// 0047ed83  741b                 je 0x47eda0
// 0047ed85  6a01                 push 1
// 0047ed87  ffd7                 call edi
// 0047ed89  85c0                 test eax, eax
// 0047ed8b  7cf8                 jl 0x47ed85
// 0047ed8d  5f                   pop edi
// 0047ed8e  889eac000000         mov byte ptr [esi + 0xac], bl
// 0047ed94  5e                   pop esi
// 0047ed95  5b                   pop ebx
// 0047ed96  c20400               ret 4
// 0047ed99  8da42400000000       lea esp, [esp]
// 0047eda0  6a00                 push 0
// 0047eda2  ffd7                 call edi
// 0047eda4  85c0                 test eax, eax
// 0047eda6  7df8                 jge 0x47eda0
// 0047eda8  889eac000000         mov byte ptr [esi + 0xac], bl
// 0047edae  5f                   pop edi
// 0047edaf  5e                   pop esi
// 0047edb0  5b                   pop ebx
// 0047edb1  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?setMouseVisible@Win32Window@G3D@@UAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
