// from server: 93% by colin
// roc 2007-08 00459660  unit: CRobloxWnd  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00459660
//
// 00459660  8b442408             mov eax, dword ptr [esp + 8]
// 00459664  83f802               cmp eax, 2
// 00459667  7519                 jne 0x459682
// 00459669  56                   push esi
// 0045966a  8b742408             mov esi, dword ptr [esp + 8]
// 0045966e  56                   push esi
// 0045966f  b9b0a08800           mov ecx, 0x88a0b0
// 00459674  ff1508e77700         call dword ptr [0x77e708]
// 0045967a  f6d8                 neg al
// 0045967c  1bc0                 sbb eax, eax
// 0045967e  23c6                 and eax, esi
// 00459680  5e                   pop esi
// 00459681  c3                   ret 
// 00459682  85c0                 test eax, eax
// 00459684  751d                 jne 0x4596a3
// 00459686  6a08                 push 8
// 00459688  e869681d00           call 0x62fef6
// 0045968d  83c404               add esp, 4
// 00459690  85c0                 test eax, eax
// 00459692  741e                 je 0x4596b2
// 00459694  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00459698  8b11                 mov edx, dword ptr [ecx]
// 0045969a  8910                 mov dword ptr [eax], edx
// 0045969c  8b4904               mov ecx, dword ptr [ecx + 4]
// 0045969f  894804               mov dword ptr [eax + 4], ecx
// 004596a2  c3                   ret 
// 004596a3  8b542404             mov edx, dword ptr [esp + 4]
// 004596a7  52                   push edx
// 004596a8  e8b5651d00           call 0x62fc62
// 004596ad  83c404               add esp, 4
// 004596b0  33c0                 xor eax, eax
// 004596b2  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" void* __cdecl operator_new(unsigned int);

struct CRobloxWnd {
    void* field0;
    void* field4;
};

extern type_info typeid_88a0b0;
extern "C" void __cdecl func_62fc62(CRobloxWnd*);

void* __cdecl func_00459660(CRobloxWnd* self, int b, void* a)
{
    if (b == 2) {
        if (typeid_88a0b0 == *(type_info*)a)
            return a;
        return 0;
    }
    if (b == 0) {
        void** p = (void**)operator_new(8);
        if (p) {
            p[0] = self->field0;
            p[1] = self->field4;
        }
        return p;
    }
    func_62fc62(self);
    return 0;
}
