// from server: 45% by colin
extern "C" unsigned short __stdcall RegisterClipboardFormatA(const char*);

struct CStringLike {
    void* data;
    void CStringLike_ctor();
    void CStringLike_dtor();
    int Compare(const char*);
    int CompareChar(char);
    int CompareChar2(char);
};

struct CXTPReportControl {
    int IsClipboardFormatAvailable();
};

extern "C" int __cdecl sub_656810();

int CXTPReportControl::IsClipboardFormatAvailable()
{
    if (sub_656810())
        return 0;

    unsigned short fmt = RegisterClipboardFormatA("XTPReport_CF_Records");

    CStringLike s;
    s.CStringLike_ctor();
    int result = 0;
    if (s.Compare("SVWP") != 0 &&
        s.CompareChar(1) == 0 &&
        s.CompareChar(13) == 0 &&
        s.CompareChar2((char)fmt) != 0)
    {
        result = 1;
    }
    s.CStringLike_dtor();
    return result;
}
