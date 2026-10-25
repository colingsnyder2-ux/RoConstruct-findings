// from server: 100% by king_originala
// roc 2008-06 0056bd10  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056bd10
//
// 0056bd10  51                   push ecx
// 0056bd11  8b4104               mov eax, dword ptr [ecx + 4]
// 0056bd14  8b09                 mov ecx, dword ptr [ecx]
// 0056bd16  56                   push esi
// 0056bd17  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056bd1b  50                   push eax
// 0056bd1c  56                   push esi
// 0056bd1d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0056bd25  e8f6fdffff           call 0x56bb20
// 0056bd2a  8bc6                 mov eax, esi
// 0056bd2c  5e                   pop esi
// 0056bd2d  59                   pop ecx
// 0056bd2e  c20400               ret 4

struct Object {
    void fill(void *result, int value);
};

struct S {
    Object *object;
    int value;
    void *f(void *result);
};

void *S::f(void *result)
{
    volatile int temporary = 0;
    object->fill(result, value);
    return result;
}
