// roc 2010-06 004e60c0  unit: RBX::VFaces::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e60c0
//
// 004e60c0  b80c24b900           mov eax, 0xb9240c
// 004e60c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004e60c0()
{
    return &G;
}
