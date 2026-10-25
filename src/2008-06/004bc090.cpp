// from server: 100% by king_originala
// roc 2008-06 004bc090  unit: ProfiledRakPeer  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bc090
//
// 004bc090  83ec08               sub esp, 8
// 004bc093  56                   push esi
// 004bc094  8b742410             mov esi, dword ptr [esp + 0x10]
// 004bc098  83be1007000000       cmp dword ptr [esi + 0x710], 0
// 004bc09f  7f0a                 jg 0x4bc0ab
// 004bc0a1  c7861007000001000000 mov dword ptr [esi + 0x710], 1
// 004bc0ab  57                   push edi
// 004bc0ac  6a00                 push 0
// 004bc0ae  6a00                 push 0
// 004bc0b0  6a00                 push 0
// 004bc0b2  ff154c228000         call dword ptr [0x80224c]
// 004bc0b8  8b8e10070000         mov ecx, dword ptr [esi + 0x710]
// 004bc0be  8bf8                 mov edi, eax
// 004bc0c0  8bc1                 mov eax, ecx
// 004bc0c2  69c0f0d8ffff         imul eax, eax, 0xffffd8f0
// 004bc0c8  6a00                 push 0
// 004bc0ca  6a00                 push 0
// 004bc0cc  99                   cdq 
// 004bc0cd  6a00                 push 0
// 004bc0cf  89442414             mov dword ptr [esp + 0x14], eax
// 004bc0d3  51                   push ecx
// 004bc0d4  8d442418             lea eax, [esp + 0x18]
// 004bc0d8  50                   push eax
// 004bc0d9  57                   push edi
// 004bc0da  89542424             mov dword ptr [esp + 0x24], edx
// 004bc0de  ff1548228000         call dword ptr [0x802248]
// 004bc0e4  c6460501             mov byte ptr [esi + 5], 1
// 004bc0e8  8a4e04               mov cl, byte ptr [esi + 4]
// 004bc0eb  5f                   pop edi
// 004bc0ec  84c9                 test cl, cl
// 004bc0ee  7522                 jne 0x4bc112
// 004bc0f0  8b16                 mov edx, dword ptr [esi]
// 004bc0f2  8b8214010000         mov eax, dword ptr [edx + 0x114]
// 004bc0f8  8bce                 mov ecx, esi
// 004bc0fa  ffd0                 call eax
// 004bc0fc  8b8e10070000         mov ecx, dword ptr [esi + 0x710]
// 004bc102  51                   push ecx
// 004bc103  e868800100           call 0x4d4170
// 004bc108  8a5604               mov dl, byte ptr [esi + 4]
// 004bc10b  83c404               add esp, 4
// 004bc10e  84d2                 test dl, dl
// 004bc110  74de                 je 0x4bc0f0
// 004bc112  33c0                 xor eax, eax
// 004bc114  884605               mov byte ptr [esi + 5], al
// 004bc117  5e                   pop esi
// 004bc118  83c408               add esp, 8
// 004bc11b  c20400               ret 4

struct Peer;
typedef void (__thiscall *PeerCall)(Peer *);

struct Peer {
    PeerCall *vtable;
    volatile bool stopped;
    volatile bool running;
    unsigned char padding[0x70A];
    int period;
};

extern "C" {
    extern void * (__stdcall *CreateWaitableTimerA)(void *, int, const char *);
    extern int (__stdcall *SetWaitableTimer)(
        void *, const __int64 *, int, void *, void *, int);
}

extern unsigned long __cdecl get_file_attributes(const char *);

unsigned long __stdcall worker(Peer *peer)
{
    if (peer->period <= 0)
        peer->period = 1;

    void *timer = CreateWaitableTimerA(0, 0, 0);
    __int64 due = (int)(peer->period * -10000);
    SetWaitableTimer(timer, &due, peer->period, 0, 0, 0);

    peer->running = true;
    while (!peer->stopped) {
        peer->vtable[0x45](peer);
        get_file_attributes((const char *)peer->period);
    }
    peer->running = false;
    return 0;
}
