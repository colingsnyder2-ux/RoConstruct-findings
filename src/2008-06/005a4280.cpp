// from server: 100% by king_originala
// roc 2008-06 005a4280  unit: RBX::Stats::M::?$TypedStatsItem  size: 343 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a4280
//
// 005a4280  6aff                 push -1
// 005a4282  68a82c7d00           push 0x7d2ca8
// 005a4287  64a100000000         mov eax, dword ptr fs:[0]
// 005a428d  50                   push eax
// 005a428e  64892500000000       mov dword ptr fs:[0], esp
// 005a4295  83ec08               sub esp, 8
// 005a4298  837c241800           cmp dword ptr [esp + 0x18], 0
// 005a429d  56                   push esi
// 005a429e  8bf1                 mov esi, ecx
// 005a42a0  89742404             mov dword ptr [esp + 4], esi
// 005a42a4  c744240800000000     mov dword ptr [esp + 8], 0
// 005a42ac  7414                 je 0x5a42c2
// 005a42ae  c78634010000281e8300 mov dword ptr [esi + 0x134], 0x831e28
// 005a42b8  c7860003000044618400 mov dword ptr [esi + 0x300], 0x846144
// 005a42c2  6a00                 push 0
// 005a42c4  e8e7c4ffff           call 0x5a07b0
// 005a42c9  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005a42d1  e89af8ffff           call 0x5a3b70
// 005a42d6  89461c               mov dword ptr [esi + 0x1c], eax
// 005a42d9  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 005a42df  c706943d8300         mov dword ptr [esi], 0x833d94
// 005a42e5  c74610883d8300       mov dword ptr [esi + 0x10], 0x833d88
// 005a42ec  c74614803d8300       mov dword ptr [esi + 0x14], 0x833d80
// 005a42f3  c74620783d8300       mov dword ptr [esi + 0x20], 0x833d78
// 005a42fa  c74624683d8300       mov dword ptr [esi + 0x24], 0x833d68
// 005a4301  c74644583d8300       mov dword ptr [esi + 0x44], 0x833d58
// 005a4308  c74664483d8300       mov dword ptr [esi + 0x64], 0x833d48
// 005a430f  c78684000000383d8300 mov dword ptr [esi + 0x84], 0x833d38
// 005a4319  c786a4000000283d8300 mov dword ptr [esi + 0xa4], 0x833d28
// 005a4323  c786c4000000183d8300 mov dword ptr [esi + 0xc4], 0x833d18
// 005a432d  c786300100000c3d8300 mov dword ptr [esi + 0x130], 0x833d0c
// 005a4337  c786a0010000f43c8300 mov dword ptr [esi + 0x1a0], 0x833cf4
// 005a4341  c78688020000dc3c8300 mov dword ptr [esi + 0x288], 0x833cdc
// 005a434b  8b4804               mov ecx, dword ptr [eax + 4]
// 005a434e  c7843134010000d03c8300 mov dword ptr [ecx + esi + 0x134], 0x833cd0
// 005a4359  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 005a435f  8b4208               mov eax, dword ptr [edx + 8]
// 005a4362  c7843034010000c83c8300 mov dword ptr [eax + esi + 0x134], 0x833cc8
// 005a436d  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 005a4373  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005a4376  c7843234010000ac3c8300 mov dword ptr [edx + esi + 0x134], 0x833cac
// 005a4381  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 005a4387  8b4004               mov eax, dword ptr [eax + 4]
// 005a438a  8d8848feffff         lea ecx, [eax - 0x1b8]
// 005a4390  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 005a4397  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 005a439d  8b4208               mov eax, dword ptr [edx + 8]
// 005a43a0  8d8840feffff         lea ecx, [eax - 0x1c0]
// 005a43a6  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 005a43ad  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 005a43b3  8b420c               mov eax, dword ptr [edx + 0xc]
// 005a43b6  8d8838feffff         lea ecx, [eax - 0x1c8]
// 005a43bc  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 005a43c3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a43c7  8bc6                 mov eax, esi
// 005a43c9  5e                   pop esi
// 005a43ca  64890d00000000       mov dword ptr fs:[0], ecx
// 005a43d1  83c414               add esp, 0x14
// 005a43d4  c20400               ret 4

unsigned long __cdecl getValue();

struct ConstructionState
{
    volatile int value;
    ConstructionState();
};

__forceinline ConstructionState::ConstructionState() : value(0)
{
}

struct Base
{
    unsigned long data[193];
    Base(int);
    ~Base();
};

struct S : Base
{
    S(int initialize);
};

S::S(int initialize)
    : Base((ConstructionState(), initialize
        ? (data[0x134 / 4] = 0x00831e28,
           data[0x300 / 4] = 0x00846144, 0)
        : 0))
{
    data[0x1c / 4] = getValue();

    unsigned long* table =
        reinterpret_cast<unsigned long*>(data[0x134 / 4]);

    data[0x000 / 4] = 0x00833d94;
    data[0x010 / 4] = 0x00833d88;
    data[0x014 / 4] = 0x00833d80;
    data[0x020 / 4] = 0x00833d78;
    data[0x024 / 4] = 0x00833d68;
    data[0x044 / 4] = 0x00833d58;
    data[0x064 / 4] = 0x00833d48;
    data[0x084 / 4] = 0x00833d38;
    data[0x0a4 / 4] = 0x00833d28;
    data[0x0c4 / 4] = 0x00833d18;
    data[0x130 / 4] = 0x00833d0c;
    data[0x1a0 / 4] = 0x00833cf4;
    data[0x288 / 4] = 0x00833cdc;

    *reinterpret_cast<unsigned long*>(
        reinterpret_cast<char*>(this) + 0x134 + table[1]) = 0x00833cd0;

    table = reinterpret_cast<unsigned long*>(data[0x134 / 4]);
    *reinterpret_cast<unsigned long*>(
        reinterpret_cast<char*>(this) + 0x134 + table[2]) = 0x00833cc8;

    table = reinterpret_cast<unsigned long*>(data[0x134 / 4]);
    *reinterpret_cast<unsigned long*>(
        reinterpret_cast<char*>(this) + 0x134 + table[3]) = 0x00833cac;

    table = reinterpret_cast<unsigned long*>(data[0x134 / 4]);
    unsigned long offset = table[1];
    *reinterpret_cast<unsigned long*>(
        reinterpret_cast<char*>(this) + 0x130 + offset) = offset - 0x1b8;

    table = reinterpret_cast<unsigned long*>(data[0x134 / 4]);
    offset = table[2];
    *reinterpret_cast<unsigned long*>(
        reinterpret_cast<char*>(this) + 0x130 + offset) = offset - 0x1c0;

    table = reinterpret_cast<unsigned long*>(data[0x134 / 4]);
    offset = table[3];
    *reinterpret_cast<unsigned long*>(
        reinterpret_cast<char*>(this) + 0x130 + offset) = offset - 0x1c8;
}
