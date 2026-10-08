// from server: 100% by auto
// roc 2007-08 00524d70  unit: G3D::Line  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00524d70
//
// 00524d70  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00524d74  c7818000000000000000 mov dword ptr [ecx + 0x80], 0
// 00524d7e  e99dffffff           jmp 0x524d20
// library jpeg-6b/jdcoefct.c (function _start_input_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
