// from server: 100% by colin
// roc 2008-06 0046fc50  unit: RBX::LDraw2Lua::LuaWriter  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046fc50
//
// 0046fc50  6aff                 push -1
// 0046fc52  683a4a7c00           push 0x7c4a3a
// 0046fc57  64a100000000         mov eax, dword ptr fs:[0]
// 0046fc5d  50                   push eax
// 0046fc5e  64892500000000       mov dword ptr fs:[0], esp
// 0046fc65  83ec20               sub esp, 0x20
// 0046fc68  c7042400000000       mov dword ptr [esp], 0
// 0046fc6f  803d8dee960000       cmp byte ptr [0x96ee8d], 0
// 0046fc76  0f8594000000         jne 0x46fd10
// 0046fc7c  803d65ee960000       cmp byte ptr [0x96ee65], 0
// 0046fc83  0f8587000000         jne 0x46fd10
// 0046fc89  53                   push ebx
// 0046fc8a  e8b1ac0900           call 0x50a940
// 0046fc8f  833d8c27940000       cmp dword ptr [0x94278c], 0
// 0046fc96  744b                 je 0x46fce3
// 0046fc98  6898cc8100           push 0x81cc98
// 0046fc9d  8d4c240c             lea ecx, [esp + 0xc]
// 0046fca1  ff1558248000         call dword ptr [0x802458]
// 0046fca7  6a01                 push 1
// 0046fca9  688dee9600           push 0x96ee8d
// 0046fcae  682b020000           push 0x22b
// 0046fcb3  6880cc8100           push 0x81cc80
// 0046fcb8  8d442418             lea eax, [esp + 0x18]
// 0046fcbc  50                   push eax
// 0046fcbd  6870cc8100           push 0x81cc70
// 0046fcc2  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0046fcca  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0046fcd2  ff158c279400         call dword ptr [0x94278c]
// 0046fcd8  83c418               add esp, 0x18
// 0046fcdb  84c0                 test al, al
// 0046fcdd  7404                 je 0x46fce3
// 0046fcdf  b301                 mov bl, 1
// 0046fce1  eb02                 jmp 0x46fce5
// 0046fce3  32db                 xor bl, bl
// 0046fce5  f644240401           test byte ptr [esp + 4], 1
// 0046fcea  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0046fcf2  740a                 je 0x46fcfe
// 0046fcf4  8d4c2408             lea ecx, [esp + 8]
// 0046fcf8  ff1568248000         call dword ptr [0x802468]
// 0046fcfe  84db                 test bl, bl
// 0046fd00  5b                   pop ebx
// 0046fd01  7408                 je 0x46fd0b
// 0046fd03  6aff                 push -1
// 0046fd05  ff15f4278000         call dword ptr [0x8027f4]
// 0046fd0b  e8a0ac0900           call 0x50a9b0
// 0046fd10  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046fd14  a074ee9600           mov al, byte ptr [0x96ee74]
// 0046fd19  64890d00000000       mov dword ptr fs:[0], ecx
// 0046fd20  83c42c               add esp, 0x2c
// 0046fd23  c3                   ret 

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
                555,
                &ignoreAssertion,
                true);
        if (terminate) {
            terminateProcess(-1);
        }
        unlockAssertions();
    }
    return glCapsInitialized;
}
