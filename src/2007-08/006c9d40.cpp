// from server: 95% by colin
// roc 2007-08 006c9d40  unit: VCRect::?$CArray  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c9d40
//
// 006c9d40  6a00                 push 0
// 006c9d42  6aff                 push -1
// 006c9d44  6a09                 push 9
// 006c9d46  e8a7ee0600           call 0x738bf2

extern "C" void __stdcall helper_738bf2(int, int, int);

void call_helper()
{
    helper_738bf2(9, -1, 0);
}
