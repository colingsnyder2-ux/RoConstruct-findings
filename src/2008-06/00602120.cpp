// from server: 49% by colin
namespace std {
template<class T> struct char_traits;
template<class T> class allocator;
template<class T, class Traits, class Allocator>
class basic_string {
    char storage[28];
public:
    __declspec(dllimport) basic_string();
    __declspec(dllimport) basic_string(const basic_string&);
    __declspec(dllimport) ~basic_string();
    __declspec(dllimport) basic_string& operator=(const basic_string&);
};
typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

extern "C" void* __stdcall malloc(unsigned int);
extern "C" void __stdcall free(void*);

struct VTool {
    void BoundPropGetSet(void*, const std::string&);
};

struct UnifiedImageWidget {
    void sub_6015F0(void*, const std::string&);
    void sub_64E8C0(const std::string&);
    void* method(void* a, const std::string& b);
};

void* UnifiedImageWidget::method(void* a, const std::string& b) {
    void* mem = malloc(0x164);
    void* result;
    if (mem) {
        std::string tmp(b);
        ((VTool*)mem)->BoundPropGetSet(a, tmp);
        result = mem;
    } else {
        result = 0;
    }
    sub_6015F0(a, b);
    return result;
}
