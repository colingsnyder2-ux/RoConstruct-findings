// from server: 50% by colin
struct CXTPDockingPaneTabbedContainer {
    char pad[0x54];
    int field_54;
    char pad2[0x64 - 0x58];
    int field_64;
    int sub_6e0540();
    int sub_6e4f00(int, int*);
    int method();
};

struct LocalObj {
    char pad[0x10];
    int field_10;
    LocalObj();
    ~LocalObj();
};

extern "C" void __stdcall sub_66f110(int, LocalObj*);
extern "C" void __stdcall sub_66f140(LocalObj*);

int CXTPDockingPaneTabbedContainer::method() {
    int result = 0;
    if (this->field_64 != 0 && *(int*)(this->field_64 + 0x18) == 2) {
        int r = this->sub_6e0540();
        if (*(int*)(r + 0xf0) != 0) {
            LocalObj obj;
            sub_66f110(0xa, &obj);
            int* p = (int*)this->field_64;
            int ecx_val;
            if (p != 0) {
                ecx_val = (int)((char*)p - 0x20);
            } else {
                ecx_val = 0;
            }
            int local = 0;
            this->sub_6e4f00(1, &local);
            result = (local > 1) ? 1 : 0;
            sub_66f140(&obj);
        }
    }
    return result;
}
