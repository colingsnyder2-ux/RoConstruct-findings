// from server: 100% by colin
// roc 2007-08 00656100  unit: CXTPReportControl  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00656100
//
// 00656100  8b442404             mov eax, dword ptr [esp + 4]
// 00656104  56                   push esi
// 00656105  8bf1                 mov esi, ecx
// 00656107  3b86b8000000         cmp eax, dword ptr [esi + 0xb8]
// 0065610d  7422                 je 0x656131
// 0065610f  85c0                 test eax, eax
// 00656111  7d02                 jge 0x656115
// 00656113  33c0                 xor eax, eax
// 00656115  6a01                 push 1
// 00656117  50                   push eax
// 00656118  6a01                 push 1
// 0065611a  8986b8000000         mov dword ptr [esi + 0xb8], eax
// 00656120  e81f240e00           call 0x738544
// 00656125  8b06                 mov eax, dword ptr [esi]
// 00656127  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 0065612d  8bce                 mov ecx, esi
// 0065612f  ffd2                 call edx
// 00656131  5e                   pop esi
// 00656132  c20400               ret 4

struct CXTPReportControl {
    char m_pad[0xb8];
    int m_nValue;
    void SetValue(int nValue);
};

extern "C" void __stdcall sub_738544(int, int, int);

void CXTPReportControl::SetValue(int nValue)
{
    if (nValue != this->m_nValue)
    {
        if (nValue < 0)
            nValue = 0;
        this->m_nValue = nValue;
        sub_738544(1, nValue, 1);
        (*(void (__thiscall **)(CXTPReportControl *))(*(int *)this + 0x154))(this);
    }
}
