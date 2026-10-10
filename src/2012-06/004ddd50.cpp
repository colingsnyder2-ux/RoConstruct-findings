// from server: 91% by atomic.potato
struct S
{
    float x;
    float y;
    int texture;
    S& f(const S&);
};

extern "C" S& __stdcall TexturePtr_ctor(S*, const S*);

S& S::f(const S& value)
{
    x = value.x;
    y = value.y;
    TexturePtr_ctor((S*)((char*)this + 8), (const S*)((char*)&value + 8));
    return *this;
}
