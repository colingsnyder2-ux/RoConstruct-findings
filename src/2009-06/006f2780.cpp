// roc 2009-06 006f2780  unit: seg_006f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f2780
//
// 006f2780  d9442404             fld dword ptr [esp + 4]
// 006f2784  d80d385d8c00         fmul dword ptr [0x8c5d38]
// 006f278a  c3                   ret 
// copied from an identical function in another client (function ?scaleBy20@RBX@@YAMM@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
namespace RBX {
float scaleBy20(float x) { return x * 20.0f; }
}