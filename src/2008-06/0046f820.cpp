// from server: 97% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" {
    extern void (__cdecl *_invalid_parameter_noinfo)();
}
void __cdecl operator delete(void *) throw();

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Alloc>
    class basic_string {
        unsigned char storage[28];
    public:
        __declspec(dllimport) ~basic_string();
    };
}

struct Object {
    virtual ~Object();
};

struct Iterator {
    void *proxy;
    Object **position;
};

struct Vector {
    void *proxy;
    unsigned char padding[8];
    Object **first;
    Object **last;
    Object **limit;

    Object *&at(unsigned int);
    void erase(Iterator *, Iterator, Iterator);
    void clear();
    ~Vector();
};

struct S {
    std::basic_string<char, std::char_traits<char>, std::allocator<char> > name;
    Vector objects;

    virtual ~S();
};

inline void Vector::clear()
{
    Object **endPosition = last;
    if (first > endPosition)
        _invalid_parameter_noinfo();

    Object **beginPosition = first;
    void *endProxy = proxy;
    if (beginPosition > last)
        _invalid_parameter_noinfo();

    Iterator begin;
    begin.proxy = proxy;
    begin.position = beginPosition;

    Iterator end;
    end.proxy = endProxy;
    end.position = endPosition;

    Iterator result;
    erase(&result, begin, end);

    if (first)
        operator delete(first);

    first = 0;
    last = 0;
    limit = 0;
}

inline Vector::~Vector()
{
    operator delete(proxy);
}

S::~S()
{
    Vector &v = objects;
    unsigned int count = v.last - v.first;
    for (unsigned int i = 0; i < count; ++i) {
        Object *p = v.at(i);
        if (p)
            delete p;
    }
    v.clear();
}
