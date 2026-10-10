// from server: 59% by colin
struct VColor3 {
    char pad[0x18];
    void* prop;
    bool equalTo(const VColor3& other);
};

bool VColor3::equalTo(const VColor3& other) {
    float a[3];
    float b[3];
    void** vtbl = *(void***)prop;
    void (__thiscall *getA)(void*, float*) = (void (__thiscall *)(void*, float*))vtbl[1];
    getA(prop, a);
    getA(prop, b);
    if (a[0] == b[0]) {
        if (a[0] == b[0]) {
            if (a[1] == b[1]) {
                return true;
            }
        }
    }
    return false;
}
