// from server: 100% by king_originala
// roc 2008-06 00595b90  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00595b90
//
// 00595b90  64a100000000         mov eax, dword ptr fs:[0]
// 00595b96  6aff                 push -1
// 00595b98  68d8f47b00           push 0x7bf4d8
// 00595b9d  50                   push eax
// 00595b9e  64892500000000       mov dword ptr fs:[0], esp
// 00595ba5  8b01                 mov eax, dword ptr [ecx]
// 00595ba7  83ec28               sub esp, 0x28
// 00595baa  85c0                 test eax, eax
// 00595bac  7516                 jne 0x595bc4
// 00595bae  8d0c24               lea ecx, [esp]
// 00595bb1  e83a43e7ff           call 0x409ef0
// 00595bb6  50                   push eax
// 00595bb7  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00595bbf  e83c49e7ff           call 0x40a500
// 00595bc4  8b542438             mov edx, dword ptr [esp + 0x38]
// 00595bc8  8b4004               mov eax, dword ptr [eax + 4]
// 00595bcb  52                   push edx
// 00595bcc  83c108               add ecx, 8
// 00595bcf  51                   push ecx
// 00595bd0  ffd0                 call eax
// 00595bd2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00595bd6  83c408               add esp, 8
// 00595bd9  64890d00000000       mov dword ptr fs:[0], ecx
// 00595be0  83c434               add esp, 0x34
// 00595be3  c20400               ret 4

struct BadFunctionCall
{
    char data[40];
    BadFunctionCall();
    ~BadFunctionCall();
};

__declspec(noreturn) void __cdecl throw_exception(const BadFunctionCall&);

struct FunctionTable
{
    void* manager;
    void (__cdecl *invoke)(void*, void*);
};

struct S
{
    FunctionTable* table;
    unsigned int reserved;
    char storage[12];

    void f(void* argument);
};

void S::f(void* argument)
{
    if (!table)
        throw_exception(BadFunctionCall());

    table->invoke(storage, argument);
}
