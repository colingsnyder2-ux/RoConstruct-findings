// from server: 100% by atomic.potato
// roc 2009-06 00793b60  unit: CXTPHookManager::CHookSink  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00793b60
//
// 00793b60  8b442404             mov eax, dword ptr [esp + 4]
// 00793b64  56                   push esi
// 00793b65  57                   push edi
// 00793b66  8bf1                 mov esi, ecx
// 00793b68  6a00                 push 0
// 00793b6a  8d7e14               lea edi, [esi + 0x14]
// 00793b6d  50                   push eax
// 00793b6e  8bcf                 mov ecx, edi
// 00793b70  e8ebc80300           call 0x7d0460
// 00793b75  85c0                 test eax, eax
// 00793b77  7408                 je 0x793b81
// 00793b79  50                   push eax
// 00793b7a  8bcf                 mov ecx, edi
// 00793b7c  e86ff7ffff           call 0x7932f0
// 00793b81  837e2000             cmp dword ptr [esi + 0x20], 0
// 00793b85  7512                 jne 0x793b99
// 00793b87  6a00                 push 0
// 00793b89  8bce                 mov ecx, esi
// 00793b8b  e8d0feffff           call 0x793a60
// 00793b90  6a00                 push 0
// 00793b92  8bce                 mov ecx, esi
// 00793b94  e877feffff           call 0x793a10
// 00793b99  5f                   pop edi
// 00793b9a  5e                   pop esi
// 00793b9b  c20400               ret 4

struct CHookSub {
    int unknown00;
    int unknown04;
    int unknown08;
    int Lookup(int value, int option);
    void Erase(int value);
};

struct CHookSink {
    void* vtable;
    int unknown04;
    int unknown08;
    int unknown0C;
    int unknown10;
    CHookSub sub;
    int unknown20;
    void MethodB(int flag);
    void MethodA(int flag);
    void Handle(int value);
};

void CHookSink::Handle(int value) {
    int found = sub.Lookup(value, 0);
    if (found) {
        sub.Erase(found);
    }
    if (unknown20 == 0) {
        MethodA(0);
        MethodB(0);
    }
}
