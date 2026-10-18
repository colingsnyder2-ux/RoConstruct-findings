// from server: 14% by colin




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

struct Base {
    virtual void slot();
    char storage[8];
    Base(void*, std::string);
};

struct SignalDesc : Base {
    void* owner;
};

struct Ctor0 { void ctor(void*); };
struct Ctor1 { void ctor(void*); };
struct Ctor2 { void ctor(void*); };
struct Ctor3 { void ctor(void*); };
struct Ctor4 { void ctor(void*); };
struct Ctor5 { void ctor(void*); };
struct Ctor6 { void ctor(void*); };
struct Ctor7 { void ctor(void*); };
struct Ctor8 { void ctor(void*); };
struct Ctor9 { void ctor(void*); };
struct CtorA { void ctor(void*); };
struct CtorB { void ctor(void*); };
struct CtorC { void ctor(void*); };
struct CtorD { void ctor(void*); };
struct CtorE { void ctor(void*); };
struct CtorF { void ctor(void*); };
struct CtorG { void ctor(void*); };
struct CtorH { void ctor(void*); };
struct CtorI { void ctor(void*); };
struct CtorJ { void ctor(void*); };
struct CtorK { void ctor(void*); };
struct CtorL { void ctor(void*); };
struct CtorM { void ctor(void*); };
struct CtorN { void ctor(void*); };
struct CtorO { void ctor(void*); };
struct CtorP { void ctor(void*); };
struct CtorQ { void ctor(void*); };
struct CtorR { void ctor(void*); };
struct CtorS { void ctor(void*); };
struct CtorT { void ctor(void*); };
struct CtorU { void ctor(void*); };

extern "C" void __stdcall sub_57E8D0(void*, void*);
extern "C" void __stdcall sub_57E330(void*, void*);
extern "C" void __stdcall sub_57E7E0(void*, void*);
extern "C" void __stdcall sub_57E870(void*, void*);
extern "C" void __stdcall sub_57E810(void*, void*);
extern "C" void __stdcall sub_57E840(void*, void*);
extern "C" void __stdcall sub_57E8A0(void*, void*);
extern "C" void __stdcall sub_57E950(void*, void*);
extern "C" void __stdcall sub_57E980(void*, void*);
extern "C" void __stdcall sub_57E9B0(void*, void*);
extern "C" void __stdcall sub_57E9E0(void*, void*);
extern "C" void __stdcall sub_5C6010(void*, void*);
extern "C" void __stdcall sub_5C5300(void*, void*);
extern "C" void __stdcall sub_5C5380(void*, void*);
extern "C" void __stdcall sub_57E730(void*, void*);
extern "C" void __stdcall sub_5C5400(void*, void*);
extern "C" void __stdcall sub_5C5490(void*, void*);
extern "C" void __stdcall sub_57EA10(void*, void*);
extern "C" void __stdcall sub_57F650(void*, void*);
extern "C" void __stdcall sub_57F680(void*, void*);
extern "C" void __stdcall sub_57F6B0(void*, void*);
extern "C" void __stdcall sub_57F6E0(void*, void*);
extern "C" void __stdcall sub_57D450(void*, void*);
extern "C" void __stdcall sub_57D4A0(void*, void*);
extern "C" void __stdcall sub_57D2D0(void*, void*);
extern "C" void __stdcall sub_57D320(void*, void*);
extern "C" void __stdcall sub_57D370(void*, void*);
extern "C" void __stdcall sub_57D3B0(void*, void*);
extern "C" void __stdcall sub_57D400(void*, void*);
extern "C" void __stdcall sub_557330(void*, void*);
extern "C" void __stdcall sub_5A0390(void*, void*);

struct LaserTool {
    void construct(void*);
};

void LaserTool::construct(void* arg) {
    char* self = (char*)this;
    std::string s1("AllCanSelect");
    sub_57E8D0(self, arg);
    *(void**)self = (void*)0x838f2c;
    std::string s2("AnchorVerb");
    sub_57E8D0(self + 0x28, arg);
    *(void**)(self + 0x28) = (void*)0x80e978;
    std::string s3("CanNotSelect");
    sub_57E330(self + 0x50, arg);
    *(void**)(self + 0x50) = (void*)0x838f50;
    sub_57E7E0(self + 0x6c, arg);
    sub_57E870(self + 0x90, arg);
    sub_57E810(self + 0xb4, arg);
    sub_57E840(self + 0xd8, arg);
    sub_57E8A0(self + 0xfc, arg);
    sub_57E950(self + 0x120, arg);
    sub_57E980(self + 0x144, arg);
    sub_57E9B0(self + 0x168, arg);
    sub_57E9E0(self + 0x18c, arg);
    sub_5C6010(self + 0x1b0, arg);
    sub_5C5300(self + 0x1d8, arg);
    sub_5C5380(self + 0x200, arg);
    std::string s4("Delete");
    sub_57E730(self + 0x228, arg);
    *(void**)(self + 0x228) = (void*)0x838fec;
    std::string s5("Pause");
    sub_57E330(self + 0x24c, arg);
    *(void**)(self + 0x24c) = (void*)0x838fc4;
    sub_5C5400(self + 0x268, arg);
    sub_5C5490(self + 0x290, arg);
    sub_57EA10(self + 0x2b8, arg);
    sub_57F650(self + 0x2dc, arg);
    sub_57F680(self + 0x300, arg);
    sub_57F6B0(self + 0x324, arg);
    sub_57F6E0(self + 0x348, arg);
    sub_57D450(self + 0x36c, arg);
    sub_57D4A0(self + 0x37c, arg);
    std::string s6("PlayDelete");
    sub_57E330(self + 0x38c, arg);
    *(void**)(self + 0x38c) = (void*)0x83905c;
    std::string s7("Reset");
    sub_57E330(self + 0x3a8, arg);
    *(void**)(self + 0x3a8) = (void*)0x839074;
    std::string s8("SelectAll");
    sub_57E330(self + 0x3c4, arg);
    *(void**)(self + 0x3c4) = (void*)0x83908c;
    sub_57D2D0(self + 0x3e0, arg);
    sub_57D320(self + 0x3f0, arg);
    sub_57D370(self + 0x400, arg);
    sub_57D3B0(self + 0x40c, arg);
    sub_57D400(self + 0x41c, arg);
    sub_557330(self + 0x42c, arg);
    sub_5A0390(self + 0x42c, arg);
}
