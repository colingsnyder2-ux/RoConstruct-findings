// from server: 100% by king_originala
// roc 2008-06 00594310  unit: boost::Vrecursive_mutex::?$sp_counted_impl_p  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594310
//
// 00594310  56                   push esi
// 00594311  8bf1                 mov esi, ecx
// 00594313  8b4618               mov eax, dword ptr [esi + 0x18]
// 00594316  57                   push edi
// 00594317  85c0                 test eax, eax
// 00594319  7412                 je 0x59432d
// 0059431b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0059431e  51                   push ecx
// 0059431f  68f0d8ffff           push 0xffffd8f0
// 00594324  50                   push eax
// 00594325  e846ce0700           call 0x611170
// 0059432a  83c40c               add esp, 0xc
// 0059432d  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00594331  57                   push edi
// 00594332  8bce                 mov ecx, esi
// 00594334  e8c7fdffff           call 0x594100
// 00594339  8b4618               mov eax, dword ptr [esi + 0x18]
// 0059433c  85c0                 test eax, eax
// 0059433e  750a                 jne 0x59434a
// 00594340  894620               mov dword ptr [esi + 0x20], eax
// 00594343  5f                   pop edi
// 00594344  8bc6                 mov eax, esi
// 00594346  5e                   pop esi
// 00594347  c20400               ret 4
// 0059434a  8b5720               mov edx, dword ptr [edi + 0x20]
// 0059434d  52                   push edx
// 0059434e  68f0d8ffff           push 0xffffd8f0
// 00594353  50                   push eax
// 00594354  e8d7e10700           call 0x612530
// 00594359  8b4618               mov eax, dword ptr [esi + 0x18]
// 0059435c  68f0d8ffff           push 0xffffd8f0
// 00594361  50                   push eax
// 00594362  e859cd0700           call 0x6110c0
// 00594367  83c414               add esp, 0x14
// 0059436a  894620               mov dword ptr [esi + 0x20], eax
// 0059436d  5f                   pop edi
// 0059436e  8bc6                 mov eax, esi
// 00594370  5e                   pop esi
// 00594371  c20400               ret 4

extern "C" void __cdecl release_value(void *, int, int);
extern "C" void __cdecl set_value(void *, int, int);
extern "C" int __cdecl get_value(void *, int);

struct S {
    unsigned char padding[24];
    void *context;
    int reserved;
    int value;

    S &assign(const S &other);
    S &copy(const S &other);
};

S &S::assign(const S &other)
{
    if (context)
        release_value(context, -10000, value);

    copy(other);

    if (!context) {
        value = 0;
        return *this;
    }

    set_value(context, -10000, other.value);
    value = get_value(context, -10000);
    return *this;
}
