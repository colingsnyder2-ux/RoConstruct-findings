// from server: 45% by atomic.potato
struct String
{
    String(const String&);
};

struct S
{
    char pad[8];
    String m_string;
    S(const S&);
};

S::S(const S& other)
    : m_string(other.m_string)
{
}
