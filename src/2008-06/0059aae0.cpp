// from server: 100% by king_originala
// roc 2008-06 0059aae0  unit: RBX::PartInstance  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059aae0
//
// 0059aae0  8b442404             mov eax, dword ptr [esp + 4]
// 0059aae4  56                   push esi
// 0059aae5  57                   push edi
// 0059aae6  50                   push eax
// 0059aae7  8bf1                 mov esi, ecx
// 0059aae9  e8d201fcff           call 0x55acc0
// 0059aaee  56                   push esi
// 0059aaef  e89c880000           call 0x5a3390
// 0059aaf4  8bf8                 mov edi, eax
// 0059aaf6  8b8624030000         mov eax, dword ptr [esi + 0x324]
// 0059aafc  83c404               add esp, 4
// 0059aaff  3bf8                 cmp edi, eax
// 0059ab01  746e                 je 0x59ab71
// 0059ab03  85c0                 test eax, eax
// 0059ab05  741f                 je 0x59ab26
// 0059ab07  6a00                 push 0
// 0059ab09  8d8ec0010000         lea ecx, [esi + 0x1c0]
// 0059ab0f  e83ca20700           call 0x614d50
// 0059ab14  8d8e28020000         lea ecx, [esi + 0x228]
// 0059ab1a  51                   push ecx
// 0059ab1b  8b8e24030000         mov ecx, dword ptr [esi + 0x324]
// 0059ab21  e88afd0400           call 0x5ea8b0
// 0059ab26  89be24030000         mov dword ptr [esi + 0x324], edi
// 0059ab2c  85ff                 test edi, edi
// 0059ab2e  7441                 je 0x59ab71
// 0059ab30  53                   push ebx
// 0059ab31  8d9e28020000         lea ebx, [esi + 0x228]
// 0059ab37  53                   push ebx
// 0059ab38  8bcf                 mov ecx, edi
// 0059ab3a  e8b1ed0400           call 0x5e98f0
// 0059ab3f  56                   push esi
// 0059ab40  e8eb590000           call 0x5a0530
// 0059ab45  83c404               add esp, 4
// 0059ab48  85c0                 test eax, eax
// 0059ab4a  7407                 je 0x59ab53
// 0059ab4c  0514030000           add eax, 0x314
// 0059ab51  eb02                 jmp 0x59ab55
// 0059ab53  33c0                 xor eax, eax
// 0059ab55  50                   push eax
// 0059ab56  8d8ec0010000         lea ecx, [esi + 0x1c0]
// 0059ab5c  e8efa10700           call 0x614d50
// 0059ab61  8bce                 mov ecx, esi
// 0059ab63  e878feffff           call 0x59a9e0
// 0059ab68  50                   push eax
// 0059ab69  8bcb                 mov ecx, ebx
// 0059ab6b  e870da0400           call 0x5e85e0
// 0059ab70  5b                   pop ebx
// 0059ab71  5f                   pop edi
// 0059ab72  5e                   pop esi
// 0059ab73  c20400               ret 4

struct Component {
    char padding[0xfc];
    void set(void*);
};

struct Link {
    char padding[0x68];
    void set(void*);
};

struct Owner {
    void attach(Component*);
    void detach(Component*);
};

struct Provider {
    char padding[0x314];
    char value;
};

struct S {
    char padding[0x1c0];
    Link link;
    Component component;
    Owner* owner;

    void base(void*);
    void* getValue();
    void f(void*);
};

extern Owner* __cdecl findOwner(S*);
extern Provider* __cdecl findProvider(S*);

void S::f(void* arg)
{
    base(arg);
    Owner* next = findOwner(this);
    if (next != owner) {
        if (owner) {
            link.set(0);
            owner->detach(&component);
        }
        owner = next;
        if (next) {
            next->attach(&component);
            Provider* provider = findProvider(this);
            link.set(provider ? &provider->value : 0);
            component.set(getValue());
        }
    }
}
