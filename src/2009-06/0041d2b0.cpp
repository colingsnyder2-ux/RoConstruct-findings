// from server: 61% by why2
extern "C" __declspec(dllimport) int __stdcall CloseHandle(void*);

struct CSelectionTreeCtrl {
    void* field_0xc;
    void ReleaseHandle();
};

void CSelectionTreeCtrl::ReleaseHandle() {
    void* h = field_0xc;
    field_0xc = 0;
    if (h != 0) {
        CloseHandle(h);
    }
}
