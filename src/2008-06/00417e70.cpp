// from server: 100% by tester
// roc 2008-06 00417e70  unit: VCContent::?$CComObject  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00417e70
//
// 00417e70  8b442404             mov eax, dword ptr [esp + 4]
// 00417e74  ff4008               inc dword ptr [eax + 8]
// 00417e77  8b4008               mov eax, dword ptr [eax + 8]
// 00417e7a  c20400               ret 4

struct VCContent_CComObject {
    int AddRefHelper();
};

int VCContent_CComObject::AddRefHelper() {
    return 0;
}

extern "C" int __stdcall VCContent_AddRef(void* p);

int __stdcall VCContent_AddRef(void* p) {
    int* q = (int*)p;
    ++q[2];
    return q[2];
}
