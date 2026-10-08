// from server: 91% by colin
// roc 2007-08 00557200  unit: ChatEnter  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00557200
//
// 00557200  6854597800           push 0x785954
// 00557205  81c1b8010000         add ecx, 0x1b8
// 0055720b  ff152ce67700         call dword ptr [0x77e62c]
// 00557211  c3                   ret 

struct ChatEnter {
    char pad[0x1b8];

    void assign();
};

struct String {
    void assign(const char*);
};

extern "C" void* __stdcall string_assign(void*, const char*);

void ChatEnter::assign()
{
    ((String*)((char*)this + 0x1b8))->assign("list<T> too long");
}
