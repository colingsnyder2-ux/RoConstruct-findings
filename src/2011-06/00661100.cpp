// roc 2011-06 00661100  unit: RBX::VExplosion::?$EventDesc  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00661100
//
// 00661100  c7051cdbcc0000000000 mov dword ptr [0xccdb1c], 0
// 0066110a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00661100;
extern char G2_func_00661100;
void func_00661100()
{
    G1_func_00661100 = &G2_func_00661100;
}
