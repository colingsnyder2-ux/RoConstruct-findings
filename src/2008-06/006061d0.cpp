// from server: 100% by atomic.potato
// roc 2008-06 006061d0  unit: RBX::RotateConnector  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006061d0
//
// 006061d0  837c240400           cmp dword ptr [esp + 4], 0
// 006061d5  7509                 jne 0x6061e0
// 006061d7  8b4114               mov eax, dword ptr [ecx + 0x14]
// 006061da  8b400c               mov eax, dword ptr [eax + 0xc]
// 006061dd  c20400               ret 4
// 006061e0  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 006061e3  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006061e6  c20400               ret 4

struct RotateConnector
{
    int getValue(int flag);
};

int RotateConnector::getValue(int flag)
{
    if (flag == 0)
        return *reinterpret_cast<int *>(*reinterpret_cast<int **>(
            reinterpret_cast<char *>(this) + 0x14) + 3);

    return *reinterpret_cast<int *>(*reinterpret_cast<int **>(
        reinterpret_cast<char *>(this) + 0x18) + 3);
}
