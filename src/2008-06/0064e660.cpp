// from server: 34% by colin
struct Value {
    int fields[5];
};

struct S {
    char pad[0x130];
    Value value;
    void set(const Value& source);
};

namespace std {
template<class T> struct char_traits;
template<class T> class allocator;
template<class T, class Traits, class Alloc>
class __declspec(dllimport) basic_string {
    char storage[28];
public:
    basic_string(const T*);
    basic_string(const basic_string&);
    basic_string(unsigned int, char);
    ~basic_string();
};
typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

struct Arg0 {
    int type;
    char pad[4];
    unsigned char flag;
};

struct GetSetImpl {
    char pad[0x14];
    Value value;
    void set(const Value& source);
    void invoke(Arg0* arg);
};

void GetSetImpl::invoke(Arg0* arg)
{
    int t = arg->type;
    switch (t) {
    case 1:
        set(*(Value*)arg);
        if (this) {
            std::string s((const char*)((char*)this + 0x14));
            (void)s;
        } else {
            std::string s((const char*)0);
            (void)s;
        }
        break;
    case 2:
        set(*(Value*)arg);
        if (this) {
            std::string s((const char*)((char*)this + 0x14));
            (void)s;
        } else {
            std::string s((const char*)0);
            (void)s;
        }
        break;
    case 3:
        set(*(Value*)arg);
        if (this) {
            std::string s((const char*)((char*)this + 0x14));
            (void)s;
        } else {
            std::string s((const char*)0);
            (void)s;
        }
        break;
    case 4:
        set(*(Value*)arg);
        if (this) {
            std::string s((const char*)((char*)this + 0x14));
            (void)s;
        } else {
            std::string s((const char*)0);
            (void)s;
        }
        break;
    case 5:
        set(*(Value*)arg);
        if (this) {
            std::string s((const char*)((char*)this + 0x14));
            (void)s;
        } else {
            std::string s((const char*)0);
            (void)s;
        }
        break;
    case 6:
        set(*(Value*)arg);
        if (this) {
            std::string s((const char*)((char*)this + 0x14));
            (void)s;
        } else {
            std::string s((const char*)0);
            (void)s;
        }
        break;
    case 7:
        if (this) {
            std::string s((const char*)((char*)this + 0x14));
            (void)s;
        } else {
            std::string s((const char*)0);
            (void)s;
        }
        break;
    case 8:
        if (this) {
            std::string s((const char*)((char*)this + 0x14));
            (void)s;
        } else {
            std::string s((const char*)0);
            (void)s;
        }
        break;
    case 9:
        if (this) {
            std::string s((const char*)((char*)this + 0x14));
            (void)s;
        } else {
            std::string s((const char*)0);
            (void)s;
        }
        break;
    case 10:
        {
            char* p = this ? ((char*)this + 0x14) : 0;
            unsigned char f = arg->flag;
            std::string s((unsigned int)f, (char)1);
            (void)s;
            (void)p;
        }
        break;
    default:
        break;
    }
}
