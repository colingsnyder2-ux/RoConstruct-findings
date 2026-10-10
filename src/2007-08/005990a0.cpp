// from server: 56% by colin
struct UserInputBase;

struct ControllerService {
    void* vtable0;
    void* vtable4;
    char pad8[0xec - 8];
    UserInputBase* field_ec;
    UserInputBase* field_f0;
    UserInputBase* field_f4;
    UserInputBase* field_f8;
    void destructor();
};

extern "C" int __stdcall InterlockedDecrement(int*);
extern "C" void __cdecl sub_457DD0();
extern "C" void __cdecl sub_5402B0();

void ControllerService::destructor()
{
    if (field_f8 != 0) {
        if (InterlockedDecrement((int*)((char*)field_f8 + 4)) == 0) {
            sub_457DD0();
            if (field_f8 != 0) {
                void** vt = *(void***)field_f8;
                ((void (__stdcall*)(int))vt[0])(1);
            }
        }
        field_f8 = 0;
    }
    if (field_f4 != 0) {
        if (InterlockedDecrement((int*)((char*)field_f4 + 4)) == 0) {
            sub_457DD0();
            if (field_f4 != 0) {
                void** vt = *(void***)field_f4;
                ((void (__stdcall*)(int))vt[0])(1);
            }
        }
        field_f4 = 0;
    }
    if (field_f0 != 0) {
        if (InterlockedDecrement((int*)((char*)field_f0 + 4)) == 0) {
            sub_457DD0();
            if (field_f0 != 0) {
                void** vt = *(void***)field_f0;
                ((void (__stdcall*)(int))vt[0])(1);
            }
        }
        field_f0 = 0;
    }
    if (field_ec != 0) {
        if (InterlockedDecrement((int*)((char*)field_ec + 4)) == 0) {
            sub_457DD0();
            if (field_ec != 0) {
                void** vt = *(void***)field_ec;
                ((void (__stdcall*)(int))vt[0])(1);
            }
        }
        field_ec = 0;
    }
    *(void**)this = (void*)0x7b11e4;
    *(void**)((char*)this + 4) = (void*)0x7b11d8;
    *(void**)((char*)this + 0x10) = (void*)0x7b11d0;
    *(void**)((char*)this + 0x14) = (void*)0x7b11c0;
    *(void**)((char*)this + 0x2c) = (void*)0x7b11b0;
    *(void**)((char*)this + 0x44) = (void*)0x7b11a0;
    *(void**)((char*)this + 0x5c) = (void*)0x7b1190;
    *(void**)((char*)this + 0x74) = (void*)0x7b1180;
    *(void**)((char*)this + 0x8c) = (void*)0x7b1170;
    sub_5402B0();
}
