// from server: 83% by colin
// roc 2007-08 004d2410  unit: RBX::Render::TextureProxy  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d2410
//
// 004d2410  8b442408             mov eax, dword ptr [esp + 8]
// 004d2414  83f802               cmp eax, 2
// 004d2417  7519                 jne 0x4d2432
// 004d2419  56                   push esi
// 004d241a  8b742408             mov esi, dword ptr [esp + 8]
// 004d241e  56                   push esi
// 004d241f  b9b0718900           mov ecx, 0x8971b0
// 004d2424  ff1508e77700         call dword ptr [0x77e708]
// 004d242a  f6d8                 neg al
// 004d242c  1bc0                 sbb eax, eax
// 004d242e  23c6                 and eax, esi
// 004d2430  5e                   pop esi
// 004d2431  c3                   ret 
// 004d2432  85c0                 test eax, eax
// 004d2434  751d                 jne 0x4d2453
// 004d2436  6a08                 push 8
// 004d2438  e8b9da1500           call 0x62fef6
// 004d243d  83c404               add esp, 4
// 004d2440  85c0                 test eax, eax
// 004d2442  741e                 je 0x4d2462
// 004d2444  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d2448  8b11                 mov edx, dword ptr [ecx]
// 004d244a  8910                 mov dword ptr [eax], edx
// 004d244c  8b4904               mov ecx, dword ptr [ecx + 4]
// 004d244f  894804               mov dword ptr [eax + 4], ecx
// 004d2452  c3                   ret 
// 004d2453  8b542404             mov edx, dword ptr [esp + 4]
// 004d2457  52                   push edx
// 004d2458  e805d81500           call 0x62fc62
// 004d245d  83c404               add esp, 4
// 004d2460  33c0                 xor eax, eax
// 004d2462  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

struct TextureProxy {
    void* field0;
    void* field4;
};

void* __cdecl createTextureProxy(int a, int b)
{
    if (b == 2) {
        type_info* ti = (type_info*)0x8971b0;
        if (*ti == *(type_info*)a) {
            return (void*)a;
        }
        return 0;
    }
    if (b == 0) {
        void* p = operator_new(8);
        if (p) {
            *(void**)p = *(void**)a;
            *(void**)((char*)p + 4) = *(void**)(a + 4);
        }
        return p;
    }
    operator_delete((void*)a);
    return 0;
}
