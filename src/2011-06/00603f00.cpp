// from server: 100% by tester
// roc 2011-06 00603f00  unit: RBX::SetGridToOne  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00603f00
//
// 00603f00  c705d051cd0000000000 mov dword ptr [0xcd51d0], 0
// 00603f0a  c20400               ret 4

extern "C" void __stdcall SetGridToOne(int);

void __stdcall SetGridToOne(int)
{
    int* ptr = (int*)0xcd51d0;
    *ptr = 0;
}