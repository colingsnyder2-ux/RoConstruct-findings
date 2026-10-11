// from server: 100% by atomic.potato
// roc 2008-06 00618460  unit: RBX::Flag  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00618460
//
// 00618460  837c240400           cmp dword ptr [esp + 4], 0
// 00618465  56                   push esi
// 00618466  8bf1                 mov esi, ecx
// 00618468  740a                 je 0x618474
// 0061846a  c786c0010000e03d8400 mov dword ptr [esi + 0x1c0], 0x843de0
// 00618474  6a00                 push 0
// 00618476  e8c57dfeff           call 0x600240
// 0061847b  8b86c0010000         mov eax, dword ptr [esi + 0x1c0]
// 00618481  c7064c3d8400         mov dword ptr [esi], 0x843d4c
// 00618487  c746103c3d8400       mov dword ptr [esi + 0x10], 0x843d3c
// 0061848e  c74614343d8400       mov dword ptr [esi + 0x14], 0x843d34
// 00618495  c746202c3d8400       mov dword ptr [esi + 0x20], 0x843d2c
// 0061849c  c746241c3d8400       mov dword ptr [esi + 0x24], 0x843d1c
// 006184a3  c746440c3d8400       mov dword ptr [esi + 0x44], 0x843d0c
// 006184aa  c74664fc3c8400       mov dword ptr [esi + 0x64], 0x843cfc
// 006184b1  c78684000000ec3c8400 mov dword ptr [esi + 0x84], 0x843cec
// 006184bb  c786a4000000dc3c8400 mov dword ptr [esi + 0xa4], 0x843cdc
// 006184c5  c786c4000000cc3c8400 mov dword ptr [esi + 0xc4], 0x843ccc
// 006184cf  c78630010000c43c8400 mov dword ptr [esi + 0x130], 0x843cc4
// 006184d9  c786a0010000bc3c8400 mov dword ptr [esi + 0x1a0], 0x843cbc
// 006184e3  c786b0010000a43c8400 mov dword ptr [esi + 0x1b0], 0x843ca4
// 006184ed  8b4804               mov ecx, dword ptr [eax + 4]
// 006184f0  c78431c00100009c3c8400 mov dword ptr [ecx + esi + 0x1c0], 0x843c9c
// 006184fb  8b96c0010000         mov edx, dword ptr [esi + 0x1c0]
// 00618501  8b4204               mov eax, dword ptr [edx + 4]
// 00618504  8d8854ffffff         lea ecx, [eax - 0xac]
// 0061850a  898c30bc010000       mov dword ptr [eax + esi + 0x1bc], ecx
// 00618511  8bc6                 mov eax, esi
// 00618513  5e                   pop esi
// 00618514  c20400               ret 4

struct Flag {
    char pad0[0x10];
    void* vt10;
    void* vt14;
    char pad18[8];
    void* vt20;
    void* vt24;
    char pad28[0x1c];
    void* vt44;
    char pad48[0x1c];
    void* vt64;
    char pad68[0x1c];
    void* vt84;
    char pad88[0x1c];
    void* vta4;
    char padA8[0x1c];
    void* vtc4;
    char padC8[0x68];
    void* vt130;
    char pad134[0x6c];
    void* vt1a0;
    char pad1a4[0xc];
    void* vt1b0;
    char pad1b4[0xc];
    void* vt1c0;
    Flag* init(int);
};

extern "C" void __stdcall sub_600240(int);

Flag* Flag::init(int a) {
    if (a != 0) {
        *(void**)((char*)this + 0x1c0) = (void*)0x843de0;
    }
    sub_600240(0);
    void* p = *(void**)((char*)this + 0x1c0);
    *(void**)this = (void*)0x843d4c;
    *(void**)((char*)this + 0x10) = (void*)0x843d3c;
    *(void**)((char*)this + 0x14) = (void*)0x843d34;
    *(void**)((char*)this + 0x20) = (void*)0x843d2c;
    *(void**)((char*)this + 0x24) = (void*)0x843d1c;
    *(void**)((char*)this + 0x44) = (void*)0x843d0c;
    *(void**)((char*)this + 0x64) = (void*)0x843cfc;
    *(void**)((char*)this + 0x84) = (void*)0x843cec;
    *(void**)((char*)this + 0xa4) = (void*)0x843cdc;
    *(void**)((char*)this + 0xc4) = (void*)0x843ccc;
    *(void**)((char*)this + 0x130) = (void*)0x843cc4;
    *(void**)((char*)this + 0x1a0) = (void*)0x843cbc;
    *(void**)((char*)this + 0x1b0) = (void*)0x843ca4;
    int* q = *(int**)((char*)p + 4);
    *(void**)((char*)q + (int)this + 0x1c0) = (void*)0x843c9c;
    void* r = *(void**)((char*)this + 0x1c0);
    int* s = *(int**)((char*)r + 4);
    int t = (int)s - 0xac;
    *(int*)((char*)s + (int)this + 0x1bc) = t;
    return this;
}
