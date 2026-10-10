// from server: 76% by colin
struct DataModel;

struct DataModel {
    char pad[0xc];
    DataModel* field_c;
    DataModel(DataModel* other);
};

extern "C" void* __stdcall sub_77E698(const char*);
extern "C" void __stdcall sub_564C50(DataModel* self, void* arg);

DataModel::DataModel(DataModel* other) {
    char buf[0x1c];
    void* p;
    if (other) {
        p = (char*)other + 0x14c;
    } else {
        p = 0;
    }
    sub_77E698((const char*)0x7a9120);
    sub_564C50(this, p);
    field_c = other;
    *(void**)this = (void*)0x7a910c;
}
