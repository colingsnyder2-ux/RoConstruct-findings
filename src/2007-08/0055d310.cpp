// from server: 93% by colin
struct DataModel {
    int field0;
    int field4;
    int field8;
    bool method(int arg);
};

extern "C" void* __stdcall sub_77e690(const void*, void*);

bool DataModel::method(int arg) {
    if (field4 == 2) {
        void* p = (void*)field8;
        sub_77e690((const void*)arg, p);
        return true;
    }
    return false;
}
