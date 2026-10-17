// from server: 63% by colin
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

extern "C" __declspec(dllimport) void __stdcall sub_80245c(void*, void*);

extern "C" void __cdecl sub_42ce50(void*, void*);

struct S {
    char pad0[0x14];
    int field14;
    char pad1[0x130 - 0x18];
    std::string field130;
    void func(int);
};

void S::func(int arg) {
    int* p = (this != 0) ? &this->field14 : 0;
    std::string tmp(this->field130);
    sub_42ce50((void*)0x97d428, p);
}
