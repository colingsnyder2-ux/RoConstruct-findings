// from server: 100% by king_originala
// roc 2008-06 00442f20  unit: RBXImage  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00442f20
//
// 00442f20  56                   push esi
// 00442f21  8bf1                 mov esi, ecx
// 00442f23  8b4e04               mov ecx, dword ptr [esi + 4]
// 00442f26  33c0                 xor eax, eax
// 00442f28  c706c0578100         mov dword ptr [esi], 0x8157c0
// 00442f2e  3bc8                 cmp ecx, eax
// 00442f30  7426                 je 0x442f58
// 00442f32  51                   push ecx
// 00442f33  894604               mov dword ptr [esi + 4], eax
// 00442f36  894608               mov dword ptr [esi + 8], eax
// 00442f39  89460c               mov dword ptr [esi + 0xc], eax
// 00442f3c  894610               mov dword ptr [esi + 0x10], eax
// 00442f3f  894618               mov dword ptr [esi + 0x18], eax
// 00442f42  894614               mov dword ptr [esi + 0x14], eax
// 00442f45  c74620ffffffff       mov dword ptr [esi + 0x20], 0xffffffff
// 00442f4c  88461d               mov byte ptr [esi + 0x1d], al
// 00442f4f  88461c               mov byte ptr [esi + 0x1c], al
// 00442f52  ff1550218000         call dword ptr [0x802150]
// 00442f58  f644240801           test byte ptr [esp + 8], 1
// 00442f5d  7409                 je 0x442f68
// 00442f5f  56                   push esi
// 00442f60  e815d72500           call 0x6a067a
// 00442f65  83c404               add esp, 4
// 00442f68  8bc6                 mov eax, esi
// 00442f6a  5e                   pop esi
// 00442f6b  c20400               ret 4

struct RBXImage {
    void* vtable;
    void* field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    unsigned char field1C;
    unsigned char field1D;
    int field20;
    void* destroy(unsigned int flags);
};

extern void* image_vtable[];
extern "C" int (__stdcall *DeleteObject)(void*);
extern "C" void __cdecl operator_delete(void*);

void* RBXImage::destroy(unsigned int flags) {
    void* p = this->field4;
    this->vtable = image_vtable;
    if (p != 0) {
        this->field4 = 0;
        this->field8 = 0;
        this->fieldC = 0;
        this->field10 = 0;
        this->field18 = 0;
        this->field14 = 0;
        this->field20 = -1;
        this->field1D = 0;
        this->field1C = 0;
        DeleteObject(p);
    }
    if (flags & 1) {
        operator_delete(this);
    }
    return this;
}
