// from server: 100% by colin
// roc 2007-08 005740c0  unit: RBX::PartInstance  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005740c0
//
// 005740c0  8b89d8010000         mov ecx, dword ptr [ecx + 0x1d8]
// 005740c6  56                   push esi
// 005740c7  8b742408             mov esi, dword ptr [esp + 8]
// 005740cb  56                   push esi
// 005740cc  e8dffaffff           call 0x573bb0
// 005740d1  8bc6                 mov eax, esi
// 005740d3  5e                   pop esi
// 005740d4  c20400               ret 4

struct PartInstance;

struct Helper {
    void method(PartInstance* p);
};

struct PartInstance {
    char pad[0x1d8];
    Helper* helper;
    PartInstance* setSomething(PartInstance* p);
};

PartInstance* PartInstance::setSomething(PartInstance* p) {
    helper->method(p);
    return p;
}
