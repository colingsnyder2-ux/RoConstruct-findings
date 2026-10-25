// from server: 100% by king_originala
// roc 2008-06 005ed770  unit: RBX::Controller::W4InputType::?$EnumDesc  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ed770
//
// 005ed770  64a100000000         mov eax, dword ptr fs:[0]
// 005ed776  6aff                 push -1
// 005ed778  6888617c00           push 0x7c6188
// 005ed77d  50                   push eax
// 005ed77e  64892500000000       mov dword ptr fs:[0], esp
// 005ed785  83ec0c               sub esp, 0xc
// 005ed788  56                   push esi
// 005ed789  8b742420             mov esi, dword ptr [esp + 0x20]
// 005ed78d  85f6                 test esi, esi
// 005ed78f  742c                 je 0x5ed7bd
// 005ed791  8b0e                 mov ecx, dword ptr [esi]
// 005ed793  85c9                 test ecx, ecx
// 005ed795  7409                 je 0x5ed7a0
// 005ed797  8b01                 mov eax, dword ptr [ecx]
// 005ed799  8b5004               mov edx, dword ptr [eax + 4]
// 005ed79c  ffd2                 call edx
// 005ed79e  eb05                 jmp 0x5ed7a5
// 005ed7a0  b814969200           mov eax, 0x929614
// 005ed7a5  68005e9500           push 0x955e00
// 005ed7aa  8bc8                 mov ecx, eax
// 005ed7ac  ff1578288000         call dword ptr [0x802878]
// 005ed7b2  84c0                 test al, al
// 005ed7b4  7407                 je 0x5ed7bd
// 005ed7b6  8b06                 mov eax, dword ptr [esi]
// 005ed7b8  83c004               add eax, 4
// 005ed7bb  7529                 jne 0x5ed7e6
// 005ed7bd  6834ba8000           push 0x80ba34
// 005ed7c2  8d4c2408             lea ecx, [esp + 8]
// 005ed7c6  ff1564288000         call dword ptr [0x802864]
// 005ed7cc  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 005ed7d4  8d442404             lea eax, [esp + 4]
// 005ed7d8  50                   push eax
// 005ed7d9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005ed7e1  e80acce1ff           call 0x40a3f0
// 005ed7e6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ed7ea  5e                   pop esi
// 005ed7eb  64890d00000000       mov dword ptr fs:[0], ecx
// 005ed7f2  83c418               add esp, 0x18
// 005ed7f5  c3                   ret 

class type_info {
public:
    bool operator==(const type_info&) const;
};

extern const type_info empty_type;
extern const type_info surface_type;

extern bool (__thiscall* const compare_type)(
    const type_info*, const type_info&);

struct bad_any_cast {
    const void* vtable;
    const char* message;
    int owned;

    bad_any_cast();
    ~bad_any_cast();
};

extern void (__thiscall* const construct_bad_cast)(
    bad_any_cast*, const char*);
extern const void* const bad_any_cast_vtable[];

inline bad_any_cast::bad_any_cast()
{
    construct_bad_cast(this, "bad cast");
    vtable = bad_any_cast_vtable;
}

__declspec(noreturn) void __cdecl throw_exception(const bad_any_cast&);

enum SurfaceType {
    SurfaceType_Default = 0
};

struct placeholder {
    virtual ~placeholder();
    virtual const type_info& type() const = 0;
};

struct holder : placeholder {
    SurfaceType held;
};

struct any {
    placeholder* content;
};

SurfaceType& __cdecl cast_surface(any& operand)
{
    SurfaceType* result = 0;

    if (&operand) {
        const type_info& t = operand.content
            ? operand.content->type()
            : empty_type;

        if (compare_type(&t, surface_type))
            result = &static_cast<holder*>(operand.content)->held;
    }

    if (!result)
        throw_exception(bad_any_cast());

    return *result;
}
