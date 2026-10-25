// from server: 100% by king_originala
// roc 2008-06 00471070  unit: RBX::LDraw2Lua::LuaWriter  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00471070
//
// 00471070  6aff                 push -1
// 00471072  6821427c00           push 0x7c4221
// 00471077  64a100000000         mov eax, dword ptr fs:[0]
// 0047107d  50                   push eax
// 0047107e  64892500000000       mov dword ptr fs:[0], esp
// 00471085  83ec40               sub esp, 0x40
// 00471088  53                   push ebx
// 00471089  33db                 xor ebx, ebx
// 0047108b  895c2408             mov dword ptr [esp + 8], ebx
// 0047108f  381d40ef9600         cmp byte ptr [0x96ef40], bl
// 00471095  0f8590000000         jne 0x47112b
// 0047109b  381d64ee9600         cmp byte ptr [0x96ee64], bl
// 004710a1  0f8584000000         jne 0x47112b
// 004710a7  e894980900           call 0x50a940
// 004710ac  391d8c279400         cmp dword ptr [0x94278c], ebx
// 004710b2  7447                 je 0x4710fb
// 004710b4  6804d08100           push 0x81d004
// 004710b9  8d4c2410             lea ecx, [esp + 0x10]
// 004710bd  ff1558248000         call dword ptr [0x802458]
// 004710c3  895c244c             mov dword ptr [esp + 0x4c], ebx
// 004710c7  bb01000000           mov ebx, 1
// 004710cc  53                   push ebx
// 004710cd  6840ef9600           push 0x96ef40
// 004710d2  686e020000           push 0x26e
// 004710d7  6880cc8100           push 0x81cc80
// 004710dc  8d44241c             lea eax, [esp + 0x1c]
// 004710e0  50                   push eax
// 004710e1  6828ce8100           push 0x81ce28
// 004710e6  895c2420             mov dword ptr [esp + 0x20], ebx
// 004710ea  ff158c279400         call dword ptr [0x94278c]
// 004710f0  83c418               add esp, 0x18
// 004710f3  885c2407             mov byte ptr [esp + 7], bl
// 004710f7  84c0                 test al, al
// 004710f9  7505                 jne 0x471100
// 004710fb  c644240700           mov byte ptr [esp + 7], 0
// 00471100  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 00471108  f6c301               test bl, 1
// 0047110b  740a                 je 0x471117
// 0047110d  8d4c240c             lea ecx, [esp + 0xc]
// 00471111  ff1568248000         call dword ptr [0x802468]
// 00471117  807c240700           cmp byte ptr [esp + 7], 0
// 0047111c  7408                 je 0x471126
// 0047111e  6aff                 push -1
// 00471120  ff15f4278000         call dword ptr [0x8027f4]
// 00471126  e885980900           call 0x50a9b0
// 0047112b  f6053cef960001       test byte ptr [0x96ef3c], 1
// 00471132  7557                 jne 0x47118b
// 00471134  b801000000           mov eax, 1
// 00471139  09053cef9600         or dword ptr [0x96ef3c], eax
// 0047113f  8d4c2428             lea ecx, [esp + 0x28]
// 00471143  51                   push ecx
// 00471144  89442450             mov dword ptr [esp + 0x50], eax
// 00471148  e8a3fbffff           call 0x470cf0
// 0047114d  83c404               add esp, 4
// 00471150  83781810             cmp dword ptr [eax + 0x18], 0x10
// 00471154  c644244c02           mov byte ptr [esp + 0x4c], 2
// 00471159  7205                 jb 0x471160
// 0047115b  8b4004               mov eax, dword ptr [eax + 4]
// 0047115e  eb03                 jmp 0x471163
// 00471160  83c004               add eax, 4
// 00471163  50                   push eax
// 00471164  b920ef9600           mov ecx, 0x96ef20
// 00471169  ff1558248000         call dword ptr [0x802458]
// 0047116f  8d4c2428             lea ecx, [esp + 0x28]
// 00471173  c644244c01           mov byte ptr [esp + 0x4c], 1
// 00471178  ff1568248000         call dword ptr [0x802468]
// 0047117e  6830b07f00           push 0x7fb030
// 00471183  e827062300           call 0x6a17af
// 00471188  83c404               add esp, 4
// 0047118b  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0047118f  b820ef9600           mov eax, 0x96ef20
// 00471194  5b                   pop ebx
// 00471195  64890d00000000       mov dword ptr fs:[0], ecx
// 0047119c  83c44c               add esp, 0x4c
// 0047119f  c3                   ret 

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
    const char* c_str() const;
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

__forceinline const char* String::c_str() const
{
    return capacity >= 16 ? storage.pointer : storage.buffer;
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
extern String __cdecl makeDriverVersion();

const String& __cdecl driverVersion()
{
    if (!ignoreAssertion && !initialized) {
        lockAssertions();
        bool terminate = assertionHandler &&
            assertionHandler(
                assertionExpression,
                String(assertionMessage),
                assertionFile,
                622,
                &ignoreAssertion,
                true);
        if (terminate) {
            terminateProcess(-1);
            __assume(0);
        }
        unlockAssertions();
    }

    static String version(makeDriverVersion().c_str());
    return version;
}
