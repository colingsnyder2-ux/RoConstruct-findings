// from server: 96% by colin
// roc 2007-08 0064f210  unit: CXTPToolBar::CControlButtonExpand  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064f210
//
// 0064f210  8b442404             mov eax, dword ptr [esp + 4]
// 0064f214  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0064f218  56                   push esi
// 0064f219  8bf1                 mov esi, ecx
// 0064f21b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064f21f  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 0064f225  8b442414             mov eax, dword ptr [esp + 0x14]
// 0064f229  898ec4000000         mov dword ptr [esi + 0xc4], ecx
// 0064f22f  8996c8000000         mov dword ptr [esi + 0xc8], edx
// 0064f235  8bce                 mov ecx, esi
// 0064f237  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0064f23d  e80efaffff           call 0x64ec50
// 0064f242  898678010000         mov dword ptr [esi + 0x178], eax
// 0064f248  5e                   pop esi
// 0064f249  c21000               ret 0x10

struct CXTPToolBar_CControlButtonExpand {
    char pad[0xc0];
    int m_0xc0;
    int m_0xc4;
    int m_0xc8;
    int m_0xcc;
    char pad2[0x178 - 0xd0];
    int m_0x178;
    int sub_0064ec50();
    void sub_0064f210(int a, int b, int c, int d);
};

void CXTPToolBar_CControlButtonExpand::sub_0064f210(int a, int b, int c, int d)
{
    m_0xc0 = a;
    m_0xc4 = b;
    m_0xc8 = c;
    m_0xcc = d;
    m_0x178 = sub_0064ec50();
}
