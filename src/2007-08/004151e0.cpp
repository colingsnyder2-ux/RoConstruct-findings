// from server: 100% by colin
// roc 2007-08 004151e0  unit: VCContent::?$CComObject  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004151e0
//
// 004151e0  8b442404             mov eax, dword ptr [esp + 4]
// 004151e4  83400801             add dword ptr [eax + 8], 1
// 004151e8  8b4008               mov eax, dword ptr [eax + 8]
// 004151eb  c20400               ret 4

struct S {
    int f(int* p);
};

int S::f(int* p)
{
    p[2] = p[2] + 1;
    return p[2];
}
