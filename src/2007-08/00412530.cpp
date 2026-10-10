// from server: 90% by colin
struct VCContent;

struct CComObject {
    void __stdcall CreateInstance(void*, void*, void*, void*, void*);
};

extern CComObject g_comObject;

void __stdcall CreateInstanceHelper(void*, void*, void*, void*, void*);

void CComObject::CreateInstance(void* a, void* b, void* c, void* d, void* e) {
    CreateInstanceHelper(a, b, c, d, e);
}
