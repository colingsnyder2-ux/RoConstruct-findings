// roc 2007-03 0045af90  unit: seg_00450000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045af90
//
// 0045af90  6a10                 push 0x10
// 0045af92  c781d800000001000000 mov dword ptr [ecx + 0xd8], 1
// 0045af9c  ff15b0ed7700         call dword ptr [0x77edb0]
// 0045afa2  c21800               ret 0x18
// copied from an identical function in another client (function ?Notify@CScintillaView@ns_ROCX000001@@QAEXIIIIII@Z)

namespace ns_ROCX000001 {
extern "C" int (__stdcall *MessageBeep)(unsigned int uType);

struct CScintillaView {
    char pad[0xd8];
    int field_d8;
    void Notify(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e, unsigned int f);
};

void CScintillaView::Notify(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e, unsigned int f)
{
    field_d8 = 1;
    MessageBeep(0x10);
}
}
