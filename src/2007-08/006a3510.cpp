// from server: 85% by colin
// roc 2007-08 006a3510  unit: unknown  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a3510

struct CHookSink;

struct CXTPHookManager {
    static CHookSink* FindHookSink(int);

    int InstallHook(int a, int b);
};

struct CHookSink {
    int Install(int);
};

int CXTPHookManager::InstallHook(int a, int b) {
    CHookSink* p = FindHookSink(a);
    if (p != 0) {
        return p->Install(b);
    }
}
