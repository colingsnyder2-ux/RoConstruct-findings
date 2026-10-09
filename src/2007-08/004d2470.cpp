// from server: 80% by colin
// roc 2007-08 004d2470  unit: RBX::Render::TextureProxy  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d2470
//
// 004d2470  8b442408             mov eax, dword ptr [esp + 8]
// 004d2474  83f802               cmp eax, 2
// 004d2477  7519                 jne 0x4d2492
// 004d2479  56                   push esi
// 004d247a  8b742408             mov esi, dword ptr [esp + 8]
// 004d247e  56                   push esi
// 004d247f  b940728900           mov ecx, 0x897240
// 004d2484  ff1508e77700         call dword ptr [0x77e708]
// 004d248a  f6d8                 neg al
// 004d248c  1bc0                 sbb eax, eax
// 004d248e  23c6                 and eax, esi
// 004d2490  5e                   pop esi
// 004d2491  c3                   ret 
// 004d2492  85c0                 test eax, eax
// 004d2494  7523                 jne 0x4d24b9
// 004d2496  6a0c                 push 0xc
// 004d2498  e859da1500           call 0x62fef6
// 004d249d  83c404               add esp, 4
// 004d24a0  85c0                 test eax, eax
// 004d24a2  7424                 je 0x4d24c8
// 004d24a4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d24a8  8b11                 mov edx, dword ptr [ecx]
// 004d24aa  8910                 mov dword ptr [eax], edx
// 004d24ac  8b5104               mov edx, dword ptr [ecx + 4]
// 004d24af  895004               mov dword ptr [eax + 4], edx
// 004d24b2  8b4908               mov ecx, dword ptr [ecx + 8]
// 004d24b5  894808               mov dword ptr [eax + 8], ecx
// 004d24b8  c3                   ret 
// 004d24b9  8b542404             mov edx, dword ptr [esp + 4]
// 004d24bd  52                   push edx
// 004d24be  e89fd71500           call 0x62fc62
// 004d24c3  83c404               add esp, 4
// 004d24c6  33c0                 xor eax, eax
// 004d24c8  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

struct S_TextureProxy {
    void* __cdecl f(int a1, const void* a2);
};

void* S_TextureProxy::f(int a1, const void* a2)
{
    if (a1 == 2) {
        extern type_info type_info_00897240;
        if (type_info_00897240 == *(const type_info*)a2) {
            return (void*)a2;
        }
        return 0;
    }
    if (a1 == 0) {
        void* p = operator_new(0xc);
        if (p) {
            const int* src = (const int*)a2;
            int* dst = (int*)p;
            dst[0] = src[0];
            dst[1] = src[1];
            dst[2] = src[2];
            return p;
        }
        return 0;
    }
    operator_delete((void*)a2);
    return 0;
}
