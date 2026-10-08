// from server: 100% by auto
// roc 2007-08 00508780  unit: G3D::GCamera  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00508780
//
// 00508780  8b4140               mov eax, dword ptr [ecx + 0x40]
// 00508783  8b513c               mov edx, dword ptr [ecx + 0x3c]
// 00508786  56                   push esi
// 00508787  8b742408             mov esi, dword ptr [esp + 8]
// 0050878b  0fafc6               imul eax, esi
// 0050878e  83ea01               sub edx, 1
// 00508791  85c0                 test eax, eax
// 00508793  89714c               mov dword ptr [ecx + 0x4c], esi
// 00508796  5e                   pop esi
// 00508797  7f08                 jg 0x5087a1
// 00508799  33c0                 xor eax, eax
// 0050879b  894150               mov dword ptr [ecx + 0x50], eax
// 0050879e  c20400               ret 4
// 005087a1  3bc2                 cmp eax, edx
// 005087a3  7cf6                 jl 0x50879b
// 005087a5  895150               mov dword ptr [ecx + 0x50], edx
// 005087a8  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?setIndentLevel@TextOutput@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
