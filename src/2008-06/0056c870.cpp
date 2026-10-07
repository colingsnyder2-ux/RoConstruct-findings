// roc 2008-06 0056c870  unit: RBX::VContentId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056c870
//
// 0056c870  b844bf9200           mov eax, 0x92bf44
// 0056c875  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0056c870()
{
    return &G;
}
