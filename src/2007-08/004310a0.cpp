// from server: 75% by colin
// roc 2007-08 004310a0  unit: CSelectionPropGrid  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004310a0

extern "C" void __stdcall sub_77ddbc();

struct CSelectionPropGrid {
    char pad[0x40];
    void* field_40;
    void* field_44;
    void* field_48;
    char pad2[0x4];
    void* field_50;
    void sub_684e50();
    void destroy();
};

void CSelectionPropGrid::destroy()
{
    sub_77ddbc();
    sub_77ddbc();
    if (field_48) {
        void* p = field_48;
        void** vt = *(void***)p;
        void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vt[2];
        fn(p);
    }
    if (field_44) {
        void* p = field_44;
        void** vt = *(void***)p;
        void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vt[2];
        fn(p);
    }
    if (field_40) {
        void* p = field_40;
        void** vt = *(void***)p;
        void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vt[2];
        fn(p);
    }
    sub_684e50();
}
