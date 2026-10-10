// from server: 72% by colin
struct seg_005e0000 {
    char pad[8];
    void* m_ptr8;
    char pad2[0x1c - 0xc];
    void* m_ptr1c;
    void* m_ptr20;
    char pad4[0x7c - 0x24];
    float m_val7c;
    void sub_5e1cf0();
    void set(float);
};

void seg_005e0000::set(float v)
{
    if (v == m_val7c)
        return;

    if (m_ptr8) {
        ((seg_005e0000*)m_ptr8)->sub_5e1cf0();
    } else {
        if (m_ptr20)
            *(unsigned char*)((char*)m_ptr20 + 4) = 1;
    }

    if (m_ptr1c)
        *(unsigned char*)((char*)m_ptr1c + 4) = 1;

    m_val7c = v;
}
