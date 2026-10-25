// from server: 100% by tester
// roc 2010-06 00750ad0  unit: RBX::Assembly  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00750ad0
//
// 00750ad0  6a0f                 push 0xf
// 00750ad2  e899ffffff           call 0x750a70
// 00750ad7  c3                   ret 

extern "C" void __stdcall sub_6d5c00(int);

void sub_6d5c60()
{
    sub_6d5c00(0xf);
}
