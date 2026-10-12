// from server: 83% by king_originala
extern const float limit;
extern const char property;

inline const float &maximum(const float &a, const float &b)
{
    return a < b ? b : a;
}

inline const float &minimum(const float &a, const float &b)
{
    return b < a ? b : a;
}

struct S
{
    char storage[0x144];
    float lower;
    float current;

    void setLower(float value);
    void notify(const void *descriptor);
    void setValue(float value);
};

void S::setValue(float value)
{
    if (lower > value)
        setLower(value);

    value = maximum(lower, value);
    const float cap = limit;
    float selected = minimum(cap, value);

    if (selected != current)
    {
        current = selected;
        notify(&property);
    }
}
