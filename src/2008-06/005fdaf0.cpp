// from server: 70% by king_originala
extern "C" void (__cdecl* _invalid_parameter_noinfo)();
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

struct Entry {
    void* object;
    void* control;
};

struct Children {
    char padding[12];
    Entry* volatile first;
    Entry* volatile last;

    unsigned int size() const;
    Entry& at(unsigned int);
};

__forceinline unsigned int Children::size() const
{
    Entry* end = last;
    Entry* begin = first;
    return (unsigned int)(end - begin);
}

__forceinline Entry& Children::at(unsigned int i)
{
    if (i >= size())
        _invalid_parameter_noinfo();
    return first[i];
}

struct Renderable {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void render(void*, void*);
};

struct S {
    void f(void*, void*);
};

void S::f(void* a, void* b)
{
    for (unsigned int i = 0;
         i < (*(Children**)((char*)this - 0xa8)
                  ? (*(Children**)((char*)this - 0xa8))->size()
                  : 0);
         ++i) {
        Children* children = *(Children**)((char*)this - 0xa8);
        Renderable* object = (Renderable*)__RTDynamicCast(
            children->at(i).object, 0,
            (void*)0x92907c, (void*)0x939f70, 0);
        if (object)
            object->render(a, b);
    }
}
