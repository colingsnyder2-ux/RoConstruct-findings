// from server: 100% by king_originala
// roc 2008-06 00411ad0  unit: ChatEnter  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00411ad0
//
// 00411ad0  64a100000000         mov eax, dword ptr fs:[0]
// 00411ad6  6aff                 push -1
// 00411ad8  6828d77b00           push 0x7bd728
// 00411add  50                   push eax
// 00411ade  8b442410             mov eax, dword ptr [esp + 0x10]
// 00411ae2  64892500000000       mov dword ptr fs:[0], esp
// 00411ae9  83ec0c               sub esp, 0xc
// 00411aec  56                   push esi
// 00411aed  8bf1                 mov esi, ecx
// 00411aef  8b08                 mov ecx, dword ptr [eax]
// 00411af1  890e                 mov dword ptr [esi], ecx
// 00411af3  85c9                 test ecx, ecx
// 00411af5  741d                 je 0x411b14
// 00411af7  e824f6ffff           call 0x411120
// 00411afc  84c0                 test al, al
// 00411afe  7414                 je 0x411b14
// 00411b00  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00411b04  8bc6                 mov eax, esi
// 00411b06  5e                   pop esi
// 00411b07  64890d00000000       mov dword ptr fs:[0], ecx
// 00411b0e  83c418               add esp, 0x18
// 00411b11  c20400               ret 4
// 00411b14  8d4c2404             lea ecx, [esp + 4]
// 00411b18  ff1598288000         call dword ptr [0x802898]
// 00411b1e  c7442404a8df8000     mov dword ptr [esp + 4], 0x80dfa8
// 00411b26  8d4c2404             lea ecx, [esp + 4]
// 00411b2a  51                   push ecx
// 00411b2b  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00411b33  e888fbffff           call 0x4116c0

typedef void (__thiscall *ExceptionConstructor)(void*);
extern ExceptionConstructor construct_exception;
extern const void* bad_weak_ptr_vtable[];

namespace std {
    class exception {
    protected:
        const void** table;
        const char* message;
        bool ownsMessage;
    public:
        exception() throw();
    };

    namespace tr1 {
        class bad_weak_ptr : public exception {
        public:
            bad_weak_ptr() throw();
            ~bad_weak_ptr() throw();
        };
    }
}

__forceinline std::exception::exception() throw()
{
    construct_exception(this);
}

__forceinline std::tr1::bad_weak_ptr::bad_weak_ptr() throw()
{
    table = bad_weak_ptr_vtable;
}

struct ControlBlock {
    bool acquire();
};

struct WeakCount {
    ControlBlock* block;
};

__declspec(noreturn) void __cdecl throw_bad_weak_ptr(
    const std::tr1::bad_weak_ptr& error);

struct SharedCount {
    ControlBlock* block;
    SharedCount(const WeakCount& weak);
};

SharedCount::SharedCount(const WeakCount& weak)
    : block(weak.block)
{
    if (!block || !block->acquire())
        throw_bad_weak_ptr(std::tr1::bad_weak_ptr());
}
