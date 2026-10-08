// from server: 100% by colin
// roc 2007-08 004d1450  unit: RBX::View::PartChunk  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d1450
//
// 004d1450  8b442404             mov eax, dword ptr [esp + 4]
// 004d1454  3da0658c00           cmp eax, 0x8c65a0
// 004d1459  7508                 jne 0x4d1463
// 004d145b  e800fdffff           call 0x4d1160
// 004d1460  c20400               ret 4
// 004d1463  3d24278c00           cmp eax, 0x8c2724
// 004d1468  740e                 je 0x4d1478
// 004d146a  3d08278c00           cmp eax, 0x8c2708
// 004d146f  7407                 je 0x4d1478
// 004d1471  3d40278c00           cmp eax, 0x8c2740
// 004d1476  7505                 jne 0x4d147d
// 004d1478  e8d3fdffff           call 0x4d1250
// 004d147d  c20400               ret 4

struct PartChunk
{
    void func_004d1160();
    void func_004d1250();
    void dispatch(void* arg);
};

void PartChunk::dispatch(void* arg)
{
    unsigned int v = (unsigned int)arg;
    if (v == 0x8c65a0)
    {
        func_004d1160();
        return;
    }
    if (v == 0x8c2724 || v == 0x8c2708 || v == 0x8c2740)
    {
        func_004d1250();
    }
}
