// roc 2009-06 006cf530  unit: RBX::HUMAN::HumanoidState  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006cf530
//
// 006cf530  e87bffffff           call 0x6cf4b0
// 006cf535  d81d087d8d00         fcomp dword ptr [0x8d7d08]
// 006cf53b  dfe0                 fnstsw ax
// 006cf53d  f6c405               test ah, 5
// 006cf540  7a03                 jp 0x6cf545
// 006cf542  b001                 mov al, 1
// 006cf544  c3                   ret 
// 006cf545  32c0                 xor al, al
// 006cf547  c3                   ret 
// copied from an identical function in another client (function ?a@Landed@HUMAN@RBX@@QAE_NXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
namespace RBX { namespace HUMAN { class Landed { public: float getRatio(); bool a(); bool b(); };
bool Landed::a() { if (getRatio() < 0.85f) return true; return false; }
bool Landed::b() { if (getRatio() > 0.9f) return true; else return false; } } }