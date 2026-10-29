// from server: 95% by why2
// roc 2009-06 007be280  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007be280
//
// 007be280  6a00                 push 0
// 007be282  6aff                 push -1
// 007be284  6a09                 push 9
// 007be286  e8bbe40800           call 0x84c746

extern "C" void __stdcall sub_84c746(int, int, int);

void sub_7be280()
{
    sub_84c746(9, -1, 0);
}
