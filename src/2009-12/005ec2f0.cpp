// roc 2009-12 005ec2f0  unit: G3D::Log  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ec2f0
//
// 005ec2f0  8b5134               mov edx, dword ptr [ecx + 0x34]
// 005ec2f3  8b442404             mov eax, dword ptr [esp + 4]
// 005ec2f7  2bc2                 sub eax, edx
// 005ec2f9  894144               mov dword ptr [ecx + 0x44], eax
// 005ec2fc  7805                 js 0x5ec303
// 005ec2fe  3b413c               cmp eax, dword ptr [ecx + 0x3c]
// 005ec301  7e0a                 jle 0x5ec30d
// 005ec303  6a00                 push 0
// 005ec305  03c2                 add eax, edx
// 005ec307  50                   push eax
// 005ec308  e8b38e0000           call 0x5f51c0
// 005ec30d  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?setPosition@BinaryInput@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
