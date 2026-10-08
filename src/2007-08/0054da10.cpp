// from server: 33% by colin
// roc 2007-08 0054da10  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054da10
//
// 0054da10  53                   push ebx
// 0054da11  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0054da15  55                   push ebp
// 0054da16  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0054da1a  56                   push esi
// 0054da1b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0054da1f  57                   push edi
// 0054da20  3bf5                 cmp esi, ebp
// 0054da22  741e                 je 0x54da42
// 0054da24  f6c302               test bl, 2
// 0054da27  8b7e08               mov edi, dword ptr [esi + 8]
// 0054da2a  7408                 je 0x54da34
// 0054da2c  8bcf                 mov ecx, edi
// 0054da2e  ff1504e67700         call dword ptr [0x77e604]
// 0054da34  8b07                 mov eax, dword ptr [edi]
// 0054da36  8b503c               mov edx, dword ptr [eax + 0x3c]
// 0054da39  53                   push ebx
// 0054da3a  8bcf                 mov ecx, edi
// 0054da3c  ffd2                 call edx
// 0054da3e  8b36                 mov esi, dword ptr [esi]
// 0054da40  ebde                 jmp 0x54da20
// 0054da42  8b442414             mov eax, dword ptr [esp + 0x14]
// 0054da46  5f                   pop edi
// 0054da47  5e                   pop esi
// 0054da48  5d                   pop ebp
// 0054da49  8918                 mov dword ptr [eax], ebx
// 0054da4b  5b                   pop ebx
// 0054da4c  c3                   ret 

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
    void assign(Node* first, Node* last, unsigned int flags);
};

void List::assign(Node* first, Node* last, unsigned int flags)
{
    while (first != last) {
        StreamBuf* sb = (StreamBuf*)first->stream;
        if (flags & 2)
            MSVCP80_pubsync(sb);
        sb->pubsync();
        first = first->next;
    }
    head = (Node*)flags;
}
