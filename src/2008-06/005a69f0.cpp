// from server: 100% by king_originala
// roc 2008-06 005a69f0  unit: RBX::Workspace  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a69f0
//
// 005a69f0  83ec48               sub esp, 0x48
// 005a69f3  56                   push esi
// 005a69f4  8b742450             mov esi, dword ptr [esp + 0x50]
// 005a69f8  8b4620               mov eax, dword ptr [esi + 0x20]
// 005a69fb  c744240400000000     mov dword ptr [esp + 4], 0
// 005a6a03  8b08                 mov ecx, dword ptr [eax]
// 005a6a05  85c9                 test ecx, ecx
// 005a6a07  7418                 je 0x5a6a21
// 005a6a09  894c2404             mov dword ptr [esp + 4], ecx
// 005a6a0d  8b08                 mov ecx, dword ptr [eax]
// 005a6a0f  6a00                 push 0
// 005a6a11  8d542410             lea edx, [esp + 0x10]
// 005a6a15  83c008               add eax, 8
// 005a6a18  52                   push edx
// 005a6a19  50                   push eax
// 005a6a1a  8b01                 mov eax, dword ptr [ecx]
// 005a6a1c  ffd0                 call eax
// 005a6a1e  83c40c               add esp, 0xc
// 005a6a21  8bce                 mov ecx, esi
// 005a6a23  e868ffffff           call 0x5a6990
// 005a6a28  8b442404             mov eax, dword ptr [esp + 4]
// 005a6a2c  5e                   pop esi
// 005a6a2d  85c0                 test eax, eax
// 005a6a2f  750f                 jne 0x5a6a40
// 005a6a31  8d4c2420             lea ecx, [esp + 0x20]
// 005a6a35  e8b634e6ff           call 0x409ef0
// 005a6a3a  50                   push eax
// 005a6a3b  e8c03ae6ff           call 0x40a500
// 005a6a40  8b5004               mov edx, dword ptr [eax + 4]
// 005a6a43  8d4c2408             lea ecx, [esp + 8]
// 005a6a47  51                   push ecx
// 005a6a48  ffd2                 call edx
// 005a6a4a  83c404               add esp, 4
// 005a6a4d  e8be360700           call 0x61a110
// 005a6a52  8b0424               mov eax, dword ptr [esp]
// 005a6a55  85c0                 test eax, eax
// 005a6a57  7415                 je 0x5a6a6e
// 005a6a59  8b00                 mov eax, dword ptr [eax]
// 005a6a5b  85c0                 test eax, eax
// 005a6a5d  740f                 je 0x5a6a6e
// 005a6a5f  8d4c2408             lea ecx, [esp + 8]
// 005a6a63  6a01                 push 1
// 005a6a65  51                   push ecx
// 005a6a66  8bd1                 mov edx, ecx
// 005a6a68  52                   push edx
// 005a6a69  ffd0                 call eax
// 005a6a6b  83c40c               add esp, 0xc
// 005a6a6e  33c0                 xor eax, eax
// 005a6a70  83c448               add esp, 0x48
// 005a6a73  c20400               ret 4

union Buffer {
    double alignment;
    char data[24];
};

struct Table {
    void (__cdecl *manage)(Buffer*, Buffer*, int);
    void (__cdecl *invoke)(Buffer*);
};

struct Callback {
    Table* table;
    Buffer buffer;
};

struct Workspace {
    char padding[0x20];
    Callback* callback;

    void clearCallback();
};

struct BadFunctionCall {
    char data[40];
    BadFunctionCall();
};

extern "C" __declspec(noreturn) void __cdecl throwBadFunctionCall(
    const BadFunctionCall&);
extern "C" void __cdecl finishCallback();

int __stdcall runCallback(Workspace* workspace)
{
    Callback saved;
    saved.table = 0;

    Callback* source = workspace->callback;
    if (source->table) {
        saved.table = source->table;
        source->table->manage(&source->buffer, &saved.buffer, 0);
    }

    workspace->clearCallback();

    if (!saved.table)
        throwBadFunctionCall(BadFunctionCall());

    saved.table->invoke(&saved.buffer);
    finishCallback();

    if (saved.table && saved.table->manage)
        saved.table->manage(&saved.buffer, &saved.buffer, 1);

    return 0;
}
