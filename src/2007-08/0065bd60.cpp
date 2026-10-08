// from server: 100% by colin
// roc 2007-08 0065bd60  unit: CXTPReportControl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065bd60
//
// 0065bd60  8b442404             mov eax, dword ptr [esp + 4]
// 0065bd64  83f801               cmp eax, 1
// 0065bd67  7d05                 jge 0x65bd6e
// 0065bd69  b801000000           mov eax, 1
// 0065bd6e  8981c4000000         mov dword ptr [ecx + 0xc4], eax
// 0065bd74  c20400               ret 4

struct CXTPReportControl {
    char pad[0xc4];
    int m_nValue;
    void SetValue(int n);
};

void CXTPReportControl::SetValue(int n) {
    if (n < 1)
        n = 1;
    m_nValue = n;
}
