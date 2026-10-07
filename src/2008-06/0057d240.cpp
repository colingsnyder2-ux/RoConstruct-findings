// roc 2008-06 0057d240  unit: RBX::VInstance::?$SignalDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057d240
//
// 0057d240  8b8194010000         mov eax, dword ptr [ecx + 0x194]
// 0057d246  c3                   ret 

struct SignalDesc {
    char pad[0x194];
    void* m_desc;
    void* Get();
};

void* SignalDesc::Get()
{
    return m_desc;
}
