// from server: 100% by king_originala
// roc 2008-06 005e91d0  unit: RBX::PhysicsService  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e91d0
//
// 005e91d0  83ec10               sub esp, 0x10
// 005e91d3  56                   push esi
// 005e91d4  57                   push edi
// 005e91d5  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005e91d9  8d442410             lea eax, [esp + 0x10]
// 005e91dd  8bf1                 mov esi, ecx
// 005e91df  50                   push eax
// 005e91e0  8bcf                 mov ecx, edi
// 005e91e2  e8d9cdffff           call 0x5e5fc0
// 005e91e7  8d4c2408             lea ecx, [esp + 8]
// 005e91eb  51                   push ecx
// 005e91ec  8bcf                 mov ecx, edi
// 005e91ee  e8adcdffff           call 0x5e5fa0
// 005e91f3  8b442408             mov eax, dword ptr [esp + 8]
// 005e91f7  3b442410             cmp eax, dword ptr [esp + 0x10]
// 005e91fb  7422                 je 0x5e921f
// 005e91fd  8d4900               lea ecx, [ecx]
// 005e9200  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 005e9206  50                   push eax
// 005e9207  e8443a0200           call 0x60cc50
// 005e920c  8d4c2408             lea ecx, [esp + 8]
// 005e9210  e82be40500           call 0x647640
// 005e9215  8b442408             mov eax, dword ptr [esp + 8]
// 005e9219  3b442410             cmp eax, dword ptr [esp + 0x10]
// 005e921d  75e1                 jne 0x5e9200
// 005e921f  5f                   pop edi
// 005e9220  5e                   pop esi
// 005e9221  83c410               add esp, 0x10
// 005e9224  c20400               ret 4

struct Iterator {
    void* primitive;
    int index;
    void advance();
};

struct Assembly {
    Iterator end() const;
    Iterator begin() const;
};

struct Consumer {
    void consume(void* primitive);
};

struct PhysicsService {
    char padding[0x84];
    Consumer* consumer;
    void f(Assembly* assembly);
};

void PhysicsService::f(Assembly* assembly)
{
    Iterator last = assembly->end();
    Iterator current = assembly->begin();

    while (current.primitive != last.primitive) {
        consumer->consume(current.primitive);
        current.advance();
    }
}
