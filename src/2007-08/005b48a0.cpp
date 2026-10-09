// from server: 89% by colin
// roc 2007-08 005b48a0  unit: RBX::Geometry  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b48a0
//
// 005b48a0  8bc1                 mov eax, ecx
// 005b48a2  8a4870               mov cl, byte ptr [eax + 0x70]
// 005b48a5  84c9                 test cl, cl
// 005b48a7  53                   push ebx
// 005b48a8  7509                 jne 0x5b48b3
// 005b48aa  384872               cmp byte ptr [eax + 0x72], cl
// 005b48ad  7404                 je 0x5b48b3
// 005b48af  b301                 mov bl, 1
// 005b48b1  eb02                 jmp 0x5b48b5
// 005b48b3  32db                 xor bl, bl
// 005b48b5  8a542408             mov dl, byte ptr [esp + 8]
// 005b48b9  385072               cmp byte ptr [eax + 0x72], dl
// 005b48bc  7426                 je 0x5b48e4
// 005b48be  56                   push esi
// 005b48bf  8b701c               mov esi, dword ptr [eax + 0x1c]
// 005b48c2  85f6                 test esi, esi
// 005b48c4  885072               mov byte ptr [eax + 0x72], dl
// 005b48c7  741a                 je 0x5b48e3
// 005b48c9  84c9                 test cl, cl
// 005b48cb  7508                 jne 0x5b48d5
// 005b48cd  84d2                 test dl, dl
// 005b48cf  7404                 je 0x5b48d5
// 005b48d1  b201                 mov dl, 1
// 005b48d3  eb02                 jmp 0x5b48d7
// 005b48d5  32d2                 xor dl, dl
// 005b48d7  3ada                 cmp bl, dl
// 005b48d9  7408                 je 0x5b48e3
// 005b48db  50                   push eax
// 005b48dc  8bce                 mov ecx, esi
// 005b48de  e8ed49ffff           call 0x5a92d0
// 005b48e3  5e                   pop esi
// 005b48e4  5b                   pop ebx
// 005b48e5  c20400               ret 4

struct Geometry {
    char pad0[0x1c];
    void* m_bulletCollisionObject;
    char pad1[0x70 - 0x20];
    bool m_flag70;
    char pad2[0x72 - 0x71];
    bool m_flag72;
    void setFlag(bool value);
};

void Geometry::setFlag(bool value)
{
    bool oldFlag70 = m_flag70;
    bool oldFlag72 = m_flag72;
    bool oldCombined = !oldFlag70 && oldFlag72;

    if (m_flag72 != value) {
        void* obj = m_bulletCollisionObject;
        m_flag72 = value;
        if (obj != 0) {
            bool newCombined = !oldFlag70 && value;
            if (oldCombined != newCombined) {
                ((void (__thiscall*)(void*, Geometry*))0x5a92d0)(obj, this);
            }
        }
    }
}
