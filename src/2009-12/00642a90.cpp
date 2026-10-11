// from server: 46% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

struct S {
    void* field0;
};

void* __cdecl f(void* arg) {
    S* esi = (S*)arg;
    if (esi == 0) {
        return 0;
    }
    type_info* ecx = (type_info*)esi->field0;
    type_info* eax;
    if (ecx != 0) {
        eax = ecx;
        eax = (type_info*)(*(void***)ecx)[1];
        ((void (__thiscall*)(type_info*))eax)(ecx);
        eax = ecx;
    } else {
        eax = (type_info*)0xb0030c;
    }
    bool al = eax->operator==(*(type_info*)0xb08084);
    if (!al) {
        return 0;
    }
    return (char*)esi->field0 + 4;
}
