// from server: 51% by colin
// roc 2007-08 0070f4d0  unit: CXTPRichRender::XTextHost  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070f4d0
//
// 0070f4d0  51                   push ecx
// 0070f4d1  8b442410             mov eax, dword ptr [esp + 0x10]
// 0070f4d5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070f4d9  56                   push esi
// 0070f4da  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0070f4de  50                   push eax
// 0070f4df  51                   push ecx
// 0070f4e0  8bce                 mov ecx, esi
// 0070f4e2  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0070f4ea  ff1558e27700         call dword ptr [0x77e258]
// 0070f4f0  8bc6                 mov eax, esi
// 0070f4f2  5e                   pop esi
// 0070f4f3  59                   pop ecx
// 0070f4f4  c3                   ret 

struct CXTPRichRender_XTextHost
{
    int method(int, int);
};

extern "C" int (__stdcall *g_fn)(int, int);

int CXTPRichRender_XTextHost::method(int a, int b)
{
    int local = 0;
    g_fn(a, b);
    return (int)this;
}
