// from server: 100% by Espeon
// roc 2008-06 0046fe10  unit: RBX::LDraw2Lua::LuaWriter  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046fe10
//
// 0046fe10  6aff                 push -1
// 0046fe12  683a4a7c00           push 0x7c4a3a
// 0046fe17  64a100000000         mov eax, dword ptr fs:[0]
// 0046fe1d  50                   push eax
// 0046fe1e  64892500000000       mov dword ptr fs:[0], esp
// 0046fe25  83ec20               sub esp, 0x20
// 0046fe28  c7042400000000       mov dword ptr [esp], 0
// 0046fe2f  803d8fee960000       cmp byte ptr [0x96ee8f], 0
// 0046fe36  0f8594000000         jne 0x46fed0
// 0046fe3c  803d65ee960000       cmp byte ptr [0x96ee65], 0
// 0046fe43  0f8587000000         jne 0x46fed0
// 0046fe49  53                   push ebx
// 0046fe4a  e8f1aa0900           call 0x50a940
// 0046fe4f  833d8c27940000       cmp dword ptr [0x94278c], 0
// 0046fe56  744b                 je 0x46fea3
// 0046fe58  6898cc8100           push 0x81cc98
// 0046fe5d  8d4c240c             lea ecx, [esp + 0xc]
// 0046fe61  ff1558248000         call dword ptr [0x802458]
// 0046fe67  6a01                 push 1
// 0046fe69  688fee9600           push 0x96ee8f
// 0046fe6e  6837020000           push 0x237
// 0046fe73  6880cc8100           push 0x81cc80
// 0046fe78  8d442418             lea eax, [esp + 0x18]
// 0046fe7c  50                   push eax
// 0046fe7d  6870cc8100           push 0x81cc70
// 0046fe82  c744244400000000     mov dword ptr [esp + 0x44], 0
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
    unsigned int allocator;
    union {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;

    String(const char*);
    ~String();
};

extern void (__thiscall* constructString)(String*, const char*);
extern void (__thiscall* destroyString)(String*);

__forceinline String::String(const char* text)
{
    constructString(this, text);
}

__forceinline String::~String()
{
    destroyString(this);
}

extern bool initialized;
extern bool ignoreAssertion;
extern const char assertionExpression[];
extern const char assertionMessage[];
extern const char assertionFile[];

extern bool (__cdecl* assertionHandler)(
    const char*, const String&, const char*, int, bool*, bool);

extern void (__stdcall* terminateProcess)(int);
extern void __cdecl lockAssertions();
extern void __cdecl unlockAssertions();
extern bool glCapsInitialized;

bool __cdecl checkGLCaps()
{
    if (!ignoreAssertion && !initialized) {
        lockAssertions();
        bool terminate = assertionHandler &&
            assertionHandler(
                assertionExpression,
                String(assertionMessage),
                assertionFile,
                567,
                &ignoreAssertion,
                true);
        if (terminate) {
            terminateProcess(-1);
        }
        unlockAssertions();
    }
    return glCapsInitialized;
}