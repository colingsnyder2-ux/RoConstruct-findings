// from server: 73% by colin
// roc 2007-08 0041f2f0  unit: CSettingsExplorer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041f2f0

extern "C" void* __stdcall GetProcAddress(void*, const char*);

struct CSettingsExplorer {
    char pad[0x70];
    void* field_70;
    void GetImageList_DragLeave(void** out);
};

void CSettingsExplorer::GetImageList_DragLeave(void** out) {
    if (field_70 == 0) {
        field_70 = GetProcAddress((void*)0x7882b8, (const char*)0x7882b8);
    }
    *out = field_70;
}
