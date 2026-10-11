// from server: 60% by atomic.potato
struct CXTTreeBase {
    char pad0[0x34];
    void* field34;
    int HasEditLabels();
    int sub_832D60(void* msg);
};

extern "C" void* __stdcall GetProp(void*, unsigned int, void*, void*);
extern "C" void* __stdcall SendMessageA(void*, unsigned int, void*, void*);
extern "C" int __stdcall TranslateMessage(void*);
extern "C" int __stdcall DispatchMessageA(void*);
extern "C" void* __stdcall sub_7F3B2A(void*);
extern "C" void __stdcall sub_7F3E60(void*, void*);

int CXTTreeBase::sub_832D60(void* msg) {
    if (*(unsigned int*)((char*)msg + 4) == 0x100) {
        if (HasEditLabels()) {
            void* hwnd = *(void**)((char*)field34 + 0x20);
            void* h = GetProp(hwnd, 0x110f, 0, 0);
            if (sub_7F3B2A(h)) {
                DispatchMessageA(msg);
                TranslateMessage(msg);
                return 1;
            }
        }
        if (*(unsigned int*)((char*)msg + 8) == 0xd) {
            void* hwnd = *(void**)((char*)field34 + 0x20);
            void* h = GetProp(hwnd, 0x110a, (void*)9, 0);
            if (h) {
                void* hwnd2 = *(void**)((char*)field34 + 0x20);
                SendMessageA(hwnd2, 0x1102, (void*)3, h);
            }
        }
    }
    sub_7F3E60(field34, msg);
    return 0;
}
