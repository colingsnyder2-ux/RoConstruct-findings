// from server: 32% by colin
struct RakPeer {
    char pad[0x20];
    void compareAndAssign(void* a, void* b);
};

extern "C" void __cdecl func_4b9f50(void* dst, void* src);
extern "C" void __cdecl func_4bb150(void* a, void* b, void* c);
extern "C" void __cdecl func_4b9ac0(void* a, void* b);
extern "C" void __cdecl func_4b9940(void* a, void* b);

void RakPeer::compareAndAssign(void* a, void* b) {
    char buf1[0x20];
    char buf2[0x20];
    char buf3[0x20];
    char buf4[0x20];
    char buf5[0x20];
    char buf6[0x20];
    char buf7[0x20];
    char buf8[0x20];

    func_4b9f50(buf1, a);
    func_4bb150(buf2, b, buf1);

    for (int i = 7; i >= 0; i--) {
        unsigned int x = ((unsigned int*)b)[i];
        unsigned int y = ((unsigned int*)buf2)[i];
        if (x > y) {
            func_4b9ac0(buf2, a);
            func_4b9940(buf2, a);
            return;
        }
        if (x < y) {
            break;
        }
    }
    func_4b9ac0(buf2, a);
}
