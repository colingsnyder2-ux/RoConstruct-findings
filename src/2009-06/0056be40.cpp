// from server: 100% by auto
// roc 2009-06 0056be40  unit: G3D::Shader  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056be40
//
// 0056be40  e84bf9ffff           call 0x56b790
// 0056be45  803d1329a40000       cmp byte ptr [0xa42913], 0
// 0056be4c  7413                 je 0x56be61
// 0056be4e  e83df9ffff           call 0x56b790
// 0056be53  803d1129a40000       cmp byte ptr [0xa42911], 0
// 0056be5a  7405                 je 0x56be61
// 0056be5c  e98ff1ffff           jmp 0x56aff0
// 0056be61  e82af9ffff           call 0x56b790
// 0056be66  803d1229a40000       cmp byte ptr [0xa42912], 0
// 0056be6d  7413                 je 0x56be82
// 0056be6f  e81cf9ffff           call 0x56b790
// 0056be74  803d1129a40000       cmp byte ptr [0xa42911], 0
// 0056be7b  7405                 je 0x56be82
// 0056be7d  e96ef1ffff           jmp 0x56aff0
// 0056be82  e92fe01a00           jmp 0x719eb6
// library g3d-6.09/G3Dcpp\System.cpp (function ?memcpy@System@G3D@@SAXPAXPBXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
