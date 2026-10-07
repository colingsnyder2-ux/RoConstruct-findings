// roc 2008-06 004badb0  unit: Exposer  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004badb0
//
// 004badb0  b858cf8100           mov eax, 0x81cf58
// 004badb5  c20400               ret 4
// auto-matched from its assembly shape

extern char G;

struct S_func_004badb0 {

    char* f(int a1);
};
char* S_func_004badb0::f(int a1)
{
    return &G;
}
