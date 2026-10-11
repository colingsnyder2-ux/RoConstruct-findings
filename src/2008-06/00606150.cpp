// from server: 100% by tester
// roc 2008-06 00606150  unit: RBX::PointToPointBreakConnector  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00606150
//
// 00606150  837c240400           cmp dword ptr [esp + 4], 0
// 00606155  7509                 jne 0x606160
// 00606157  8b4108               mov eax, dword ptr [ecx + 8]
// 0060615a  8b400c               mov eax, dword ptr [eax + 0xc]
// 0060615d  c20400               ret 4
// 00606160  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00606163  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00606166  c20400               ret 4

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
