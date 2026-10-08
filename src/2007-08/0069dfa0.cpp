// from server: 90% by colin
// roc 2007-08 0069dfa0  unit: CXTPPropertyGridItemBool  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069dfa0
//
// 0069dfa0  8b442404             mov eax, dword ptr [esp + 4]
// 0069dfa4  898110010000         mov dword ptr [ecx + 0x110], eax
// 0069dfaa  f7d8                 neg eax
// 0069dfac  1bc0                 sbb eax, eax
// 0069dfae  83e0fb               and eax, 0xfffffffb
// 0069dfb1  83c005               add eax, 5
// 0069dfb4  89442404             mov dword ptr [esp + 4], eax
// 0069dfb8  e9539affff           jmp 0x697a10

struct CXTPPropertyGridItemBool {
    char pad0[0x110];
    int m_value;
    void SetValue(int value);
};

extern "C" void __stdcall sub_00697a10(int value);

void CXTPPropertyGridItemBool::SetValue(int value)
{
    m_value = value;
    unsigned int t = (unsigned int)(-(int)value);
    t = (t != 0) ? 0xfffffffb : 0;
    t = t + 5;
    sub_00697a10(t);
}
