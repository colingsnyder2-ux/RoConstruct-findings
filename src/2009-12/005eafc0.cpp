// roc 2009-12 005eafc0  unit: G3D::Shader  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005eafc0
//
// 005eafc0  e8fbf8ffff           call 0x5ea8c0
// 005eafc5  803d823db80000       cmp byte ptr [0xb83d82], 0
// 005eafcc  7422                 je 0x5eaff0
// 005eafce  e8edf8ffff           call 0x5ea8c0
// 005eafd3  803d813db80000       cmp byte ptr [0xb83d81], 0
// 005eafda  7414                 je 0x5eaff0
// 005eafdc  0fb64c2408           movzx ecx, byte ptr [esp + 8]
// 005eafe1  69c901010101         imul ecx, ecx, 0x1010101
// 005eafe7  894c2408             mov dword ptr [esp + 8], ecx
// 005eafeb  e9f0f1ffff           jmp 0x5ea1e0
// 005eaff0  0fb64c2408           movzx ecx, byte ptr [esp + 8]
// 005eaff5  894c2408             mov dword ptr [esp + 8], ecx
// 005eaff9  e9a69a2000           jmp 0x7f4aa4
// library g3d-6.09/G3Dcpp\System.cpp (function ?memset@System@G3D@@SAXPAXEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
