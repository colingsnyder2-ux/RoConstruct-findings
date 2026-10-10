// from server: 69% by colin
extern "C" {
    int __cdecl isdigit(int c);
    char* __cdecl strchr(const char* s, int c);
    char* __cdecl strncpy(char* dest, const char* src, unsigned int count);
    int __cdecl sprintf(char* buffer, const char* format, ...);
}

struct Formatter {
    char* parse(char* fmt, char* out);
};

char* Formatter::parse(char* fmt, char* out) {
    char* p = fmt;
    int (*isdigit_fn)(int) = isdigit;
    while (isdigit_fn((char)*p)) {
        p++;
    }
    if (p - fmt >= 6) {
        sprintf(out, "invalid format (width or precision too long)");
    }
    if (isdigit_fn((char)*p)) {
        p++;
    }
    if (isdigit_fn((char)*p)) {
        p++;
    }
    if (*p == '.') {
        p++;
        if (isdigit_fn((char)*p)) {
            p++;
        }
        if (isdigit_fn((char)*p)) {
            p++;
        }
    }
    if (isdigit_fn((char)*p)) {
        sprintf(out, "invalid format (repeated flags)");
    }
    int len = p - fmt;
    *out = '%';
    out++;
    strncpy(out, fmt, len + 1);
    out[len + 1] = 0;
    return p;
}
