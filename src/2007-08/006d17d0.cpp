// from server: 79% by colin
// roc 2007-08 006d17d0  unit: CXTPReportInplaceControl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d17d0
//
// 006d17d0  56                   push esi
// 006d17d1  8bf1                 mov esi, ecx
// 006d17d3  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 006d17d7  7439                 je 0x6d1812
// 006d17d9  837e6400             cmp dword ptr [esi + 0x64], 0
// 006d17dd  7440                 je 0x6d181f
// 006d17df  8b4658               mov eax, dword ptr [esi + 0x58]
// 006d17e2  85c0                 test eax, eax
// 006d17e4  7403                 je 0x6d17e9
// 006d17e6  8b4020               mov eax, dword ptr [eax + 0x20]
// 006d17e9  8b5620               mov edx, dword ptr [esi + 0x20]
// 006d17ec  6a01                 push 1
// 006d17ee  8d4c2410             lea ecx, [esp + 0x10]
// 006d17f2  51                   push ecx
// 006d17f3  50                   push eax
// 006d17f4  52                   push edx
// 006d17f5  ff152cee7700         call dword ptr [0x77ee2c]
// 006d17fb  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d17ff  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 006d1802  8b01                 mov eax, dword ptr [ecx]
// 006d1804  8b8098000000         mov eax, dword ptr [eax + 0x98]
// 006d180a  52                   push edx
// 006d180b  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d180f  52                   push edx
// 006d1810  ffd0                 call eax
// 006d1812  837e6400             cmp dword ptr [esi + 0x64], 0
// 006d1816  7407                 je 0x6d181f
// 006d1818  8bce                 mov ecx, esi
// 006d181a  e81feaf5ff           call 0x63023e
// 006d181f  5e                   pop esi
// 006d1820  c20c00               ret 0xc

struct CXTPReportInplaceControl
{
    char pad0[0x20];
    void* m_field20;
    char pad24[0x34];
    void* m_field58;
    void* m_field5c;
    char pad60[0x4];
    void* m_field64;
    void f(int a, int b, int c);
};

extern "C" void __stdcall MapWindowPoints(void*, void*, void*, unsigned int);
extern "C" void __stdcall sub_0063023e();

void CXTPReportInplaceControl::f(int a, int b, int c)
{
    if (m_field5c != 0)
    {
        if (m_field64 != 0)
        {
            void* p = m_field58;
            if (p != 0)
            {
                p = *(void**)((char*)p + 0x20);
            }
            void* pt = (void*)((char*)&a + 4);
            MapWindowPoints(m_field20, p, pt, 1);
            void* q = m_field5c;
            void* v = *(void**)q;
            void* fn = *(void**)((char*)v + 0x98);
            void* arg1 = *(void**)((char*)&a + 4);
            void* arg2 = *(void**)((char*)&a + 8);
            ((void (__stdcall*)(void*, void*))fn)(arg1, arg2);
        }
        if (m_field64 != 0)
        {
            sub_0063023e();
        }
    }
}
