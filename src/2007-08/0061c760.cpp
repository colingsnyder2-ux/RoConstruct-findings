// from server: 37% by colin
struct T;
typedef T* E;

struct Listener {
    char pad[0xfc];
    void* vfc;
    void* v100;
    void* v104;
    void* v108;
    char pad10c[0x10];
    void* v11c;
    void* v120;
    void* v124;
    void* v128;
    float v12c;
    Listener();
};

extern "C" void __stdcall sub_555c70();
extern "C" void __stdcall sub_62ab90();

Listener::Listener()
{
    sub_555c70();
    vfc = (void*)0x7c42b8;
    v100 = (void*)0x795b60;
    *(void**)((char*)this + 0x0) = (void*)0x7c4354;
    *(void**)((char*)this + 0x4) = (void*)0x7c434c;
    *(void**)((char*)this + 0x10) = (void*)0x7c4344;
    *(void**)((char*)this + 0x14) = (void*)0x7c4334;
    *(void**)((char*)this + 0x2c) = (void*)0x7c4324;
    *(void**)((char*)this + 0x44) = (void*)0x7c4314;
    *(void**)((char*)this + 0x5c) = (void*)0x7c4304;
    *(void**)((char*)this + 0x74) = (void*)0x7c42f4;
    *(void**)((char*)this + 0x8c) = (void*)0x7c42e4;
    *(void**)((char*)this + 0xe8) = (void*)0x7c42dc;
    vfc = (void*)0x7c42d0;
    v100 = (void*)0x7c42c4;
    v104 = 0;
    v108 = 0;
    sub_62ab90();
    v11c = 0;
    v120 = 0;
    v124 = 0;
    v128 = 0;
    v12c = 0.0f;
}
