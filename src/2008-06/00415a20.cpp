// from server: 81% by king_originala
typedef long HRESULT;

struct S;
extern "C" HRESULT (__stdcall *SafeArrayCopy)(void*, void**);
extern void __cdecl G_func_004159e0(void*, S*);
namespace ATL {
    void __stdcall AtlThrowImpl(HRESULT);
}

struct S {
    unsigned short type;
    unsigned short reserved[3];
    union {
        void* array;
        HRESULT error;
    };
    S& assign(void* source);
};

S& S::assign(void* source)
{
    void* original = source;
    if (original) {
        HRESULT hr = SafeArrayCopy(original, &source);
        if (hr >= 0 && source) {
            G_func_004159e0(original, this);
            type |= 0x2000;
            array = source;
            return *this;
        }
        type = 10;
        error = hr;
        if (hr == (HRESULT)0x8007000E)
            ATL::AtlThrowImpl(hr);
        ATL::AtlThrowImpl((HRESULT)0x80070057);
    }
    type = 0;
    return *this;
}
