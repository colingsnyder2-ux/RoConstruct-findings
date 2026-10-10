// from server: 73% by colin
struct CRobloxControlColorSelector {
    char pad0[0x7c];
    int m_7c;
    char pad80[0x4];
    int m_84;
    int m_88;
    int m_8c;
    int m_90;
    char pad94[0x4];
    int m_98;
    int m_9c;
    int m_a0;
    char padA4[0x8];
    int m_ac;
    char padB0[0x20];
    int m_d0;
    int m_d4;
    char padD8[0x4];
    int m_dc;
    char padE0[0x18];
    int m_f8;
    char padFC[0x4];
    int m_100;
    int m_104;
    int m_108;
    char pad10C[0x38];
    int m_144;
    int m_148;
    int m_14c;
    int m_150;
    char pad154[0x8];
    int m_15c;
    int m_160;
    int m_164;
    void assign(CRobloxControlColorSelector* other, int b);
};

extern "C" void __stdcall sub_77d434(int* dst, int* src);
extern "C" void __fastcall sub_63caa0(int* dst, int* src);

void CRobloxControlColorSelector::assign(CRobloxControlColorSelector* other, int b)
{
    int saved = other->m_84;
    (*(void (__thiscall**)(CRobloxControlColorSelector*, int))(*(int*)this + 0xb8))(this, other->m_15c);
    m_84 = saved;
    m_7c = other->m_7c;
    m_d4 = other->m_d4;
    m_f8 = other->m_f8;
    sub_77d434(reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0xd8), reinterpret_cast<int*>(reinterpret_cast<char*>(other) + 0xd8));
    sub_77d434(reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0xe0), reinterpret_cast<int*>(reinterpret_cast<char*>(other) + 0xe0));
    sub_77d434(reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0xe4), reinterpret_cast<int*>(reinterpret_cast<char*>(other) + 0xe4));
    sub_77d434(reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0xe8), reinterpret_cast<int*>(reinterpret_cast<char*>(other) + 0xe8));
    sub_77d434(reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0xec), reinterpret_cast<int*>(reinterpret_cast<char*>(other) + 0xec));
    sub_77d434(reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0xf0), reinterpret_cast<int*>(reinterpret_cast<char*>(other) + 0xf0));
    m_90 = other->m_90;
    m_88 = other->m_88;
    m_8c = other->m_8c;
    m_ac = other->m_ac;
    sub_77d434(reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0xdc), reinterpret_cast<int*>(reinterpret_cast<char*>(other) + 0xdc));
    sub_77d434(reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x104), reinterpret_cast<int*>(reinterpret_cast<char*>(other) + 0x104));
    m_d0 = other->m_d0;
    m_108 = other->m_108;
    m_9c = other->m_9c;
    m_a0 = other->m_a0;
    m_148 = other->m_148;
    m_144 = other->m_144;
    int v = (*(int (__thiscall**)(CRobloxControlColorSelector*))(*(int*)this + 0x11c))(this);
    if (v > other->m_15c)
        v = (*(int (__thiscall**)(CRobloxControlColorSelector*))(*(int*)this + 0x11c))(this);
    else
        v = other->m_15c;
    m_15c = v;
    m_160 = other->m_160;
    m_98 = other->m_98;
    m_150 = other->m_150;
    m_164 = other->m_164;
    sub_63caa0(reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x10c), reinterpret_cast<int*>(reinterpret_cast<char*>(other) + 0x10c));
    sub_63caa0(reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x128), reinterpret_cast<int*>(reinterpret_cast<char*>(other) + 0x128));
}
