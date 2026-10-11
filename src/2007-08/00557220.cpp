// from server: 100% by colin
// roc 2007-08 00557220  unit: ChatEnter  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00557220
//
// 00557220  684c887a00           push 0x7a884c
// 00557225  81c1b8010000         add ecx, 0x1b8
// 0055722b  ff152ce67700         call dword ptr [0x77e62c]
// 00557231  c3                   ret 

struct ChatEnter {
    char pad[0x1b8];
    void SetProgress();
};

extern "C" void* (__thiscall *g_stringAssign)(void*, const char*);
extern char g_progressString[];

void ChatEnter::SetProgress() {
    g_stringAssign((char*)this + 0x1b8, g_progressString);
}
