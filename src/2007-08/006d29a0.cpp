// from server: 95% by colin
// roc 2007-08 006d29a0  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d29a0
//
// 006d29a0  8b442404             mov eax, dword ptr [esp + 4]
// 006d29a4  85c0                 test eax, eax
// 006d29a6  7c12                 jl 0x6d29ba
// 006d29a8  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 006d29ab  7d0d                 jge 0x6d29ba
// 006d29ad  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 006d29b0  8b542408             mov edx, dword ptr [esp + 8]
// 006d29b4  891481               mov dword ptr [ecx + eax*4], edx
// 006d29b7  c20800               ret 8
// 006d29ba  e861d5f5ff           call 0x62ff20

struct S_func_006d29a0
{
    char pad[0x24];
    int* data;
    int count;
    void setAt(int index, int value);
};

void S_func_006d29a0::setAt(int index, int value)
{
    if (index < 0 || index >= count)
    {
        extern void __cdecl fail_0062ff20();
        fail_0062ff20();
        return;
    }
    data[index] = value;
}
