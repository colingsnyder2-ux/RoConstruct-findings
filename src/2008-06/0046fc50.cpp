// from server: 45% by colin
// from server: 43% by colin
// roc 2008-06 0046fc50  unit: RBX::LDraw2Lua::LuaWriter  size: 111 bytes
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
#include <intrin.h>

struct GLCaps {
    static bool _initialized;
    static bool _loadedExtensions;
    static bool _checkedForBugs;
};

bool GLCaps::_initialized = false;
bool GLCaps::_loadedExtensions = false;
bool GLCaps::_checkedForBugs = false;

struct String {
    char padding[20];
};

extern "C" void __cdecl sub_50A940();
extern "C" void __cdecl sub_50A9B0();
extern "C" void __stdcall sub_802458(String*, const char*);
extern "C" void __stdcall sub_802468(String*);
extern "C" void __stdcall sub_8027F4(int);
extern "C" int (__cdecl *sub_94278C)(const char*, const char*, int, const char*, const char*, int);

extern "C" void __cdecl exit(int);

struct GLCapsInit {
    void check();
};

void GLCapsInit::check()
{
    if (GLCaps::_initialized)
        return;
    if (GLCaps::_loadedExtensions)
        return;

    sub_50A940();

    bool ok = false;
    if (sub_94278C != 0) {
        String s;
        sub_802458(&s, "GLCaps has not been initialized.");
        ok = sub_94278C("GLCaps has not been initialized.", ".\\glg3dcpp\\GLCaps.cpp", 0x22b, "_initialized", (const char*)&s, 1) != 0;
        sub_802468(&s);
    }

    if (ok)
        sub_8027F4(-1);

    sub_50A9B0();
    _ReadWriteBarrier();
}
