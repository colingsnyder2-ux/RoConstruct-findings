// from server: 97% by colin
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
#pragma strict_gs_check(on)

extern "C" void (__thiscall *destroy_string)(void *);

struct String {
    char storage[28];
    __forceinline ~String();
};

__forceinline String::~String()
{
    destroy_string(this);
}

struct S_func_007accf0 {
    virtual ~S_func_007accf0();
};

struct S : S_func_007accf0 {
    char padding[8];
    String text;
    virtual ~S();
};

#pragma optimize("", off)

S::~S()
{
}
