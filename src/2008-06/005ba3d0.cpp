// from server: 100% by colin
// roc 2008-06 005ba3d0  unit: RBX::Soundscape::SoundChannel  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ba3d0
//
// 005ba3d0  51                   push ecx
// 005ba3d1  56                   push esi
// 005ba3d2  8bf1                 mov esi, ecx
// 005ba3d4  8b460c               mov eax, dword ptr [esi + 0xc]
// 005ba3d7  57                   push edi
// 005ba3d8  8dbed0feffff         lea edi, [esi - 0x130]
// 005ba3de  85c0                 test eax, eax
// 005ba3e0  7422                 je 0x5ba404
// 005ba3e2  8d4c240b             lea ecx, [esp + 0xb]
// 005ba3e6  51                   push ecx
// 005ba3e7  50                   push eax
// 005ba3e8  e8ef570e00           call 0x69fbdc
// 005ba3ed  83f824               cmp eax, 0x24
// 005ba3f0  7412                 je 0x5ba404
// 005ba3f2  807c240b00           cmp byte ptr [esp + 0xb], 0
// 005ba3f7  750b                 jne 0x5ba404
// 005ba3f9  8b560c               mov edx, dword ptr [esi + 0xc]
// 005ba3fc  52                   push edx
// 005ba3fd  8bcf                 mov ecx, edi
// 005ba3ff  e81cf5ffff           call 0x5b9920
// 005ba404  5f                   pop edi
// 005ba405  5e                   pop esi
// 005ba406  59                   pop ecx
// 005ba407  c20c00               ret 0xc

// from server: 67% by colin
struct Vector3 {
    float x, y, z;
};

struct Frame {
    unsigned char padding[0x24];
    Vector3 position;
};

struct Body {
    unsigned char padding[0xc4];
    Vector3 value;
    void updatePV(int);
};

extern "C" int __stdcall sub_69fbdc(int, unsigned char *);

struct SoundChannel {
    unsigned char padding[0xc];
    int field_c;

    void sub_5ba3d0(int, int, int);
};

void SoundChannel::sub_5ba3d0(int, int, int)
{
    unsigned char local;
    Body *body = (Body *)((unsigned char *)this - 0x130);
    int v = *(int*)((char*)body + 0x13c);
    if (v != 0) {
        if (sub_69fbdc(v, &local) == 0x24)
            return;
        if (local != 0)
            return;
        body->updatePV(field_c);
    }
}


