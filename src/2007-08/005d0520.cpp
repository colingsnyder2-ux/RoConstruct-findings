// from server: 60% by colin
// roc 2007-08 005d0520  unit: RBX::LocalBackpackItem  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d0520
//
// 005d0520  894c2404             mov dword ptr [esp + 4], ecx
// 005d0524  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 005d052a  e951ffffff           jmp 0x5d0480

struct LocalBackpackItem {
    char pad[0xbc];
    int field_bc;
    void func_005d0480();
    void func_005d0520();
};

void LocalBackpackItem::func_005d0520()
{
    field_bc = 0;
    func_005d0480();
}
