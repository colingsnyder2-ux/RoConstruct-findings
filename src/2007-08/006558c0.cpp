// from server: 88% by colin
// roc 2007-08 006558c0  unit: CInstanceRecord::CNameItem  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006558c0
//
// 006558c0  56                   push esi
// 006558c1  8bf1                 mov esi, ecx
// 006558c3  e818fdffff           call 0x6555e0
// 006558c8  85c0                 test eax, eax
// 006558ca  7411                 je 0x6558dd
// 006558cc  8bce                 mov ecx, esi
// 006558ce  e80dfdffff           call 0x6555e0
// 006558d3  8b10                 mov edx, dword ptr [eax]
// 006558d5  5e                   pop esi
// 006558d6  8bc8                 mov ecx, eax
// 006558d8  8b527c               mov edx, dword ptr [edx + 0x7c]
// 006558db  ffe2                 jmp edx
// 006558dd  83c8ff               or eax, 0xffffffff
// 006558e0  5e                   pop esi
// 006558e1  c20400               ret 4

struct CNameItem {
    CNameItem* getSomething();
    int f(int);
};

int CNameItem::f(int a) {
    CNameItem* p = this->getSomething();
    if (p) {
        CNameItem* q = this->getSomething();
        int* vt = *(int**)q;
        int (__thiscall *fn)(CNameItem*, int) = (int (__thiscall *)(CNameItem*, int))vt[0x1f];
        return fn(q, a);
    }
    return -1;
}
