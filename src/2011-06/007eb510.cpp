// roc 2011-06 007eb510  unit: RBX::PartDropTool  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007eb510
//
// 007eb510  d9442404             fld dword ptr [esp + 4]
// 007eb514  d80d20a2a700         fmul dword ptr [0xa7a220]
// 007eb51a  c3                   ret 
// copied from an identical function in another client (function ?scaleBy20@RBX@@YAMM@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
namespace RBX {
float scaleBy20(float x) { return x * 20.0f; }
}