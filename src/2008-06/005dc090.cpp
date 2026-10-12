// from server: 84% by king_originala
extern char property;

struct S
{
    char padding[0x1b0];
    float value;

    void setValue(const float* p);
    void notify(const void* property);
};

void S::setValue(const float* p)
{
    if (*p != value)
    {
        value = *p;
        notify(&property);
    }
}
