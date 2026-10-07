// roc 2011-06 0049b9f0  unit: CWebToolbox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0049b9f0
//
// 0049b9f0  b87c5ea700           mov eax, 0xa75e7c
// 0049b9f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0049b9f0()
{
    return &G;
}
