// from server: 65% by colin
// roc 2007-08 004ba980  unit: RakPeer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ba980
//
// 004ba980  56                   push esi
// 004ba981  8db1b4020000         lea esi, [ecx + 0x2b4]
// 004ba987  8b06                 mov eax, dword ptr [esi]
// 004ba989  3b460c               cmp eax, dword ptr [esi + 0xc]
// 004ba98c  7444                 je 0x4ba9d2
// 004ba98e  8a8020010000         mov al, byte ptr [eax + 0x120]
// 004ba994  84c0                 test al, al
// 004ba996  743a                 je 0x4ba9d2
// 004ba998  8b06                 mov eax, dword ptr [esi]
// 004ba99a  85c0                 test eax, eax
// 004ba99c  8b8824010000         mov ecx, dword ptr [eax + 0x124]
// 004ba9a2  890e                 mov dword ptr [esi], ecx
// 004ba9a4  742c                 je 0x4ba9d2
// 004ba9a6  8b4010               mov eax, dword ptr [eax + 0x10]
// 004ba9a9  85c0                 test eax, eax
// 004ba9ab  7409                 je 0x4ba9b6
// 004ba9ad  50                   push eax
// 004ba9ae  e8af521700           call 0x62fc62
// 004ba9b3  83c404               add esp, 4
// 004ba9b6  8b5608               mov edx, dword ptr [esi + 8]
// 004ba9b9  83461001             add dword ptr [esi + 0x10], 1
// 004ba9bd  c6822001000000       mov byte ptr [edx + 0x120], 0
// 004ba9c4  8b4608               mov eax, dword ptr [esi + 8]
// 004ba9c7  8b8824010000         mov ecx, dword ptr [eax + 0x124]
// 004ba9cd  894e08               mov dword ptr [esi + 8], ecx
// 004ba9d0  ebb5                 jmp 0x4ba987
// 004ba9d2  8bce                 mov ecx, esi
// 004ba9d4  5e                   pop esi
// 004ba9d5  e9e6eaffff           jmp 0x4b94c0

extern "C" void __cdecl free(void*);
extern "C" void __cdecl sub_4b94c0(void*);

struct RakPeer {
    char pad[0x2b4];
    struct List {
        void* head;
        char pad1[4];
        void* tail;
        char pad2[4];
        unsigned int count;
    } list;
    void clear();
};

void RakPeer::clear() {
    List* l = &list;
    while (l->head != l->tail) {
        char* p = (char*)l->head;
        if (p[0x120] == 0)
            break;
        void* next = *(void**)(p + 0x124);
        l->head = next;
        if (p == 0)
            break;
        void* d = *(void**)(p + 0x10);
        if (d != 0) {
            free(d);
        }
        l->count++;
        *(char*)((char*)l->tail + 0x120) = 0;
        void* t = l->tail;
        l->tail = *(void**)((char*)t + 0x124);
    }
    sub_4b94c0(l);
}
