// from server: 51% by king_originala
// roc 2008-06 0046fe80  unit: RBX::LDraw2Lua::LuaWriter  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046fe80
//
// 0046fe80  8100c7442444         add dword ptr [eax], 0x442444c7
// 0046fe86  0000                 add byte ptr [eax], al
// 0046fe88  0000                 add byte ptr [eax], al
// 0046fe8a  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0046fe92  ff158c279400         call dword ptr [0x94278c]
// 0046fe98  83c418               add esp, 0x18
// 0046fe9b  84c0                 test al, al
// 0046fe9d  7404                 je 0x46fea3
// 0046fe9f  b301                 mov bl, 1
// 0046fea1  eb02                 jmp 0x46fea5
// 0046fea3  32db                 xor bl, bl
// 0046fea5  f644240401           test byte ptr [esp + 4], 1
// 0046feaa  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0046feb2  740a                 je 0x46febe
// 0046feb4  8d4c2408             lea ecx, [esp + 8]
// 0046feb8  ff1568248000         call dword ptr [0x802468]
// 0046febe  84db                 test bl, bl
// 0046fec0  5b                   pop ebx
// 0046fec1  7408                 je 0x46fecb
// 0046fec3  6aff                 push -1
// 0046fec5  ff15f4278000         call dword ptr [0x8027f4]
// 0046fecb  e8e0aa0900           call 0x50a9b0
// 0046fed0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046fed4  a076ee9600           mov al, byte ptr [0x96ee76]
// 0046fed9  64890d00000000       mov dword ptr fs:[0], ecx
// 0046fee0  83c42c               add esp, 0x2c
// 0046fee3  c3                   ret 

struct String {
    unsigned char storage[28];
    String(const char*);
    ~String();
};

extern bool (*handler)(const char*, const char*, int, const String&, bool, bool);
extern bool ignored;
extern void flushLog();
extern "C" void __cdecl exit(int);

bool checkFailure(const char* expression, const char* file, int line,
                  const char* message)
{
    bool terminate = handler(expression, file, line, String(message), false, true);
    if (terminate)
        exit(-1);
    flushLog();
    return ignored;
}
