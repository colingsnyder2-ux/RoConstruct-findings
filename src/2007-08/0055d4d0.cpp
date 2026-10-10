// from server: 53% by colin
// roc 2007-08 0055d4d0  unit: RBX::DataModel  size: 286 bytes

struct std_string {
    void assign(const std_string&);
    std_string(const std_string&);
    std_string();
    ~std_string();
};

struct DataModel {
    int field_4;
    void* field_8;
    bool method_55d4d0(void* arg);
};

extern "C" {
    void* __stdcall sub_77e690(void*, void*);
    void* __stdcall sub_77e69c(void*, void*);
    void* __stdcall sub_77e6ac(void*);
    void* __cdecl sub_62fef6(unsigned int);
}

void* __fastcall sub_44cf10(void* self, void* unused, void* arg);
void __fastcall sub_55d3d0(DataModel* self);

bool DataModel::method_55d4d0(void* arg) {
    if (field_4 == 3) {
        void* p = field_8;
        sub_77e690(arg, p);
        *(int*)((char*)arg + 0x1c) = *(int*)((char*)p + 0x1c);
        return true;
    }
    if (field_4 == 2) {
        void* src = field_8;
        std_string local;
        sub_44cf10(&local, 0, src);
        sub_77e690(arg, &local);
        *(int*)((char*)arg + 0x1c) = *(int*)((char*)&local + 0x1c);
        sub_77e6ac(&local);
        sub_55d3d0(this);
        void* mem = sub_62fef6(0x20);
        if (mem) {
            sub_77e69c(mem, arg);
            *(int*)((char*)mem + 0x1c) = *(int*)((char*)arg + 0x1c);
            field_8 = mem;
        } else {
            field_8 = 0;
        }
        field_4 = 3;
        return true;
    }
    return false;
}
