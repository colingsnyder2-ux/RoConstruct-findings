// roc 2009-12 007d67e0  unit: seg_007d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d67e0
//
// 007d67e0  d9442404             fld dword ptr [esp + 4]
// 007d67e4  d80dc0c39b00         fmul dword ptr [0x9bc3c0]
// 007d67ea  c3                   ret 
// copied from an identical function in another client (function ?scaleBy20@RBX@@YAMM@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
namespace RBX {
float scaleBy20(float x) { return x * 20.0f; }
}