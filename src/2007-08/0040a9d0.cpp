// from server: 94% by colin
// roc 2007-08 0040a9d0  unit: seg_00400000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040a9d0
//
// 0040a9d0  56                   push esi
// 0040a9d1  8b742408             mov esi, dword ptr [esp + 8]
// 0040a9d5  57                   push edi
// 0040a9d6  8b3e                 mov edi, dword ptr [esi]
// 0040a9d8  81c1b8020000         add ecx, 0x2b8
// 0040a9de  ff15d0dc7700         call dword ptr [0x77dcd0]
// 0040a9e4  f6d8                 neg al
// 0040a9e6  8bce                 mov ecx, esi
// 0040a9e8  1bc0                 sbb eax, eax
// 0040a9ea  83c001               add eax, 1
// 0040a9ed  50                   push eax
// 0040a9ee  8b07                 mov eax, dword ptr [edi]
// 0040a9f0  ffd0                 call eax
// 0040a9f2  5f                   pop edi
// 0040a9f3  5e                   pop esi
// 0040a9f4  c20400               ret 4

extern "C" unsigned char __stdcall sub_77DCD0(void*);

struct CBrowserView {
    char pad[0x2b8];
    void sub_40A9D0(void* p);
};

void CBrowserView::sub_40A9D0(void* p) {
    void** vtable = *(void***)p;
    unsigned char r = sub_77DCD0((char*)this + 0x2b8);
    int flag = (r == 0) ? 1 : 0;
    typedef void (__thiscall *Fn)(void*, int);
    ((Fn)vtable[0])(p, flag);
}
