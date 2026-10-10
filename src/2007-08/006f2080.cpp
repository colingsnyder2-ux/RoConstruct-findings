// from server: 51% by colin
struct CStatic {
    void OnLButtonDown(unsigned int);
};

extern "C" void __stdcall sub_64B250(void*, void*);
extern "C" void __stdcall sub_6304C0(void*);
extern "C" void __stdcall sub_6304A2(void*, int, int, int, int, int);
extern "C" void* __stdcall sub_62FF02(void*);
extern "C" void __stdcall sub_41EEB0(void*);
extern "C" int __stdcall sub_648C70(void*);
extern "C" void* __stdcall sub_648EC0(void*);
extern "C" void __stdcall sub_649660(void*, void*);
extern "C" void __stdcall sub_6304BA(void*);

void CStatic::OnLButtonDown(unsigned int param) {
    void* p = *(void**)((char*)this + 0x990);
    if (p) {
        if (*(int*)((char*)p + 8) != 0) {
            void* q = *(void**)((char*)p + 4);
            sub_64B250((void*)param, q);
            return;
        }
        char buf[8];
        sub_6304C0(buf);
        int a = *(int*)((char*)this + 0xa5c);
        int b = *(int*)((char*)this + 0xa58);
        sub_6304A2(buf, b, a, 0x19, 0, 1);
        void* r = *(void**)((char*)this + 0x990);
        void* s = 0;
        if (r) s = *(void**)((char*)r + 4);
        void* t = sub_62FF02(*(void**)(buf + 4));
        sub_41EEB0(*(void**)((char*)t + 0x94));
        void* u = sub_62FF02(*(void**)(buf + 4));
        int v = sub_648C70(*(void**)((char*)u + 0x94));
        if (v == 1) {
            void* w = sub_62FF02(*(void**)(buf + 4));
            void* x = sub_648EC0(*(void**)((char*)w + 0x94));
            sub_649660((void*)param, x);
        }
        sub_6304BA(buf);
    }
}
