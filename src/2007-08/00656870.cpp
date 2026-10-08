// from server: 72% by colin
// roc 2007-08 00656870  unit: CXTPReportControl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00656870
//
// 00656870  8bd1                 mov edx, ecx
// 00656872  e899ffffff           call 0x656810
// 00656877  85c0                 test eax, eax
// 00656879  7403                 je 0x65687e
// 0065687b  33c0                 xor eax, eax
// 0065687d  c3                   ret 
// 0065687e  8b02                 mov eax, dword ptr [edx]
// 00656880  8bca                 mov ecx, edx
// 00656882  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 00656888  ffe2                 jmp edx

struct CXTPReportControl {
    int sub_00656810();
    int f();
};

int CXTPReportControl::f()
{
    if (sub_00656810() != 0)
        return 0;
    return (*(int (__thiscall **)(CXTPReportControl *))(*(int *)this + 0x160))(this);
}
