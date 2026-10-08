// from server: 88% by colin
// roc 2007-08 00557220  unit: ChatEnter  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00557220
//
// 00557220  684c887a00           push 0x7a884c
// 00557225  81c1b8010000         add ecx, 0x1b8
// 0055722b  ff152ce67700         call dword ptr [0x77e62c]
// 00557231  c3                   ret 

struct ChatEnter {
    char pad[0x1b8];
    void assign();
};

extern "C" void* __stdcall string_assign(void*, const char*);

void ChatEnter::assign() {
    string_assign((char*)this + 0x1b8, "[[[progress]]]");
}
