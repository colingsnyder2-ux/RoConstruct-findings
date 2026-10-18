// from server: 42% by colin
// roc 2008-06 00459420  unit: CRobloxView  size: 291 bytes

struct CRobloxView {
    char pad0[0x54];
    void* field54;
    void Load(const char* name);
};

extern "C" {
    void* __stdcall sub_803F04();
    void* __stdcall sub_8032C0();
    void* __stdcall sub_803EE0();
    void* __stdcall sub_803F14();
    void* __stdcall sub_802404(void* self, void* arg);
    void* __stdcall sub_802408(void* self);
}

struct FileStream {
    char pad[0x98];
};

void __stdcall sub_6A0E72(void* self, int a, const char* s, int b, int c, int d, void* e);
int __stdcall sub_6A0E6C(void* self);
void __stdcall sub_6A0E66(void* self, void* out);
void __stdcall sub_6A0E5A(void* self);
void __stdcall sub_46B9D0(void* self, void* out, int flag);

void CRobloxView::Load(const char* name)
{
    void* v1 = sub_803F04();
    (void)v1;
    FileStream fs;
    sub_8032C0();
    void* v2 = sub_803EE0();
    sub_6A0E72(&fs, 1, "rbxm", 0, 6, 1, v2);
    int r = sub_6A0E6C(&fs);
    if (r == 1) {
        void* out;
        sub_6A0E66(&fs, &out);
        void* v3 = sub_803EE0();
        sub_802404(&out, v3);
        sub_803F14();
        void* f = *(void**)((char*)field54 + 0x94);
        sub_46B9D0(f, &out, 0);
        sub_802408(&out);
    }
    sub_6A0E5A(&fs);
    sub_803F14();
}
