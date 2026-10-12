// from server: 91% by king_originala
extern const float initialY;
extern const float initialZ;

struct S
{
    int x;
    float y;
    float z;

    S();
    int isDefault() const;
};

inline S::S() : x(0), y(initialY), z(initialZ)
{
}

int S::isDefault() const
{
    static S value;
    if (value.x != x || value.y != y || value.z != z)
        return 0;
    return 1;
}
