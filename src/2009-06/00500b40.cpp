// from server: 59% by atomic.potato
// roc 2009-06 00500b40  unit: RakPeer  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00500b40
//
// 00500b40  56                   push esi
// 00500b41  8db10c0a0000         lea esi, [ecx + 0xa0c]
// 00500b47  8b06                 mov eax, dword ptr [esi]
// 00500b49  3b460c               cmp eax, dword ptr [esi + 0xc]
// 00500b4c  7438                 je 0x500b86
// 00500b4e  8a4040               mov al, byte ptr [eax + 0x40]
// 00500b51  84c0                 test al, al
// 00500b53  7431                 je 0x500b86
// 00500b55  8b06                 mov eax, dword ptr [esi]
// 00500b57  8b4844               mov ecx, dword ptr [eax + 0x44]
// 00500b5a  890e                 mov dword ptr [esi], ecx
// 00500b5c  85c0                 test eax, eax
// 00500b5e  7426                 je 0x500b86
// 00500b60  8b4024               mov eax, dword ptr [eax + 0x24]
// 00500b63  85c0                 test eax, eax
// 00500b65  740a                 je 0x500b71
// 00500b67  50                   push eax
// 00500b68  ff15dc5e9f00         call dword ptr [0x9f5edc]
// 00500b6e  83c404               add esp, 4
// 00500b71  8b5608               mov edx, dword ptr [esi + 8]
// 00500b74  ff4610               inc dword ptr [esi + 0x10]
// 00500b77  c6424000             mov byte ptr [edx + 0x40], 0
// 00500b7b  8b4608               mov eax, dword ptr [esi + 8]
// 00500b7e  8b4844               mov ecx, dword ptr [eax + 0x44]
// 00500b81  894e08               mov dword ptr [esi + 8], ecx
// 00500b84  ebc1                 jmp 0x500b47
// 00500b86  8bce                 mov ecx, esi
// 00500b88  5e                   pop esi
// 00500b89  e9b2eeffff           jmp 0x4ffa40

extern "C" void __stdcall sub_9F5EDC(void*);
extern "C" void __stdcall sub_4FFA40(void*);

struct RakPeer {
    char pad0[0xa0c];
    void* head;
    char pad1[4];
    void* tail;
    char pad2[4];
    int count;
    void func();
};

void RakPeer::func()
{
    char* base = (char*)this + 0xa0c;
    void** headp = (void**)(base);
    void** tailp = (void**)(base + 8);
    int* countp = (int*)(base + 0x10);

    while (*headp != *tailp) {
        if (*((char*)*headp + 0x40) == 0)
            break;
        void* node = *headp;
        *headp = *(void**)((char*)node + 0x44);
        if (node == 0)
            break;
        void* p = *(void**)((char*)node + 0x24);
        if (p != 0) {
            sub_9F5EDC(p);
        }
        *((char*)*tailp + 0x40) = 0;
        *tailp = *(void**)((char*)*tailp + 0x44);
        (*countp)++;
    }
    sub_4FFA40(base);
}
