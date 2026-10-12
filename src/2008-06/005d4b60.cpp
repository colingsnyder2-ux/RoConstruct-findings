// from server: 80% by colin
struct BodyColors {
    char pad0[0x104];
    void* field104;
    char pad108[0x134 - 0x108];
    int field134;
    int field138;
    int field13c;
    int field140;
    int field144;
    int field148;
    void func(void*);
};

extern "C" void* __stdcall sub_6a17c6(void*, void*, void*, void*, void*);
extern "C" void* __fastcall sub_5d4460(void*);
extern "C" void* __fastcall sub_5d8a10(void*);
extern "C" void* __fastcall sub_5d8b10(void*);
extern "C" void* __fastcall sub_5d8c10(void*);
extern "C" void* __fastcall sub_5d8d10(void*);
extern "C" void* __fastcall sub_5d8e10(void*);
extern "C" void* __fastcall sub_5d8f10(void*);

struct Settings {
    char pad[0x1e4];
    int value;
    void notify(void*);
};

void BodyColors::func(void* arg)
{
    if (field104 != 0) {
        void* p = sub_6a17c6(field104, 0, (void*)0x92907c, (void*)0x932a40, 0);
        if (p != 0) {
            if (sub_5d4460(p) != 0) {
                return;
            }
        }
    }

    void* a = sub_5d8a10(arg);
    if (a != 0) {
        ((Settings*)a)->notify((void*)field134);
    }

    void* b = sub_5d8c10(arg);
    if (b != 0) {
        ((Settings*)b)->notify((void*)field144);
    }

    void* c = sub_5d8d10(arg);
    if (c != 0) {
        ((Settings*)c)->notify((void*)field148);
    }

    void* d = sub_5d8b10(arg);
    if (d != 0) {
        ((Settings*)d)->notify((void*)field140);
    }

    void* e = sub_5d8e10(arg);
    if (e != 0) {
        ((Settings*)e)->notify((void*)field138);
    }

    void* f = sub_5d8f10(arg);
    if (f != 0) {
        ((Settings*)f)->notify((void*)field13c);
    }
}
