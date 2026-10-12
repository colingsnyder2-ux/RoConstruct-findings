// from server: 31% by colin




struct Instance;

struct ServiceProvider {
    char pad[0x14];
    void* serviceArray;
    bool findService(Instance* inst, void** out);
};

extern "C" void* __stdcall sub_5be120(Instance* inst);

bool ServiceProvider::findService(Instance* inst, void** out) {
    if (serviceArray != 0) {
        *out = sub_5be120(inst);
        return true;
    }
    return false;
}
