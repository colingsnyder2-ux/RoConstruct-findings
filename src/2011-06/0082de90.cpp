// from server: 100% by tester
// roc 2011-06 0082de90  unit: CRobloxReportView  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082de90
//
// 0082de90  8b01                 mov eax, dword ptr [ecx]
// 0082de92  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 0082de98  ffd2                 call edx
// 0082de9a  8b10                 mov edx, dword ptr [eax]
// 0082de9c  8bc8                 mov ecx, eax
// 0082de9e  8b8288010000         mov eax, dword ptr [edx + 0x188]
// 0082dea4  ffe0                 jmp eax

struct XTP_REPORTRECORDITEM_DRAWARGS {
    void f();
};

void XTP_REPORTRECORDITEM_DRAWARGS::f() {
    void* p = (*(void*(__thiscall**)(void*))(*(void***)this + 0x194 / 4))(this);
    (*(void(__thiscall**)(void*))(*(void***)p + 0x188 / 4))(p);
}