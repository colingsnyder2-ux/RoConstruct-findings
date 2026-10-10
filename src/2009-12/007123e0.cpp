// from server: 81% by atomic.potato
struct Mechanism {
    char pad0[24];
    int m_value;
    int IsActive();
};

int Mechanism::IsActive()
{
    return m_value > 0;
}
