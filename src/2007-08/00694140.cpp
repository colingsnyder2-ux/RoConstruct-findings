// from server: 62% by colin
// roc 2007-08 00694140  unit: CXTPStatusBar  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00694140
//
// 00694140  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00694146  83f8ff               cmp eax, -1
// 00694149  751a                 jne 0x694165
// 0069414b  83792c05             cmp dword ptr [ecx + 0x2c], 5
// 0069414f  7506                 jne 0x694157
// 00694151  b84c4c4c00           mov eax, 0x4c4c4c
// 00694156  c3                   ret 
// 00694157  e8144efdff           call 0x668f70
// 0069415c  6a17                 push 0x17
// 0069415e  8bc8                 mov ecx, eax
// 00694160  e80b46fdff           call 0x668770
// 00694165  c3                   ret 

struct CXTPStatusBar {
    char pad0[0x2c];
    int m_field2c;
    char pad1[0x90 - 0x2c - 4];
    int m_field90;
    int getColor();
};

extern "C" void* __stdcall sub_668f70();
extern "C" void __stdcall sub_668770(void*, int);

int CXTPStatusBar::getColor()
{
    if (m_field90 != -1)
        return m_field90;
    if (m_field2c == 5)
        return 0x4c4c4c;
    void* p = sub_668f70();
    sub_668770(p, 0x17);
    return m_field90;
}
