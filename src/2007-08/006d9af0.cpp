// from server: 57% by colin
struct CXTPDockingPaneAutoHidePanel;

struct CXTPDockingPaneAutoHidePanel {
    char pad[0xe4];
    void* field_e4;
    char pad2[0x4];
    int field_ec;

    void func(void* p1, int p2);
};

extern "C" void __stdcall sub_6e1970(void* ecx, void* p1, int p2);

void CXTPDockingPaneAutoHidePanel::func(void* p1, int p2) {
    int* p = (int*)p1;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
    p[8] = 0x7d00;
    p[9] = 0x7d00;

    if (field_e4 != 0) {
        void* v = *(void**)((char*)field_e4 + 0x1a0);
        if (v != 0) {
            void* vtbl = *(void**)v;
            void (*fn)(void*, void*) = *(void (**)(void*, void*))((char*)vtbl + 0x10);
            fn((char*)v + 0x20, p1);
            sub_6e1970(field_e4, p1, 1);
            if (p2 != 0) {
                int e = field_ec;
                if (e != 0 && e != 1) {
                    p[7] += 4;
                    p[9] += 4;
                    return;
                }
                p[6] += 4;
                p[8] += 4;
            }
        }
    }
}
