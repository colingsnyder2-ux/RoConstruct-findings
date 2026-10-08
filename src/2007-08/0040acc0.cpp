// from server: 100% by colin
// roc 2007-08 0040acc0  unit: VCSecureHtmlView::?$CXTPCommandBarsSiteBase  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040acc0
//
// 0040acc0  8b442404             mov eax, dword ptr [esp + 4]
// 0040acc4  398144010000         cmp dword ptr [ecx + 0x144], eax
// 0040acca  740b                 je 0x40acd7
// 0040accc  898144010000         mov dword ptr [ecx + 0x144], eax
// 0040acd2  e8d9f02200           call 0x639db0
// 0040acd7  c20400               ret 4

struct S {
    unsigned char pad[0x144];
    int m_val;
    void method(int arg);
    void helper();
};

void S::method(int arg)
{
    if (m_val != arg) {
        m_val = arg;
        helper();
    }
}
