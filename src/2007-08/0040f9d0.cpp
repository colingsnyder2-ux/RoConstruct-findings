// from server: 94% by colin
// roc 2007-08 0040f9d0  unit: CopyVerb  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040f9d0
//
// 0040f9d0  8bc1                 mov eax, ecx
// 0040f9d2  33c9                 xor ecx, ecx
// 0040f9d4  394c2404             cmp dword ptr [esp + 4], ecx
// 0040f9d8  740e                 je 0x40f9e8
// 0040f9da  c74004b06d7800       mov dword ptr [eax + 4], 0x786db0
// 0040f9e1  c740280c6d7800       mov dword ptr [eax + 0x28], 0x786d0c
// 0040f9e8  8b5004               mov edx, dword ptr [eax + 4]
// 0040f9eb  c7009c6d7800         mov dword ptr [eax], 0x786d9c
// 0040f9f1  8b5204               mov edx, dword ptr [edx + 4]
// 0040f9f4  c7440204946d7800     mov dword ptr [edx + eax + 4], 0x786d94
// 0040f9fc  8b155c228c00         mov edx, dword ptr [0x8c225c]
// 0040fa02  894808               mov dword ptr [eax + 8], ecx
// 0040fa05  89480c               mov dword ptr [eax + 0xc], ecx
// 0040fa08  894810               mov dword ptr [eax + 0x10], ecx
// 0040fa0b  895014               mov dword ptr [eax + 0x14], edx
// 0040fa0e  894818               mov dword ptr [eax + 0x18], ecx
// 0040fa11  894820               mov dword ptr [eax + 0x20], ecx
// 0040fa14  894824               mov dword ptr [eax + 0x24], ecx
// 0040fa17  8b4804               mov ecx, dword ptr [eax + 4]
// 0040fa1a  c700ac6d7800         mov dword ptr [eax], 0x786dac
// 0040fa20  8b5104               mov edx, dword ptr [ecx + 4]
// 0040fa23  c7440204a46d7800     mov dword ptr [edx + eax + 4], 0x786da4
// 0040fa2b  c20400               ret 4

struct VerbContainer;

struct Verb {
    void* vtable;
    VerbContainer* container;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    int field_18;
    int field_1c;
    int field_20;
    int field_24;
    int field_28;
    Verb(VerbContainer* c, int blacklisted);
};

extern int G_008c225c;

Verb::Verb(VerbContainer* c, int blacklisted)
{
    if (blacklisted) {
        *(int*)((char*)this + 4) = 0x786db0;
        *(int*)((char*)this + 0x28) = 0x786d0c;
    }
    int* p = *(int**)((char*)this + 4);
    *(int*)this = 0x786d9c;
    int* q = *(int**)((char*)p + 4);
    *(int*)((char*)q + (int)this + 4) = 0x786d94;
    int g = G_008c225c;
    *(int*)((char*)this + 8) = 0;
    *(int*)((char*)this + 0xc) = 0;
    *(int*)((char*)this + 0x10) = 0;
    *(int*)((char*)this + 0x14) = g;
    *(int*)((char*)this + 0x18) = 0;
    *(int*)((char*)this + 0x20) = 0;
    *(int*)((char*)this + 0x24) = 0;
    int* r = *(int**)((char*)this + 4);
    *(int*)this = 0x786dac;
    int* s = *(int**)((char*)r + 4);
    *(int*)((char*)s + (int)this + 4) = 0x786da4;
}
