// roc 2007-08 00662700  unit: PluginInterface  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00662700
//
// 00662700  b801000000           mov eax, 1
// 00662705  c20800               ret 8
// auto-matched from its assembly shape

struct S_func_00662700 {

    int f(int a1, int a2);
};
int S_func_00662700::f(int a1, int a2)
{
    return 1;
}
