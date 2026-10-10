// from server: 57% by colin
struct FactoryProduct {
    char pad[0x18c];
    int field_18c;
    void setValue(int value);
};

struct FollowCameraCommand {
    char pad0[0xc];
    void* field_c;
    char pad10[0x10];
    void* field_20;
    void execute(int);
};

extern "C" void __stdcall sub_444710(int);
extern "C" void* __fastcall sub_599480(FactoryProduct*);
extern "C" void* __fastcall sub_5618e0(void*);
extern "C" void __fastcall sub_4108b0(void*, int);
extern "C" void __fastcall sub_59b6c0(void*, int);
extern "C" void __fastcall sub_59b700(void*, void*);

void FactoryProduct::setValue(int value) {
    if (field_18c != value) {
        field_18c = value;
        sub_444710(0x8c505c);
        void* p = sub_599480(this);
    }
}

void FollowCameraCommand::execute(int arg) {
    void* esi = 0;
    if (field_20) {
        esi = sub_5618e0(field_20);
    }
    void* item = 0;
    if (esi) {
        void** begin = *(void***)((char*)esi + 0xf8);
        void** end = *(void***)((char*)esi + 0xfc);
        if (begin && (end - begin) != 0) {
            item = *begin;
        }
    }
    void* obj = field_c;
    void* vtable = *(void**)((char*)obj + 0x228);
    void* fn = *(void**)((char*)vtable + 4);
    void* r = ((void* (__thiscall*)(void*, int))fn)((char*)obj + 0x228, 4);
    sub_59b6c0(r, 4);
    obj = field_c;
    vtable = *(void**)((char*)obj + 0x228);
    fn = *(void**)((char*)vtable + 4);
    r = ((void* (__thiscall*)(void*, void*))fn)((char*)obj + 0x228, item);
    sub_59b700(r, item);
    sub_4108b0((void*)arg, -1);
    *(int*)(arg + 4) = -1;
    void** vt = *(void***)arg;
    void* f = *(void**)((char*)vt + 4);
    ((void (__thiscall*)(void*, int))f)((void*)arg, 1);
}
