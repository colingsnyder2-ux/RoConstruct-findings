// from server: 46% by atomic.potato
extern "C" void std_string_copy(void *, const void *);

struct TextDisplay_00574580 {
    char pad0[324];
    void *m_string;
    int f(void *);
};

int TextDisplay_00574580::f(void *value)
{
    std_string_copy(&m_string, value);
    return (int)this;
}
