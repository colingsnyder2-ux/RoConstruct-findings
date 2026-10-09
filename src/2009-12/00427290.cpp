// roc 2009-12 00427290  unit: boost::any::H::?$holder  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00427290
//
// 00427290  56                   push esi
// 00427291  8b742408             mov esi, dword ptr [esp + 8]
// 00427295  57                   push edi
// 00427296  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0042729a  3bf7                 cmp esi, edi
// 0042729c  7418                 je 0x4272b6
// 0042729e  8bff                 mov edi, edi
// 004272a0  8b4e04               mov ecx, dword ptr [esi + 4]
// 004272a3  85c9                 test ecx, ecx
// 004272a5  7408                 je 0x4272af
// 004272a7  8b01                 mov eax, dword ptr [ecx]
// 004272a9  8b10                 mov edx, dword ptr [eax]
// 004272ab  6a01                 push 1
// 004272ad  ffd2                 call edx
// 004272af  83c608               add esi, 8
// 004272b2  3bf7                 cmp esi, edi
// 004272b4  75ea                 jne 0x4272a0
// 004272b6  5f                   pop edi
// 004272b7  5e                   pop esi
// 004272b8  c20800               ret 8
// copied from an identical function in another client (function ?func@ns_ROCX000004@@YGXPAUEntry@1@0@Z)

namespace ns_ROCX000004 {
struct Holder {
    virtual void destroy(char);
};

struct Entry {
    int pad;
    Holder* h;
};

void __stdcall func(Entry* first, Entry* last)
{
    while (first != last) {
        Holder* h = first->h;
        if (h) {
            h->destroy(1);
        }
        ++first;
    }
}
}
