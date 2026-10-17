// from server: 38% by colin
struct ChangeHistoryService;

struct ChangeHistoryService {
    unsigned char pad0[0x130];
    void* field130;
    void* field134;
    void* field138;
    unsigned char pad13c[0x14c - 0x13c];
    void* field14c;
    unsigned int field150;
    void* field154;
    void* field158;
    void* field15c;
    void* field160;
    unsigned char pad164;
    unsigned char field165;
    unsigned char pad166[2];
    unsigned char field168[0x14];
    unsigned char field17c[0x14];
    unsigned char field190[0x14];

    void construct();
};

extern "C" void* __cdecl operator_new(unsigned int);

void* __fastcall sub_58bf20(void* self, void* parent);
void __fastcall sub_4a27e0(void* self, void* a, void* b, void* c, void* d);
void __fastcall sub_58c2c0(void* self, const char* s);
void __fastcall sub_58bf80(void* self);
void __fastcall sub_58aa30(void* self, void* a);
void __fastcall sub_58aae0(void* self, void* a);
void __fastcall sub_4a3340(void* self, void* a, void* b, void* c, void* d);
void __fastcall sub_595540(void* self, void* a);
void __fastcall sub_595370(void* self);
void __fastcall sub_49f710(void* self);
void __fastcall sub_588fb0(void* self, void* a, void* b, void* c, void* d);

void ChangeHistoryService::construct()
{
    void* obj = operator_new(0x40);
    if (obj) {
        void* r = sub_58bf20(obj, this);
        field134 = r;
    } else {
        field134 = 0;
    }

    void* e14c = field14c;
    void* e138 = field138;
    field154 = e138;
    field158 = e14c;
    field160 = *(void**)e14c;
    field15c = e138;

    {
        struct { void* a; void* b; void* c; void* d; } tmp;
        tmp.a = (void*)0x587240;
        tmp.b = 0;
        tmp.c = this;
        tmp.d = field14c;
        sub_4a27e0(field130, &tmp, 0, 0, 0);
    }

    if (field165 != 0) {
        sub_58c2c0(this, (const char*)0x831948);
        while (field150 > 1) {
            sub_58bf80(this);
        }
    }

    {
        struct { void* a; void* b; void* c; } tmp;
        tmp.a = (void*)0x587240;
        tmp.b = 0;
        tmp.c = this;
        sub_58aa30((char*)this + 0x30, &tmp);
    }

    {
        void* base = field130 ? (char*)field130 + 0x14 : 0;
        char buf[0x14];
        sub_4a3340((void*)0x973e40, buf, base, (char*)this + 0x30, (void*)0xa);
        sub_595540((char*)this + 0x168, buf);
        sub_595370((char*)this + 0x1c);
        sub_49f710((char*)this + 0x40);
    }

    {
        struct { void* a; void* b; void* c; } tmp;
        tmp.a = (void*)0x587280;
        tmp.b = 0;
        tmp.c = this;
        sub_58aa30((char*)this + 0x30, &tmp);
    }

    {
        void* base = field130 ? (char*)field130 + 0x14 : 0;
        char buf[0x14];
        sub_4a3340((void*)0x973ca0, buf, base, (char*)this + 0x30, (void*)0xa);
        sub_595540((char*)this + 0x17c, buf);
        sub_595370((char*)this + 0x1c);
        sub_49f710((char*)this + 0x40);
    }

    {
        struct { void* a; void* b; void* c; } tmp;
        tmp.a = (void*)0x587290;
        tmp.b = 0;
        tmp.c = this;
        sub_58aae0((char*)this + 0x58, &tmp);
    }

    {
        void* base = field130 ? (char*)field130 + 0x14 : 0;
        char buf[0x14];
        sub_588fb0((void*)0x9751b0, buf, base, (char*)this + 0x58, (void*)0xa);
        sub_595540((char*)this + 0x190, buf);
        sub_595370((char*)this + 0x30);
        sub_49f710((char*)this + 0x68);
    }
}
