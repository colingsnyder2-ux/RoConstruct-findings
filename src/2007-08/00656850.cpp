// from server: 100% by colin
// roc 2007-08 00656850  unit: CXTPReportControl  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00656850
//
// 00656850  8b89d0000000         mov ecx, dword ptr [ecx + 0xd0]
// 00656856  85c9                 test ecx, ecx
// 00656858  740f                 je 0x656869
// 0065685a  e871df0000           call 0x6647d0
// 0065685f  85c0                 test eax, eax
// 00656861  7e06                 jle 0x656869
// 00656863  b801000000           mov eax, 1
// 00656868  c3                   ret 
// 00656869  33c0                 xor eax, eax
// 0065686b  c3                   ret 

struct CXTPReportControl {
    char pad[0xd0];
    void* field_d0;
    int IsSomething();
};

extern "C" int __fastcall sub_6647D0(void* p);

int CXTPReportControl::IsSomething()
{
    void* p = field_d0;
    if (p != 0)
    {
        if (sub_6647D0(p) > 0)
            return 1;
    }
    return 0;
}
