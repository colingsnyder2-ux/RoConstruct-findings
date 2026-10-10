// from server: 91% by colin
struct CXTPReportInplaceControl {
    char pad[0x58];
    void* field_58;
    char pad2[0x64 - 0x5c];
    void* field_64;
    void sub_63023e();
    void OnKeyDown(unsigned int nChar, unsigned int a, unsigned int b);
};

void CXTPReportInplaceControl::OnKeyDown(unsigned int nChar, unsigned int a, unsigned int b) {
    if (nChar == 0x26 || nChar == 0x28) {
        void* p = field_58;
        int* arr = *(int**)((char*)p + 0x1a4);
        if (arr[2] > 0) {
            int* item = (int*)arr[1];
            void* obj = (void*)*item;
            void* pfn = *(void**)((char*)obj + 0x64);
            if (pfn == field_64) {
                void* p6 = field_64;
                void** vtbl = *(void***)p6;
                void (*fn)(void*) = (void (*)(void*))vtbl[0x134 / 4];
                fn(obj);
            }
        }
    }
    sub_63023e();
}
