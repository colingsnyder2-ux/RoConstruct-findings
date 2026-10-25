// from server: 78% by colin
// roc 2008-06 005bc5b0  unit: RBX::Soundscape::SoundService  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bc5b0
//
// 005bc5b0  83b96c01000000       cmp dword ptr [ecx + 0x16c], 0
// 005bc5b7  56                   push esi
// 005bc5b8  7433                 je 0x5bc5ed
// 005bc5ba  f6816501000001       test byte ptr [ecx + 0x165], 1
// 005bc5c1  742a                 je 0x5bc5ed
// 005bc5c3  83b93c01000000       cmp dword ptr [ecx + 0x13c], 0
// 005bc5ca  7421                 je 0x5bc5ed
// 005bc5cc  51                   push ecx
// 005bc5cd  8db130010000         lea esi, [ecx + 0x130]
// 005bc5d3  e8e88beaff           call 0x4651c0
// 005bc5d8  83c404               add esp, 4
// 005bc5db  85c0                 test eax, eax
// 005bc5dd  742d                 je 0x5bc60c
// 005bc5df  56                   push esi
// 005bc5e0  8d8830010000         lea ecx, [eax + 0x130]
// 005bc5e6  e8b552e6ff           call 0x4218a0
// 005bc5eb  5e                   pop esi
// 005bc5ec  c3                   ret 
// 005bc5ed  51                   push ecx
// 005bc5ee  8db130010000         lea esi, [ecx + 0x130]
// 005bc5f4  e8c78beaff           call 0x4651c0
// 005bc5f9  83c404               add esp, 4
// 005bc5fc  85c0                 test eax, eax
// 005bc5fe  740c                 je 0x5bc60c
// 005bc600  56                   push esi
// 005bc601  8d8830010000         lea ecx, [eax + 0x130]
// 005bc607  e874940200           call 0x5e5a80
// 005bc60c  5e                   pop esi
// 005bc60d  c3                   ret 

struct Listener {
    char padding[12];
    int active;
    char remainder[32];

    void attach(Listener*);
    void detach(Listener*);
};

struct SoundService {
    char padding[0x130];
    Listener listener;
    char reserved[5];
    unsigned char flags;
    char reserved2[6];
    int enabled;

    void update();
};

SoundService* __cdecl findService(SoundService*);

void SoundService::update()
{
    Listener* self = &listener;
    if (enabled && (flags & 1) && listener.active) {
        SoundService* service = findService(this);
        if (service)
            service->listener.attach(self);
    } else {
        SoundService* service = findService(this);
        if (service)
            service->listener.detach(self);
    }
}
