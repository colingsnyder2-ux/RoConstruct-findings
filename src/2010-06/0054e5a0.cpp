// from server: 100% by auto
// roc 2010-06 0054e5a0  unit: G3D::Shader  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054e5a0
//
// 0054e5a0  e8fbf8ffff           call 0x54dea0
// 0054e5a5  803d4a9ec00000       cmp byte ptr [0xc09e4a], 0
// 0054e5ac  7422                 je 0x54e5d0
// 0054e5ae  e8edf8ffff           call 0x54dea0
// 0054e5b3  803d499ec00000       cmp byte ptr [0xc09e49], 0
// 0054e5ba  7414                 je 0x54e5d0
// 0054e5bc  0fb64c2408           movzx ecx, byte ptr [esp + 8]
// 0054e5c1  69c901010101         imul ecx, ecx, 0x1010101
// 0054e5c7  894c2408             mov dword ptr [esp + 8], ecx
// 0054e5cb  e9f0f1ffff           jmp 0x54d7c0
// 0054e5d0  0fb64c2408           movzx ecx, byte ptr [esp + 8]
// 0054e5d5  894c2408             mov dword ptr [esp + 8], ecx
// 0054e5d9  e906a62500           jmp 0x7a8be4
// library g3d-6.09/G3Dcpp\System.cpp (function ?memset@System@G3D@@SAXPAXEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
