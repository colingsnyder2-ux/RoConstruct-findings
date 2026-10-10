// from server: 83% by colin
extern "C" {
    __declspec(dllimport) double __cdecl strtod(const char*, char**);
    __declspec(dllimport) unsigned long __cdecl strtoul(const char*, char**, int);
    __declspec(dllimport) int __cdecl isspace(int);
}

struct S {
    int f(const char* s, double* out);
};

int S::f(const char* s, double* out) {
    char* end;
    double d = strtod(s, &end);
    *out = d;
    if (end == s) {
        return 0;
    }
    if (*end == 'x' || *end == 'X') {
        char* e2;
        unsigned long v = strtoul(s, &e2, 16);
        *out = (double)(int)v;
        end = e2;
    }
    if (*end == 0) {
        return 1;
    }
    while (isspace((unsigned char)*end)) {
        end++;
    }
    return *end == 0;
}
