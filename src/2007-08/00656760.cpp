// from server: 100% by colin
// roc 2007-08 00656760  unit: CXTPReportControl  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00656760
//
// 00656760  8b8180010000         mov eax, dword ptr [ecx + 0x180]
// 00656766  f7d8                 neg eax
// 00656768  1bc0                 sbb eax, eax
// 0065676a  83e002               and eax, 2
// 0065676d  0d81000000           or eax, 0x81
// 00656772  c3                   ret 

struct CXTPReportControl {
    int getSomeValue() const;
};

int CXTPReportControl::getSomeValue() const {
    int value = *(int*)((char*)this + 0x180);
    value = (value != 0) ? 2 : 0;
    return value | 0x81;
}
