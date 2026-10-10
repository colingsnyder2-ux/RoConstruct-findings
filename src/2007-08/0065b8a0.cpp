// from server: 52% by colin
struct VCXTPReportRowAllocator;

struct CXTPBatchAllocManagerBase {
    void Construct();
};

struct VCXTPReportRowAllocator {
    char pad[0x240];
    void Construct();
};

extern "C" {
    void __stdcall SetRectEmpty(void*);
    void* __cdecl operator_new(unsigned int);
    void __cdecl operator_delete(void*);
}

void* __fastcall sub_6305DA(void*);
void* __fastcall sub_6D59C0(void*);
void* __fastcall sub_663F10(void*);
void* __fastcall sub_655AA0(void*, int);
void* __fastcall sub_656480();
void* __fastcall sub_65B1A0(int);
void* __fastcall sub_6617A0(void*, int);
void* __fastcall sub_6D3D50(void*, void*);
void* __fastcall sub_65EE50(void*, void*, void*);
void* __fastcall sub_6D0B10(void*);
void* __fastcall sub_6D6270(void*, void*);
void* __fastcall sub_664110(void*, void*);
void* __fastcall sub_64C6E0(void*);
void* __fastcall sub_6D1FC0(void*);
void* __fastcall sub_654950(void*);
void* __fastcall sub_6D2390(void*);
void* __fastcall sub_694AE0(void*);
void* __fastcall sub_738514(void*);

void VCXTPReportRowAllocator::Construct()
{
    char* self = (char*)this;
    sub_6305DA(self);
    *(void**)(self + 0x00) = (void*)0x7C8724;
    sub_6D59C0(self + 0xDC);
    *(int*)(self + 0x15C) = 0;
    *(void**)(self + 0x158) = (void*)0x788300;
    sub_663F10(self + 0x1C0);
    SetRectEmpty(self + 0x1FC);
    sub_655AA0(self, 0);
    *(int*)(self + 0x5C) = 0;
    *(int*)(self + 0xD8) = (int)sub_656480();

    void* p;
    p = sub_65B1A0(0x3C);
    if (p) { sub_663F10(p); *(void**)p = (void*)0x7C81AC; }
    else p = 0;
    *(void**)(self + 0xA0) = p;

    p = sub_65B1A0(0x3C);
    if (p) { sub_663F10(p); *(void**)p = (void*)0x7C81AC; }
    else p = 0;
    *(void**)(self + 0xA4) = p;

    p = sub_65B1A0(0x48);
    if (p) { sub_6617A0(p, 0); *(void**)p = (void*)0x7C823C; }
    else p = 0;
    *(void**)(self + 0xA8) = p;

    p = operator_new(0x44);
    if (p) p = sub_6D3D50(p, self);
    else p = 0;
    *(void**)(self + 0xAC) = p;

    p = operator_new(0xA4);
    if (p) p = sub_65EE50(p, self, *(void**)(self + 0xAC));
    else p = 0;
    *(void**)(self + 0x200) = p;

    p = operator_new(0x2AC);
    if (p) p = sub_6D0B10(p);
    else p = 0;
    *(void**)(self + 0xB0) = p;

    p = operator_new(0x24);
    if (p) p = sub_6D6270(p, self);
    else p = 0;
    *(void**)(self + 0xB4) = p;

    *(int*)(self + 0xB8) = 0;
    *(int*)(self + 0xCC) = -1;
    *(int*)(self + 0x168) = 0;

    p = operator_new(0x44);
    if (p) p = sub_664110(p, self);
    else p = 0;
    *(void**)(self + 0xD0) = p;

    *(int*)(self + 0x54) = 1;
    *(int*)(self + 0x58) = 0;
    *(int*)(self + 0x160) = 0;
    *(int*)(self + 0x18C) = 1;
    *(int*)(self + 0x190) = 0;
    *(int*)(self + 0x16C) = 1;
    *(int*)(self + 0x170) = 1;
    *(int*)(self + 0x17C) = 1;

    p = operator_new(0x68);
    if (p) p = sub_64C6E0(p);
    else p = 0;
    *(void**)(self + 0x178) = p;

    *(int*)(self + 0x194) = 0;
    *(int*)(self + 0x19C) = 0;
    *(int*)(self + 0x180) = 0;
    *(int*)(self + 0x184) = 1;
    *(int*)(self + 0x188) = 0;
    *(int*)(self + 0x174) = 1;

    p = operator_new(0x8C);
    if (p) p = sub_6D1FC0(p);
    else p = 0;
    *(void**)(self + 0x1A0) = p;

    p = operator_new(0x14);
    if (p) p = sub_654950(p);
    else p = 0;
    *(void**)(self + 0x1A4) = p;

    p = operator_new(0x84);
    if (p) p = sub_6D2390(p);
    else p = 0;
    *(void**)(self + 0x1A8) = p;

    SetRectEmpty(self + 0x60);
    SetRectEmpty(self + 0x70);
    SetRectEmpty(self + 0x90);
    SetRectEmpty(self + 0x80);

    *(int*)(self + 0xC0) = 0;
    *(int*)(self + 0xBC) = 0;
    *(int*)(self + 0xD4) = 0;
    *(int*)(self + 0x228) = 0;
    *(int*)(self + 0xC8) = 0;
    *(int*)(self + 0xC4) = 7;
    *(int*)(self + 0x1AC) = 0;
    *(int*)(self + 0x1B0) = 0;
    *(int*)(self + 0x1BC) = 0;
    *(int*)(self + 0x1B4) = 0;
    *(int*)(self + 0x1B8) = 0;

    p = operator_new(0xA4);
    if (p) p = sub_694AE0(p);
    else p = 0;
    *(void**)(self + 0x198) = p;

    p = operator_new(0x28);
    *(void**)(self + 0x234) = p;
    *(int*)(self + 0x204) = 0;
    *(short*)(self + 0x208) = 0;

    p = operator_new(0x38);
    if (p) { sub_738514(p); *(void**)p = (void*)0x7C82A4; }
    else p = 0;
    *(void**)(self + 0x20C) = p;

    *(int*)(self + 0x210) = 0;
    *(int*)(self + 0x214) = 0;
    *(int*)(self + 0x218) = -1;
    *(int*)(self + 0x21C) = 0;
    *(int*)(self + 0x220) = 0;
    *(int*)(self + 0x224) = 0;
    *(int*)(self + 0x164) = 0;
    *(int*)(self + 0x230) = 0;
    *(int*)(self + 0x22C) = 0;
}
