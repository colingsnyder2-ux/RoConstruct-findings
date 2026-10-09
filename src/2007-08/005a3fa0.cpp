// from server: 86% by colin
// roc 2007-08 005a3fa0  unit: RBX::VTimerService::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a3fa0
//
// 005a3fa0  55                   push ebp
// 005a3fa1  56                   push esi
// 005a3fa2  57                   push edi
// 005a3fa3  8bf9                 mov edi, ecx
// 005a3fa5  8b4704               mov eax, dword ptr [edi + 4]
// 005a3fa8  8b30                 mov esi, dword ptr [eax]
// 005a3faa  8900                 mov dword ptr [eax], eax
// 005a3fac  8b4704               mov eax, dword ptr [edi + 4]
// 005a3faf  894004               mov dword ptr [eax + 4], eax
// 005a3fb2  33ed                 xor ebp, ebp
// 005a3fb4  3b7704               cmp esi, dword ptr [edi + 4]
// 005a3fb7  896f08               mov dword ptr [edi + 8], ebp
// 005a3fba  7433                 je 0x5a3fef
// 005a3fbc  53                   push ebx
// 005a3fbd  8d4900               lea ecx, [ecx]
// 005a3fc0  396e10               cmp dword ptr [esi + 0x10], ebp
// 005a3fc3  8b1e                 mov ebx, dword ptr [esi]
// 005a3fc5  7411                 je 0x5a3fd8
// 005a3fc7  8b4614               mov eax, dword ptr [esi + 0x14]
// 005a3fca  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005a3fcd  6a01                 push 1
// 005a3fcf  50                   push eax
// 005a3fd0  ffd1                 call ecx
// 005a3fd2  83c408               add esp, 8
// 005a3fd5  894614               mov dword ptr [esi + 0x14], eax
// 005a3fd8  56                   push esi
// 005a3fd9  896e10               mov dword ptr [esi + 0x10], ebp
// 005a3fdc  896e18               mov dword ptr [esi + 0x18], ebp
// 005a3fdf  e87ebc0800           call 0x62fc62
// 005a3fe4  83c404               add esp, 4
// 005a3fe7  3b5f04               cmp ebx, dword ptr [edi + 4]
// 005a3fea  8bf3                 mov esi, ebx
// 005a3fec  75d2                 jne 0x5a3fc0
// 005a3fee  5b                   pop ebx
// 005a3fef  5f                   pop edi
// 005a3ff0  5e                   pop esi
// 005a3ff1  5d                   pop ebp
// 005a3ff2  c3                   ret 

struct VTimerService
{
    void clear();
};

extern "C" void __cdecl func_0062fc62(void*);

void VTimerService::clear()
{
    unsigned char* self = (unsigned char*)this;
    unsigned char* head = *(unsigned char**)(self + 4);
    unsigned char* node = *(unsigned char**)head;
    *(unsigned char**)head = head;
    head = *(unsigned char**)(self + 4);
    *(unsigned char**)(head + 4) = head;
    *(int*)(self + 8) = 0;
    while (node != *(unsigned char**)(self + 4))
    {
        unsigned char* next = *(unsigned char**)node;
        if (*(void**)(node + 0x10) != 0)
        {
            void* a = *(void**)(node + 0x14);
            void* (*fn)(void*, int) = *(void* (**)(void*, int))(node + 0x10);
            *(void**)(node + 0x14) = fn(a, 1);
        }
        *(void**)(node + 0x10) = 0;
        *(void**)(node + 0x18) = 0;
        func_0062fc62(node);
        node = next;
    }
}
