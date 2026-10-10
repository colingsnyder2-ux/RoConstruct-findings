// from server: 28% by colin
// roc 2007-08 005025e0  unit: G3D::Log  size: 658 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005025e0

extern "C" {
    typedef unsigned int DWORD;
}

// std::string layout (MSVC80): 16-byte buffer, then size, then capacity
struct StdString {
    char buf[16];
    unsigned int size;
    unsigned int capacity;
};

// std::ofstream layout is opaque; we only pass pointers to it
struct StdOfstream;

// Imported std::string functions
extern "C" {
    void __stdcall string_ctor(StdString* self, const char* s);
    void __stdcall string_dtor(StdString* self);
    void __stdcall string_concat_ss(StdString* result, const StdString* a, const StdString* b);
    void __stdcall string_concat_sp(StdString* result, const StdString* a, const char* b);
}

// Internal call targets
void __cdecl sub_5019e0(StdString* s);
StdString* __cdecl sub_501f30(StdString* s);
StdString* __cdecl sub_501fe0(StdString* s);
void __cdecl sub_502090(StdString* out, const char* a, const char* b, const char* c);
void __cdecl sub_511dd0(const char* a, const char* b, const char* c, int d, int e);
void __cdecl sub_630a1e();

// Global data
extern const char g_79aba4[];
extern const char g_785954[];
extern const char g_79ffac[];
extern const char g_798e58[];
extern const char g_7a0010[];
extern const char g_7a0008[];
extern const char g_7a0000[];
extern const char g_898110[];
extern DWORD g_8b5188;

// Imported function pointers (as globals holding addresses)
extern "C" {
    void __stdcall fn_77e698(StdString* self, const char* s);
    void __stdcall fn_77e6ac(StdString* self);
    StdString* __stdcall fn_77e568(StdString* out, const StdString* a, const StdString* b);
    StdString* __stdcall fn_77e644(StdString* out, const StdString* a, const char* b);
}

struct G3D_Log {
    bool writeEntry(int severity, const char* message, const char* file, int line);
};

bool G3D_Log::writeEntry(int severity, const char* message, const char* file, int line)
{
    StdString s1;
    StdString s2;
    StdString s3;
    StdString s4;
    StdString s5;
    StdString s6;
    StdString s7;
    StdString s8;
    StdString s9;
    StdString s10;
    StdString s11;
    StdString s12;

    fn_77e698(&s1, g_79aba4);
    fn_77e698(&s2, g_785954);

    sub_502090(&s3, message, file, (const char*)line);

    fn_77e698(&s4, g_79ffac);
    fn_77e568(&s5, &s4, &s3);
    fn_77e644(&s6, &s5, g_798e58);
    fn_77e568(&s7, &s6, &s2);
    sub_501f30(&s8);
    sub_5019e0(&s8);

    fn_77e6ac(&s7);
    fn_77e6ac(&s6);
    fn_77e6ac(&s5);
    fn_77e6ac(&s4);

    sub_501fe0(&s4);
    StdString* p = &s4;

    fn_77e698(&s9, g_7a0010);
    fn_77e568(&s10, &s9, p);
    fn_77e644(&s11, &s10, g_7a0008);

    fn_77e6ac(&s4);
    fn_77e6ac(&s9);
    fn_77e6ac(&s10);

    const char* cstr;
    if (s11.capacity >= 16)
        cstr = *(const char**)s11.buf;
    else
        cstr = s11.buf;

    sub_511dd0(g_7a0000, cstr, g_898110, 1, line);

    fn_77e6ac(&s11);
    fn_77e6ac(&s3);
    fn_77e6ac(&s2);
    fn_77e6ac(&s1);

    return true;
}
