// from server: 60% by colin
// roc 2008-06 005edb80  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 113 bytes

struct EnumItem;
struct EnumDesc;

struct GetSet {
    virtual int getValue(const void* instance) const;
};

struct SurfaceEnumPropDescriptor {
    char pad[0x1c];
    GetSet* getset;

    int getValue(const void* instance) const;
};

struct EnumDescHolder {
    char pad[0xac];
    EnumItem** begin;
    EnumItem** end;
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" EnumDescHolder* __cdecl getEnumDescSingleton();
extern "C" void __cdecl someInit(int, int);

int SurfaceEnumPropDescriptor::getValue(const void* instance) const {
    int idx = getset->getValue(instance);
    someInit(0x97b120, 0x5ed690);
    EnumDescHolder* desc = getEnumDescSingleton();
    if (idx < 0) {
        return 0;
    }
    unsigned int count = (unsigned int)((char*)desc->end - (char*)desc->begin) >> 2;
    if ((unsigned int)idx >= count) {
        return 0;
    }
    unsigned int count2 = (unsigned int)((char*)desc->end - (char*)desc->begin) >> 2;
    if ((unsigned int)idx >= count2) {
        _invalid_parameter_noinfo();
    }
    return (int)desc->begin[idx];
}
