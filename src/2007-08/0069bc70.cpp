// from server: 100% by colin
// roc 2007-08 0069bc70  unit: CXTPPropertyGridView  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069bc70
//
// 0069bc70  8b442404             mov eax, dword ptr [esp + 4]
// 0069bc74  50                   push eax
// 0069bc75  e8a6ffffff           call 0x69bc20
// 0069bc7a  8bc8                 mov ecx, eax
// 0069bc7c  85c9                 test ecx, ecx
// 0069bc7e  7416                 je 0x69bc96
// 0069bc80  83b99c00000000       cmp dword ptr [ecx + 0x9c], 0
// 0069bc87  7408                 je 0x69bc91
// 0069bc89  e832c7ffff           call 0x6983c0
// 0069bc8e  c20400               ret 4
// 0069bc91  e88ac7ffff           call 0x698420
// 0069bc96  c20400               ret 4

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
