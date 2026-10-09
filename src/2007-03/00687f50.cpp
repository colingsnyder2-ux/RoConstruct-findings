// roc 2007-03 00687f50  unit: seg_00680000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00687f50
//
// 00687f50  8b442404             mov eax, dword ptr [esp + 4]
// 00687f54  50                   push eax
// 00687f55  e8a6ffffff           call 0x687f00
// 00687f5a  8bc8                 mov ecx, eax
// 00687f5c  85c9                 test ecx, ecx
// 00687f5e  7416                 je 0x687f76
// 00687f60  83b99c00000000       cmp dword ptr [ecx + 0x9c], 0
// 00687f67  7408                 je 0x687f71
// 00687f69  e8b2b7ffff           call 0x683720
// 00687f6e  c20400               ret 4
// 00687f71  e80ab8ffff           call 0x683780
// 00687f76  c20400               ret 4
// copied from an identical function in another client (function ?sub_69BC70@ns_ROCX000000@@YGXH@Z)

namespace ns_ROCX000000 {
struct CXTPPropertyGridView;

extern "C" CXTPPropertyGridView* __stdcall sub_69BC20(int);

struct CXTPPropertyGridView
{
    char pad[0x9c];
    int field_0x9c;
    void sub_6983C0();
    void sub_698420();
};

void __stdcall sub_69BC70(int a)
{
    CXTPPropertyGridView* p = sub_69BC20(a);
    if (p != 0)
    {
        if (p->field_0x9c != 0)
        {
            p->sub_6983C0();
        }
        else
        {
            p->sub_698420();
        }
    }
}
}
