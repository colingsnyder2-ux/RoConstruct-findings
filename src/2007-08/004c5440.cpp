// from server: 75% by colin
// roc 2007-08 004c5440  unit: RakPeer  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c5440
//
// 004c5440  57                   push edi
// 004c5441  8bf9                 mov edi, ecx
// 004c5443  8b07                 mov eax, dword ptr [edi]
// 004c5445  85c0                 test eax, eax
// 004c5447  743f                 je 0x4c5488
// 004c5449  83f801               cmp eax, 1
// 004c544c  750e                 jne 0x4c545c
// 004c544e  8b4704               mov eax, dword ptr [edi + 4]
// 004c5451  50                   push eax
// 004c5452  e80ba81600           call 0x62fc62
// 004c5457  83c404               add esp, 4
// 004c545a  eb18                 jmp 0x4c5474
// 004c545c  56                   push esi
// 004c545d  8b7704               mov esi, dword ptr [edi + 4]
// 004c5460  8bc6                 mov eax, esi
// 004c5462  8b7608               mov esi, dword ptr [esi + 8]
// 004c5465  50                   push eax
// 004c5466  e8f7a71600           call 0x62fc62
// 004c546b  83c404               add esp, 4
// 004c546e  3b7704               cmp esi, dword ptr [edi + 4]
// 004c5471  75ed                 jne 0x4c5460
// 004c5473  5e                   pop esi
// 004c5474  c70700000000         mov dword ptr [edi], 0
// 004c547a  c7470400000000       mov dword ptr [edi + 4], 0
// 004c5481  c7470800000000       mov dword ptr [edi + 8], 0
// 004c5488  5f                   pop edi
// 004c5489  c3                   ret 

struct RakPeer {
    int state;
    void* list;
    void* listEnd;
    void destroy();
};

void __cdecl freeNode(void* p);

void RakPeer::destroy()
{
    if (state != 0) {
        if (state == 1) {
            freeNode(list);
        } else {
            void* node = list;
            void* next = *(void**)((char*)node + 8);
            freeNode(node);
            while (next != list) {
                node = next;
                next = *(void**)((char*)node + 8);
                freeNode(node);
            }
        }
        state = 0;
        list = 0;
        listEnd = 0;
    }
}
