// from server: 100% by king_originala
// roc 2008-06 00632db0  unit: RBX::BodyMover  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00632db0
//
// 00632db0  56                   push esi
// 00632db1  8bf1                 mov esi, ecx
// 00632db3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00632db7  85c9                 test ecx, ecx
// 00632db9  7425                 je 0x632de0
// 00632dbb  57                   push edi
// 00632dbc  85f6                 test esi, esi
// 00632dbe  7408                 je 0x632dc8
// 00632dc0  8dbe38010000         lea edi, [esi + 0x138]
// 00632dc6  eb02                 jmp 0x632dca
// 00632dc8  33ff                 xor edi, edi
// 00632dca  e82103e2ff           call 0x4530f0
// 00632dcf  85c0                 test eax, eax
// 00632dd1  740c                 je 0x632ddf
// 00632dd3  57                   push edi
// 00632dd4  8d8850010000         lea ecx, [eax + 0x150]
// 00632dda  e8a12cfbff           call 0x5e5a80
// 00632ddf  5f                   pop edi
// 00632de0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00632de4  85c9                 test ecx, ecx
// 00632de6  7423                 je 0x632e0b
// 00632de8  85f6                 test esi, esi
// 00632dea  7408                 je 0x632df4
// 00632dec  81c638010000         add esi, 0x138
// 00632df2  eb02                 jmp 0x632df6
// 00632df4  33f6                 xor esi, esi
// 00632df6  e8f502e2ff           call 0x4530f0
// 00632dfb  85c0                 test eax, eax
// 00632dfd  740c                 je 0x632e0b
// 00632dff  56                   push esi
// 00632e00  8d8850010000         lea ecx, [eax + 0x150]
// 00632e06  e895eadeff           call 0x4218a0
// 00632e0b  5e                   pop esi
// 00632e0c  c20800               ret 8

struct Listener {
    char storage;
};

struct ListenerCollection {
    void detach(Listener*);
    void attach(Listener*);
};

struct Service {
    char padding[0x150];
    ListenerCollection listeners;
};

struct Instance {
    Service* getService();
};

struct Prefix {
    char padding[0x138];
};

struct BodyMover : Prefix, Listener {
    void changeParent(Instance* previous, Instance* current);
};

void BodyMover::changeParent(Instance* previous, Instance* current)
{
    if (previous) {
        Listener* listener = static_cast<Listener*>(this);
        Service* service = previous->getService();
        if (service)
            service->listeners.detach(listener);
    }

    if (current) {
        Listener* listener = static_cast<Listener*>(this);
        Service* service = current->getService();
        if (service)
            service->listeners.attach(listener);
    }
}
