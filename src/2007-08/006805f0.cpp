// from server: 34% by colin
struct CXTPBitmapDC {
    void* m_vtbl;
    void* m_unknown4;
    void* m_unknown8;
    int m_unknownC;
    void* m_unknown10;
    void Construct(int bitmap, int destinationDC);
};

extern "C" void* __stdcall CreateCompatibleDC(int hdc);
extern "C" void* __stdcall SelectObject(void* hdc, void* obj);
extern "C" void __stdcall sub_630238();

void CXTPBitmapDC::Construct(int bitmap, int destinationDC)
{
    m_vtbl = (void*)0x7cece0;
    m_unknown4 = (void*)0x7cec38;
    m_unknown8 = 0;
    m_unknownC = bitmap;
    void* dc = CreateCompatibleDC(destinationDC);
    sub_630238();
    void* old = SelectObject(dc, (void*)m_unknown8);
    m_unknown10 = old;
}
