// from server: 92% by atomic.potato
struct CRobloxControlColorSelector {
    char pad[0x9c];
    int field_9c;
    char pad2[0xfc - 0x9c - 4];
    void* field_fc;
    char pad3[0x158 - 0xfc - 4];
    void* field_158;
    void method(int, int);
};

extern "C" int __fastcall sub_63A580(void* p);

void CRobloxControlColorSelector::method(int a, int b)
{
    int result = field_9c;
    if (result == -1) {
        void* p = field_158;
        if (p != 0) {
            result = sub_63A580(p);
        }
    }
    if (result != 0) {
        void* q = field_fc;
        if (*(int*)((char*)q + 0xfc) == 5) {
            void (CRobloxControlColorSelector::*fn)(int, int);
            fn = *(void (CRobloxControlColorSelector::**)(int, int))(*(int*)this + 0xe8);
            (this->*fn)(1, a);
        }
    }
}
