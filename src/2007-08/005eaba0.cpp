// from server: 64% by colin
// roc 2007-08 005eaba0  unit: RBX::VFlagStandService::?$FactoryProduct  size: 480 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005eaba0

struct RBXName {
    void* p;
};

struct std_string {
    void* data[4];
    std_string(const char*);
    ~std_string();
};

struct FlagStandService {
    char pad[0x2b8];
    void construct(int);
    void init(const std_string&);
    FlagStandService(int);
};

extern "C" void __stdcall sub_77e698(void*);
extern "C" void __stdcall sub_77e6ac(void*);

void FlagStandService::construct(int) {}

void FlagStandService::init(const std_string&) {}

FlagStandService::FlagStandService(int arg) {
    if (arg != 0) {
        *(void**)((char*)this + 0xec) = (void*)0x7be4f8;
        *(void**)((char*)this + 0x2b0) = (void*)0x7aafe8;
        *(void**)((char*)this + 0x29c) = (void*)0x7a4cd4;
        *(void**)((char*)this + 0x2a4) = (void*)0x7a4ccc;
        void* eax = *(void**)((char*)this + 0x2b0);
        *(void**)((char*)this + 0x2ac) = (void*)0x7a4cac;
        void* ecx = *(void**)((char*)eax + 4);
        *(void**)((char*)ecx + (int)this + 0x2b0) = (void*)0x7a4ca4;
    }
    construct(0);
    void* edx = *(void**)((char*)this + 0xec);
    *(void**)((char*)this) = (void*)0x7be48c;
    *(void**)((char*)this + 4) = (void*)0x7be484;
    *(void**)((char*)this + 0x10) = (void*)0x7be47c;
    *(void**)((char*)this + 0x14) = (void*)0x7be46c;
    *(void**)((char*)this + 0x2c) = (void*)0x7be45c;
    *(void**)((char*)this + 0x44) = (void*)0x7be44c;
    *(void**)((char*)this + 0x5c) = (void*)0x7be43c;
    *(void**)((char*)this + 0x74) = (void*)0x7be42c;
    *(void**)((char*)this + 0x8c) = (void*)0x7be41c;
    *(void**)((char*)this + 0xe8) = (void*)0x7be410;
    *(void**)((char*)this + 0x158) = (void*)0x7be400;
    *(void**)((char*)this + 0x170) = (void*)0x7be3f4;
    *(void**)((char*)this + 0x17c) = (void*)0x7be3dc;
    void* eax2 = *(void**)((char*)edx + 4);
    *(void**)((char*)eax2 + (int)this + 0xec) = (void*)0x7be3d0;
    void* ecx2 = *(void**)((char*)this + 0xec);
    void* edx2 = *(void**)((char*)ecx2 + 8);
    *(void**)((char*)edx2 + (int)this + 0xec) = (void*)0x7be3c8;
    void* eax3 = *(void**)((char*)this + 0xec);
    void* ecx3 = *(void**)((char*)eax3 + 0xc);
    *(void**)((char*)ecx3 + (int)this + 0xec) = (void*)0x7be3ac;
    void* edx3 = *(void**)((char*)this + 0xec);
    void* eax4 = *(void**)((char*)edx3 + 4);
    void* ecx4 = (void*)((char*)eax4 - 0x1b0);
    *(void**)((char*)eax4 + (int)this + 0xe8) = ecx4;
    void* edx4 = *(void**)((char*)this + 0xec);
    void* eax5 = *(void**)((char*)edx4 + 8);
    void* ecx5 = (void*)((char*)eax5 - 0x1b8);
    *(void**)((char*)eax5 + (int)this + 0xe8) = ecx5;
    void* edx5 = *(void**)((char*)this + 0xec);
    void* eax6 = *(void**)((char*)edx5 + 0xc);
    void* ecx6 = (void*)((char*)eax6 - 0x1c0);
    *(void**)((char*)eax6 + (int)this + 0xe8) = ecx6;
    *(int*)((char*)this + 0x284) = 0;
    *(int*)((char*)this + 0x288) = 0;
    *(char*)((char*)this + 0x28c) = 0;
    *(char*)((char*)this + 0x290) = 0;
    *(int*)((char*)this + 0x294) = 0xc2;
    std_string s("CFrame");
    init(s);
    s.~std_string();
}
