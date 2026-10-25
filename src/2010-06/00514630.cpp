// from server: 100% by atomic.potato
// roc 2010-06 00514630  unit: RakPeer  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00514630
//
// 00514630  8b442404             mov eax, dword ptr [esp + 4]
// 00514634  85c0                 test eax, eax
// 00514636  7414                 je 0x51464c
// 00514638  803800               cmp byte ptr [eax], 0
// 0051463b  740f                 je 0x51464c
// 0051463d  89442404             mov dword ptr [esp + 4], eax
// 00514641  81c1400a0000         add ecx, 0xa40
// 00514647  e9d4a80000           jmp 0x51ef20
// 0051464c  c20400               ret 4

struct RakPeer {
    char pad[0xa40];
    int field_a40;
    void sub_51ef20(const char*);

    void sub_514630(const char* s);
};

void RakPeer::sub_514630(const char* s) {
    if (s != 0 && *s != 0) {
        ((RakPeer*)((char*)this + 0xa40))->sub_51ef20(s);
    }
}
