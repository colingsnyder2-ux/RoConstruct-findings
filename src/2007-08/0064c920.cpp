// from server: 67% by colin
// roc 2007-08 0064c920  unit: CXTPImageManagerIconSet  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064c920
//
// 0064c920  8bd1                 mov edx, ecx
// 0064c922  56                   push esi
// 0064c923  8d7240               lea esi, [edx + 0x40]
// 0064c926  8bce                 mov ecx, esi
// 0064c928  e8d3bcffff           call 0x648600
// 0064c92d  85c0                 test eax, eax
// 0064c92f  7407                 je 0x64c938
// 0064c931  8bca                 mov ecx, edx
// 0064c933  e878efffff           call 0x64b8b0
// 0064c938  8bc6                 mov eax, esi
// 0064c93a  5e                   pop esi
// 0064c93b  c3                   ret 

struct CXTPImageManagerIconSet {
    char pad[0x40];
    int field_40;
    int sub_648600();
    void sub_64B8B0();
    int* method();
};

int* CXTPImageManagerIconSet::method() {
    int* p = &field_40;
    if (sub_648600()) {
        sub_64B8B0();
    }
    return p;
}
