// from server: 67% by colin
struct VModelInstance {
    char pad[0xbc];
    void* field_bc;
    int isModel();
};

struct PVInstance {
    char pad0[0xf8];
    unsigned char field_f8;
    unsigned char field_f9;
    char pad1[0xfc - 0xfa];
    char* field_fc;
    int field_100;
    int field_104;
    int field_108;
    char pad2[0x14c - 0x10c];
    int field_14c;

    bool checkSomething();
};

extern "C" void* __cdecl sub_630d36(void* a, void* b, void* c, void* d, void* e);
extern "C" void* __fastcall sub_52ff30(VModelInstance* self);

int VModelInstance::isModel()
{
    void* p = sub_630d36(field_bc, 0, (void*)0x881f4c, (void*)0x898fc0, 0);
    if (p != 0) {
        void* saved = field_bc;
        (void)saved;
    }
    return 0;
}

bool PVInstance::checkSomething()
{
    if (field_f9 != 0) {
        char* eax = field_fc;
        int edx = field_108;
        int ecx = *(int*)(eax + 0xec);
        ecx = *(int*)(ecx + edx);
        ecx += field_104;
        int edx2 = field_100;
        char* ecx2 = (char*)(ecx + (int)eax + 0xec);
        typedef unsigned char (__fastcall *Fn)(void*);
        unsigned char r = ((Fn)edx2)(ecx2);
        field_f8 = r;
        field_f9 = 0;
    }
    if (field_f8 == 0)
        return false;
    if (field_14c == 0)
        return false;
    if (this->checkSomething())
        return true;
    VModelInstance* m = (VModelInstance*)((char*)this + 0xbc);
    int r = m->isModel();
    return r == 0;
}
