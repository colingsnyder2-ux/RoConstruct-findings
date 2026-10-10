// from server: 81% by colin
struct CXTButtonThemeOfficeXP {
    int DrawText(void* p1, unsigned int flags);
    int sub_720A60(void* p1, void* p2);
};

extern "C" void* __stdcall GetCapture();

extern "C" void* __stdcall sub_668F70();

struct Helper668770 {
    void method(int val);
};

int CXTButtonThemeOfficeXP::DrawText(void* p1, unsigned int flags) {
    int result = ((int (__thiscall*)(void*, void*))*(void**)(*(int*)this + 0x14))(this, p1);
    if (result) {
        return sub_720A60(p1, (void*)flags);
    }
    if (flags & 4) {
        Helper668770* obj = (Helper668770*)sub_668F70();
        obj->method(0x11);
        return 0;
    }
    if (flags & 1) {
        int v = *(int*)((char*)this + 0xa8);
        if (v != -1) return v;
        return *(int*)((char*)this + 0xa4);
    }
    if (*(int*)((char*)p1 + 0xa0) == 0) {
        void* cap = GetCapture();
        if (cap != *(void**)((char*)p1 + 0x20)) {
            int v = *(int*)((char*)this + 0x34);
            if (v != -1) return v;
            return *(int*)((char*)this + 0x30);
        }
    }
    int v = *(int*)((char*)this + 0xb4);
    if (v != -1) return v;
    return *(int*)((char*)this + 0xb0);
}
