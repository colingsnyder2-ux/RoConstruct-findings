// from server: 100% by colin
// roc 2007-08 00442990  unit: RBXImage  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00442990
//
// 00442990  56                   push esi
// 00442991  8bf1                 mov esi, ecx
// 00442993  8b4e04               mov ecx, dword ptr [esi + 4]
// 00442996  33c0                 xor eax, eax
// 00442998  3bc8                 cmp ecx, eax
// 0044299a  c70688f57800         mov dword ptr [esi], 0x78f588
// 004429a0  7426                 je 0x4429c8
// 004429a2  51                   push ecx
// 004429a3  894604               mov dword ptr [esi + 4], eax
// 004429a6  894608               mov dword ptr [esi + 8], eax
// 004429a9  89460c               mov dword ptr [esi + 0xc], eax
// 004429ac  894610               mov dword ptr [esi + 0x10], eax
// 004429af  894618               mov dword ptr [esi + 0x18], eax
// 004429b2  894614               mov dword ptr [esi + 0x14], eax
// 004429b5  c74620ffffffff       mov dword ptr [esi + 0x20], 0xffffffff
// 004429bc  88461d               mov byte ptr [esi + 0x1d], al
// 004429bf  88461c               mov byte ptr [esi + 0x1c], al
// 004429c2  ff15c8d07700         call dword ptr [0x77d0c8]
// 004429c8  f644240801           test byte ptr [esp + 8], 1
// 004429cd  7409                 je 0x4429d8
// 004429cf  56                   push esi
// 004429d0  e88dd21e00           call 0x62fc62
// 004429d5  83c404               add esp, 4
// 004429d8  8bc6                 mov eax, esi
// 004429da  5e                   pop esi
// 004429db  c20400               ret 4

struct RBXImage {
    void* vftable;
    void* field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    unsigned char field1C;
    unsigned char field1D;
    char pad1E[2];
    int field20;
    RBXImage* destroy(int);
};

extern "C" int (__stdcall *DeleteObject)(void*);
extern "C" void __cdecl sub_62FC62(void*);

RBXImage* RBXImage::destroy(int flags) {
    void* p = field4;
    vftable = (void*)0x78f588;
    if (p != 0) {
        field4 = 0;
        field8 = 0;
        fieldC = 0;
        field10 = 0;
        field18 = 0;
        field14 = 0;
        field20 = -1;
        field1D = 0;
        field1C = 0;
        DeleteObject(p);
    }
    if (flags & 1) {
        sub_62FC62(this);
    }
    return this;
}
