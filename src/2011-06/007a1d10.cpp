// from server: 100% by tester
// roc 2011-06 007a1d10  unit: RBX::Tasks::Exclusive  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a1d10
//
// 007a1d10  6a0f                 push 0xf
// 007a1d12  e899ffffff           call 0x7a1cb0
// 007a1d17  c3                   ret 

extern "C" void __stdcall sub_6d5c00(int);

void sub_6d5c60()
{
    sub_6d5c00(0xf);
}
