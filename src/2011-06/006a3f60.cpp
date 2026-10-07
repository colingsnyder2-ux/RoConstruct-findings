// roc 2011-06 006a3f60  unit: RBX::EdgeStage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a3f60
//
// 006a3f60  b803000000           mov eax, 3
// 006a3f65  c3                   ret 
// auto-matched from its assembly shape

unsigned int func_006a3f60()
{
    return 3u;
}
