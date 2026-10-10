// from server: 42% by colin
// roc 2007-08 0070f690  unit: CXTPRichRender::XTextHost  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070f690

extern "C" {
    void* __stdcall wcschr(const wchar_t* s, wchar_t c);
    void* __stdcall sub_77D434(void* p);
    void* __stdcall sub_77DDBC(void* p);
    void* __stdcall sub_70F4D0(void* p, const wchar_t* a, int b);
}

struct CXTPRichRender_XTextHost {
    char pad0[0xc];
    unsigned int m_nLen;
    int Parse(const wchar_t** ppText);
};

int CXTPRichRender_XTextHost::Parse(const wchar_t** ppText) {
    const wchar_t* p = *ppText;
    const wchar_t* q = (const wchar_t*)wcschr(p, 0xd);
    if (q == 0 || (unsigned int)(q - p) > m_nLen)
        return 0;
    void* tmp = 0;
    sub_70F4D0(&tmp, p, (int)(q - p));
    sub_77D434(&tmp);
    sub_77DDBC(&tmp);
    const wchar_t* r = q + 1;
    *ppText = r;
    if (*r == 0xa)
        *ppText = r + 1;
    return 1;
}
