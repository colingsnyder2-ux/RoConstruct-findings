// from server: 59% by colin
struct CXTPRichRender_XTextHost {
    void* m_p;
    void* method(int a, int b);
};

extern "C" void* __stdcall sub_77E258(int a, int b);

void* CXTPRichRender_XTextHost::method(int a, int b)
{
    m_p = 0;
    sub_77E258(a, b);
    return this;
}
