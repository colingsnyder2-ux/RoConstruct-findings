// from server: 100% by king_originala
// roc 2008-06 0059aa40  unit: RBX::PartInstance  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059aa40
//
// 0059aa40  8d8140feffff         lea eax, [ecx - 0x1c0]
// 0059aa46  85c0                 test eax, eax
// 0059aa48  7408                 je 0x59aa52
// 0059aa4a  8d8154feffff         lea eax, [ecx - 0x1ac]
// 0059aa50  eb02                 jmp 0x59aa54
// 0059aa52  33c0                 xor eax, eax
// 0059aa54  50                   push eax
// 0059aa55  b964619700           mov ecx, 0x976164
// 0059aa5a  e8c10bfdff           call 0x56b620
// 0059aa5f  85c0                 test eax, eax
// 0059aa61  7418                 je 0x59aa7b
// 0059aa63  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0059aa66  e82501fdff           call 0x56ab90
// 0059aa6b  84c0                 test al, al
// 0059aa6d  750c                 jne 0x59aa7b
// 0059aa6f  33c0                 xor eax, eax
// 0059aa71  33c9                 xor ecx, ecx
// 0059aa73  84c0                 test al, al
// 0059aa75  0f94c1               sete cl
// 0059aa78  8ac1                 mov al, cl
// 0059aa7a  c3                   ret 
// 0059aa7b  b801000000           mov eax, 1
// 0059aa80  33c9                 xor ecx, ecx
// 0059aa82  84c0                 test al, al
// 0059aa84  0f94c1               sete cl
// 0059aa87  8ac1                 mov al, cl
// 0059aa89  c3                   ret 

struct Action {
    bool check();
};

struct Entry {
    char pad[16];
    Action* action;
};

struct Registry {
    Entry* lookup(void* key);
};

struct S_func_0059aa40 {
    bool f();
};

bool S_func_0059aa40::f()
{
    char* owner = reinterpret_cast<char*>(this) - 0x1c0;
    void* key = owner ? reinterpret_cast<char*>(this) - 0x1ac : 0;
    Entry* entry = reinterpret_cast<Registry*>(0x976164)->lookup(key);
    int unavailable = (!entry || entry->action->check()) ? 1 : 0;
    return !static_cast<unsigned char>(unavailable);
}
