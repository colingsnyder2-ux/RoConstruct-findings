// from server: 87% by colin
// roc 2008-06 004d6fb0  unit: CSHA1  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d6fb0
//
// 004d6fb0  8b442404             mov eax, dword ptr [esp + 4]
// 004d6fb4  d9817c020000         fld dword ptr [ecx + 0x27c]
// 004d6fba  d918                 fstp dword ptr [eax]
// 004d6fbc  d98180020000         fld dword ptr [ecx + 0x280]
// 004d6fc2  d95804               fstp dword ptr [eax + 4]
// 004d6fc5  d98184020000         fld dword ptr [ecx + 0x284]
// 004d6fcb  d95808               fstp dword ptr [eax + 8]
// 004d6fce  c20400               ret 4

struct CSHA1 {
    char pad[0x27c];
    float m_a;
    float m_b;
    float m_c;
    void get(float* out);
};

void CSHA1::get(float* out)
{
    out[0] = m_a;
    out[1] = m_b;
    out[2] = m_c;
}
