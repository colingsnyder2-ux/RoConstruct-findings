// from server: 88% by colin
// from server: 82% by king_originala
// roc 2008-06 00464970  unit: CScriptEditor  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00464970
//
// 00464970  6aff                 push -1
// 00464972  6873347c00           push 0x7c3473
// 00464977  64a100000000         mov eax, dword ptr fs:[0]
// 0046497d  50                   push eax
// 0046497e  64892500000000       mov dword ptr fs:[0], esp
// 00464985  83ec08               sub esp, 8
// 00464988  56                   push esi
// 00464989  57                   push edi
// 0046498a  8bf9                 mov edi, ecx
// 0046498c  6a04                 push 4
// 0046498e  897c2410             mov dword ptr [esp + 0x10], edi
// 00464992  c70768b38100         mov dword ptr [edi], 0x81b368
// 00464998  8d7704               lea esi, [edi + 4]
// 0046499b  e880bf2300           call 0x6a0920
// 004649a0  33c9                 xor ecx, ecx
// 004649a2  83c404               add esp, 4
// 004649a5  3bc1                 cmp eax, ecx
// 004649a7  7404                 je 0x4649ad
// 004649a9  8930                 mov dword ptr [eax], esi
// 004649ab  eb02                 jmp 0x4649af
// 004649ad  33c0                 xor eax, eax
// 004649af  8906                 mov dword ptr [esi], eax
// 004649b1  894e0c               mov dword ptr [esi + 0xc], ecx
// 004649b4  894e10               mov dword ptr [esi + 0x10], ecx
// 004649b7  894e14               mov dword ptr [esi + 0x14], ecx
// 004649ba  c744241801000000     mov dword ptr [esp + 0x18], 1
// 004649c2  ff1598218000         call dword ptr [0x802198]
// 004649c8  89471c               mov dword ptr [edi + 0x1c], eax
// 004649cb  e810e3fcff           call 0x432ce0
// 004649d0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004649d4  894720               mov dword ptr [edi + 0x20], eax
// 004649d7  8bc7                 mov eax, edi
// 004649d9  5f                   pop edi
// 004649da  5e                   pop esi
// 004649db  64890d00000000       mov dword ptr fs:[0], ecx
// 004649e2  83c414               add esp, 0x14
// 004649e5  c3                   ret 

void* __cdecl operator new(unsigned int);
extern "C" unsigned long (__stdcall *GetCurrentThreadId)();
extern unsigned long __cdecl func_00432ce0();

struct Storage;

struct Link
{
    Storage* owner;
    Link(Storage* p) : owner(p) {}
};

struct LinkOwner
{
    Link* value;
    LinkOwner(Storage* p) : value(new Link(p)) {}
    ~LinkOwner();
};

struct Storage
{
    LinkOwner link;
    unsigned int reserved[2];
    void* first;
    void* last;
    void* limit;

    Storage();
    ~Storage();
};

struct ThreadId
{
    unsigned long id;
    ThreadId() {}
    ~ThreadId() {}
    ThreadId operator=(unsigned long v) { id = v; return *this; }
};

struct CScriptEditor
{
    virtual ~CScriptEditor();
    Storage storage;
    ThreadId threadId;
    unsigned long value;

    CScriptEditor();
};

inline Storage::Storage()
    : link(this), first(0), last(0), limit(0)
{
}

CScriptEditor::CScriptEditor()
{
    threadId = GetCurrentThreadId();
    value = func_00432ce0();
}
