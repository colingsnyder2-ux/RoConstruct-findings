// from server: 100% by king_originala
// roc 2008-06 0056ab90  unit: RBX::VInstance::?$NonFactoryProduct  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056ab90
//
// 0056ab90  83ec38               sub esp, 0x38
// 0056ab93  53                   push ebx
// 0056ab94  56                   push esi
// 0056ab95  57                   push edi
// 0056ab96  8d5908               lea ebx, [ecx + 8]
// 0056ab99  8d44240c             lea eax, [esp + 0xc]
// 0056ab9d  50                   push eax
// 0056ab9e  8bcb                 mov ecx, ebx
// 0056aba0  e8db670000           call 0x571380
// 0056aba5  8b3d90288000         mov edi, dword ptr [0x802890]
// 0056abab  eb03                 jmp 0x56abb0
// 0056abad  8d4900               lea ecx, [ecx]
// 0056abb0  8d4c2428             lea ecx, [esp + 0x28]
// 0056abb4  51                   push ecx
// 0056abb5  8bcb                 mov ecx, ebx
// 0056abb7  e8f4670000           call 0x5713b0
// 0056abbc  8bf0                 mov esi, eax
// 0056abbe  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056abc2  85c0                 test eax, eax
// 0056abc4  7404                 je 0x56abca
// 0056abc6  3b06                 cmp eax, dword ptr [esi]
// 0056abc8  7406                 je 0x56abd0
// 0056abca  ffd7                 call edi
// 0056abcc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056abd0  8b542410             mov edx, dword ptr [esp + 0x10]
// 0056abd4  3b5604               cmp edx, dword ptr [esi + 4]
// 0056abd7  753b                 jne 0x56ac14
// 0056abd9  85c0                 test eax, eax
// 0056abdb  7406                 je 0x56abe3
// 0056abdd  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0056abe1  7402                 je 0x56abe5
// 0056abe3  ffd7                 call edi
// 0056abe5  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056abe9  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0056abed  741c                 je 0x56ac0b
// 0056abef  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0056abf3  85c0                 test eax, eax
// 0056abf5  7405                 je 0x56abfc
// 0056abf7  3b4610               cmp eax, dword ptr [esi + 0x10]
// 0056abfa  7406                 je 0x56ac02
// 0056abfc  ffd7                 call edi
// 0056abfe  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0056ac02  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056ac06  3b4e14               cmp ecx, dword ptr [esi + 0x14]
// 0056ac09  750d                 jne 0x56ac18
// 0056ac0b  5f                   pop edi
// 0056ac0c  5e                   pop esi
// 0056ac0d  b001                 mov al, 1
// 0056ac0f  5b                   pop ebx
// 0056ac10  83c438               add esp, 0x38
// 0056ac13  c3                   ret 
// 0056ac14  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0056ac18  85c0                 test eax, eax
// 0056ac1a  750a                 jne 0x56ac26
// 0056ac1c  ffd7                 call edi
// 0056ac1e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0056ac22  85c0                 test eax, eax
// 0056ac24  7404                 je 0x56ac2a
// 0056ac26  8b00                 mov eax, dword ptr [eax]
// 0056ac28  eb02                 jmp 0x56ac2c
// 0056ac2a  33c0                 xor eax, eax
// 0056ac2c  8b542420             mov edx, dword ptr [esp + 0x20]
// 0056ac30  3b5014               cmp edx, dword ptr [eax + 0x14]
// 0056ac33  7502                 jne 0x56ac37
// 0056ac35  ffd7                 call edi
// 0056ac37  8b442420             mov eax, dword ptr [esp + 0x20]
// 0056ac3b  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056ac3e  85c0                 test eax, eax
// 0056ac40  7406                 je 0x56ac48
// 0056ac42  83780800             cmp dword ptr [eax + 8], 0
// 0056ac46  750e                 jne 0x56ac56
// 0056ac48  8d4c240c             lea ecx, [esp + 0xc]
// 0056ac4c  e84ffee9ff           call 0x40aaa0
// 0056ac51  e95affffff           jmp 0x56abb0
// 0056ac56  5f                   pop edi
// 0056ac57  5e                   pop esi
// 0056ac58  32c0                 xor al, al
// 0056ac5a  5b                   pop ebx
// 0056ac5b  83c438               add esp, 0x38
// 0056ac5e  c3                   ret 

struct Node;

struct Owner {
    char padding[20];
    Node* sentinel;
};

struct Proxy {
    Owner* owner;
};

struct Value {
    char padding[8];
    int flag;
};

struct Node {
    char padding[12];
    Value* value;
};

struct Iterator {
    void* owner;
    void* position;
    void* firstOwner;
    void* firstPosition;
    Proxy* proxy;
    Node* node;
    unsigned int unused;

    void advance();
};

struct Range {
    Iterator begin();
    Iterator* end(Iterator*);
};

struct S {
    char padding[8];
    Range range;

    bool f();
};

extern "C" void (__cdecl *invalid_parameter_noinfo)();

bool S::f()
{
    Iterator current = range.begin();
    void (__cdecl *check)() = invalid_parameter_noinfo;

    for (;;) {
        Iterator storage;
        Iterator* finish = range.end(&storage);

        if (!current.owner || current.owner != finish->owner)
            check();

        if (current.position == finish->position) {
            if (!current.owner || current.owner != current.firstOwner)
                check();

            if (current.position == current.firstPosition)
                return true;

            if (!current.proxy || current.proxy != finish->proxy)
                check();

            if (current.node == finish->node)
                return true;
        }

        if (!current.proxy)
            check();

        Owner* owner = current.proxy ? current.proxy->owner : 0;

        if (current.node == owner->sentinel)
            check();

        Value* value = current.node->value;
        if (value && value->flag)
            return false;

        current.advance();
    }
}
