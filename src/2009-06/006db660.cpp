// from server: 80% by why2
// roc 2009-06 006db660  unit: RBX::GroundStage  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006db660
//
// 006db660  51                   push ecx
// 006db661  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006db665  e8e6a5ffff           call 0x6d5c50
// 006db66a  c20400               ret 4

struct RBX_GroundStage {
    void sub_006d5c50();
    void func_006db660(int);
};

void RBX_GroundStage::func_006db660(int a)
{
    RBX_GroundStage* p = (RBX_GroundStage*)a;
    p->sub_006d5c50();
}
