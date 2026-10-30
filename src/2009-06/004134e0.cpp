// from server: 74% by atomic.potato
extern "C" void* __stdcall GetModuleHandleA(const char*);
extern "C" void* __stdcall LoadLibraryA(const char*);

struct CRbxChildFrame {
    char pad0[4];
    void* field4;
    char field8;
    char pad9[3];
    char fieldC;
    void* method();
};

void* CRbxChildFrame::method() {
    if (field4 != 0)
        return field4;
    void* h = GetModuleHandleA((const char*)&fieldC);
    field4 = LoadLibraryA((const char*)h);
    if (field4 == 0) {
        void* h2 = GetModuleHandleA((const char*)&fieldC);
        field4 = LoadLibraryA((const char*)h2);
        field8 = (field4 != 0);
    }
    return field4;
}
