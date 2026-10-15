// from server: 76% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
struct Vector3 {
    float x, y, z;
    Vector3(const Vector3&);
};

inline Vector3::Vector3(const Vector3& v)
    : x(v.x), y(v.y), z(v.z)
{
}

template<class T>
inline const T& maximum(const T& a, const T& b)
{
    return a > b ? a : b;
}

template<class T>
inline const T& minimum(const T& a, const T& b)
{
    return a < b ? a : b;
}

struct Base {
    virtual void virtualFunction();
    char storage[28];
    Base(int, Vector3, int);
};

struct S : Base {
    short xCount, yCount, zCount;
    virtual void virtualFunction();
    S(int, Vector3, int);
};

S::S(int a, Vector3 v, int b)
    : Base(a, v, b), xCount(0), yCount(0), zCount(0)
{
    xCount = (short)maximum((int)(v.x * 0.25f), 1);
    yCount = (short)maximum((int)(v.y * 0.25f), 1);
    zCount = (short)maximum((int)(v.z * 0.25f), 1);

    xCount = (short)minimum((int)xCount, 4);
    yCount = (short)minimum((int)yCount, 4);
    zCount = (short)minimum((int)zCount, 4);
}
