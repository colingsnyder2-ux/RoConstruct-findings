// from server: 66% by atomic.potato
struct S
{
    char pad[336];
    float value_150;
    void f(float value);
};

void S::f(float value)
{
    value_150 = value;
}
