// roc 2007-03 0070ff70  unit: seg_00700000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070ff70
//
// 0070ff70  8b4984               mov ecx, dword ptr [ecx - 0x7c]
// 0070ff73  e8988df2ff           call 0x638d10
// 0070ff78  8bc8                 mov ecx, eax
// 0070ff7a  e831d1f1ff           call 0x62d0b0
// 0070ff7f  33c9                 xor ecx, ecx
// 0070ff81  394804               cmp dword ptr [eax + 4], ecx
// 0070ff84  0f9fc1               setg cl
// 0070ff87  8bc1                 mov eax, ecx
// 0070ff89  c3                   ret 
// copied from an identical function in another client (function ?GetSomething@CXTPRibbonControlTab@ns_ROCX000009@@QAEHXZ)

namespace ns_ROCX000009 {
struct CXTPRibbonControlTab {
    int GetSomething();
};

extern "C" int __fastcall sub_643980(int);
extern "C" int __fastcall sub_633900(int);

int CXTPRibbonControlTab::GetSomething()
{
    int v = sub_643980(*(int*)((char*)this - 0x7c));
    int r = sub_633900(v);
    return (*(int*)(r + 4) > 0) ? 1 : 0;
}
}
