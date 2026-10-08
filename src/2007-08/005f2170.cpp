// from server: 43% by colin
// roc 2007-08 005f2170  unit: G3D::$$A6AXVVector3::V?$function::?$holder  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f2170
//
// 005f2170  8b442408             mov eax, dword ptr [esp + 8]
// 005f2174  83f802               cmp eax, 2
// 005f2177  7519                 jne 0x5f2192
// 005f2179  56                   push esi
// 005f217a  8b742408             mov esi, dword ptr [esp + 8]
// 005f217e  56                   push esi
// 005f217f  b958188b00           mov ecx, 0x8b1858
// 005f2184  ff1508e77700         call dword ptr [0x77e708]
// 005f218a  f6d8                 neg al
// 005f218c  1bc0                 sbb eax, eax
// 005f218e  23c6                 and eax, esi
// 005f2190  5e                   pop esi
// 005f2191  c3                   ret 
// 005f2192  8b542404             mov edx, dword ptr [esp + 4]
// 005f2196  c644240800           mov byte ptr [esp + 8], 0
// 005f219b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f219f  51                   push ecx
// 005f21a0  50                   push eax
// 005f21a1  52                   push edx
// 005f21a2  e849ffffff           call 0x5f20f0
// 005f21a7  83c40c               add esp, 0xc
// 005f21aa  c3                   ret 

struct type_info;

extern "C" {
    int __stdcall MSVCR80_type_info_operator_equal(const type_info*, const type_info*);
}

struct SignalDescImpl {
    int compare_type(const type_info* ti, int value);
};

int SignalDescImpl::compare_type(const type_info* ti, int value)
{
    if (value != 2) {
        int result;
        if (MSVCR80_type_info_operator_equal((const type_info*)0x8b1858, ti)) {
            result = 0;
        } else {
            result = value;
        }
        return result;
    }
    return 0;
}
