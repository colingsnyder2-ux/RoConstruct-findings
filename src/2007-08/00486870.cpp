// from server: 80% by colin
// roc 2007-08 00486870  unit: G3D::GWindow  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00486870
//
// 00486870  8b8920010000         mov ecx, dword ptr [ecx + 0x120]
// 00486876  8b442404             mov eax, dword ptr [esp + 4]
// 0048687a  8908                 mov dword ptr [eax], ecx
// 0048687c  c20400               ret 4

struct S {
    char pad[0x120];
    int field;
    void f(int* out);
};

void S::f(int* out)
{
    *out = field;
}
