// from server: 45% by atomic.potato
// roc 2011-06 00413650  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00413650
//
// 00413650  8b0da4a3c000         mov ecx, dword ptr [0xc0a3a4]
// 00413656  33c0                 xor eax, eax
// 00413658  85c9                 test ecx, ecx
// 0041365a  7408                 je 0x413664
// 0041365c  3905aca3c000         cmp dword ptr [0xc0a3ac], eax
// 00413662  7515                 jne 0x413679
// 00413664  8b442410             mov eax, dword ptr [esp + 0x10]
// 00413668  50                   push eax
// 00413669  b998a3c000           mov ecx, 0xc0a398
// 0041366e  e8cd40ffff           call 0x407740
// 00413673  8b0da4a3c000         mov ecx, dword ptr [0xc0a3a4]
// 00413679  85c9                 test ecx, ecx
// 0041367b  742b                 je 0x4136a8
// 0041367d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00413681  8b11                 mov edx, dword ptr [ecx]
// 00413683  50                   push eax
// 00413684  8b442424             mov eax, dword ptr [esp + 0x24]
// 00413688  50                   push eax
// 00413689  8b442424             mov eax, dword ptr [esp + 0x24]
// 0041368d  50                   push eax
// 0041368e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00413692  50                   push eax
// 00413693  8b442424             mov eax, dword ptr [esp + 0x24]
// 00413697  50                   push eax
// 00413698  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0041369c  50                   push eax
// 0041369d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004136a1  50                   push eax
// 004136a2  51                   push ecx
// 004136a3  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 004136a6  ffd1                 call ecx
// 004136a8  c22400               ret 0x24

struct CComObjectNoLock {
    void Method(int, int, int, int, int, int, int, int, int);
};

extern "C" void __stdcall sub_407740(int);

extern int g_00c0a3a4;
extern int g_00c0a3ac;
extern char g_00c0a398;

void __stdcall sub_00413650(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    int ecx = g_00c0a3a4;
    int eax = 0;
    if (ecx == 0 || g_00c0a3ac == eax)
    {
        sub_407740(a9);
        ecx = g_00c0a3a4;
    }
    if (ecx != 0)
    {
        int edx = *(int*)ecx;
        int (*fn)(int, int, int, int, int, int, int, int, int) = *(int (**)(int, int, int, int, int, int, int, int, int))(edx + 0x2c);
        fn(ecx, a1, a2, a3, a4, a5, a6, a7, a8);
    }
}
