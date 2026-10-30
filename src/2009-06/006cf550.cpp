// roc 2009-06 006cf550  unit: RBX::HUMAN::HumanoidState  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006cf550
//
// 006cf550  e85bffffff           call 0x6cf4b0
// 006cf555  d81d5ca58c00         fcomp dword ptr [0x8ca55c]
// 006cf55b  dfe0                 fnstsw ax
// 006cf55d  f6c441               test ah, 0x41
// 006cf560  7503                 jne 0x6cf565
// 006cf562  b001                 mov al, 1
// 006cf564  c3                   ret 
// 006cf565  32c0                 xor al, al
// 006cf567  c3                   ret 
// copied from an identical function in another client (function ?b@Landed@HUMAN@RBX@@QAE_NXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
namespace RBX { namespace HUMAN { class Landed { public: float getRatio(); bool a(); bool b(); };
bool Landed::a() { if (getRatio() < 0.85f) return true; return false; }
bool Landed::b() { if (getRatio() > 0.9f) return true; else return false; } } }