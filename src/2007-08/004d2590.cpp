// from server: 91% by colin
// roc 2007-08 004d2590  unit: RBX::Render::TextureProxy  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d2590
//
// 004d2590  8b442408             mov eax, dword ptr [esp + 8]
// 004d2594  83f802               cmp eax, 2
// 004d2597  7519                 jne 0x4d25b2
// 004d2599  56                   push esi
// 004d259a  8b742408             mov esi, dword ptr [esp + 8]
// 004d259e  56                   push esi
// 004d259f  b968748900           mov ecx, 0x897468
// 004d25a4  ff1508e77700         call dword ptr [0x77e708]
// 004d25aa  f6d8                 neg al
// 004d25ac  1bc0                 sbb eax, eax
// 004d25ae  23c6                 and eax, esi
// 004d25b0  5e                   pop esi
// 004d25b1  c3                   ret 
// 004d25b2  85c0                 test eax, eax
// 004d25b4  7523                 jne 0x4d25d9
// 004d25b6  6a0c                 push 0xc
// 004d25b8  e839d91500           call 0x62fef6
// 004d25bd  83c404               add esp, 4
// 004d25c0  85c0                 test eax, eax
// 004d25c2  7424                 je 0x4d25e8
// 004d25c4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d25c8  8b11                 mov edx, dword ptr [ecx]
// 004d25ca  8910                 mov dword ptr [eax], edx
// 004d25cc  8b5104               mov edx, dword ptr [ecx + 4]
// 004d25cf  895004               mov dword ptr [eax + 4], edx
// 004d25d2  8b4908               mov ecx, dword ptr [ecx + 8]
// 004d25d5  894808               mov dword ptr [eax + 8], ecx
// 004d25d8  c3                   ret 
// 004d25d9  8b542404             mov edx, dword ptr [esp + 4]
// 004d25dd  52                   push edx
// 004d25de  e87fd61500           call 0x62fc62
// 004d25e3  83c404               add esp, 4
// 004d25e6  33c0                 xor eax, eax
// 004d25e8  c3                   ret 

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

void* __cdecl func_004d2590(int unused, int mode, void* arg)
{
    if (mode == 2) {
        void* p = arg;
        if (typeid_TextureProxy == *(type_info*)arg) {
            return p;
        }
        return 0;
    }
    if (mode == 0) {
        TextureProxy* src = (TextureProxy*)arg;
        TextureProxy* dst = (TextureProxy*)operator_new(0xc);
        if (dst) {
            dst->field0 = src->field0;
            dst->field4 = src->field4;
            dst->field8 = src->field8;
        }
        return dst;
    }
    operator_delete(arg);
    return 0;
}
