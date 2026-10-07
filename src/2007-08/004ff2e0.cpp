// roc 2007-08 004ff2e0  unit: G3D::Shader  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ff2e0
//
// 004ff2e0  51                   push ecx
// 004ff2e1  53                   push ebx
// 004ff2e2  c744240400000000     mov dword ptr [esp + 4], 0
// 004ff2ea  50                   push eax
// 004ff2eb  53                   push ebx
// 004ff2ec  9c                   pushfd 
// 004ff2ed  9c                   pushfd 
// 004ff2ee  58                   pop eax
// 004ff2ef  8bd8                 mov ebx, eax
// 004ff2f1  3500002000           xor eax, 0x200000
// 004ff2f6  50                   push eax
// 004ff2f7  9d                   popfd 
// 004ff2f8  9c                   pushfd 
// 004ff2f9  58                   pop eax
// 004ff2fa  9d                   popfd 
// 004ff2fb  33c3                 xor eax, ebx
// 004ff2fd  8944240c             mov dword ptr [esp + 0xc], eax
// 004ff301  5b                   pop ebx
// 004ff302  58                   pop eax
// 004ff303  837c240400           cmp dword ptr [esp + 4], 0
// 004ff308  5b                   pop ebx
// 004ff309  0f95c0               setne al
// 004ff30c  a29d088c00           mov byte ptr [0x8c089d], al
// 004ff311  59                   pop ecx
// 004ff312  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?checkForCPUID@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
