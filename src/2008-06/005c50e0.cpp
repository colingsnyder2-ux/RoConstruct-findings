// from server: 34% by colin
struct String {
    char storage[28];
    String(const String&);
    ~String();
};

struct Arguments {
    virtual void v0();
    virtual void v1(int, void*);
};

struct Base {
    char pad[0x38];
    void* field38;
    void* field3c;
    void* field40;
    void* field44;
    void* field48;
    void* field4c;
};

extern "C" void* __stdcall sub_6a17c6(void*, void*, void*, int, void*);
extern "C" void __stdcall sub_6a158c(void*, void*);
extern "C" void* __stdcall sub_56ea60(void*);
extern "C" void* __stdcall sub_56f0b0(void*, void*);
extern "C" void* __stdcall stringCopyCtor(void*, void*);

struct BoundFuncDesc : Base {
    void invoke(Arguments* args, int arg2);
};

void BoundFuncDesc::invoke(Arguments* args, int arg2) {
    void* local10 = field40;
    void* local14;
    if (field44) {
        local14 = ((void* (__thiscall*)(void*))((void**)field44)[2])(field44);
    } else {
        local14 = 0;
    }
    args->v1(1, &local10);

    void* local8 = field48;
    void* localc;
    if (field4c) {
        localc = ((void* (__thiscall*)(void*))((void**)field4c)[2])(field4c);
    } else {
        localc = 0;
    }
    args->v1(2, &local8);

    void* result = sub_6a17c6(local14, (void*)0x9291fc, (void*)0x94f728, 0, 0);
    if (!result) {
        char buf[28];
        stringCopyCtor(buf, (void*)0x80ba34);
        sub_6a158c(buf, (void*)0x8d362c);
    }

    void* s = sub_56ea60(&local8);
    void* s2 = sub_56f0b0(&local10, s);
    char tmp[28];
    stringCopyCtor(tmp, s2);
    ((void (__thiscall*)(void*, void*))field38)(this, tmp);

    if (localc) {
        ((void (__thiscall*)(void*, int))((void**)localc)[0])(localc, 1);
    }
    if (local14) {
        ((void (__thiscall*)(void*, int))((void**)local14)[0])(local14, 1);
    }
}
