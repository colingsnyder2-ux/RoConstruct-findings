// from server: 80% by colin
// roc 2007-08 0068f190  unit: CXTPDockingPane  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f190
//
// 0068f190  8b442404             mov eax, dword ptr [esp + 4]
// 0068f194  8981b8000000         mov dword ptr [ecx + 0xb8], eax
// 0068f19a  89442404             mov dword ptr [esp + 4], eax
// 0068f19e  81c1c0000000         add ecx, 0xc0
// 0068f1a4  ff259cd57700         jmp dword ptr [0x77d59c]

struct CXTPDockingPane {
    char pad[0xb8];
    int m_nValue;
    void SetValue(int value);
};

extern "C" void __stdcall sub_77D59C(int value);

void CXTPDockingPane::SetValue(int value) {
    m_nValue = value;
    sub_77D59C(value);
}
