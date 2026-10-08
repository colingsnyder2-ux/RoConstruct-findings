// from server: 69% by colin
// roc 2007-08 00417e90  unit: boost::signals::detail::slot_base::Udata_t::?$sp_counted_impl_p  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00417e90
//
// 00417e90  8b442408             mov eax, dword ptr [esp + 8]
// 00417e94  83f802               cmp eax, 2
// 00417e97  7519                 jne 0x417eb2
// 00417e99  56                   push esi
// 00417e9a  8b742408             mov esi, dword ptr [esp + 8]
// 00417e9e  56                   push esi
// 00417e9f  b9903c8800           mov ecx, 0x883c90
// 00417ea4  ff1508e77700         call dword ptr [0x77e708]
// 00417eaa  f6d8                 neg al
// 00417eac  1bc0                 sbb eax, eax
// 00417eae  23c6                 and eax, esi
// 00417eb0  5e                   pop esi
// 00417eb1  c3                   ret 
// 00417eb2  8b542404             mov edx, dword ptr [esp + 4]
// 00417eb6  c644240800           mov byte ptr [esp + 8], 0
// 00417ebb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00417ebf  51                   push ecx
// 00417ec0  50                   push eax
// 00417ec1  52                   push edx
// 00417ec2  e829a21d00           call 0x5f20f0
// 00417ec7  83c40c               add esp, 0xc
// 00417eca  c3                   ret 

struct type_info;

extern "C" int __stdcall MSVCR80_type_info_operator_equal(const type_info* self, const type_info* other);
extern "C" int __cdecl func_005f20f0(int a, int b, int c);

struct S {
    int f(int a, int b);
};

int S::f(int a, int b)
{
    if (b == 2) {
        const type_info* t = (const type_info*)0x883c90;
        int r = MSVCR80_type_info_operator_equal(t, (const type_info*)a);
        return r ? a : 0;
    }
    return func_005f20f0(a, b, 0);
}
