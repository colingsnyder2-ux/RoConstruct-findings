// from server: 100% by tester
// roc 2008-06 005bc100  unit: RBX::Soundscape::VSoundChannel::?$BoundFuncDesc  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bc100
//
// 005bc100  8b442404             mov eax, dword ptr [esp + 4]
// 005bc104  83ec0c               sub esp, 0xc
// 005bc107  56                   push esi
// 005bc108  6a00                 push 0
// 005bc10a  6864db9400           push 0x94db64
// 005bc10f  68fc919200           push 0x9291fc
// 005bc114  6a00                 push 0
// 005bc116  50                   push eax
// 005bc117  8bf1                 mov esi, ecx
// 005bc119  e8a8560e00           call 0x6a17c6
// 005bc11e  83c414               add esp, 0x14
// 005bc121  85c0                 test eax, eax
// 005bc123  751e                 jne 0x5bc143
// 005bc125  6834ba8000           push 0x80ba34
// 005bc12a  8d4c2408             lea ecx, [esp + 8]
// 005bc12e  ff1564288000         call dword ptr [0x802864]
// 005bc134  682c368d00           push 0x8d362c
// 005bc139  8d4c2408             lea ecx, [esp + 8]
// 005bc13d  51                   push ecx
// 005bc13e  e849540e00           call 0x6a158c
// 005bc143  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005bc146  8b5638               mov edx, dword ptr [esi + 0x38]
// 005bc149  03c8                 add ecx, eax
// 005bc14b  ffd2                 call edx
// 005bc14d  5e                   pop esi
// 005bc14e  83c40c               add esp, 0xc
// 005bc151  c20800               ret 8

extern char baseTypeInfo;
extern char windowTypeInfo;
extern char badCastThrowInfo;

extern "C" void* __cdecl __RTDynamicCast(
    void*, long, void*, void*, int);

struct BadCast {
    char data[12];
};

extern void (__thiscall *constructBadCast)(BadCast*, const char*);
extern "C" __declspec(noreturn) void __stdcall throwException(
    void*, void*);

struct Base {
    virtual void anchor();
};

struct Other {
    int value;
};

struct Window : Base, Other {
};

struct S {
    char padding[0x38];
    void (Window::*callback)();

    void invoke(Base* object, void* unused);
};

void S::invoke(Base* object, void*)
{
    Window* window = static_cast<Window*>(
        __RTDynamicCast(object, 0, &baseTypeInfo, &windowTypeInfo, 0));

    if (!window) {
        BadCast exception;
        constructBadCast(&exception, "bad cast");
        throwException(&exception, &badCastThrowInfo);
    }

    (window->*callback)();
}
