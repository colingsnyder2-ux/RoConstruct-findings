// from server: 100% by tester
// roc 2010-06 006209d0  unit: RBX::DropperTool  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006209d0
//
// 006209d0  8b442404             mov eax, dword ptr [esp + 4]
// 006209d4  83e800               sub eax, 0
// 006209d7  741c                 je 0x6209f5
// 006209d9  83e801               sub eax, 1
// 006209dc  7411                 je 0x6209ef
// 006209de  83e801               sub eax, 1
// 006209e1  7406                 je 0x6209e9
// 006209e3  b806000000           mov eax, 6
// 006209e8  c3                   ret 
// 006209e9  b802000000           mov eax, 2
// 006209ee  c3                   ret 
// 006209ef  b801000000           mov eax, 1
// 006209f4  c3                   ret 
// 006209f5  33c0                 xor eax, eax
// 006209f7  c3                   ret 

int func_00746560(int value)
{
    switch (value)
    {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        return 2;
    default:
        return 6;
    }
}
