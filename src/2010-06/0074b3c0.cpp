// from server: 100% by tester
// roc 2010-06 0074b3c0  unit: RBX::PointToPointBreakConnector  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0074b3c0
//
// 0074b3c0  837c240400           cmp dword ptr [esp + 4], 0
// 0074b3c5  7509                 jne 0x74b3d0
// 0074b3c7  8b4108               mov eax, dword ptr [ecx + 8]
// 0074b3ca  8b400c               mov eax, dword ptr [eax + 0xc]
// 0074b3cd  c20400               ret 4
// 0074b3d0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0074b3d3  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0074b3d6  c20400               ret 4

struct PointToPointBreakConnector_0079b240 {
    char pad0[8];
    void* m_first;
    void* m_second;
    void* f(int);
};

void* PointToPointBreakConnector_0079b240::f(int value)
{
    if (value == 0)
        return *(void**)((char*)m_first + 12);

    return *(void**)((char*)m_second + 12);
}
