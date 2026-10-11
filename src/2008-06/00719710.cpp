// from server: 83% by colin
struct CSelectionCaption {
    void sub_719710(int);
};

extern "C" int __stdcall IsWindow(void*);
extern "C" void* __stdcall sub_803EE0();
extern "C" void __fastcall sub_6A0C1A(void*, int, void*);
extern "C" void __fastcall sub_6A0A4C(void*, int, int, int, int, int, int);

void CSelectionCaption::sub_719710(int a2) {
    char buf[16];
    if (IsWindow(*(void**)((char*)this + 0xfc))) {
        void* p = sub_803EE0();
        sub_6A0C1A((char*)this + 0xdc, 0, p);
        void* v = (*(void*(__thiscall**)(void*, char*))((*(char**)this) + 0x17c))(this, buf);
        int x1 = *(int*)((char*)v + 0);
        int y1 = *(int*)((char*)v + 4);
        int x2 = *(int*)((char*)v + 8);
        int y2 = *(int*)((char*)v + 0xc);
        sub_6A0A4C((char*)this + 0xdc, 0, x1, y1, x2 - x1, y2 - y1, 1);
    }
    (*(void(__thiscall**)(void*, int))((*(char**)this) + 0x170))(this, a2);
}
