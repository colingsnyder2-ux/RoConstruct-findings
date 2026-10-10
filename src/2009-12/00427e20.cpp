// from server: 66% by atomic.potato
struct S
{
    int v(int);
    int field_138;
};

int S::v(int value)
{
    int result = ((int (__thiscall *)(S *))(*(int **)this + 0x198))(this);
    if (result == 0)
        field_138 = value;
    return result;
}
