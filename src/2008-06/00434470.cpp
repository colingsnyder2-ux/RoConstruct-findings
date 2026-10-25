// from server: 100% by king_originala
// roc 2008-06 00434470  unit: CMemberTreeView  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00434470
//
// 00434470  64a100000000         mov eax, dword ptr fs:[0]
// 00434476  6aff                 push -1
// 00434478  6888617c00           push 0x7c6188
// 0043447d  50                   push eax
// 0043447e  64892500000000       mov dword ptr fs:[0], esp
// 00434485  83ec0c               sub esp, 0xc
// 00434488  56                   push esi
// 00434489  8b742420             mov esi, dword ptr [esp + 0x20]
// 0043448d  85f6                 test esi, esi
// 0043448f  742c                 je 0x4344bd
// 00434491  8b0e                 mov ecx, dword ptr [esi]
// 00434493  85c9                 test ecx, ecx
// 00434495  7409                 je 0x4344a0
// 00434497  8b01                 mov eax, dword ptr [ecx]
// 00434499  8b5004               mov edx, dword ptr [eax + 4]
// 0043449c  ffd2                 call edx
// 0043449e  eb05                 jmp 0x4344a5
// 004344a0  b814969200           mov eax, 0x929614
// 004344a5  68f8be9200           push 0x92bef8
// 004344aa  8bc8                 mov ecx, eax
// 004344ac  ff1578288000         call dword ptr [0x802878]
// 004344b2  84c0                 test al, al
// 004344b4  7407                 je 0x4344bd
// 004344b6  8b06                 mov eax, dword ptr [esi]
// 004344b8  83c004               add eax, 4
// 004344bb  7529                 jne 0x4344e6
// 004344bd  6834ba8000           push 0x80ba34
// 004344c2  8d4c2408             lea ecx, [esp + 8]
// 004344c6  ff1564288000         call dword ptr [0x802864]
// 004344cc  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 004344d4  8d442404             lea eax, [esp + 4]
// 004344d8  50                   push eax
// 004344d9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004344e1  e80a5ffdff           call 0x40a3f0
// 004344e6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004344ea  5e                   pop esi
// 004344eb  64890d00000000       mov dword ptr fs:[0], ecx
// 004344f2  83c418               add esp, 0x18
// 004344f5  c3                   ret 

extern void (__thiscall *construct_bad_cast)(void *, const char *);
extern bool (__thiscall *type_info_equal)(const void *, const void *);
__declspec(noreturn) void __cdecl raise_bad_cast(const void *);

struct Holder
{
    virtual ~Holder();
    virtual const void *type() const;
};

struct BadCast
{
    unsigned long storage[3];
    BadCast();
    ~BadCast();
};

inline BadCast::BadCast()
{
    construct_bad_cast(this, "bad cast");
    storage[0] = 0x0080BA2CUL;
}

void *__cdecl func_00434470(Holder **operand)
{
    if (operand)
    {
        const void *type = *operand
            ? (*operand)->type()
            : reinterpret_cast<const void *>(0x00929614UL);

        if (type_info_equal(type, reinterpret_cast<const void *>(0x0092BEF8UL)))
        {
            void *result = reinterpret_cast<char *>(*operand) + 4;
            if (result)
                return result;
        }
    }

    BadCast error;
    raise_bad_cast(&error);
}
