// from server: 53% by colin
// roc 2007-08 0050bc60  unit: seg_00500000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050bc60
//
// 0050bc60  e8b94d1200           call 0x630a1e
// 0050bc65  83c45c               add esp, 0x5c
// 0050bc68  c3                   ret 

extern "C" __declspec(dllimport) void __cdecl func_0x630a1e();

void func_0050bc60()
{
    func_0x630a1e();
}
