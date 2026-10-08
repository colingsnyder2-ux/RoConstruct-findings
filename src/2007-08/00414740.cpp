// from server: 100% by colin
// roc 2007-08 00414740  unit: DHTMLWindow  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00414740
//
// 00414740  56                   push esi
// 00414741  8bf1                 mov esi, ecx
// 00414743  e8b8921500           call 0x56da00
// 00414748  8906                 mov dword ptr [esi], eax
// 0041474a  8b442408             mov eax, dword ptr [esp + 8]
// 0041474e  50                   push eax
// 0041474f  8d4e04               lea ecx, [esi + 4]
// 00414752  e849faffff           call 0x4141a0
// 00414757  8bc6                 mov eax, esi
// 00414759  5e                   pop esi
// 0041475a  c20400               ret 4

struct DHTMLWindow {
    void* m_pUnknown;
    char m_pad[4];
    void* m_pInner;
    DHTMLWindow* Init(void* arg);
};

extern "C" void* __stdcall sub_56da00();

struct Inner {
    void Init(void* arg);
};

DHTMLWindow* DHTMLWindow::Init(void* arg)
{
    m_pUnknown = sub_56da00();
    ((Inner*)&m_pad[0])->Init(arg);
    return this;
}
