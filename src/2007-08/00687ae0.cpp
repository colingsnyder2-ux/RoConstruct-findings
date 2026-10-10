// from server: 53% by colin
// roc 2007-08 00687ae0  unit: CXTPPropExchangeXMLNode  size: 302 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00687ae0

extern "C" int __cdecl sscanf_s(const char*, const char*, ...);
extern "C" int __stdcall sub_45D8B0(int*, double*);

struct CXTPPropExchangeXMLNode
{
    int ReadDateTime(double* out);
};

int CXTPPropExchangeXMLNode::ReadDateTime(double* out)
{
    unsigned short a, b, c, d, e, f;
    int result;
    int tmp;
    double val;

    result = sscanf_s((const char*)0x7cf684, "%hu-%hu-%huT%hu:%hu:%hu",
                      &a, &b, &c, &d, &e, &f);
    if (result == 3 || result == 5 || result == 6)
    {
        val = 0.0;
        tmp = 0;
        if (sub_45D8B0(&tmp, &val) == 0)
        {
            *(int*)out = tmp;
            *((int*)out + 1) = *((int*)&val);
            *((int*)out + 2) = 0;
            return 1;
        }
        return 0;
    }

    a = 0; b = 0; c = 0; d = 0;
    result = sscanf_s((const char*)0x7cf678, "%hu:%hu:%hu", &a, &b, &c);
    if (result == 2 || result == 3)
    {
        int total = (int)a * 3600 + (int)b * 60 + (int)c;
        *(double*)out = (double)total / *(double*)0x7cf670;
        *((int*)out + 2) = 0;
        return 1;
    }
    return 0;
}
