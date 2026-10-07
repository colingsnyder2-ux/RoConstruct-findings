// roc 2007-08 00608640  unit: RBX::ClumpStage  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00608640
//
// 00608640  b8f0000000           mov eax, 0xf0
// 00608645  c3                   ret 
// auto-matched from its assembly shape

unsigned int func_00608640()
{
    return 0xf0u;
}
