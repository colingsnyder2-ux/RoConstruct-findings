// from server: 76% by colin
struct CPatchedControlComboBox {
    int field0;
    char pad[0x174];
    void* field178;
    char pad2[0x80];
    void* fieldFC;
    int method();
};

extern "C" void __stdcall sub_63002e(void*, void*, void*, void*, void*, void*, int);

int CPatchedControlComboBox::method() {
    int result;
    if (field178 == 0)
        return 0;
    if (*(int*)((char*)field178 + 0x20) == 0)
        return 0;
    if (fieldFC != 0) {
        int (__stdcall *pfn)(void*, int);
        pfn = *(int (__stdcall **)(void*, int))((*(int*)this) + 0x80);
        if (pfn(this, 0) != 0) {
            void* p = fieldFC;
            if (p != 0 && *(int*)((char*)p + 0x20) != 0) {
                int (__stdcall *pfn2)(void*);
                pfn2 = *(int (__stdcall **)(void*))((*(int*)p) + 0x160);
                if (pfn2(p) != 0)
                    result = 0x40;
                else
                    result = 0x80;
            } else {
                result = 0x80;
            }
        } else {
            result = 0x80;
        }
    } else {
        result = 0x80;
    }
    result |= 0x17;
    sub_63002e(field178, 0, 0, 0, 0, 0, result);
    return 0;
}
