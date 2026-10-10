// from server: 86% by tester
extern "C" __declspec(dllimport) int __stdcall PostMessageA(void*, unsigned int, unsigned int, int);
extern "C" void* __cdecl sub_6A0926();

struct ToggleIDEModeVerb {
    virtual bool check();
    void toggle(int);
};

void ToggleIDEModeVerb::toggle(int arg) {
    if (this->check()) {
        void* p = sub_6A0926();
        void* q = *(void**)((char*)p + 4);
        void* r = *(void**)((char*)q + 0x20);
        void* hwnd = *(void**)((char*)r + 0x20);
        PostMessageA(hwnd, 0x111, 0x80f5, 0);
    }
}
