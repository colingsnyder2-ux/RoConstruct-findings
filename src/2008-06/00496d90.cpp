// from server: 100% by colin
// roc 2008-06 00496d90  unit: RBX::Network::Players  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00496d90
//
// 00496d90  83ec10               sub esp, 0x10
// 00496d93  53                   push ebx
// 00496d94  56                   push esi
// 00496d95  8bf1                 mov esi, ecx
// 00496d97  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00496d9a  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 00496d9d  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00496da0  c1f902               sar ecx, 2
// 00496da3  33c0                 xor eax, eax
// 00496da5  89542414             mov dword ptr [esp + 0x14], edx
// 00496da9  8d54240c             lea edx, [esp + 0xc]
// 00496dad  57                   push edi
// 00496dae  89442410             mov dword ptr [esp + 0x10], eax
// 00496db2  894c2414             mov dword ptr [esp + 0x14], ecx
// 00496db6  89561c               mov dword ptr [esi + 0x1c], edx
// 00496db9  85c9                 test ecx, ecx
// 00496dbb  7647                 jbe 0x496e04
// 00496dbd  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00496dc3  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00496dc6  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 00496dc9  8bf8                 mov edi, eax
// 00496dcb  c1f902               sar ecx, 2
// 00496dce  3bc1                 cmp eax, ecx
// 00496dd0  7202                 jb 0x496dd4
// 00496dd2  ffd3                 call ebx
// 00496dd4  8b5610               mov edx, dword ptr [esi + 0x10]
// 00496dd7  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00496dda  50                   push eax
// 00496ddb  83ec48               sub esp, 0x48
// 00496dde  8d44246c             lea eax, [esp + 0x6c]
// 00496de2  8bcc                 mov ecx, esp
// 00496de4  89642458             mov dword ptr [esp + 0x58], esp
// 00496de8  50                   push eax
// 00496de9  e892f6ffff           call 0x496480
// 00496dee  8bce                 mov ecx, esi
// 00496df0  e8abf7ffff           call 0x4965a0
// 00496df5  8b442410             mov eax, dword ptr [esp + 0x10]
// 00496df9  40                   inc eax
// 00496dfa  89442410             mov dword ptr [esp + 0x10], eax
// 00496dfe  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00496e02  72bf                 jb 0x496dc3
// 00496e04  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00496e08  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00496e0b  8d4c2420             lea ecx, [esp + 0x20]
// 00496e0f  e8acf5ffff           call 0x4963c0
// 00496e14  5f                   pop edi
// 00496e15  5e                   pop esi
// 00496e16  5b                   pop ebx
// 00496e17  83c410               add esp, 0x10
// 00496e1a  c24800               ret 0x48

extern void (__cdecl *invalid_parameter_handler)();

struct Payload
{
    char data[72];
    Payload(const Payload&) throw();
    ~Payload() throw();
};

struct Iteration
{
    unsigned index;
    unsigned count;
    Iteration* previous;
};

struct S
{
    char reserved[16];
    void** first;
    void** last;
    void** limit;
    Iteration* iteration;

    void dispatch(Payload value, void* element) throw();
    void f(Payload value) throw();
};

void S::f(Payload value) throw()
{
    Iteration state;
    state.index = 0;
    state.count = static_cast<unsigned>(last - first);
    state.previous = iteration;
    iteration = &state;

    if (state.index < state.count)
    {
        void (__cdecl *handler)() = invalid_parameter_handler;
        do
        {
            unsigned index = state.index;
            if (index >= static_cast<unsigned>(last - first))
                handler();

            void* element = first[index];
            dispatch(value, element);
            ++state.index;
        }
        while (state.index < state.count);
    }

    iteration = state.previous;
}
