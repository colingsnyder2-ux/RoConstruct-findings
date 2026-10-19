// from server: 99% by colin
// from server: 98% by king_originala
// roc 2008-06 00425810  unit: CSelectionTreeCtrl  size: 475 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00425810
//
// 00425810  6aff                 push -1
// 00425812  6810ec7b00           push 0x7bec10
// 00425817  64a100000000         mov eax, dword ptr fs:[0]
// 0042581d  50                   push eax
// 0042581e  64892500000000       mov dword ptr fs:[0], esp
// 00425825  83ec1c               sub esp, 0x1c
// 00425828  56                   push esi
// 00425829  8bf1                 mov esi, ecx
// 0042582b  807e0e00             cmp byte ptr [esi + 0xe], 0
// 0042582f  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00425837  7423                 je 0x42585c
// 00425839  8d4c2434             lea ecx, [esp + 0x34]
// 0042583d  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00425845  e816d4ffff           call 0x422c60
// 0042584a  5e                   pop esi
// 0042584b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0042584f  64890d00000000       mov dword ptr fs:[0], ecx
// 00425856  83c428               add esp, 0x28
// 00425859  c21400               ret 0x14
// 0042585c  837c243400           cmp dword ptr [esp + 0x34], 0
// 00425861  53                   push ebx
// 00425862  55                   push ebp
// 00425863  57                   push edi
// 00425864  b301                 mov bl, 1
// 00425866  0f84c2000000         je 0x42592e
// 0042586c  8d6ef0               lea ebp, [esi - 0x10]
// 0042586f  8bcd                 mov ecx, ebp
// 00425871  896c2424             mov dword ptr [esp + 0x24], ebp
// 00425875  e816d81300           call 0x563090
// 0042587a  885c2428             mov byte ptr [esp + 0x28], bl
// 0042587e  8b442440             mov eax, dword ptr [esp + 0x40]
// 00425882  8d4c2410             lea ecx, [esp + 0x10]
// 00425886  51                   push ecx
// 00425887  8d542420             lea edx, [esp + 0x20]
// 0042588b  8d7ec4               lea edi, [esi - 0x3c]
// 0042588e  52                   push edx
// 0042588f  8bcf                 mov ecx, edi
// 00425891  885c243c             mov byte ptr [esp + 0x3c], bl
// 00425895  89442418             mov dword ptr [esp + 0x18], eax
// 00425899  e862bd0200           call 0x451600
// 0042589e  8b4718               mov eax, dword ptr [edi + 0x18]
// 004258a1  8b3f                 mov edi, dword ptr [edi]
// 004258a3  89442414             mov dword ptr [esp + 0x14], eax
// 004258a7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004258ab  85c0                 test eax, eax
// 004258ad  7404                 je 0x4258b3
// 004258af  3bc7                 cmp eax, edi
// 004258b1  7406                 je 0x4258b9
// 004258b3  ff1590288000         call dword ptr [0x802890]
// 004258b9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004258bd  394c2420             cmp dword ptr [esp + 0x20], ecx
// 004258c1  742d                 je 0x4258f0
// 004258c3  8b962cffffff         mov edx, dword ptr [esi - 0xd4]
// 004258c9  8dbe2cffffff         lea edi, [esi - 0xd4]
// 004258cf  8d4c241c             lea ecx, [esp + 0x1c]
// 004258d3  89542410             mov dword ptr [esp + 0x10], edx
// 004258d7  e8142f2500           call 0x6787f0
// 004258dc  8b4004               mov eax, dword ptr [eax + 4]
// 004258df  8b542410             mov edx, dword ptr [esp + 0x10]
// 004258e3  50                   push eax
// 004258e4  8b825c010000         mov eax, dword ptr [edx + 0x15c]
// 004258ea  8bcf                 mov ecx, edi
// 004258ec  ffd0                 call eax
// 004258ee  eb32                 jmp 0x425922
// 004258f0  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004258f4  51                   push ecx
// 004258f5  8d542420             lea edx, [esp + 0x20]
// 004258f9  52                   push edx
// 004258fa  e841311f00           call 0x618a40
// 004258ff  83c408               add esp, 8
// 00425902  50                   push eax
// 00425903  8d442414             lea eax, [esp + 0x14]
// 00425907  50                   push eax
// 00425908  8d4e10               lea ecx, [esi + 0x10]
// 0042590b  c644243c02           mov byte ptr [esp + 0x3c], 2
// 00425910  e81be7ffff           call 0x424030
// 00425915  8d4c241c             lea ecx, [esp + 0x1c]
// 00425919  885c2434             mov byte ptr [esp + 0x34], bl
// 0042591d  e83ead1d00           call 0x600660
// 00425922  8bcd                 mov ecx, ebp
// 00425924  c644243400           mov byte ptr [esp + 0x34], 0
// 00425929  e8b2d71300           call 0x5630e0
// 0042592e  837c244800           cmp dword ptr [esp + 0x48], 0
// 00425933  0f848c000000         je 0x4259c5
// 00425939  8d6ef0               lea ebp, [esi - 0x10]
// 0042593c  8bcd                 mov ecx, ebp
// 0042593e  896c2424             mov dword ptr [esp + 0x24], ebp
// 00425942  e849d71300           call 0x563090
// 00425947  885c2428             mov byte ptr [esp + 0x28], bl
// 0042594b  8d4c2448             lea ecx, [esp + 0x48]
// 0042594f  51                   push ecx
// 00425950  8d4e10               lea ecx, [esi + 0x10]
// 00425953  c644243803           mov byte ptr [esp + 0x38], 3
// 00425958  e8d3eeffff           call 0x424830
// 0042595d  8b542448             mov edx, dword ptr [esp + 0x48]
// 00425961  8d442410             lea eax, [esp + 0x10]
// 00425965  50                   push eax
// 00425966  8d4c2420             lea ecx, [esp + 0x20]
// 0042596a  8d7ec4               lea edi, [esi - 0x3c]
// 0042596d  51                   push ecx
// 0042596e  8bcf                 mov ecx, edi
// 00425970  89542418             mov dword ptr [esp + 0x18], edx
// 00425974  e887bc0200           call 0x451600
// 00425979  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0042597d  8b5f18               mov ebx, dword ptr [edi + 0x18]
// 00425980  8b3f                 mov edi, dword ptr [edi]
// 00425982  85c0                 test eax, eax
// 00425984  7404                 je 0x42598a
// 00425986  3bc7                 cmp eax, edi
// 00425988  7406                 je 0x425990
// 0042598a  ff1590288000         call dword ptr [0x802890]
// 00425990  395c2420             cmp dword ptr [esp + 0x20], ebx
// 00425994  7423                 je 0x4259b9
// 00425996  8bbe2cffffff         mov edi, dword ptr [esi - 0xd4]
// 0042599c  81c62cffffff         add esi, 0xffffff2c
// 004259a2  8d4c241c             lea ecx, [esp + 0x1c]
// 004259a6  e8452e2500           call 0x6787f0
// 004259ab  8b5004               mov edx, dword ptr [eax + 4]
// 004259ae  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 004259b4  52                   push edx
// 004259b5  8bce                 mov ecx, esi
// 004259b7  ffd0                 call eax
// 004259b9  8bcd                 mov ecx, ebp
// 004259bb  c644243400           mov byte ptr [esp + 0x34], 0
// 004259c0  e81bd71300           call 0x5630e0
// 004259c5  8d4c2440             lea ecx, [esp + 0x40]
// 004259c9  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 004259d1  e88ad2ffff           call 0x422c60
// 004259d6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004259da  5f                   pop edi
// 004259db  5d                   pop ebp
// 004259dc  5b                   pop ebx
// 004259dd  5e                   pop esi
// 004259de  64890d00000000       mov dword ptr fs:[0], ecx
// 004259e5  83c428               add esp, 0x28
// 004259e8  c21400               ret 0x14

struct Change {
    void *added;
    unsigned long addedControl;
    void *removed;
    unsigned long removedControl;
    ~Change();
};

struct Temporary {
    void *object;
    void *control;
    ~Temporary();
};

struct Iterator {
    void *owner;
    void *node;
    void **value();
};

struct Map {
    void *owner;
    char padding[20];
    void *endNode;
    Iterator *find(Iterator *, void *const *);
};

struct Mutex {
    void lock();
    void unlock();
};

struct Guard {
    Mutex *mutex;
    bool locked;
    Guard(Mutex *p) : mutex(p) {
        mutex->lock();
        locked = true;
    }
    ~Guard() {
        if (locked)
            mutex->unlock();
    }
};

struct Selection {
    void insert(void **, const Temporary &);
    void remove(void **);
};

typedef void (__thiscall *TreeAction)(void *, void *);

struct TreeVTable {
    TreeAction entries[88];
};

struct Tree {
    TreeVTable *vtable;
};

extern "C" void (__cdecl *_invalid_parameter_noinfo)();
extern Temporary __cdecl convert(void *);

struct S {
    char padding[14];
    bool disabled;
    void update(unsigned long, Change);
};

void S::update(unsigned long, Change change)
{
    if (disabled)
        return;
    void *key;

    if (change.added) {
        Guard guard(reinterpret_cast<Mutex *>(
            reinterpret_cast<char *>(this) - 16));

        key = change.added;
        Map *map = reinterpret_cast<Map *>(
            reinterpret_cast<char *>(this) - 60);
        Iterator found;
        map->find(&found, &key);

        void *endNode = map->endNode;
        void *owner = map->owner;
        if (!found.owner || found.owner != owner)
            _invalid_parameter_noinfo();

        if (found.node != endNode) {
            Tree *tree = reinterpret_cast<Tree *>(
                reinterpret_cast<char *>(this) - 212);
            TreeVTable *vtable = tree->vtable;
            vtable->entries[87](tree, found.value()[1]);
        } else {
            reinterpret_cast<Selection *>(
                reinterpret_cast<char *>(this) + 16)->insert(
                    &key, convert(change.added));
        }
    }

    if (change.removed) {
        Guard guard(reinterpret_cast<Mutex *>(
            reinterpret_cast<char *>(this) - 16));

        reinterpret_cast<Selection *>(
            reinterpret_cast<char *>(this) + 16)->remove(&change.removed);

        key = change.removed;
        Map *map = reinterpret_cast<Map *>(
            reinterpret_cast<char *>(this) - 60);
        Iterator found;
        map->find(&found, &key);

        void *endNode = map->endNode;
        void *owner = map->owner;
        if (!found.owner || found.owner != owner)
            _invalid_parameter_noinfo();

        if (found.node != endNode) {
            Tree *tree = reinterpret_cast<Tree *>(
                reinterpret_cast<char *>(this) - 212);
            TreeVTable *vtable = tree->vtable;
            vtable->entries[87](tree, found.value()[1]);
        }
    }
}
