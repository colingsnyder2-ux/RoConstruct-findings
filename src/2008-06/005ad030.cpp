// from server: 91% by colin
// roc 2008-06 005ad030  (agentH rewrite)

// from server: 84% by king_originala
// roc 2008-06 005ad030  unit: RBX::Reflection::UTuple::?$holder  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ad030
//
// 005ad030  83ec10               sub esp, 0x10
// 005ad033  53                   push ebx
// 005ad034  8bd9                 mov ebx, ecx
// 005ad036  8d442418             lea eax, [esp + 0x18]
// 005ad03a  50                   push eax
// 005ad03b  8d8b5c010000         lea ecx, [ebx + 0x15c]
// 005ad041  e81acf0300           call 0x5e9f60
// 005ad046  85c0                 test eax, eax
// 005ad048  0f84ea000000         je 0x5ad138
// 005ad04e  56                   push esi
// 005ad04f  57                   push edi
// 005ad050  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005ad054  8db7ec000000         lea esi, [edi + 0xec]
// 005ad05a  8bce                 mov ecx, esi
// 005ad05c  e82fdeffff           call 0x5aae90
// 005ad061  84c0                 test al, al
// 005ad063  7415                 je 0x5ad07a
// 005ad065  8bce                 mov ecx, esi
// 005ad067  e804fdffff           call 0x5acd70
// 005ad06c  8b08                 mov ecx, dword ptr [eax]
// 005ad06e  e89d71feff           call 0x594210
// 005ad073  8bce                 mov ecx, esi
// 005ad075  e8a6deffff           call 0x5aaf20
// 005ad07a  55                   push ebp
// 005ad07b  8d4c2418             lea ecx, [esp + 0x18]
// 005ad07f  57                   push edi
// 005ad080  51                   push ecx
// 005ad081  e8bab90600           call 0x618a40
// 005ad086  8db388010000         lea esi, [ebx + 0x188]
// 005ad08c  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 005ad08f  83c408               add esp, 8
// 005ad092  8be8                 mov ebp, eax
// 005ad094  395e0c               cmp dword ptr [esi + 0xc], ebx
// 005ad097  7606                 jbe 0x5ad09f
// 005ad099  ff1590288000         call dword ptr [0x802890]
// 005ad09f  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005ad0a2  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 005ad0a5  7606                 jbe 0x5ad0ad
// 005ad0a7  ff1590288000         call dword ptr [0x802890]
// 005ad0ad  8b16                 mov edx, dword ptr [esi]
// 005ad0af  89542410             mov dword ptr [esp + 0x10], edx
// 005ad0b3  897c2414             mov dword ptr [esp + 0x14], edi
// 005ad0b7  3bfb                 cmp edi, ebx
// 005ad0b9  7410                 je 0x5ad0cb
// 005ad0bb  8b6d00               mov ebp, dword ptr [ebp]
// 005ad0be  8bff                 mov edi, edi
// 005ad0c0  392f                 cmp dword ptr [edi], ebp
// 005ad0c2  7407                 je 0x5ad0cb
// 005ad0c4  83c708               add edi, 8
// 005ad0c7  3bfb                 cmp edi, ebx
// 005ad0c9  75f5                 jne 0x5ad0c0
// 005ad0cb  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005ad0cf  5d                   pop ebp
// 005ad0d0  85db                 test ebx, ebx
// 005ad0d2  742a                 je 0x5ad0fe
// 005ad0d4  8d4304               lea eax, [ebx + 4]
// 005ad0d7  83c9ff               or ecx, 0xffffffff
// 005ad0da  f00fc108             lock xadd dword ptr [eax], ecx
// 005ad0de  751e                 jne 0x5ad0fe
// 005ad0e0  8b13                 mov edx, dword ptr [ebx]
// 005ad0e2  8b4204               mov eax, dword ptr [edx + 4]
// 005ad0e5  8bcb                 mov ecx, ebx
// 005ad0e7  ffd0                 call eax
// 005ad0e9  8d4b08               lea ecx, [ebx + 8]
// 005ad0ec  83caff               or edx, 0xffffffff
// 005ad0ef  f00fc111             lock xadd dword ptr [ecx], edx
// 005ad0f3  7509                 jne 0x5ad0fe
// 005ad0f5  8b03                 mov eax, dword ptr [ebx]
// 005ad0f7  8b5008               mov edx, dword ptr [eax + 8]
// 005ad0fa  8bcb                 mov ecx, ebx
// 005ad0fc  ffd2                 call edx
// 005ad0fe  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 005ad101  395e0c               cmp dword ptr [esi + 0xc], ebx
// 005ad104  7606                 jbe 0x5ad10c
// 005ad106  ff1590288000         call dword ptr [0x802890]
// 005ad10c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ad110  8b06                 mov eax, dword ptr [esi]
// 005ad112  85c9                 test ecx, ecx
// 005ad114  7404                 je 0x5ad11a
// 005ad116  3bc8                 cmp ecx, eax
// 005ad118  7406                 je 0x5ad120
// 005ad11a  ff1590288000         call dword ptr [0x802890]
// 005ad120  3bfb                 cmp edi, ebx
// 005ad122  7412                 je 0x5ad136
// 005ad124  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ad128  57                   push edi
// 005ad129  50                   push eax
// 005ad12a  8d4c241c             lea ecx, [esp + 0x1c]
// 005ad12e  51                   push ecx
// 005ad12f  8bce                 mov ecx, esi
// 005ad131  e84ac3e8ff           call 0x439480
// 005ad136  5f                   pop edi
// 005ad137  5e                   pop esi
// 005ad138  5b                   pop ebx
// 005ad139  83c410               add esp, 0x10
// 005ad13c  c20400               ret 4

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Referent {
    void notify();
};

struct Link {
    bool active();
    Referent** get();
    void clear();
};

struct Object {
    char padding[0xec];
    Link link;
};

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    Object* object;
    Control* control;
};

extern Shared* __cdecl acquire(Shared*, Object*);

struct Lookup {
    int lookup(Object**);
    char padding[0x2c];
};

struct Entry {
    Object* object;
    unsigned long value;
};

struct Iterator {
    void* owner;
    Entry* position;
};

struct Sequence {
    void* owner;
    unsigned long padding[2];
    Entry* first;
    Entry* last;

    Iterator* erase(Iterator*, Iterator);
};

struct S {
    char padding[0x15c];
    Lookup lookup;
    Sequence sequence;

    void remove(Object*);
};

void S::remove(Object* object)
{
    if (lookup.lookup(&object)) {
        Object* saved = object;
        Link* link = &saved->link;
        if (link->active()) {
            (*link->get())->notify();
            link->clear();
        }

        Shared temporary;
        Shared* value = acquire(&temporary, saved);
        Sequence* container = &sequence;

        Entry* end = container->last;
        if (container->first > end)
            _invalid_parameter_noinfo();

        Entry* current = container->first;
        if (current > container->last)
            _invalid_parameter_noinfo();

        Iterator found;
        found.owner = container->owner;
        found.position = current;

        if (current != end) {
            Object* key = value->object;
            for (; current != end; ++current) {
                if (current->object == key)
                    break;
            }
        }

        Control* control = temporary.control;
        if (control) {
            if (_InterlockedDecrement(&control->strong) == 0) {
                control->dispose();
                if (_InterlockedDecrement(&control->weak) == 0)
                    control->destroy();
            }
        }

        end = container->last;
        if (container->first > end)
            _invalid_parameter_noinfo();

        void* owner = container->owner;
        if (!found.owner || found.owner != owner)
            _invalid_parameter_noinfo();

        if (current != end) {
            found.position = current;
            Iterator result;
            container->erase(&result, found);
        }
    }
}
