// from server: 62% by king_originala
struct S
{
    void* first;
    void* second;
    void* third;
    bool active;
    bool enabled;

    S();
    ~S();
};

__forceinline S::S()
{
    second = 0;
    third = 0;
    first = 0;
    active = false;
    enabled = true;
}

S* __cdecl get_instance()
{
    static S instance;
    return &instance;
}
