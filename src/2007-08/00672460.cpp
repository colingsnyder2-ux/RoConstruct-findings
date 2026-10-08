// from server: 100% by colin
// roc 2007-08 00672460  unit: CXTPControlColorSelector  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00672460
//
// 00672460  8b442404             mov eax, dword ptr [esp + 4]
// 00672464  398168010000         cmp dword ptr [ecx + 0x168], eax
// 0067246a  7413                 je 0x67247f
// 0067246c  898168010000         mov dword ptr [ecx + 0x168], eax
// 00672472  c744240401000000     mov dword ptr [esp + 4], 1
// 0067247a  e91182fcff           jmp 0x63a690
// 0067247f  c20400               ret 4

struct CXTPControlColorSelector {
    char pad[0x168];
    int m_nValue;
    void SetValue(int nValue);
};

extern "C" void __stdcall sub_63a690(int);

void CXTPControlColorSelector::SetValue(int nValue) {
    if (m_nValue != nValue) {
        m_nValue = nValue;
        sub_63a690(1);
    }
}
