// from server: 100% by king_originala
// roc 2008-06 0042afc0  unit: EventHandler  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042afc0
//
// 0042afc0  64a100000000         mov eax, dword ptr fs:[0]
// 0042afc6  6aff                 push -1
// 0042afc8  68d8f47b00           push 0x7bf4d8
// 0042afcd  50                   push eax
// 0042afce  64892500000000       mov dword ptr fs:[0], esp
// 0042afd5  8b01                 mov eax, dword ptr [ecx]
// 0042afd7  83ec28               sub esp, 0x28
// 0042afda  85c0                 test eax, eax
// 0042afdc  7516                 jne 0x42aff4
// 0042afde  8d0c24               lea ecx, [esp]
// 0042afe1  e80aeffdff           call 0x409ef0
// 0042afe6  50                   push eax
// 0042afe7  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0042afef  e80cf5fdff           call 0x40a500
// 0042aff4  8b4004               mov eax, dword ptr [eax + 4]
// 0042aff7  83c108               add ecx, 8
// 0042affa  51                   push ecx
// 0042affb  ffd0                 call eax
// 0042affd  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0042b001  83c404               add esp, 4
// 0042b004  64890d00000000       mov dword ptr fs:[0], ecx
// 0042b00b  83c434               add esp, 0x34
// 0042b00e  c3                   ret 

struct Error {
    char storage[40];
    Error();
    ~Error();
};

__declspec(noreturn) void __cdecl raise(const Error&);

struct Table {
    void* manager;
    void (__cdecl* invoke)(const void*);
};

struct EventHandler {
    Table* table;
    unsigned int reserved;
    char buffer[16];

    void f() const;
};

void EventHandler::f() const
{
    if (!table)
        raise(Error());

    table->invoke(buffer);
}
