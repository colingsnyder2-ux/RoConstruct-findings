// from server: 64% by colin
struct MyXTPCommandBars {
    char pad[0x28];
    int count;
    void** items;
    char pad2[0xc];
    MyXTPCommandBars* next;
    void Process(int a, int b, int c);
};

void MyXTPCommandBars::Process(int a, int b, int c) {
    MyXTPCommandBars* p = this;
    do {
        int n = p->count;
        for (int i = 0; i < n; i++) {
            if (i < 0 || i >= p->count) {
                __declspec(noreturn) void fail();
                fail();
            }
            void* item = p->items[i];
            if (item) {
                char* obj = (char*)item;
                if (*(int*)(obj + 0xac) == 0) {
                    void** vtbl = *(void***)obj;
                    void (*fn)(void*, int, int, int) = (void (*)(void*, int, int, int))vtbl[0x130/4];
                    fn(obj, c, a, b);
                }
            }
        }
        p = p->next;
    } while (p && *(int*)((char*)p + 0xc) != 0);
}
