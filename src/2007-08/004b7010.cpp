// roc 2007-08 004b7010  unit: Exposer  size: 8 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004b7010
//
// 004b7010  b808677900           mov eax, 0x796708
// 004b7015  c20400               ret 4
// auto-matched from its assembly shape

extern char G;

struct S_func_004b7010 {

    char* f(int a1);
};
char* S_func_004b7010::f(int a1)
{
    return &G;
}
