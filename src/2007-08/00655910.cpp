// from server: 53% by colin
// roc 2007-08 00655910  unit: CInstanceRecord::CNameItem  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00655910
//
// 00655910  56                   push esi
// 00655911  8b742408             mov esi, dword ptr [esp + 8]
// 00655915  57                   push edi
// 00655916  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0065591a  663b3e               cmp di, word ptr [esi]
// 0065591d  743a                 je 0x655959
// 0065591f  e8ccffffff           call 0x6558f0
// 00655924  57                   push edi
// 00655925  6a00                 push 0
// 00655927  50                   push eax
// 00655928  56                   push esi
// 00655929  56                   push esi
// 0065592a  ff1510ea7700         call dword ptr [0x77ea10]
// 00655930  837c241400           cmp dword ptr [esp + 0x14], 0
// 00655935  7416                 je 0x65594d
// 00655937  85c0                 test eax, eax
// 00655939  7d12                 jge 0x65594d
// 0065593b  3d0e000780           cmp eax, 0x8007000e
// 00655940  7505                 jne 0x655947
// 00655942  e927a3fdff           jmp 0x62fc6e
// 00655947  50                   push eax
// 00655948  e81ba3fdff           call 0x62fc68
// 0065594d  33c9                 xor ecx, ecx
// 0065594f  85c0                 test eax, eax
// 00655951  0f9dc1               setge cl
// 00655954  5f                   pop edi
// 00655955  5e                   pop esi
// 00655956  8bc1                 mov eax, ecx
// 00655958  c3                   ret 
// 00655959  5f                   pop edi
// 0065595a  b801000000           mov eax, 1
// 0065595f  5e                   pop esi
// 00655960  c3                   ret 

struct CNameItem {
    unsigned short value;
    bool setValue(unsigned short v);
};

extern "C" int __stdcall VariantChangeTypeEx(void*, const void*, unsigned long, unsigned short, unsigned short);

extern void func_006558f0();
extern void func_0062fc68(int);
extern void func_0062fc6e();

bool CNameItem::setValue(unsigned short v)
{
    if (v != this->value) {
        return true;
    }
    func_006558f0();
    int hr = VariantChangeTypeEx(0, 0, 0, v, 0);
    if (hr < 0) {
        if (hr == (int)0x8007000E) {
            func_0062fc6e();
        } else {
            func_0062fc68(hr);
        }
    }
    return hr >= 0;
}
