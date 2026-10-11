// from server: 69% by colin
// roc 2007-08 00648780  unit: CXTPCommandBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00648780
//
// 00648780  8bd1                 mov edx, ecx
// 00648782  8d8a80000000         lea ecx, [edx + 0x80]
// 00648788  e873feffff           call 0x648600
// 0064878d  85c0                 test eax, eax
// 0064878f  7503                 jne 0x648794
// 00648791  8bc1                 mov eax, ecx
// 00648793  c3                   ret 
// 00648794  8bca                 mov ecx, edx
// 00648796  e9a5ffffff           jmp 0x648740

struct CXTPCommandBar {
    int sub_648600();
    int sub_648740();
    int func();
};

int CXTPCommandBar::func() {
    CXTPCommandBar* p = this;
    int r = (reinterpret_cast<CXTPCommandBar*>(reinterpret_cast<char*>(p) + 0x80))->sub_648600();
    if (r == 0) {
        return r;
    }
    return p->sub_648740();
}
