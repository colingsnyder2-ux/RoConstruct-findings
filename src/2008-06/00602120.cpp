// from server: 53% by colin
typedef unsigned int size_t;

extern "C" void* __cdecl malloc(size_t);

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;
    template<class T, class Traits, class Allocator>
    class basic_string {
        char storage[28];
    public:
        basic_string();
        basic_string(const basic_string&);
        ~basic_string();
        basic_string& operator=(const basic_string&);
    };
    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

struct Widget {
    void* vtable;
    char pad[0x160];
};

struct UnifiedImageWidget {
    void construct(std::string*, Widget*);
};

extern void (__thiscall *stringCopy)(std::string*, const std::string*);
extern void (__thiscall *stringDestroy)(std::string*);

extern void (__thiscall *setImage)(UnifiedImageWidget*, void*, void*);

UnifiedImageWidget* __cdecl createWidget(const std::string& name);

UnifiedImageWidget* __cdecl createWidget(const std::string& name)
{
    Widget* w = (Widget*)malloc(0x164);
    UnifiedImageWidget* result;
    if (w != 0)
    {
        std::string tmp;
        stringCopy(&tmp, &name);
        ((UnifiedImageWidget*)w)->construct(&tmp, w);
        stringDestroy(&tmp);
        result = (UnifiedImageWidget*)w;
    }
    else
    {
        result = 0;
    }
    setImage(result, 0, 0);
    return result;
}
