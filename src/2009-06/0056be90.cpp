// roc 2009-06 0056be90  unit: G3D::Shader  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056be90
//
// 0056be90  e8fbf8ffff           call 0x56b790
// 0056be95  803d1229a40000       cmp byte ptr [0xa42912], 0
// 0056be9c  7422                 je 0x56bec0
// 0056be9e  e8edf8ffff           call 0x56b790
// 0056bea3  803d1129a40000       cmp byte ptr [0xa42911], 0
// 0056beaa  7414                 je 0x56bec0
// 0056beac  0fb64c2408           movzx ecx, byte ptr [esp + 8]
// 0056beb1  69c901010101         imul ecx, ecx, 0x1010101
// 0056beb7  894c2408             mov dword ptr [esp + 8], ecx
// 0056bebb  e9c0f1ffff           jmp 0x56b080
// 0056bec0  0fb64c2408           movzx ecx, byte ptr [esp + 8]
// 0056bec5  894c2408             mov dword ptr [esp + 8], ecx
// 0056bec9  e9a6dd1a00           jmp 0x719c74
// library g3d-6.09/G3Dcpp\System.cpp (function ?memset@System@G3D@@SAXPAXEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
