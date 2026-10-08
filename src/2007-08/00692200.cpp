// from server: 100% by colin
// roc 2007-08 00692200  unit: CXTPStatusBarPane  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00692200
//
// 00692200  83796000             cmp dword ptr [ecx + 0x60], 0
// 00692204  7509                 jne 0x69220f
// 00692206  8b4150               mov eax, dword ptr [ecx + 0x50]
// 00692209  05ac000000           add eax, 0xac
// 0069220e  c3                   ret 
// 0069220f  8d415c               lea eax, [ecx + 0x5c]
// 00692212  c3                   ret 

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
