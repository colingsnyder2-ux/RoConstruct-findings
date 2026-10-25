// from server: 100% by king_originala
// roc 2008-06 0047fa00  unit: G3D::GWindow  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047fa00
//
// 0047fa00  6aff                 push -1
// 0047fa02  683a4a7c00           push 0x7c4a3a
// 0047fa07  64a100000000         mov eax, dword ptr fs:[0]
// 0047fa0d  50                   push eax
// 0047fa0e  64892500000000       mov dword ptr fs:[0], esp
// 0047fa15  83ec24               sub esp, 0x24
// 0047fa18  53                   push ebx
// 0047fa19  33db                 xor ebx, ebx
// 0047fa1b  895c2408             mov dword ptr [esp + 8], ebx
// 0047fa1f  56                   push esi
// 0047fa20  8bf1                 mov esi, ecx
// 0047fa22  381d90f79600         cmp byte ptr [0x96f790], bl
// 0047fa28  0f8596000000         jne 0x47fac4
// 0047fa2e  8b06                 mov eax, dword ptr [esi]
// 0047fa30  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 0047fa36  ffd2                 call edx
// 0047fa38  84c0                 test al, al
// 0047fa3a  0f8484000000         je 0x47fac4
// 0047fa40  e8fbae0800           call 0x50a940
// 0047fa45  391d8c279400         cmp dword ptr [0x94278c], ebx
// 0047fa4b  7447                 je 0x47fa94
// 0047fa4d  6810f28100           push 0x81f210
// 0047fa52  8d4c2414             lea ecx, [esp + 0x14]
// 0047fa56  ff1558248000         call dword ptr [0x802458]
// 0047fa5c  895c2434             mov dword ptr [esp + 0x34], ebx
// 0047fa60  bb01000000           mov ebx, 1
// 0047fa65  53                   push ebx
// 0047fa66  6890f79600           push 0x96f790
// 0047fa6b  6809020000           push 0x209
// 0047fa70  68c0f18100           push 0x81f1c0
// 0047fa75  8d442420             lea eax, [esp + 0x20]
// 0047fa79  50                   push eax
// 0047fa7a  68a4f18100           push 0x81f1a4
// 0047fa7f  895c2424             mov dword ptr [esp + 0x24], ebx
// 0047fa83  ff158c279400         call dword ptr [0x94278c]
// 0047fa89  83c418               add esp, 0x18
// 0047fa8c  885c240b             mov byte ptr [esp + 0xb], bl
// 0047fa90  84c0                 test al, al
// 0047fa92  7505                 jne 0x47fa99
// 0047fa94  c644240b00           mov byte ptr [esp + 0xb], 0
// 0047fa99  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0047faa1  f6c301               test bl, 1
// 0047faa4  740a                 je 0x47fab0
// 0047faa6  8d4c2410             lea ecx, [esp + 0x10]
// 0047faaa  ff1568248000         call dword ptr [0x802468]
// 0047fab0  807c240b00           cmp byte ptr [esp + 0xb], 0
// 0047fab5  7408                 je 0x47fabf
// 0047fab7  6aff                 push -1
// 0047fab9  ff15f4278000         call dword ptr [0x8027f4]
// 0047fabf  e8ecae0800           call 0x50a9b0
// 0047fac4  837e0800             cmp dword ptr [esi + 8], 0
// 0047fac8  7e13                 jle 0x47fadd
// 0047faca  8d9b00000000         lea ebx, [ebx]
// 0047fad0  8bce                 mov ecx, esi
// 0047fad2  e8f99b0000           call 0x4896d0
// 0047fad7  837e0800             cmp dword ptr [esi + 8], 0
// 0047fadb  7ff3                 jg 0x47fad0
// 0047fadd  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0047fae1  5e                   pop esi
// 0047fae2  5b                   pop ebx
// 0047fae3  64890d00000000       mov dword ptr fs:[0], ecx
// 0047faea  83c430               add esp, 0x30
// 0047faed  c3                   ret 

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class C, class T, class A>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const C*);
        ~basic_string();
    };

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

extern void (__thiscall *stringConstruct)(std::string*, const char*);
extern void (__thiscall *stringDestroy)(std::string*);

namespace std {
    template<class C, class T, class A>
    inline basic_string<C, T, A>::basic_string(const C* text)
    {
        stringConstruct(this, text);
    }

    template<class C, class T, class A>
    inline basic_string<C, T, A>::~basic_string()
    {
        stringDestroy(this);
    }
}

extern bool ignoreFailure;
extern bool (__cdecl *failureHandler)(
    const char*, const std::string&, const char*, int, bool*, bool);

extern void __cdecl beginFailure();
extern void __cdecl endFailure();
extern void (__stdcall *exitFunction)(int);

struct S {
    void* const* vtable;
    void* entries;
    int count;

    void runMainLoop();
    void step();
};

void S::runMainLoop()
{
    typedef bool (__thiscall *RequiresMainLoop)(S*);

    if (!ignoreFailure &&
        reinterpret_cast<RequiresMainLoop>(vtable[33])(this)) {
        beginFailure();

        if (failureHandler &&
            failureHandler(
                "requiresMainLoop() == false",
                std::string("This GWindow implementation failed to overwrite runMainLoop even though it requires a main loop."),
                "d:\\Roblox\\Releases\\2008.06.17\\Client\\Rendering\\g3d\\include\\GLG3D/GWindow.h",
                521, &ignoreFailure, true)) {
            exitFunction(-1);
        }

        endFailure();
    }

    while (count > 0)
        step();
}
