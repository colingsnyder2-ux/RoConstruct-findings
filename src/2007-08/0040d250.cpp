// from server: 83% by colin
// roc 2007-08 0040d250  unit: ChatEnter  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040d250
//
// 0040d250  8b442404             mov eax, dword ptr [esp + 4]
// 0040d254  d981f4000000         fld dword ptr [ecx + 0xf4]
// 0040d25a  d918                 fstp dword ptr [eax]
// 0040d25c  d981f8000000         fld dword ptr [ecx + 0xf8]
// 0040d262  d95804               fstp dword ptr [eax + 4]
// 0040d265  c20400               ret 4

struct ChatEnter {
    char pad[0xf4];
    float m_x;
    float m_y;
    void GetVector(float* out);
};

void ChatEnter::GetVector(float* out) {
    out[0] = m_x;
    out[1] = m_y;
}
