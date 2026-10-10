// from server: 74% by colin
struct RakPeer {
    void f();
};

extern "C" void __cdecl func_00630b8c(void*, int, unsigned int);
extern "C" void __cdecl func_004c4970(void*, void*);
extern "C" void __cdecl func_00630a1e(void);

void RakPeer::f()
{
    char buf[0xa0];
    func_00630b8c(buf, 0, 0xa0);
    func_004c4970((void*)0x8befe9, buf);
    int i = 0;
    if (buf[0] != 0) {
        char* p = buf + 0x10;
        do {
            i++;
            p += 0x10;
        } while (*p != 0);
    }
    func_00630a1e();
}
