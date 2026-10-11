// from server: 83% by tester
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

struct TextureProxy {
    void* field0;
    void* field4;
    void* field8;
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);
extern type_info typeid_TextureProxy;

void* __cdecl func_004d2470(void* self, int mode, void* arg)
{
    if (mode == 2) {
        void* p = arg;
        if (typeid_TextureProxy == *(type_info*)0x897240) {
            return p;
        }
        return 0;
    }
    if (mode == 0) {
        TextureProxy* src = (TextureProxy*)arg;
        TextureProxy* dst = (TextureProxy*)operator_new(0xc);
        if (dst != 0) {
            dst->field0 = src->field0;
            dst->field4 = src->field4;
            dst->field8 = src->field8;
        }
        return dst;
    }
    operator_delete(arg);
    return 0;
}
