// from server: 69% by colin
namespace std {
template<class T> struct char_traits;
template<class T> class allocator;
template<class T, class Traits, class Alloc>
class __declspec(dllimport) basic_string {
char storage[28];
public:
basic_string(const T*);
basic_string(const basic_string&);
~basic_string();
};
typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

extern "C" void* __stdcall sub_80245c(void*, void*);

struct S {
    int f(std::string* arg);
};

int S::f(std::string* arg) {
    char* p = (char*)this;
    std::string* src;
    if (p != 0)
        src = (std::string*)(p + 0x14);
    else
        src = 0;
    char tmp[28];
    sub_80245c(tmp, p + 0x130);
    std::string* dst = (std::string*)0x97d428;
    dst->basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<char, std::char_traits<char>, std::allocator<char> >(*src);
    return 0;
}
