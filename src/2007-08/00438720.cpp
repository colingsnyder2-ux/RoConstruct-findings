// roc 2007-08 00438720  unit: CDataModelPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00438720
//
// 00438720  b878d37800           mov eax, 0x78d378
// 00438725  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00438720()
{
    return &G;
}
