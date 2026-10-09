// from server: 50% by colin
// roc 2007-08 006a8190  unit: CXTPRibbonBar  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a8190
//
// 006a8190  83b91001000000       cmp dword ptr [ecx + 0x110], 0
// 006a8197  7509                 jne 0x6a81a2
// 006a8199  83b91401000000       cmp dword ptr [ecx + 0x114], 0
// 006a81a0  7418                 je 0x6a81ba
// 006a81a2  8b9110010000         mov edx, dword ptr [ecx + 0x110]
// 006a81a8  8b442404             mov eax, dword ptr [esp + 4]
// 006a81ac  8b8914010000         mov ecx, dword ptr [ecx + 0x114]
// 006a81b2  8910                 mov dword ptr [eax], edx
// 006a81b4  894804               mov dword ptr [eax + 4], ecx
// 006a81b7  c20400               ret 4
// 006a81ba  e881b8f9ff           call 0x643a40
// 006a81bf  8bc8                 mov ecx, eax
// 006a81c1  e82a4df9ff           call 0x63cef0
// 006a81c6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006a81ca  8901                 mov dword ptr [ecx], eax
// 006a81cc  894104               mov dword ptr [ecx + 4], eax
// 006a81cf  8bc1                 mov eax, ecx
// 006a81d1  c20400               ret 4

struct CXTPRibbonBar {
    char pad[0x110];
    int m_nFrameBorder;
    int m_nFrameBorder2;
    int* GetFrameBorder(int* out);
};

extern "C" void* __stdcall sub_643A40();
extern "C" void* __stdcall sub_63CEF0(void* p);

int* CXTPRibbonBar::GetFrameBorder(int* out)
{
    if (m_nFrameBorder == 0 || m_nFrameBorder2 != 0)
    {
        int a = m_nFrameBorder;
        int b = m_nFrameBorder2;
        out[0] = a;
        out[1] = b;
        return out;
    }
    void* p = sub_643A40();
    void* q = sub_63CEF0(p);
    out[0] = (int)q;
    out[1] = (int)q;
    return out;
}
