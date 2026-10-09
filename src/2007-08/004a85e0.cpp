// from server: 52% by colin
// roc 2007-08 004a85e0  unit: RBX::Network::Replicator::ChangePropertyItem  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a85e0
//
// 004a85e0  56                   push esi
// 004a85e1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a85e5  83c610               add esi, 0x10
// 004a85e8  57                   push edi
// 004a85e9  8bf9                 mov edi, ecx
// 004a85eb  742c                 je 0x4a8619
// 004a85ed  8b0e                 mov ecx, dword ptr [esi]
// 004a85ef  85c9                 test ecx, ecx
// 004a85f1  7409                 je 0x4a85fc
// 004a85f3  8b01                 mov eax, dword ptr [ecx]
// 004a85f5  8b5004               mov edx, dword ptr [eax + 4]
// 004a85f8  ffd2                 call edx
// 004a85fa  eb05                 jmp 0x4a8601
// 004a85fc  b8c8278800           mov eax, 0x8827c8
// 004a8601  6898148900           push 0x891498
// 004a8606  8bc8                 mov ecx, eax
// 004a8608  ff1508e77700         call dword ptr [0x77e708]
// 004a860e  84c0                 test al, al
// 004a8610  7407                 je 0x4a8619
// 004a8612  8b36                 mov esi, dword ptr [esi]
// 004a8614  83c604               add esi, 4
// 004a8617  eb02                 jmp 0x4a861b
// 004a8619  33f6                 xor esi, esi
// 004a861b  8b07                 mov eax, dword ptr [edi]
// 004a861d  0fb6481c             movzx ecx, byte ptr [eax + 0x1c]
// 004a8621  51                   push ecx
// 004a8622  83ec1c               sub esp, 0x1c
// 004a8625  8bcc                 mov ecx, esp
// 004a8627  89642430             mov dword ptr [esp + 0x30], esp
// 004a862b  50                   push eax
// 004a862c  ff159ce67700         call dword ptr [0x77e69c]
// 004a8632  8bce                 mov ecx, esi
// 004a8634  e8d7efffff           call 0x4a7610
// 004a8639  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004a863d  5f                   pop edi
// 004a863e  5e                   pop esi
// 004a863f  c20800               ret 8

struct ChangePropertyItem {
    void Process(const void* packet);
};

extern "C" int __stdcall type_info_equal(const void* a, const void* b);
extern "C" void __stdcall basic_string_copy(void* dest, const void* src);
extern "C" void __stdcall sub_4a7610(void* self, void* arg);

void ChangePropertyItem::Process(const void* packet)
{
    const char* p = (const char*)packet + 0x10;
    const void* v = 0;
    if (p != 0) {
        const void* obj = *(const void**)p;
        if (obj != 0) {
            const void** vtbl = *(const void***)obj;
            void (__stdcall *fn)(const void*) = (void (__stdcall *)(const void*))vtbl[1];
            fn(obj);
            v = obj;
        } else {
            v = (const void*)0x8827c8;
        }
        if (type_info_equal(v, (const void*)0x891498)) {
            v = *(const void**)p;
            v = (const char*)v + 4;
        } else {
            v = 0;
        }
    } else {
        v = 0;
    }

    const void* self = *(const void**)this;
    unsigned char b = *(const unsigned char*)((const char*)self + 0x1c);
    basic_string_copy((void*)((char*)0), self);
    sub_4a7610((void*)v, (void*)b);
}
