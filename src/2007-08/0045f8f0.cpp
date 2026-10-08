// roc 2007-08 0045f8f0  unit: CScriptDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045f8f0
//
// 0045f8f0  b8cc497900           mov eax, 0x7949cc
// 0045f8f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0045f8f0()
{
    return &G;
}
