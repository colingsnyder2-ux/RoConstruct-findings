// from server: 70% by colin
struct RBX_Instance;

struct RBX_InstanceList {
    RBX_Instance** begin;
    RBX_Instance** end;
};

struct RBX_InstanceContainer {
    char pad[0xC0];
    RBX_InstanceList* list;
};

struct RBX_Instance {
    char pad[0x120];
    int field120;
    char field124;
};

extern "C" int __stdcall sub_48dfb0();
extern "C" int __stdcall sub_487c10();
extern "C" int __stdcall sub_630d36(RBX_Instance*, int, const char*, const char*, int);
extern "C" void __stdcall _invalid_parameter_noinfo();

struct RBX_VTeams_FactoryProduct {
    int countMatching(int arg);
};

int RBX_VTeams_FactoryProduct::countMatching(int arg) {
    int count = 0;
    RBX_InstanceContainer* container = (RBX_InstanceContainer*)sub_48dfb0();
    int total = sub_487c10();
    for (int i = 0; i < total; ++i) {
        RBX_InstanceList* list = container->list;
        if (list->begin == 0 || (unsigned int)i >= (unsigned int)((list->end - list->begin) >> 3)) {
            _invalid_parameter_noinfo();
        }
        RBX_Instance* inst = list->begin[i];
        RBX_Instance* result = (RBX_Instance*)sub_630d36(inst, 0, ".?AVInstance@RBX@@", ".?AVPlayer@Network@RBX@@", 0);
        if (result != 0 && result->field124 == 0 && result->field120 == arg) {
            ++count;
        }
        total = sub_487c10();
    }
    return count;
}
