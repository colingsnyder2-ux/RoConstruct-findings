// from server: 85% by king_originala
inline void* __cdecl operator new(unsigned int, void* p)
{
    return p;
}

inline void __cdecl operator delete(void*, void*)
{
}

struct Object
{
    Object(const Object& source);
    void copy(const Object& source);
};

inline Object::Object(const Object& source)
{
    copy(source);
}

Object* __stdcall construct(const Object* source, Object* storage)
{
    return new (storage) Object(*source);
}
