// from server: 100% by king_originala
// roc 2008-06 0062b030  unit: RBX::Explosion  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062b030
//
// 0062b030  56                   push esi
// 0062b031  8bf1                 mov esi, ecx
// 0062b033  57                   push edi
// 0062b034  85f6                 test esi, esi
// 0062b036  7408                 je 0x62b040
// 0062b038  8dbe30010000         lea edi, [esi + 0x130]
// 0062b03e  eb02                 jmp 0x62b042
// 0062b040  33ff                 xor edi, edi
// 0062b042  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062b046  85c9                 test ecx, ecx
// 0062b048  7415                 je 0x62b05f
// 0062b04a  e8317ce2ff           call 0x452c80
// 0062b04f  85c0                 test eax, eax
// 0062b051  740c                 je 0x62b05f
// 0062b053  57                   push edi
// 0062b054  8d8850010000         lea ecx, [eax + 0x150]
// 0062b05a  e821aafbff           call 0x5e5a80
// 0062b05f  85f6                 test esi, esi
// 0062b061  7408                 je 0x62b06b
// 0062b063  81c630010000         add esi, 0x130
// 0062b069  eb02                 jmp 0x62b06d
// 0062b06b  33f6                 xor esi, esi
// 0062b06d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0062b071  85c9                 test ecx, ecx
// 0062b073  7415                 je 0x62b08a
// 0062b075  e8067ce2ff           call 0x452c80
// 0062b07a  85c0                 test eax, eax
// 0062b07c  740c                 je 0x62b08a
// 0062b07e  56                   push esi
// 0062b07f  8d8850010000         lea ecx, [eax + 0x150]
// 0062b085  e81668dfff           call 0x4218a0
// 0062b08a  5f                   pop edi
// 0062b08b  5e                   pop esi
// 0062b08c  c20800               ret 8

struct Listener {
    void attach(Listener*);
    void detach(Listener*);
};

struct World {
    char padding[0x150];
    Listener listeners;
};

struct Instance {
    World* resolve();
};

struct Prefix {
    char padding[0x130];
};

struct Explosion : Prefix, Listener {
    void change(Instance*, Instance*);
};

void Explosion::change(Instance* oldInstance, Instance* newInstance)
{
    Listener* oldListener = static_cast<Listener*>(this);
    if (oldInstance) {
        World* world = oldInstance->resolve();
        if (world)
            world->listeners.attach(oldListener);
    }

    Listener* newListener = static_cast<Listener*>(this);
    if (newInstance) {
        World* world = newInstance->resolve();
        if (world)
            world->listeners.detach(newListener);
    }
}
