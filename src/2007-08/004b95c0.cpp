// from server: 52% by colin
// roc 2007-08 004b95c0  unit: RakPeer  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b95c0
//
// 004b95c0  56                   push esi
// 004b95c1  8bf1                 mov esi, ecx
// 004b95c3  8b4604               mov eax, dword ptr [esi + 4]
// 004b95c6  8b403c               mov eax, dword ptr [eax + 0x3c]
// 004b95c9  3b4604               cmp eax, dword ptr [esi + 4]
// 004b95cc  894608               mov dword ptr [esi + 8], eax
// 004b95cf  741e                 je 0x4b95ef
// 004b95d1  57                   push edi
// 004b95d2  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b95d5  8b793c               mov edi, dword ptr [ecx + 0x3c]
// 004b95d8  8b5608               mov edx, dword ptr [esi + 8]
// 004b95db  52                   push edx
// 004b95dc  e881661700           call 0x62fc62
// 004b95e1  8bc7                 mov eax, edi
// 004b95e3  83c404               add esp, 4
// 004b95e6  897e08               mov dword ptr [esi + 8], edi
// 004b95e9  3b4604               cmp eax, dword ptr [esi + 4]
// 004b95ec  75e4                 jne 0x4b95d2
// 004b95ee  5f                   pop edi
// 004b95ef  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b95f2  51                   push ecx
// 004b95f3  e86a661700           call 0x62fc62
// 004b95f8  83c404               add esp, 4
// 004b95fb  5e                   pop esi
// 004b95fc  c3                   ret 

struct RakPeer {
    char pad0[4];
    void* field4;
    void* field8;
    void clearList();
};

void __stdcall sub_62fc62(void* p);

void RakPeer::clearList()
{
    void* p = field4;
    void* q = *(void**)((char*)p + 0x3c);
    field8 = q;
    if (q != field4) {
        void* next;
        do {
            next = *(void**)((char*)field8 + 0x3c);
            sub_62fc62(field8);
            field8 = next;
        } while (next != field4);
    }
    sub_62fc62(field8);
}
