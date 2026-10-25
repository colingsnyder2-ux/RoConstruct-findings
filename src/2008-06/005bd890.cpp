// from server: 100% by king_originala
// roc 2008-06 005bd890  unit: RBX::Soundscape::SoundChannel  size: 370 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bd890
//
// 005bd890  53                   push ebx
// 005bd891  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005bd895  8b4304               mov eax, dword ptr [ebx + 4]
// 005bd898  55                   push ebp
// 005bd899  56                   push esi
// 005bd89a  57                   push edi
// 005bd89b  50                   push eax
// 005bd89c  8bf1                 mov esi, ecx
// 005bd89e  e82dc0ecff           call 0x4898d0
// 005bd8a3  8b4b08               mov ecx, dword ptr [ebx + 8]
// 005bd8a6  51                   push ecx
// 005bd8a7  8be8                 mov ebp, eax
// 005bd8a9  e822c0ecff           call 0x4898d0
// 005bd8ae  83c408               add esp, 8
// 005bd8b1  89442414             mov dword ptr [esp + 0x14], eax
// 005bd8b5  85f6                 test esi, esi
// 005bd8b7  7408                 je 0x5bd8c1
// 005bd8b9  8dbe30010000         lea edi, [esi + 0x130]
// 005bd8bf  eb02                 jmp 0x5bd8c3
// 005bd8c1  33ff                 xor edi, edi
// 005bd8c3  85ed                 test ebp, ebp
// 005bd8c5  7464                 je 0x5bd92b
// 005bd8c7  8bcd                 mov ecx, ebp
// 005bd8c9  e8b253e9ff           call 0x452c80
// 005bd8ce  85c0                 test eax, eax
// 005bd8d0  740c                 je 0x5bd8de
// 005bd8d2  57                   push edi
// 005bd8d3  8d8830010000         lea ecx, [eax + 0x130]
// 005bd8d9  e8a2810200           call 0x5e5a80
// 005bd8de  f6866501000002       test byte ptr [esi + 0x165], 2
// 005bd8e5  7407                 je 0x5bd8ee
// 005bd8e7  8bce                 mov ecx, esi
// 005bd8e9  e8a2fcffff           call 0x5bd590
// 005bd8ee  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 005bd8f4  85c0                 test eax, eax
// 005bd8f6  741b                 je 0x5bd913
// 005bd8f8  6a00                 push 0
// 005bd8fa  50                   push eax
// 005bd8fb  e8f4220e00           call 0x69fbf4
// 005bd900  50                   push eax
// 005bd901  e89aaeffff           call 0x5b87a0
// 005bd906  83c404               add esp, 4
// 005bd909  c7863c01000000000000 mov dword ptr [esi + 0x13c], 0
// 005bd913  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 005bd919  8d8e34010000         lea ecx, [esi + 0x134]
// 005bd91f  85c0                 test eax, eax
// 005bd921  7408                 je 0x5bd92b
// 005bd923  ff4808               dec dword ptr [eax + 8]
// 005bd926  e85595e9ff           call 0x456e80
// 005bd92b  53                   push ebx
// 005bd92c  8bce                 mov ecx, esi
// 005bd92e  e88dd3f9ff           call 0x55acc0
// 005bd933  3933                 cmp dword ptr [ebx], esi
// 005bd935  7527                 jne 0x5bd95e
// 005bd937  8b5308               mov edx, dword ptr [ebx + 8]
// 005bd93a  6a00                 push 0
// 005bd93c  6850dd9200           push 0x92dd50
// 005bd941  687c909200           push 0x92907c
// 005bd946  6a00                 push 0
// 005bd948  52                   push edx
// 005bd949  e8783e0e00           call 0x6a17c6
// 005bd94e  83c414               add esp, 0x14
// 005bd951  8bce                 mov ecx, esi
// 005bd953  89866c010000         mov dword ptr [esi + 0x16c], eax
// 005bd959  e852ecffff           call 0x5bc5b0
// 005bd95e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005bd962  85ff                 test edi, edi
// 005bd964  743a                 je 0x5bd9a0
// 005bd966  8bcf                 mov ecx, edi
// 005bd968  e87358e9ff           call 0x4531e0
// 005bd96d  85c0                 test eax, eax
// 005bd96f  742f                 je 0x5bd9a0
// 005bd971  83b83401000000       cmp dword ptr [eax + 0x134], 0
// 005bd978  7426                 je 0x5bd9a0
// 005bd97a  80a665010000fb       and byte ptr [esi + 0x165], 0xfb
// 005bd981  8bce                 mov ecx, esi
// 005bd983  e888ecffff           call 0x5bc610
// 005bd988  8bce                 mov ecx, esi
// 005bd98a  e821ecffff           call 0x5bc5b0
// 005bd98f  83be6801000000       cmp dword ptr [esi + 0x168], 0
// 005bd996  7e08                 jle 0x5bd9a0
// 005bd998  56                   push esi
// 005bd999  8bce                 mov ecx, esi
// 005bd99b  e810f5ffff           call 0x5bceb0
// 005bd9a0  85ed                 test ebp, ebp
// 005bd9a2  7457                 je 0x5bd9fb
// 005bd9a4  8bcd                 mov ecx, ebp
// 005bd9a6  e84531edff           call 0x490af0
// 005bd9ab  85c0                 test eax, eax
// 005bd9ad  744c                 je 0x5bd9fb
// 005bd9af  8b4b04               mov ecx, dword ptr [ebx + 4]
// 005bd9b2  3bc8                 cmp ecx, eax
// 005bd9b4  740a                 je 0x5bd9c0
// 005bd9b6  50                   push eax
// 005bd9b7  e82451e6ff           call 0x422ae0
// 005bd9bc  84c0                 test al, al
// 005bd9be  743b                 je 0x5bd9fb
// 005bd9c0  85ff                 test edi, edi
// 005bd9c2  741c                 je 0x5bd9e0
// 005bd9c4  8bcf                 mov ecx, edi
// 005bd9c6  e82531edff           call 0x490af0
// 005bd9cb  85c0                 test eax, eax
// 005bd9cd  7411                 je 0x5bd9e0
// 005bd9cf  8b4b08               mov ecx, dword ptr [ebx + 8]
// 005bd9d2  3bc8                 cmp ecx, eax
// 005bd9d4  7425                 je 0x5bd9fb
// 005bd9d6  50                   push eax
// 005bd9d7  e80451e6ff           call 0x422ae0
// 005bd9dc  84c0                 test al, al
// 005bd9de  751b                 jne 0x5bd9fb
// 005bd9e0  80be6401000000       cmp byte ptr [esi + 0x164], 0
// 005bd9e7  740b                 je 0x5bd9f4
// 005bd9e9  8b4304               mov eax, dword ptr [ebx + 4]
// 005bd9ec  50                   push eax
// 005bd9ed  8bce                 mov ecx, esi
// 005bd9ef  e8bcf4ffff           call 0x5bceb0
// 005bd9f4  8bce                 mov ecx, esi
// 005bd9f6  e8f5bdffff           call 0x5b97f0
// 005bd9fb  5f                   pop edi
// 005bd9fc  5e                   pop esi
// 005bd9fd  5d                   pop ebp
// 005bd9fe  5b                   pop ebx
// 005bd9ff  c20400               ret 4

struct Channel;
struct Instance;
struct Change;

struct Link {
    unsigned long value;
    void remove(Link*);
};

struct Control {
    unsigned long reserved[2];
    long count;
};

struct Shared {
    Control* object;
    void* owner;
    void clear();
};

struct Instance {
    bool contains(Instance*);
    Channel* oldChannel();
    Channel* newChannel();
    Instance* root();
};

struct Change {
    Channel* subject;
    Instance* oldParent;
    Instance* newParent;
};

struct Channel {
    char reserved0[0x130];
    Link link;
    Shared shared;
    void* resource;
    char reserved1[0x24];
    unsigned char active;
    unsigned char flags;
    char reserved2[2];
    int count;
    void* part;

    void update(Change*);
    void baseUpdate(Change*);
    void stop();
    void refresh();
    void prepare();
    void notify(void*);
    void finish();
};

extern Instance* __cdecl lookup(Instance*);
extern void* __stdcall releaseResource(void*, int);
extern void __cdecl disposeResource(void*);
extern void* __cdecl checkedCast(void*, int, const void*, const void*, int);
extern const char instanceType;
extern const char partType;

void Channel::update(Change* change)
{
    Instance* oldNode = lookup(change->oldParent);
    Instance* newNode = lookup(change->newParent);
    Link* ownLink = this ? &link : 0;

    if (oldNode) {
        Channel* channel = oldNode->oldChannel();
        if (channel)
            channel->link.remove(ownLink);

        if (flags & 2)
            stop();

        if (resource) {
            disposeResource(releaseResource(resource, 0));
            resource = 0;
        }

        if (shared.object) {
            --shared.object->count;
            shared.clear();
        }
    }

    baseUpdate(change);

    if (change->subject == this) {
        part = checkedCast(change->newParent, 0, &instanceType, &partType, 0);
        refresh();
    }

    if (newNode) {
        Channel* channel = newNode->newChannel();
        if (channel && channel->shared.object) {
            flags &= 0xfb;
            prepare();
            refresh();
            if (count > 0)
                notify(this);
        }
    }

    if (oldNode) {
        Instance* oldRoot = oldNode->root();
        if (oldRoot &&
            (change->oldParent == oldRoot || change->oldParent->contains(oldRoot))) {
            if (newNode) {
                Instance* newRoot = newNode->root();
                if (newRoot &&
                    (change->newParent == newRoot ||
                     change->newParent->contains(newRoot)))
                    return;
            }

            if (active)
                notify(change->oldParent);
            finish();
        }
    }
}
