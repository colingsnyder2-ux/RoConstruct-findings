// from server: 90% by colin
extern "C" int __stdcall PostMessageA(void*, unsigned int, unsigned int, int);

struct ChatEnter {
    char pad[0x14];
    void* field14;
    void method(int* a, int* b);
};

void ChatEnter::method(int* a, int* b)
{
    if (a[0] == 0xa && a[2] == 0x2f) {
        void* p = *(void**)((char*)field14 + 0x20);
        PostMessageA(p, 0x468, 0, 0);
        b[0] = 1;
        b[1] = 0;
    }
}
