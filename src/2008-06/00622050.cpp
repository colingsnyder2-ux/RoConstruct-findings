// from server: 100% by colin
// roc 2008-06 00622050  unit: lua_exception  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00622050
//
// 00622050  83ec18               sub esp, 0x18
// 00622053  56                   push esi
// 00622054  8b742420             mov esi, dword ptr [esp + 0x20]
// 00622058  8b4670               mov eax, dword ptr [esi + 0x70]
// 0062205b  85c0                 test eax, eax
// 0062205d  743a                 je 0x622099
// 0062205f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00622063  894808               mov dword ptr [eax + 8], ecx
// 00622066  57                   push edi
// 00622067  8b7e70               mov edi, dword ptr [esi + 0x70]
// 0062206a  8d4c2408             lea ecx, [esp + 8]
// 0062206e  ff1598288000         call dword ptr [0x802898]
// 00622074  689c9d8f00           push 0x8f9d9c
// 00622079  8d54240c             lea edx, [esp + 0xc]
// 0062207d  52                   push edx
// 0062207e  c7442410cc478400     mov dword ptr [esp + 0x10], 0x8447cc
// 00622086  8974241c             mov dword ptr [esp + 0x1c], esi
// 0062208a  897c2420             mov dword ptr [esp + 0x20], edi
// 0062208e  c644242400           mov byte ptr [esp + 0x24], 0
// 00622093  e8f4f40700           call 0x6a158c
// 00622098  5f                   pop edi
// 00622099  8b442424             mov eax, dword ptr [esp + 0x24]
// 0062209d  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006220a0  884606               mov byte ptr [esi + 6], al
// 006220a3  83795800             cmp dword ptr [ecx + 0x58], 0
// 006220a7  7412                 je 0x6220bb
// 006220a9  50                   push eax
// 006220aa  e831ffffff           call 0x621fe0
// 006220af  8b5610               mov edx, dword ptr [esi + 0x10]
// 006220b2  8b4258               mov eax, dword ptr [edx + 0x58]
// 006220b5  56                   push esi
// 006220b6  ffd0                 call eax
// 006220b8  83c408               add esp, 8
// 006220bb  6a01                 push 1
// 006220bd  ff15f4278000         call dword ptr [0x8027f4]

struct State;

struct Context {
    char padding[0x58];
    void (__cdecl *handler)(State *);
};

struct Recovery {
    char padding[8];
    int status;
};

struct State {
    char padding0[6];
    unsigned char status;
    char padding1[9];
    Context *context;
    char padding2[0x5c];
    Recovery *recovery;
};

struct Exception {
    void *vtable;
    char base[8];
    State *state;
    Recovery *recovery;
    unsigned char flag;
    char padding[3];
};

typedef void (__thiscall *ExceptionConstructor)(Exception *);

extern ExceptionConstructor exception_constructor;
extern char exception_vtable;
extern char exception_type;

extern "C" __declspec(noreturn) void __stdcall throw_exception(void *, void *);
extern "C" void __cdecl prepare_error(int);
extern "C" __declspec(dllimport, noreturn) void __cdecl exit(int);

void __cdecl raise_error(State *state, int status)
{
    if (state->recovery) {
        state->recovery->status = status;
        Recovery *recovery = state->recovery;
        Exception exception;
        exception_constructor(&exception);
        exception.vtable = &exception_vtable;
        exception.state = state;
        exception.recovery = recovery;
        exception.flag = 0;
        throw_exception(&exception, &exception_type);
    }

    state->status = (unsigned char)status;
    if (state->context->handler) {
        prepare_error(status);
        state->context->handler(state);
    }

    exit(1);
}
