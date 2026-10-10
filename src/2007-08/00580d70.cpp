// from server: 38% by colin
struct Log;

extern "C" int __stdcall sub_77E5F8(const char*, const char*);

extern float* g_77E49C;
extern float* g_77E4A0;

extern const char str_7AC014[];
extern const char str_7AC00C[];
extern const char str_7AC008[];

struct Log
{
    char pad[0x14];
    void* field14;
    bool getValue(const char* name, float* out);
    float computeValue();
};

bool Log::getValue(const char* name, float* out)
{
    if (field14 == 0)
        return false;

    if (sub_77E5F8((const char*)this, str_7AC014))
    {
        *out = *g_77E49C;
        return true;
    }
    if (sub_77E5F8((const char*)this, str_7AC00C))
    {
        *out = -*g_77E49C;
        return true;
    }
    if (sub_77E5F8((const char*)this, str_7AC008))
    {
        *out = *g_77E4A0;
        return true;
    }
    *out = computeValue();
    return true;
}
