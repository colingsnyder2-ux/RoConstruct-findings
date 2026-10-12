// from server: 41% by king_originala
struct Hit {
    int object;
    int kind;
    float x, y, z;
    float nx, ny, nz;

    Hit& copy(const Hit&);
    void reset();
    Hit& operator=(const Hit&);
};

__forceinline Hit& Hit::operator=(const Hit& other)
{
    object = other.object;
    kind = other.kind;
    x = other.x;
    y = other.y;
    z = other.z;
    nx = other.nx;
    ny = other.ny;
    nz = other.nz;
    return *this;
}

extern const float* __cdecl zeroVector();
extern int __cdecl filterA(void*);
extern int __cdecl filterB(void*);

struct S {
    Hit* query(Hit*, void*, int);
    Hit* filtered(Hit*, void*, int (__cdecl *)(void*));
    Hit* f(Hit*, void*);
};

Hit* S::f(Hit* output, void* argument)
{
    zeroVector();
    zeroVector();

    Hit value;
    Hit temporary;

    value = *query(&value, argument, 1);
    if (value.object) {
        *output = value;
        return output;
    }

    value = *filtered(&value, argument, filterA);
    if (value.object) {
        *output = value;
        return output;
    }

    value = *filtered(&temporary, argument, filterB);
    if (value.object) {
        output->copy(value);
        return output;
    }

    value.copy(*query(&temporary, argument, 0));
    if (value.object)
        output->copy(value);
    else
        output->reset();

    return output;
}
