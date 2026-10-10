// from server: 78% by tester
struct RBX_Instance {
    char pad[0xbc];
    RBX_Instance* m_child;
};

extern "C" void* __cdecl sub_630D36(RBX_Instance* self, int, void*, void*, int);
extern "C" void* __fastcall sub_450D00(void* self);

RBX_Instance* __cdecl sub_461680(RBX_Instance* inst)
{
    while (inst != 0) {
        void* result = sub_630D36(inst, 0, (void*)0x881f4c, (void*)0x884e04, 0);
        if (result != 0) {
            return (RBX_Instance*)sub_450D00(result);
        }
        inst = inst->m_child;
    }
    return 0;
}

struct Lighting {
    char pad[0x1ec];
    float m_a;
    float m_b;
    float m_c;
    void sub_5af6e0(float, float, float);
};

extern "C" void __cdecl sub_444710(const char*);
extern "C" void* __fastcall sub_570270(void*, int);
extern "C" void __fastcall sub_5ae960(void*, int, void*);
extern "C" void __fastcall sub_52db00(void*);

void Lighting::sub_5af6e0(float a, float b, float c)
{
    if (m_a == a && m_b == b && m_c == c) {
        return;
    }
    m_a = a;
    m_b = b;
    m_c = c;
    sub_444710((const char*)0x8c5c40);
    void* p = sub_570270((void*)0x8c5bec, (int)(this ? (char*)this + 4 : 0));
    if (p != 0) {
        sub_5ae960((char*)p + 0x10, 0, 0);
    }
    RBX_Instance* inst = sub_461680((RBX_Instance*)this);
    if (inst != 0) {
        sub_52db00(inst);
    }
}
