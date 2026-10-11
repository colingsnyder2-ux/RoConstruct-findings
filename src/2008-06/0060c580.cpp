// from server: 50% by atomic.potato
struct S
{
    struct T
    {
        float value;
    };

    char padding[0x150];
    T* member;
    void f(float value);
};

void S::f(float value)
{
    if (value != member->value)
    {
        member->value = value;
        *(int*)&value = 0x97be1c;
    }
}
