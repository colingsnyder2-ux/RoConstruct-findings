// from server: 100% by colin
// roc 2007-08 004a36e0  unit: seg_004a0000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a36e0
//
// 004a36e0  a00ce78b00           mov al, byte ptr [0x8be70c]
// 004a36e5  c3                   ret 

extern char G_func_004a36e0;

char func_004a36e0()
{
    return G_func_004a36e0;
}
