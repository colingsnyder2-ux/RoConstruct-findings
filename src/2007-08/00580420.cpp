// from server: 67% by colin
struct S_func_00580420 {
    bool f(const char* s, bool* out);
};

extern "C" int (__stdcall* g_compare)(const char*, const char*);

bool S_func_00580420::f(const char* s, bool* out)
{
    if (g_compare(s, "TRUE") ||
        g_compare(s, "True") ||
        g_compare(s, "true"))
    {
        *out = true;
        return true;
    }
    if (g_compare(s, "FALSE") ||
        g_compare(s, "False") ||
        g_compare(s, "false"))
    {
        *out = false;
        return true;
    }
    return false;
}
