// from server: 100% by king_originala
// roc 2008-06 0044b960  unit: CRobloxModule  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044b960
//
// 0044b960  e8f1582500           call 0x6a1256
// 0044b965  e8bc4f2500           call 0x6a0926
// 0044b96a  8b4034               mov eax, dword ptr [eax + 0x34]
// 0044b96d  c3                   ret 

struct Result {
    char padding[0x34];
    int value;
};

extern "C" void __cdecl sub_6A1250();
extern "C" Result* __cdecl sub_6A0926();

int __cdecl wrapper()
{
    sub_6A1250();
    return sub_6A0926()->value;
}
