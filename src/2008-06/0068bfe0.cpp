// from server: 100% by king_originala
// roc 2008-06 0068bfe0  unit: Ogre::RbxSceneManager  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068bfe0
//
// 0068bfe0  56                   push esi
// 0068bfe1  8bf1                 mov esi, ecx
// 0068bfe3  80be828b000000       cmp byte ptr [esi + 0x8b82], 0
// 0068bfea  757d                 jne 0x68c069
// 0068bfec  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0068bff2  ff15d0478000         call dword ptr [0x8047d0]
// 0068bff8  84c0                 test al, al
// 0068bffa  746d                 je 0x68c069
// 0068bffc  8b06                 mov eax, dword ptr [esi]
// 0068bffe  8b90ec020000         mov edx, dword ptr [eax + 0x2ec]
// 0068c004  8bce                 mov ecx, esi
// 0068c006  ffd2                 call edx
// 0068c008  84c0                 test al, al
// 0068c00a  745d                 je 0x68c069
// 0068c00c  83be548a000002       cmp dword ptr [esi + 0x8a54], 2
// 0068c013  751e                 jne 0x68c033
// 0068c015  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0068c019  8b01                 mov eax, dword ptr [ecx]
// 0068c01b  8b5030               mov edx, dword ptr [eax + 0x30]
// 0068c01e  ffd2                 call edx
// 0068c020  84c0                 test al, al
// 0068c022  740f                 je 0x68c033
// 0068c024  80bef88a000000       cmp byte ptr [esi + 0x8af8], 0
// 0068c02b  7506                 jne 0x68c033
// 0068c02d  32c0                 xor al, al
// 0068c02f  5e                   pop esi
// 0068c030  c20800               ret 8
// 0068c033  8b06                 mov eax, dword ptr [esi]
// 0068c035  8b90f0020000         mov edx, dword ptr [eax + 0x2f0]
// 0068c03b  8bce                 mov ecx, esi
// 0068c03d  ffd2                 call edx
// 0068c03f  84c0                 test al, al
// 0068c041  7409                 je 0x68c04c
// 0068c043  83be548a000002       cmp dword ptr [esi + 0x8a54], 2
// 0068c04a  7412                 je 0x68c05e
// 0068c04c  83be548a000001       cmp dword ptr [esi + 0x8a54], 1
// 0068c053  7409                 je 0x68c05e
// 0068c055  80be818b000000       cmp byte ptr [esi + 0x8b81], 0
// 0068c05c  740b                 je 0x68c069
// 0068c05e  8b442408             mov eax, dword ptr [esp + 8]
// 0068c062  6683780400           cmp word ptr [eax + 4], 0
// 0068c067  77c4                 ja 0x68c02d
// 0068c069  b001                 mov al, 1
// 0068c06b  5e                   pop esi
// 0068c06c  c20800               ret 8

struct Viewport;
extern bool (__thiscall *getShadowsEnabled)(const Viewport*);

struct Object;
struct ObjectVTable {
    void* unused[12];
    bool (__thiscall *query)(Object*);
};
struct Object {
    ObjectVTable* vtable;
};

struct Item {
    unsigned long unused;
    unsigned short count;
};

struct S;
struct SVTable {
    void* unused[187];
    bool (__thiscall *queryFirst)(S*);
    bool (__thiscall *querySecond)(S*);
};

struct S {
    SVTable* vtable;
    char pad0[0xb8];
    Viewport* viewport;
    char pad1[0x8994];
    int mode;
    char pad2[0xa0];
    bool flag8af8;
    char pad3[0x88];
    bool flag8b81;
    bool flag8b82;

    bool f(Item* item, Object* object);
};

bool S::f(Item* item, Object* object)
{
    if (!flag8b82 && getShadowsEnabled(viewport) &&
        vtable->queryFirst(this)) {
        if (mode == 2 && object->vtable->query(object) && !flag8af8)
            return false;

        if ((vtable->querySecond(this) && mode == 2) ||
            mode == 1 || flag8b81) {
            if (item->count > 0)
                return false;
        }
    }
    return true;
}
