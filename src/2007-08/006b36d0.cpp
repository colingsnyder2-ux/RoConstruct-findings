// from server: 65% by colin
// roc 2007-08 006b36d0  unit: CXTPControlGallery  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b36d0
//
// 006b36d0  56                   push esi
// 006b36d1  8bf1                 mov esi, ecx
// 006b36d3  8b06                 mov eax, dword ptr [esi]
// 006b36d5  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 006b36db  ffd2                 call edx
// 006b36dd  85c0                 test eax, eax
// 006b36df  7424                 je 0x6b3705
// 006b36e1  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 006b36e7  8b5020               mov edx, dword ptr [eax + 0x20]
// 006b36ea  8d8e78010000         lea ecx, [esi + 0x178]
// 006b36f0  ffd2                 call edx
// 006b36f2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b36f6  8b10                 mov edx, dword ptr [eax]
// 006b36f8  8b520c               mov edx, dword ptr [edx + 0xc]
// 006b36fb  56                   push esi
// 006b36fc  51                   push ecx
// 006b36fd  8bc8                 mov ecx, eax
// 006b36ff  ffd2                 call edx
// 006b3701  5e                   pop esi
// 006b3702  c20400               ret 4
// 006b3705  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 006b370b  8b5020               mov edx, dword ptr [eax + 0x20]
// 006b370e  81c678010000         add esi, 0x178
// 006b3714  8bce                 mov ecx, esi
// 006b3716  ffd2                 call edx
// 006b3718  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b371c  8b10                 mov edx, dword ptr [eax]
// 006b371e  8b5208               mov edx, dword ptr [edx + 8]
// 006b3721  56                   push esi
// 006b3722  51                   push ecx
// 006b3723  8bc8                 mov ecx, eax
// 006b3725  ffd2                 call edx
// 006b3727  5e                   pop esi
// 006b3728  c20400               ret 4

struct CXTPControlGallery {
    void OnClick(int);
};

struct Inner {
    void* vt;
    void* GetItem();
};

struct Outer {
    void* vt;
    char pad[0x174];
    Inner inner;
};

void CXTPControlGallery::OnClick(int param) {
    Outer* self = (Outer*)this;
    int (*fn)(void*) = *(int (**)(void*))((char*)self->vt + 0x8c);
    if (fn(self)) {
        Inner* p = &self->inner;
        void* (*get)(Inner*) = *(void* (**)(Inner*))((char*)p->vt + 0x20);
        void* item = get(p);
        void (*act)(void*, int, void*) = *(void (**)(void*, int, void*))((char*)(*(void**)item) + 0xc);
        act(item, param, self);
    } else {
        Inner* p = &self->inner;
        void* (*get)(Inner*) = *(void* (**)(Inner*))((char*)p->vt + 0x20);
        void* item = get(p);
        void (*act)(void*, int, void*) = *(void (**)(void*, int, void*))((char*)(*(void**)item) + 8);
        act(item, param, p);
    }
}
