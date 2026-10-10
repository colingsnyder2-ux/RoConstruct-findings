// from server: 74% by colin
struct CXTCaptionButtonTheme {
    char pad[8];
    void* field_8;
    void* field_c;
    void* Get();
};

void* CXTCaptionButtonTheme::Get() {
    void* a = *(void**)((char*)field_8 + 0x64);
    void* b = *(void**)((char*)field_c + 0x64);
    if (*(void**)((char*)b + 8) == a)
        return field_c;
    int r = (*(void**)((char*)a + 8) != b) ? 1 : 0;
    r = r - 1;
    return (void*)((unsigned)r & (unsigned)field_c);
}
