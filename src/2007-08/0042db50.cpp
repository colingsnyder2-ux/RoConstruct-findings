// from server: 100% by colin
// roc 2007-08 0042db50  unit: boost::any::_N::?$holder  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042db50
//
// 0042db50  56                   push esi
// 0042db51  8b742408             mov esi, dword ptr [esp + 8]
// 0042db55  57                   push edi
// 0042db56  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0042db5a  3bf7                 cmp esi, edi
// 0042db5c  7418                 je 0x42db76
// 0042db5e  8bff                 mov edi, edi
// 0042db60  8b4e04               mov ecx, dword ptr [esi + 4]
// 0042db63  85c9                 test ecx, ecx
// 0042db65  7408                 je 0x42db6f
// 0042db67  8b01                 mov eax, dword ptr [ecx]
// 0042db69  8b10                 mov edx, dword ptr [eax]
// 0042db6b  6a01                 push 1
// 0042db6d  ffd2                 call edx
// 0042db6f  83c608               add esi, 8
// 0042db72  3bf7                 cmp esi, edi
// 0042db74  75ea                 jne 0x42db60
// 0042db76  5f                   pop edi
// 0042db77  5e                   pop esi
// 0042db78  c20800               ret 8

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
