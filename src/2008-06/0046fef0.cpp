// from server: 100% by colin
// roc 2008-06 0046fef0  unit: RBX::LDraw2Lua::LuaWriter  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046fef0
//
// 0046fef0  6aff                 push -1
// 0046fef2  683a4a7c00           push 0x7c4a3a
// 0046fef7  64a100000000         mov eax, dword ptr fs:[0]
// 0046fefd  50                   push eax
// 0046fefe  64892500000000       mov dword ptr fs:[0], esp
// 0046ff05  83ec20               sub esp, 0x20
// 0046ff08  c7042400000000       mov dword ptr [esp], 0
// 0046ff0f  803d90ee960000       cmp byte ptr [0x96ee90], 0
// 0046ff16  0f8594000000         jne 0x46ffb0
// 0046ff1c  803d65ee960000       cmp byte ptr [0x96ee65], 0
// 0046ff23  0f8587000000         jne 0x46ffb0
// 0046ff29  53                   push ebx
// 0046ff2a  e811aa0900           call 0x50a940
// 0046ff2f  833d8c27940000       cmp dword ptr [0x94278c], 0
// 0046ff36  744b                 je 0x46ff83
// 0046ff38  6898cc8100           push 0x81cc98
// 0046ff3d  8d4c240c             lea ecx, [esp + 0xc]
// 0046ff41  ff1558248000         call dword ptr [0x802458]
// 0046ff47  6a01                 push 1
// 0046ff49  6890ee9600           push 0x96ee90
// 0046ff4e  683d020000           push 0x23d
// 0046ff53  6880cc8100           push 0x81cc80
// 0046ff58  8d442418             lea eax, [esp + 0x18]
// 0046ff5c  50                   push eax
// 0046ff5d  6870cc8100           push 0x81cc70
// 0046ff62  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0046ff6a  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0046ff72  ff158c279400         call dword ptr [0x94278c]
// 0046ff78  83c418               add esp, 0x18
// 0046ff7b  84c0                 test al, al
// 0046ff7d  7404                 je 0x46ff83
// 0046ff7f  b301                 mov bl, 1
// 0046ff81  eb02                 jmp 0x46ff85
// 0046ff83  32db                 xor bl, bl
// 0046ff85  f644240401           test byte ptr [esp + 4], 1
// 0046ff8a  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0046ff92  740a                 je 0x46ff9e
// 0046ff94  8d4c2408             lea ecx, [esp + 8]
// 0046ff98  ff1568248000         call dword ptr [0x802468]
// 0046ff9e  84db                 test bl, bl
// 0046ffa0  5b                   pop ebx
// 0046ffa1  7408                 je 0x46ffab
// 0046ffa3  6aff                 push -1
// 0046ffa5  ff15f4278000         call dword ptr [0x8027f4]
// 0046ffab  e800aa0900           call 0x50a9b0
// 0046ffb0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046ffb4  a077ee9600           mov al, byte ptr [0x96ee77]
// 0046ffb9  64890d00000000       mov dword ptr fs:[0], ecx
// 0046ffc0  83c42c               add esp, 0x2c
// 0046ffc3  c3                   ret 

//

//

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
                573,
                &ignoreAssertion,
                true);
        if (terminate) {
            terminateProcess(-1);
        }
        unlockAssertions();
    }
    return glCapsInitialized;
}
