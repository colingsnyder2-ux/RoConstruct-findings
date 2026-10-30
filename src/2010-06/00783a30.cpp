// roc 2010-06 00783a30  unit: seg_00780000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00783a30
//
// 00783a30  d9442404             fld dword ptr [esp + 4]
// 00783a34  d80d38a2a100         fmul dword ptr [0xa1a238]
// 00783a3a  c3                   ret 
// copied from an identical function in another client (function ?scaleBy20@RBX@@YAMM@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
namespace RBX {
float scaleBy20(float x) { return x * 20.0f; }
}