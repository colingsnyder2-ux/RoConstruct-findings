// from server: 100% by king_originala
// roc 2008-06 004b3dd0  unit: RBX::Network::VPeer::?$BoundFuncDesc  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b3dd0
//
// 004b3dd0  56                   push esi
// 004b3dd1  8bf1                 mov esi, ecx
// 004b3dd3  e888f9ffff           call 0x4b3760
// 004b3dd8  8b442408             mov eax, dword ptr [esp + 8]
// 004b3ddc  8b4804               mov ecx, dword ptr [eax + 4]
// 004b3ddf  8b10                 mov edx, dword ptr [eax]
// 004b3de1  51                   push ecx
// 004b3de2  52                   push edx
// 004b3de3  8d4e08               lea ecx, [esi + 8]
// 004b3de6  e815440f00           call 0x5a8200
// 004b3deb  8bce                 mov ecx, esi
// 004b3ded  e8ae7dfeff           call 0x49bba0
// 004b3df2  8b06                 mov eax, dword ptr [esi]
// 004b3df4  8b10                 mov edx, dword ptr [eax]
// 004b3df6  8bce                 mov ecx, esi
// 004b3df8  ffd2                 call edx
// 004b3dfa  5e                   pop esi
// 004b3dfb  c20400               ret 4

struct Key {
    unsigned int first;
    unsigned int second;
    void Set(int, int);
};

struct S {
    virtual void notify();
    unsigned int padding;
    Key key;

    void begin();
    void end();
    void f(const Key& value);
};

void S::f(const Key& value)
{
    begin();
    key.Set(value.first, value.second);
    end();
    notify();
}
