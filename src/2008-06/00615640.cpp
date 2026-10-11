// from server: 27% by colin




struct RBXString {
    void* pad[4];
};

extern "C" void __stdcall sub_61A7B0(void*, void*);
extern "C" void __stdcall sub_56C9E0(void*, void*);
extern "C" void __stdcall sub_80245C(void*, void*);
extern "C" void __stdcall sub_802468(void*);

struct VContentId {
    char pad[0x1c];
    RBXString str;
};

struct TypedPropertyDescriptor {
    void construct(const VContentId* other);
};

void TypedPropertyDescriptor::construct(const VContentId* other) {
    RBXString local;
    sub_61A7B0((void*)&local, (void*)other);
    RBXString tmp;
    sub_80245C((void*)&tmp, (void*)&local);
    tmp.pad[3] = local.pad[3];
    sub_56C9E0((void*)((char*)this + 0x10), (void*)&tmp);
    sub_802468((void*)&tmp);
    sub_802468((void*)&local);
}
