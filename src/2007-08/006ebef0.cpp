// from server: 46% by colin
struct CStringData
{
    int refs;
    int length;
    char data[1];
};

struct CString
{
    CStringData* m_pData;
    CString();
    ~CString();
    void SetAt(int index, char ch);
};

struct CXTPDockingPaneContextStickerWnd
{
    void OnPaint(int a, int b, int c, int d);
};

extern "C" void __stdcall sub_6304C0(CString* p);
extern "C" void __stdcall sub_6304A2(CString* p, int a, int b, int c, int d, int e);
extern "C" void __stdcall sub_6304BA(CString* p);
extern "C" void* __stdcall sub_62FF02(int a, int b, int c);
extern "C" void __stdcall sub_41EEB0(void* p);
extern "C" void __stdcall sub_651870(void* p);

void CXTPDockingPaneContextStickerWnd::OnPaint(int a, int b, int c, int d)
{
    CString str;
    sub_6304C0(&str);
    sub_6304A2(&str, a, b, 0x19, 0, 1);
    int len = 0;
    if (str.m_pData)
        len = str.m_pData->length;
    void* p1 = sub_62FF02(len, 0xff00, 0);
    void* p2 = *(void**)((char*)p1 + 0x94);
    sub_41EEB0(*(void**)p2);
    int len2 = 0;
    if (str.m_pData)
        len2 = str.m_pData->length;
    void* p3 = sub_62FF02(len2, 0, 0);
    void* p4 = *(void**)((char*)p3 + 0x94);
    sub_651870(*(void**)p4);
    sub_6304BA(&str);
}
