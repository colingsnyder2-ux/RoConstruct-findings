// from server: 86% by atomic.potato
struct VerbWidget {
    char pad[0x148];
    void* field_148;
    void f(void* arg);
};

void VerbWidget::f(void* arg) {
    if (field_148 != 0) {
        void** vt = *(void***)field_148;
        char (__thiscall *fn)(void*) = (char (__thiscall *)(void*))vt[2];
        if (fn(field_148)) {
            void** vt2 = *(void***)field_148;
            void (__thiscall *fn2)(void*, void*) = (void (__thiscall *)(void*, void*))vt2[4];
            fn2(field_148, *(void**)((char*)arg + 0x14));
        }
    }
}
