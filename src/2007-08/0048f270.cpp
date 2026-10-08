// from server: 100% by colin
// roc 2007-08 0048f270  unit: RBX::Network::VPlayer::?$BoundFuncDesc  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048f270
//
// 0048f270  8b442404             mov eax, dword ptr [esp + 4]
// 0048f274  3b8120010000         cmp eax, dword ptr [ecx + 0x120]
// 0048f27a  7413                 je 0x48f28f
// 0048f27c  898120010000         mov dword ptr [ecx + 0x120], eax
// 0048f282  c744240478de8b00     mov dword ptr [esp + 4], 0x8bde78
// 0048f28a  e98154fbff           jmp 0x444710
// 0048f28f  c20400               ret 4

struct VPlayerBoundFuncDesc
{
    int field0;
    char pad[0x11c];
    int field120;
    void set(int value);
};

void __stdcall func_444710(int);

void VPlayerBoundFuncDesc::set(int value)
{
    if (value != this->field120)
    {
        this->field120 = value;
        func_444710(0x8bde78);
    }
}
