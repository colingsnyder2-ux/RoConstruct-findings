// from server: 100% by colin
// roc 2007-08 006f55b0  unit: CXTPControlCustom  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f55b0
//
// 006f55b0  56                   push esi
// 006f55b1  8bf1                 mov esi, ecx
// 006f55b3  8b8670010000         mov eax, dword ptr [esi + 0x170]
// 006f55b9  85c0                 test eax, eax
// 006f55bb  7416                 je 0x6f55d3
// 006f55bd  50                   push eax
// 006f55be  ff15a0ed7700         call dword ptr [0x77eda0]
// 006f55c4  85c0                 test eax, eax
// 006f55c6  740b                 je 0x6f55d3
// 006f55c8  8bce                 mov ecx, esi
// 006f55ca  e8a149f4ff           call 0x639f70
// 006f55cf  85c0                 test eax, eax
// 006f55d1  7416                 je 0x6f55e9
// 006f55d3  8b442410             mov eax, dword ptr [esp + 0x10]
// 006f55d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f55db  8b542408             mov edx, dword ptr [esp + 8]
// 006f55df  50                   push eax
// 006f55e0  51                   push ecx
// 006f55e1  52                   push edx
// 006f55e2  8bce                 mov ecx, esi
// 006f55e4  e80750fdff           call 0x6ca5f0
// 006f55e9  5e                   pop esi
// 006f55ea  c20c00               ret 0xc

struct CXTPControlCustom {
    char pad[0x170];
    void* field_170;
    void m(int, int, int);
    int sub_639f70();
    void sub_6ca5f0(int, int, int);
};

extern "C" int (__stdcall *IsWindowVisible)(void*);

void CXTPControlCustom::m(int a, int b, int c)
{
    if (field_170 != 0) {
        if (IsWindowVisible(field_170) != 0) {
            if (sub_639f70() == 0) {
                return;
            }
        }
    }
    sub_6ca5f0(a, b, c);
}
