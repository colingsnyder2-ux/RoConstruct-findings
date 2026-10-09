// from server: 82% by colin
// roc 2007-08 004d2350  unit: RBX::Render::TextureProxy  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d2350
//
// 004d2350  8b442408             mov eax, dword ptr [esp + 8]
// 004d2354  83f802               cmp eax, 2
// 004d2357  7519                 jne 0x4d2372
// 004d2359  56                   push esi
// 004d235a  8b742408             mov esi, dword ptr [esp + 8]
// 004d235e  56                   push esi
// 004d235f  b930708900           mov ecx, 0x897030
// 004d2364  ff1508e77700         call dword ptr [0x77e708]
// 004d236a  f6d8                 neg al
// 004d236c  1bc0                 sbb eax, eax
// 004d236e  23c6                 and eax, esi
// 004d2370  5e                   pop esi
// 004d2371  c3                   ret 
// 004d2372  85c0                 test eax, eax
// 004d2374  7523                 jne 0x4d2399
// 004d2376  6a0c                 push 0xc
// 004d2378  e879db1500           call 0x62fef6
// 004d237d  83c404               add esp, 4
// 004d2380  85c0                 test eax, eax
// 004d2382  7424                 je 0x4d23a8
// 004d2384  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d2388  8b11                 mov edx, dword ptr [ecx]
// 004d238a  8910                 mov dword ptr [eax], edx
// 004d238c  8b5104               mov edx, dword ptr [ecx + 4]
// 004d238f  895004               mov dword ptr [eax + 4], edx
// 004d2392  8b4908               mov ecx, dword ptr [ecx + 8]
// 004d2395  894808               mov dword ptr [eax + 8], ecx
// 004d2398  c3                   ret 
// 004d2399  8b542404             mov edx, dword ptr [esp + 4]
// 004d239d  52                   push edx
// 004d239e  e8bfd81500           call 0x62fc62
// 004d23a3  83c404               add esp, 4
// 004d23a6  33c0                 xor eax, eax
// 004d23a8  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct TextureRef {
    void* p0;
    void* p4;
    void* p8;
};

struct TextureProxy {
    TextureRef texture;
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl free(void*);

extern type_info typeid_TextureRef;

void* __cdecl createTextureProxy(int type, const TextureRef* texture);

void* __cdecl createTextureProxy(int type, const TextureRef* texture)
{
    if (type == 2) {
        if (typeid_TextureRef == *(type_info*)0x897030) {
            return (void*)texture;
        }
        return 0;
    }
    if (type == 0) {
        TextureProxy* p = (TextureProxy*)operator_new(0xc);
        if (p) {
            p->texture = *texture;
        }
        return p;
    }
    free((void*)texture);
    return 0;
}
