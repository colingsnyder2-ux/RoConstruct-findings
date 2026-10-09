// roc 2007-03 0067bc00  unit: seg_00670000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067bc00
//
// 0067bc00  83796000             cmp dword ptr [ecx + 0x60], 0
// 0067bc04  7509                 jne 0x67bc0f
// 0067bc06  8b4150               mov eax, dword ptr [ecx + 0x50]
// 0067bc09  05ac000000           add eax, 0xac
// 0067bc0e  c3                   ret 
// 0067bc0f  8d415c               lea eax, [ecx + 0x5c]
// 0067bc12  c3                   ret 
// copied from an identical function in another client (function ?getValue@CXTPStatusBarPane@ns_ROCX00000a@@QAEHXZ)

namespace ns_ROCX00000a {
struct CXTPStatusBarPane
{
    char pad_00[0x50];
    int field_50;
    char pad_54[0x08];
    int field_5c;
    int field_60;
    int getValue();
};

int CXTPStatusBarPane::getValue()
{
    if (field_60 == 0)
        return field_50 + 0xac;
    return (int)((char*)this + 0x5c);
}
}
