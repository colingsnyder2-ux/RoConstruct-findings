// from server: 66% by colin
// roc 2007-08 00625140  unit: RBX::ArrowButton  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00625140
//
// 00625140  d9442404             fld dword ptr [esp + 4]
// 00625144  d80d00b57900         fmul dword ptr [0x79b500]
// 0062514a  c3                   ret 

extern float g_scaleConstant;

float ScaleByConstant(float value)
{
    return value * g_scaleConstant;
}
