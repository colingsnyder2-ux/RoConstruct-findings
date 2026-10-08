// from server: 43% by colin
// roc 2007-08 00663c60  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00663c60
//
// 00663c60  83793400             cmp dword ptr [ecx + 0x34], 0
// 00663c64  8b542404             mov edx, dword ptr [esp + 4]
// 00663c68  740c                 je 0x663c76
// 00663c6a  8b4134               mov eax, dword ptr [ecx + 0x34]
// 00663c6d  895028               mov dword ptr [eax + 0x28], edx
// 00663c70  8b4134               mov eax, dword ptr [ecx + 0x34]
// 00663c73  c20400               ret 4
// 00663c76  85d2                 test edx, edx
// 00663c78  7c1c                 jl 0x663c96
// 00663c7a  e8d1ffffff           call 0x663c50
// 00663c7f  3bd0                 cmp edx, eax
// 00663c81  7d13                 jge 0x663c96
// 00663c83  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 00663c86  7d09                 jge 0x663c91
// 00663c88  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00663c8b  8b0490               mov eax, dword ptr [eax + edx*4]
// 00663c8e  c20400               ret 4
// 00663c91  e88ac2fcff           call 0x62ff20
// 00663c96  33c0                 xor eax, eax
// 00663c98  c20400               ret 4

struct VCXTPReportRows_CXTPHeapObjectT
{
    int GetCount();
    int GetAt(int index);
    int SetAt(int index);
};

int VCXTPReportRows_CXTPHeapObjectT::SetAt(int index)
{
    if (*(int*)((char*)this + 0x34) != 0)
    {
        *(int*)(*(int*)((char*)this + 0x34) + 0x28) = index;
        return *(int*)((char*)this + 0x34);
    }
    if (index < 0)
        return 0;
    if (index >= GetCount())
        return 0;
    if (index < *(int*)((char*)this + 0x28))
        return *(int*)(*(int*)((char*)this + 0x24) + index * 4);
    return GetAt(index);
}
