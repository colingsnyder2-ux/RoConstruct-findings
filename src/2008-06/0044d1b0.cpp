// from server: 100% by king_originala
// roc 2008-06 0044d1b0  unit: CRobloxApp  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044d1b0
//
// 0044d1b0  83ec08               sub esp, 8
// 0044d1b3  8b542410             mov edx, dword ptr [esp + 0x10]
// 0044d1b7  56                   push esi
// 0044d1b8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0044d1bc  57                   push edi
// 0044d1bd  51                   push ecx
// 0044d1be  b850a94400           mov eax, 0x44a950
// 0044d1c3  50                   push eax
// 0044d1c4  8b442428             mov eax, dword ptr [esp + 0x28]
// 0044d1c8  50                   push eax
// 0044d1c9  52                   push edx
// 0044d1ca  8954241c             mov dword ptr [esp + 0x1c], edx
// 0044d1ce  e8fdeeffff           call 0x44c0d0
// 0044d1d3  83c410               add esp, 0x10
// 0044d1d6  8bf8                 mov edi, eax
// 0044d1d8  85f6                 test esi, esi
// 0044d1da  7406                 je 0x44d1e2
// 0044d1dc  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 0044d1e0  7406                 je 0x44d1e8
// 0044d1e2  ff1590288000         call dword ptr [0x802890]
// 0044d1e8  33c0                 xor eax, eax
// 0044d1ea  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 0044d1ee  5f                   pop edi
// 0044d1ef  0f94c0               sete al
// 0044d1f2  5e                   pop esi
// 0044d1f3  83c408               add esp, 8
// 0044d1f6  c21000               ret 0x10

struct Iterator
{
    void* owner;
    void* position;
};

struct S
{
    bool predicate(void*, void*);
    int f(Iterator first, Iterator last);
};

struct Callback
{
    bool (S::*method)(void*, void*);
    S* object;
};

extern void* __cdecl search(void*, void*, Callback);
extern "C" void (__cdecl *_invalid_parameter_noinfo)();

int S::f(Iterator first, Iterator last)
{
    Callback callback = { &S::predicate, this };
    Iterator result = first;
    result.position = search(first.position, last.position, callback);

    if (!result.owner || result.owner != last.owner)
        _invalid_parameter_noinfo();

    return result.position == last.position;
}
