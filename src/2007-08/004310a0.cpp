// from server: 81% by colin
struct CSelectionPropGrid {
    char pad[0x40];
    void* field_40;
    void* field_44;
    void* field_48;
    char pad2[0x4];
    char pad3[0x4];
    void destroy();
};

extern "C" void __stdcall sub_77ddbc(void*);
extern "C" void __stdcall sub_684e50(void*);

void CSelectionPropGrid::destroy()
{
    sub_77ddbc(&pad3[0]);
    sub_77ddbc(&pad2[0]);
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
    sub_684e50(this);
}
