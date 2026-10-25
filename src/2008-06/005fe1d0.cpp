// from server: 100% by king_originala
// roc 2008-06 005fe1d0  unit: RBX::Tool  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fe1d0
//
// 005fe1d0  53                   push ebx
// 005fe1d1  8bd9                 mov ebx, ecx
// 005fe1d3  56                   push esi
// 005fe1d4  53                   push ebx
// 005fe1d5  e8a6cae9ff           call 0x49ac80
// 005fe1da  8bf0                 mov esi, eax
// 005fe1dc  83c404               add esp, 4
// 005fe1df  85f6                 test esi, esi
// 005fe1e1  7454                 je 0x5fe237
// 005fe1e3  57                   push edi
// 005fe1e4  8bbe70010000         mov edi, dword ptr [esi + 0x170]
// 005fe1ea  85ff                 test edi, edi
// 005fe1ec  7428                 je 0x5fe216
// 005fe1ee  57                   push edi
// 005fe1ef  e82cb8fdff           call 0x5d9a20
// 005fe1f4  83c404               add esp, 4
// 005fe1f7  85c0                 test eax, eax
// 005fe1f9  741b                 je 0x5fe216
// 005fe1fb  8bcf                 mov ecx, edi
// 005fe1fd  e8fefcffff           call 0x5fdf00
// 005fe202  85c0                 test eax, eax
// 005fe204  7410                 je 0x5fe216
// 005fe206  8b10                 mov edx, dword ptr [eax]
// 005fe208  8bc8                 mov ecx, eax
// 005fe20a  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 005fe210  ffd0                 call eax
// 005fe212  84c0                 test al, al
// 005fe214  7420                 je 0x5fe236
// 005fe216  8bbb04010000         mov edi, dword ptr [ebx + 0x104]
// 005fe21c  8bce                 mov ecx, esi
// 005fe21e  e84de2e8ff           call 0x48c470
// 005fe223  3bf8                 cmp edi, eax
// 005fe225  740f                 je 0x5fe236
// 005fe227  8bce                 mov ecx, esi
// 005fe229  e842e2e8ff           call 0x48c470
// 005fe22e  50                   push eax
// 005fe22f  8bcb                 mov ecx, ebx
// 005fe231  e8bac6f5ff           call 0x55a8f0
// 005fe236  5f                   pop edi
// 005fe237  5e                   pop esi
// 005fe238  5b                   pop ebx
// 005fe239  c3                   ret 

struct Action {
    virtual void slot00(); virtual void slot01();
    virtual void slot02(); virtual void slot03();
    virtual void slot04(); virtual void slot05();
    virtual void slot06(); virtual void slot07();
    virtual void slot08(); virtual void slot09();
    virtual void slot10(); virtual void slot11();
    virtual void slot12(); virtual void slot13();
    virtual void slot14(); virtual void slot15();
    virtual void slot16(); virtual void slot17();
    virtual void slot18(); virtual void slot19();
    virtual void slot20(); virtual void slot21();
    virtual void slot22(); virtual void slot23();
    virtual void slot24(); virtual void slot25();
    virtual void slot26(); virtual void slot27();
    virtual void slot28(); virtual void slot29();
    virtual void slot30(); virtual void slot31();
    virtual void slot32(); virtual void slot33();
    virtual void slot34();
    virtual bool allowed();
};

struct Equipped {
    Action* getAction();
};

struct Owner {
    char padding[0x170];
    Equipped* equipped;
    void* getValue();
};

struct Tool {
    char padding[0x104];
    void* value;
    void setValue(void*);
    void update();
};

extern "C" void* __cdecl findOwner(void*);
extern "C" int __cdecl checkEquipped(Equipped*);

void Tool::update()
{
    Owner* owner = static_cast<Owner*>(findOwner(this));
    if (owner) {
        Equipped* equipped = owner->equipped;
        Action* action;
        if (!equipped ||
            !checkEquipped(equipped) ||
            !(action = equipped->getAction()) ||
            action->allowed()) {
            void* previous = value;
            if (previous != owner->getValue())
                setValue(owner->getValue());
        }
    }
}
