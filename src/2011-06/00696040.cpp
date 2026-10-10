// from server: 61% by atomic.potato
struct Configuration
{
    Configuration();
    int m_00;
    int m_04;
    char m_pad[16];
    int m_18;
    int m_1c;
};

Configuration::Configuration()
{
    m_00 = 0xaa21dc;
    m_04 = 0xaa21d0;
    m_18 = 0xaa21c4;
    m_1c = 0xaa21b8;
}
