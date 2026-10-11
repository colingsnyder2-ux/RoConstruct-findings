// from server: 61% by atomic.potato
unsigned int func_006d1690();

struct RotateConnector {
    char pad[0x7c];
    float m_field7C;
    unsigned char m_field80;
    void set(float value);
};

void RotateConnector::set(float value) {
    int count = (int)func_006d1690();
    m_field7C = value / (float)count;
    if (value == 0.0f)
        m_field80 = 1;
}
