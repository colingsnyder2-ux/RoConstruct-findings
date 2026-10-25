// from server: 100% by king_originala
// roc 2008-06 005dbf40  unit: RBX::VPartInstance::?$FilteredSelection  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dbf40
//
// 005dbf40  56                   push esi
// 005dbf41  8bf1                 mov esi, ecx
// 005dbf43  e8c8cbffff           call 0x5d8b10
// 005dbf48  85c0                 test eax, eax
// 005dbf4a  7429                 je 0x5dbf75
// 005dbf4c  8bce                 mov ecx, esi
// 005dbf4e  e8bdcbffff           call 0x5d8b10
// 005dbf53  50                   push eax
// 005dbf54  e877140500           call 0x62d3d0
// 005dbf59  83c404               add esp, 4
// 005dbf5c  84c0                 test al, al
// 005dbf5e  7515                 jne 0x5dbf75
// 005dbf60  d986a8010000         fld dword ptr [esi + 0x1a8]
// 005dbf66  51                   push ecx
// 005dbf67  d864240c             fsub dword ptr [esp + 0xc]
// 005dbf6b  8bce                 mov ecx, esi
// 005dbf6d  d91c24               fstp dword ptr [esp]
// 005dbf70  e8fbfeffff           call 0x5dbe70
// 005dbf75  5e                   pop esi
// 005dbf76  c20400               ret 4

extern bool __cdecl check(void *);

struct S {
    char padding[0x1A8];
    float value;

    void *get();
    void set(float);
    void f(float);
};

#pragma float_control(precise, off, push)
void S::f(float amount)
{
    if (get() && !check(get()))
        set(value - amount);
}
#pragma float_control(pop)
