// from server: 84% by colin
struct DataModel {
    char pad[0xc];
    void* field_c;
    void sub_564C50(void*);
    DataModel(void*);
};

extern "C" void* __stdcall sub_77E698(const char*);

DataModel::DataModel(void* a) {
    void* edi;
    if (a != 0) {
        edi = (char*)a + 0x14c;
    } else {
        edi = 0;
    }
    char buf[0x1c];
    sub_77E698("ClearStarterpack");
    sub_564C50(edi);
    field_c = a;
    *(void**)this = (void*)0x7a9130;
}
