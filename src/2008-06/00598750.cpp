// from server: 58% by atomic.potato
extern "C" void __cdecl UpdateGlobal(float);

struct Decal
{
    char padding[0x170];
    float value;
    void SetValue(float);
};

void Decal::SetValue(float x)
{
    if (x == value)
        return;
    value = x;
    UpdateGlobal(x);
}
