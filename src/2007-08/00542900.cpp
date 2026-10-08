// from server: 100% by colin
// roc 2007-08 00542900  unit: RBX::VInstance::?$SignalDesc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00542900
//
// 00542900  a091168c00           mov al, byte ptr [0x8c1691]
// 00542905  c3                   ret 

unsigned char func_00542900()
{
    return *(unsigned char*)0x8c1691;
}
