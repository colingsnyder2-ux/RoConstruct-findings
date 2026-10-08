// from server: 68% by colin
// roc 2007-08 0064cb40  unit: CXTPImageManagerIconSet  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064cb40
//
// 0064cb40  8b542404             mov edx, dword ptr [esp + 4]
// 0064cb44  8d442404             lea eax, [esp + 4]
// 0064cb48  50                   push eax
// 0064cb49  52                   push edx
// 0064cb4a  83c124               add ecx, 0x24
// 0064cb4d  e80e7ffeff           call 0x634a60
// 0064cb52  f7d8                 neg eax
// 0064cb54  1bc0                 sbb eax, eax
// 0064cb56  23442404             and eax, dword ptr [esp + 4]
// 0064cb5a  c20400               ret 4

struct CXTPImageManagerIconSet {
    char pad[0x24];
    int sub_634a60(int*);
    int func_0064cb40(int);
};

int CXTPImageManagerIconSet::func_0064cb40(int arg)
{
    int result = sub_634a60(&arg);
    return result ? arg : 0;
}
