// from server: 90% by colin
// roc 2007-08 004d24d0  unit: RBX::Render::TextureProxy  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d24d0
//
// 004d24d0  8b442408             mov eax, dword ptr [esp + 8]
// 004d24d4  83f802               cmp eax, 2
// 004d24d7  7519                 jne 0x4d24f2
// 004d24d9  56                   push esi
// 004d24da  8b742408             mov esi, dword ptr [esp + 8]
// 004d24de  56                   push esi
// 004d24df  b9f8728900           mov ecx, 0x8972f8
// 004d24e4  ff1508e77700         call dword ptr [0x77e708]
// 004d24ea  f6d8                 neg al
// 004d24ec  1bc0                 sbb eax, eax
// 004d24ee  23c6                 and eax, esi
// 004d24f0  5e                   pop esi
// 004d24f1  c3                   ret 
// 004d24f2  85c0                 test eax, eax
// 004d24f4  7523                 jne 0x4d2519
// 004d24f6  6a0c                 push 0xc
// 004d24f8  e8f9d91500           call 0x62fef6
// 004d24fd  83c404               add esp, 4
// 004d2500  85c0                 test eax, eax
// 004d2502  7424                 je 0x4d2528
// 004d2504  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d2508  8b11                 mov edx, dword ptr [ecx]
// 004d250a  8910                 mov dword ptr [eax], edx
// 004d250c  8b5104               mov edx, dword ptr [ecx + 4]
// 004d250f  895004               mov dword ptr [eax + 4], edx
// 004d2512  8b4908               mov ecx, dword ptr [ecx + 8]
// 004d2515  894808               mov dword ptr [eax + 8], ecx
// 004d2518  c3                   ret 
// 004d2519  8b542404             mov edx, dword ptr [esp + 4]
// 004d251d  52                   push edx
// 004d251e  e83fd71500           call 0x62fc62
// 004d2523  83c404               add esp, 4
// 004d2526  33c0                 xor eax, eax
// 004d2528  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" void* __cdecl sub_62FEF6(unsigned int size);
extern "C" void __cdecl sub_62FC62(void* p);

struct RBX_TextureProxy {
    void* field0;
    void* field4;
    void* field8;
};

void* __cdecl TextureProxy_dispatch(int mode, const RBX_TextureProxy* src)
{
    if (mode == 2) {
        type_info* ti = (type_info*)0x8972f8;
        bool result = ti->operator==(*(const type_info*)src);
        return result ? (void*)src : 0;
    }
    if (mode == 0) {
        void* mem = sub_62FEF6(0xc);
        if (mem) {
            *(void**)mem = src->field0;
            *(void**)((char*)mem + 4) = src->field4;
            *(void**)((char*)mem + 8) = src->field8;
        }
        return mem;
    }
    sub_62FC62((void*)src);
    return 0;
}
