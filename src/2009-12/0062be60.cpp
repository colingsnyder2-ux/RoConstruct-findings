// from server: 66% by atomic.potato
struct S
{
    float value[40];

    void __thiscall set(float value);
};

void __thiscall S::set(float value)
{
    this->value[39] = value;
}
