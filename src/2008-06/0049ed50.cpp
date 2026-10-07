// roc 2008-06 0049ed50  unit: PluginInterface  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049ed50
//
// 0049ed50  b801000000           mov eax, 1
// 0049ed55  c20800               ret 8
// auto-matched from its assembly shape

struct S_func_0049ed50 {

    int f(int a1, int a2);
};
int S_func_0049ed50::f(int a1, int a2)
{
    return 1;
}
