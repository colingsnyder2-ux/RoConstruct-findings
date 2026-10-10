// from server: 46% by atomic.potato
extern "C" void std_string_copy(void *, const void *);

struct S_func_005e61c0 {
    char m_data[0xB90];
    void *f(const void *);
};

void *S_func_005e61c0::f(const void *value)
{
    void *result = this;
    std_string_copy((char *)this + 0xB8C, value);
    return result;
}
