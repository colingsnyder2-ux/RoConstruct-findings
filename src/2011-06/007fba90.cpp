// from server: 100% by tester
// roc 2011-06 007fba90  unit: YieldThreadJob  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007fba90
//
// 007fba90  d9ee                 fldz 
// 007fba92  8b442404             mov eax, dword ptr [esp + 4]
// 007fba96  dd18                 fstp qword ptr [eax]
// 007fba98  c20800               ret 8

struct DummyJob {
    void func(double*, int);
};

void DummyJob::func(double* out, int) {
    *out = 0.0;
}
