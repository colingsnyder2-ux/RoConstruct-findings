// from server: 53% by colin
// roc 2007-08 0051d5a0  unit: seg_00510000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051d5a0
//
// 0051d5a0  e879341100           call 0x630a1e
// 0051d5a5  83c438               add esp, 0x38
// 0051d5a8  c3                   ret 

extern "C" __declspec(dllimport) void __cdecl func_0x630a1e();

void func_0051d5a0() {
    func_0x630a1e();
}
