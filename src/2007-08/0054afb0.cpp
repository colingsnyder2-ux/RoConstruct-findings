// from server: 80% by colin
extern "C" int __cdecl _mbscmp(const unsigned short*, const unsigned short*);
extern "C" void __stdcall ReportError(unsigned int);

int __cdecl sub_0054afb0(unsigned short** a, unsigned short* b)
{
    unsigned short* p = b;
    if (p == 0)
        ReportError(0x80004005);
    unsigned short* q = *a;
    int r = _mbscmp(q, p);
    return r == 0 ? 1 : 0;
}
