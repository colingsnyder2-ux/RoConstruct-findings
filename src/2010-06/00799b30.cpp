// from server: 100% by tester
// roc 2010-06 00799b30  unit: YieldThreadJob  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00799b30
//
// 00799b30  d9ee                 fldz 
// 00799b32  8b442404             mov eax, dword ptr [esp + 4]
// 00799b36  dd18                 fstp qword ptr [eax]
// 00799b38  c20800               ret 8

struct DummyJob {
    void func(double*, int);
};

void DummyJob::func(double* out, int) {
    *out = 0.0;
}
