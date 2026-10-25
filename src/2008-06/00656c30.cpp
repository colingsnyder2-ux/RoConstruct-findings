// from server: 100% by king_originala
// roc 2008-06 00656c30  unit: RBX::ArrowPanel  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00656c30
//
// 00656c30  83ec08               sub esp, 8
// 00656c33  56                   push esi
// 00656c34  8bf1                 mov esi, ecx
// 00656c36  807e0800             cmp byte ptr [esi + 8], 0
// 00656c3a  7431                 je 0x656c6d
// 00656c3c  8b460c               mov eax, dword ptr [esi + 0xc]
// 00656c3f  8b9034010000         mov edx, dword ptr [eax + 0x134]
// 00656c45  8d4c2404             lea ecx, [esp + 4]
// 00656c49  51                   push ecx
// 00656c4a  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00656c4d  8b140a               mov edx, dword ptr [edx + ecx]
// 00656c50  035614               add edx, dword ptr [esi + 0x14]
// 00656c53  8d8c0234010000       lea ecx, [edx + eax + 0x134]
// 00656c5a  8b4610               mov eax, dword ptr [esi + 0x10]
// 00656c5d  ffd0                 call eax
// 00656c5f  8b08                 mov ecx, dword ptr [eax]
// 00656c61  890e                 mov dword ptr [esi], ecx
// 00656c63  8b5004               mov edx, dword ptr [eax + 4]
// 00656c66  895604               mov dword ptr [esi + 4], edx
// 00656c69  c6460800             mov byte ptr [esi + 8], 0
// 00656c6d  8b0e                 mov ecx, dword ptr [esi]
// 00656c6f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00656c73  8b5604               mov edx, dword ptr [esi + 4]
// 00656c76  8908                 mov dword ptr [eax], ecx
// 00656c78  895004               mov dword ptr [eax + 4], edx
// 00656c7b  5e                   pop esi
// 00656c7c  83c408               add esp, 8
// 00656c7f  c20400               ret 4

struct Pair {
    int first;
    int second;
};

struct Object {
    char padding[0x134];
    int* virtualBaseTable;
};

typedef Pair* (__thiscall *Getter)(void*, Pair*);

struct ArrowPanel {
    Pair cached;
    bool dirty;
    Object* object;
    Getter getter;
    int adjustment;
    int virtualBaseOffset;

    Pair get();
};

Pair ArrowPanel::get()
{
    if (dirty) {
        Pair temporary;
        cached = *getter(
            reinterpret_cast<char*>(object) +
            (*reinterpret_cast<int*>(
                reinterpret_cast<char*>(object->virtualBaseTable) +
                virtualBaseOffset) + adjustment) + 0x134,
            &temporary);
        dirty = false;
    }
    return cached;
}
