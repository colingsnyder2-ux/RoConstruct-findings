// from server: 66% by colin
// roc 2007-08 005553a0  unit: RBX::VServiceProvider::?$BoundFuncDesc  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005553a0
//
// 005553a0  8b01                 mov eax, dword ptr [ecx]
// 005553a2  83f801               cmp eax, 1
// 005553a5  741c                 je 0x5553c3
// 005553a7  83f802               cmp eax, 2
// 005553aa  7417                 je 0x5553c3
// 005553ac  83f803               cmp eax, 3
// 005553af  7412                 je 0x5553c3
// 005553b1  83f804               cmp eax, 4
// 005553b4  740d                 je 0x5553c3
// 005553b6  83f805               cmp eax, 5
// 005553b9  7408                 je 0x5553c3
// 005553bb  83f806               cmp eax, 6
// 005553be  7403                 je 0x5553c3
// 005553c0  33c0                 xor eax, eax
// 005553c2  c3                   ret 
// 005553c3  b801000000           mov eax, 1
// 005553c8  c3                   ret 

struct RBX_VServiceProvider_BoundFuncDesc
{
    int value;
    bool isValid() const;
};

bool RBX_VServiceProvider_BoundFuncDesc::isValid() const
{
    int v = value;
    if (v == 1) return true;
    if (v == 2) return true;
    if (v == 3) return true;
    if (v == 4) return true;
    if (v == 5) return true;
    if (v == 6) return true;
    return false;
}
