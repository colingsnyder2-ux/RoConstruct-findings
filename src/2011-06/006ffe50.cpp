// from server: 72% by atomic.potato
// roc 2011-06 006ffe50  unit: RBX::VBodyThrust::?$FactoryProduct  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006ffe50
//
// 006ffe50  8b4130               mov eax, dword ptr [ecx + 0x30]
// 006ffe53  56                   push esi
// 006ffe54  8b7038               mov esi, dword ptr [eax + 0x38]
// 006ffe57  85f6                 test esi, esi
// 006ffe59  744f                 je 0x6ffeaa
// 006ffe5b  807e0800             cmp byte ptr [esi + 8], 0
// 006ffe5f  7407                 je 0x6ffe68
// 006ffe61  8bce                 mov ecx, esi
// 006ffe63  e858a50900           call 0x79a3c0
// 006ffe68  8b442408             mov eax, dword ptr [esp + 8]
// 006ffe6c  f30f1000             movss xmm0, dword ptr [eax]
// 006ffe70  f30f588684000000     addss xmm0, dword ptr [esi + 0x84]
// 006ffe78  f30f118684000000     movss dword ptr [esi + 0x84], xmm0
// 006ffe80  f30f104004           movss xmm0, dword ptr [eax + 4]
// 006ffe85  f30f588688000000     addss xmm0, dword ptr [esi + 0x88]
// 006ffe8d  f30f118688000000     movss dword ptr [esi + 0x88], xmm0
// 006ffe95  f30f104008           movss xmm0, dword ptr [eax + 8]
// 006ffe9a  f30f58868c000000     addss xmm0, dword ptr [esi + 0x8c]
// 006ffea2  f30f11868c000000     movss dword ptr [esi + 0x8c], xmm0
// 006ffeaa  5e                   pop esi
// 006ffeab  c20400               ret 4

struct Inner {
    char pad0[8];
    char m_flag;
    char pad1[0x84 - 9];
    float m_x;
    float m_y;
    float m_z;
    void method();
};

struct Middle {
    char pad0[0x38];
    Inner* m_inner;
};

struct Outer {
    char pad0[0x30];
    Middle* m_mid;
    void f(float* v);
};

void Outer::f(float* v)
{
    Inner* p = m_mid->m_inner;
    if (p != 0) {
        if (p->m_flag != 0) {
            p->method();
        }
        p->m_x += v[0];
        p->m_y += v[1];
        p->m_z += v[2];
    }
}
