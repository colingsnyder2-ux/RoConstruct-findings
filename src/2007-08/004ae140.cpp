// from server: 77% by colin
// roc 2007-08 004ae140  unit: std::X::$$A6AXXZV?$allocator::V?$function::?$holder  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ae140
//
// 004ae140  8b442408             mov eax, dword ptr [esp + 8]
// 004ae144  83f802               cmp eax, 2
// 004ae147  7519                 jne 0x4ae162
// 004ae149  56                   push esi
// 004ae14a  8b742408             mov esi, dword ptr [esp + 8]
// 004ae14e  56                   push esi
// 004ae14f  b9281a8900           mov ecx, 0x891a28
// 004ae154  ff1508e77700         call dword ptr [0x77e708]
// 004ae15a  f6d8                 neg al
// 004ae15c  1bc0                 sbb eax, eax
// 004ae15e  23c6                 and eax, esi
// 004ae160  5e                   pop esi
// 004ae161  c3                   ret 
// 004ae162  8b542404             mov edx, dword ptr [esp + 4]
// 004ae166  c644240800           mov byte ptr [esp + 8], 0
// 004ae16b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ae16f  51                   push ecx
// 004ae170  50                   push eax
// 004ae171  52                   push edx
// 004ae172  e8793f1400           call 0x5f20f0
// 004ae177  83c40c               add esp, 0xc
// 004ae17a  c3                   ret 

struct type_info
{
    bool operator==(const type_info&) const;
};

extern "C" void* __cdecl G1_func_005f20f0(void*, int, unsigned char);

extern type_info G1_typeinfo_00891a28;
extern bool (type_info::*G1_ptr_0077e708)(const type_info&) const;

void* __cdecl func_004ae140(void* a, int b)
{
    if (b == 2)
    {
        void* p = a;
        if (G1_typeinfo_00891a28 == *(const type_info*)p)
            return p;
        return 0;
    }
    unsigned char tmp = 0;
    return G1_func_005f20f0(a, b, tmp);
}
