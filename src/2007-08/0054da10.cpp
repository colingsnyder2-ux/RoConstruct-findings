// from server: 52% by colin
struct Node {
    Node* next;
    char pad[4];
    void* stream;
};

struct StreamBuf {
    virtual int pubsync();
};

extern "C" int __stdcall MSVCP80_pubsync(StreamBuf*);

struct List {
    Node* head;
};

void __cdecl func_0054da10(List* dst, Node* first, Node* last, unsigned int flags)
{
    while (first != last) {
        StreamBuf* sb = (StreamBuf*)first->stream;
        if (flags & 2)
            MSVCP80_pubsync(sb);
        (*(int(__thiscall**)(StreamBuf*, unsigned int))(*(int*)sb + 0x3c))(sb, flags);
        first = first->next;
    }
    dst->head = (Node*)flags;
}
