// from server: 100% by tester
// roc 2010-06 00432900  unit: CProgressDialog  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00432900
//
// 00432900  e89bffffff           call 0x4328a0
// 00432905  32c0                 xor al, al
// 00432907  c3                   ret 

extern "C" void __cdecl helper();

struct CProgressDialog
{
    char f();
};

char CProgressDialog::f()
{
    helper();
    return 0;
}
