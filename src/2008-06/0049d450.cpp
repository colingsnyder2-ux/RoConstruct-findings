// from server: 100% by tester
// roc 2008-06 0049d450  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049d450
//
// 0049d450  8b442404             mov eax, dword ptr [esp + 4]
// 0049d454  3b81ac010000         cmp eax, dword ptr [ecx + 0x1ac]
// 0049d45a  7413                 je 0x49d46f
// 0049d45c  8981ac010000         mov dword ptr [ecx + 0x1ac], eax
// 0049d462  c74424049c029700     mov dword ptr [esp + 4], 0x97029c
// 0049d46a  e99106f7ff           jmp 0x40db00
// 0049d46f  c20400               ret 4

struct CRenderSettings {
    char padding[0x1ac];
    int value;
    void setValue(int);
    void notify(void*);
};

void CRenderSettings::setValue(int v)
{
    if (v != value) {
        value = v;
        notify(reinterpret_cast<void*>(0x96d3ec));
    }
}
