// from server: 70% by atomic.potato
extern "C" void* __stdcall std_string_copy(void*, const void*);

struct S
{
    S* f(const S&);
    char data[0xC84];
};

S* S::f(const S& other)
{
    std_string_copy(data + 0xC84, other.data);
    return const_cast<S*>(&other);
}
