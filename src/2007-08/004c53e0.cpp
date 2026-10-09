// from server: 100% by colin
// roc 2007-08 004c53e0  unit: RakPeer  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c53e0
//
// 004c53e0  56                   push esi
// 004c53e1  8bf1                 mov esi, ecx
// 004c53e3  8b06                 mov eax, dword ptr [esi]
// 004c53e5  57                   push edi
// 004c53e6  33ff                 xor edi, edi
// 004c53e8  3bc7                 cmp eax, edi
// 004c53ea  7451                 je 0x4c543d
// 004c53ec  83f801               cmp eax, 1
// 004c53ef  7517                 jne 0x4c5408
// 004c53f1  8b4604               mov eax, dword ptr [esi + 4]
// 004c53f4  50                   push eax
// 004c53f5  e868a81600           call 0x62fc62
// 004c53fa  83c404               add esp, 4
// 004c53fd  897e04               mov dword ptr [esi + 4], edi
// 004c5400  893e                 mov dword ptr [esi], edi
// 004c5402  897e08               mov dword ptr [esi + 8], edi
// 004c5405  5f                   pop edi
// 004c5406  5e                   pop esi
// 004c5407  c3                   ret 
// 004c5408  8b4608               mov eax, dword ptr [esi + 8]
// 004c540b  8b4804               mov ecx, dword ptr [eax + 4]
// 004c540e  8b5008               mov edx, dword ptr [eax + 8]
// 004c5411  895108               mov dword ptr [ecx + 8], edx
// 004c5414  8b4608               mov eax, dword ptr [esi + 8]
// 004c5417  8b4808               mov ecx, dword ptr [eax + 8]
// 004c541a  8b5004               mov edx, dword ptr [eax + 4]
// 004c541d  895104               mov dword ptr [ecx + 4], edx
// 004c5420  8b4608               mov eax, dword ptr [esi + 8]
// 004c5423  3b4604               cmp eax, dword ptr [esi + 4]
// 004c5426  8b7808               mov edi, dword ptr [eax + 8]
// 004c5429  7503                 jne 0x4c542e
// 004c542b  897e04               mov dword ptr [esi + 4], edi
// 004c542e  50                   push eax
// 004c542f  e82ea81600           call 0x62fc62
// 004c5434  83c404               add esp, 4
// 004c5437  8306ff               add dword ptr [esi], -1
// 004c543a  897e08               mov dword ptr [esi + 8], edi
// 004c543d  5f                   pop edi
// 004c543e  5e                   pop esi
// 004c543f  c3                   ret 

struct RakPeer {
    int state;
    void* head;
    void* tail;
    void clear();
};

extern "C" void __cdecl free(void*);

void RakPeer::clear() {
    if (state == 0) {
        return;
    }
    if (state == 1) {
        free(head);
        head = 0;
        state = 0;
        tail = 0;
        return;
    }
    void* node = tail;
    void* prev = *(void**)((char*)node + 4);
    void* next = *(void**)((char*)node + 8);
    *(void**)((char*)prev + 8) = next;
    node = tail;
    next = *(void**)((char*)node + 8);
    prev = *(void**)((char*)node + 4);
    *(void**)((char*)next + 4) = prev;
    node = tail;
    void* newTail = *(void**)((char*)node + 8);
    if (node == head) {
        head = newTail;
    }
    free(node);
    state--;
    tail = newTail;
}
