// from server: 75% by atomic.potato
struct RBX_AnchorTool {
    char pad[0x18];
    void* field_18;
    void SetParent(void*);
};

extern "C" void* __cdecl sub_7f4aaa(void*, void*, void*, int, int);

void RBX_AnchorTool::SetParent(void* p)
{
    void* v = field_18;
    if (v) {
        void* r = sub_7f4aaa(v, (void*)0xaffe40, (void*)0xb1c3ec, 0, 0);
        if (r) {
            void** vt = *(void***)r;
            void (*fn)(void*, void*) = (void (*)(void*, void*))vt[4];
            fn(r, p);
        }
    }
}
