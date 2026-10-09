// from server: 61% by colin
// roc 2007-08 004ba930  unit: RakPeer  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ba930
//
// 004ba930  56                   push esi
// 004ba931  8db1e4060000         lea esi, [ecx + 0x6e4]
// 004ba937  8b06                 mov eax, dword ptr [esi]
// 004ba939  3b460c               cmp eax, dword ptr [esi + 0xc]
// 004ba93c  7438                 je 0x4ba976
// 004ba93e  8a4038               mov al, byte ptr [eax + 0x38]
// 004ba941  84c0                 test al, al
// 004ba943  7431                 je 0x4ba976
// 004ba945  8b06                 mov eax, dword ptr [esi]
// 004ba947  85c0                 test eax, eax
// 004ba949  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 004ba94c  890e                 mov dword ptr [esi], ecx
// 004ba94e  7426                 je 0x4ba976
// 004ba950  8b4030               mov eax, dword ptr [eax + 0x30]
// 004ba953  85c0                 test eax, eax
// 004ba955  7409                 je 0x4ba960
// 004ba957  50                   push eax
// 004ba958  e805531700           call 0x62fc62
// 004ba95d  83c404               add esp, 4
// 004ba960  8b5608               mov edx, dword ptr [esi + 8]
// 004ba963  83461001             add dword ptr [esi + 0x10], 1
// 004ba967  c6423800             mov byte ptr [edx + 0x38], 0
// 004ba96b  8b4608               mov eax, dword ptr [esi + 8]
// 004ba96e  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 004ba971  894e08               mov dword ptr [esi + 8], ecx
// 004ba974  ebc1                 jmp 0x4ba937
// 004ba976  8bce                 mov ecx, esi
// 004ba978  5e                   pop esi
// 004ba979  e9d2ecffff           jmp 0x4b9650

struct RakPeer {
    char pad[0x6e4];
    struct List {
        void* head;
        char pad1[4];
        void* tail;
        char pad2[4];
        unsigned int count;
    } list;
    void func();
};

extern "C" void __cdecl free(void*);

void RakPeer::func()
{
    List* l = &list;
    while (l->head != l->tail) {
        char* node = (char*)l->head;
        if (node[0x38] == 0)
            break;
        l->head = *(void**)(node + 0x3c);
        if (node == 0)
            break;
        void* p = *(void**)(node + 0x30);
        if (p != 0)
            free(p);
        l->count++;
        *(char*)((char*)l->tail + 0x38) = 0;
        l->tail = *(void**)((char*)l->tail + 0x3c);
    }
    // tail call to 0x4b9650
    extern void __fastcall sub_4b9650(List*);
    sub_4b9650(l);
}
