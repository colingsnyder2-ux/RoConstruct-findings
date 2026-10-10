// from server: 43% by colin
struct CControlGalleryPaintManager {
    char pad0[0x28];
    void* field28;
    void DrawGalleryItem(void* a, void* b, void* c, void* d, void* e, void* f);
};

extern "C" void __stdcall InflateRect(void*, int, int);
extern "C" void* __stdcall sub_77dcc8(void*, void*);
extern "C" void* __stdcall sub_77dd98(void*, void*);
extern "C" void __stdcall sub_77ddbc(void*);
extern "C" void __stdcall sub_77ed90(void*, int, void*);

void* __fastcall sub_63cd70(void* self, void*, int size);
void __fastcall sub_6308b0(void* self, void*, void* out, void* in);
void __fastcall sub_7383ca(void* self, void*, int, int, int, int, int);
void __fastcall sub_680550(void* self, void*, void* a, void* b);
void __fastcall sub_6805d0(void* self, void*);
void* __fastcall sub_6b3540(void* self, void*, void* out);

void CControlGalleryPaintManager::DrawGalleryItem(void* a, void* b, void* c, void* d, void* e, void* f)
{
    void* mgr = this->field28;
    void* v1 = sub_63cd70(mgr, 0, 0x38);
    char buf1[0x10];
    sub_6308b0(a, 0, buf1, v1);
    int w = *(int*)((char*)buf1 + 8) - *(int*)((char*)buf1 + 0);
    void* v2 = sub_63cd70(mgr, 0, 0x34);
    int x = *(int*)((char*)buf1 + 4);
    int y = *(int*)((char*)buf1 + 0);
    int h = *(int*)((char*)buf1 + 0xc) - 1;
    sub_7383ca(a, 0, y, h, w, 1, (int)v2);
    char buf2[0x10];
    sub_680550((char*)mgr + 0xe0, 0, buf2, a);
    int r0 = *(int*)((char*)buf2 + 0);
    int r1 = *(int*)((char*)buf2 + 4);
    int r2 = *(int*)((char*)buf2 + 8);
    int r3 = *(int*)((char*)buf2 + 0xc);
    char rect[0x10];
    *(int*)(rect + 0) = r0;
    *(int*)(rect + 4) = r1;
    *(int*)(rect + 8) = r2;
    *(int*)(rect + 0xc) = r3;
    sub_77ed90(rect, -10, 0);
    void** vt = *(void***)a;
    void* v3 = sub_63cd70(mgr, 0, 0x2c);
    ((void(__thiscall*)(void*, void*))vt[0x38/4])(a, v3);
    void* v4 = sub_6b3540(*(void**)((char*)buf1 + 0), 0, rect);
    void** vt2 = *(void***)a;
    void* hdc = sub_77dcc8(v4, rect);
    void* hdc2 = sub_77dd98(v4, hdc);
    ((void(__thiscall*)(void*, void*))vt2[0x70/4])(a, hdc2);
    sub_77ddbc(rect);
    sub_6805d0(buf2, 0);
}
