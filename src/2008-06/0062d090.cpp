// from server: 84% by colin
struct Instance {
    bool isA(const char* name);
};

struct ForceField {
    bool isA(const char* name);
};

extern "C" int __cdecl sub_6A17C6(Instance* instance, int, const char*, const char*, int);

bool ForceField::isA(const char* name) {
    return sub_6A17C6((Instance*)this, 0, ".?AVWorkspace@RBX@@", ".?AVInstance@RBX@@", 0) == 0;
}
