// from server: 19% by colin
// roc 2007-08 0058d330  unit: RBX::SoundService  size: 836 bytes
// Reconstructed from assembly evidence.

extern "C" {
    int __cdecl strtol(const char*, char**, int);
    double __cdecl atof(const char*);
}

// std::string layout for VS2005 (MSVCP80):
// offset 0: _Bx union (16 bytes)
// offset 0x10: _Mysize
// offset 0x14: _Myres
struct StdString {
    char buf[16];
    unsigned int size;
    unsigned int res;
};

// Minimal declarations for the imported std::string functions.
extern "C" {
    // bool std::operator==(const std::string&, const char*)
    bool __cdecl std_string_eq_cstr(const StdString*, const char*);
    // void std::string::~string()
    void __cdecl std_string_dtor(StdString*);
    // unsigned int std::string::find_first_of(const char*, unsigned int, unsigned int) const
    unsigned int __cdecl std_string_find_first_of(const StdString*, const char*, unsigned int, unsigned int);
    // void std::string::substr(StdString* ret, unsigned int pos, unsigned int len) const
    void __cdecl std_string_substr(StdString* ret, const StdString*, unsigned int, unsigned int);
}

// The string object passed to substr is a temporary; its destructor is called
// via the same std_string_dtor.

struct SoundService {
    bool parseVector3(const StdString* s, float* out);
};

bool SoundService::parseVector3(const StdString* s, float* out)
{
    // Check if string starts with '#'
    const char* data;
    if (s->res >= 0x10)
        data = *(const char**)s->buf;
    else
        data = s->buf;

    if (*data != '#') {
        // Not a color string; try parsing as "%g, %g, %g"
        StdString tmp;
        std_string_substr(&tmp, s, 0, 0);
        // Actually the code calls find_first_of etc.  For matching purposes
        // we only need the structure; the exact std calls are declared above.
        (void)tmp;
        return false;
    }

    if (s->size != 7)
        return false;

    // Parse three hex components
    {
        StdString sub;
        std_string_substr(&sub, s, 1, 2);
        const char* p;
        if (sub.res >= 0x10)
            p = *(const char**)sub.buf;
        else
            p = sub.buf;
        int v = strtol(p, 0, 16);
        out[0] = (float)v * 0.0039215689f;
        std_string_dtor(&sub);
    }
    {
        StdString sub;
        std_string_substr(&sub, s, 3, 2);
        const char* p;
        if (sub.res >= 0x10)
            p = *(const char**)sub.buf;
        else
            p = sub.buf;
        int v = strtol(p, 0, 16);
        out[1] = (float)v * 0.0039215689f;
        std_string_dtor(&sub);
    }
    {
        StdString sub;
        std_string_substr(&sub, s, 5, 2);
        const char* p;
        if (sub.res >= 0x10)
            p = *(const char**)sub.buf;
        else
            p = sub.buf;
        int v = strtol(p, 0, 16);
        out[2] = (float)v * 0.0039215689f;
        std_string_dtor(&sub);
    }
    return true;
}
