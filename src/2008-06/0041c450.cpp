// from server: 100% by king_originala
// roc 2008-06 0041c450  unit: VDHTMLWindow::?$BoundFuncDesc  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041c450
//
// 0041c450  8b442404             mov eax, dword ptr [esp + 4]
// 0041c454  83ec0c               sub esp, 0xc
// 0041c457  56                   push esi
// 0041c458  6a00                 push 0
// 0041c45a  6810c29200           push 0x92c210
// 0041c45f  68fc919200           push 0x9291fc
// 0041c464  6a00                 push 0
// 0041c466  50                   push eax
// 0041c467  8bf1                 mov esi, ecx
// 0041c469  e858532800           call 0x6a17c6
// 0041c46e  83c414               add esp, 0x14
// 0041c471  85c0                 test eax, eax
// 0041c473  751e                 jne 0x41c493
// 0041c475  6834ba8000           push 0x80ba34
// 0041c47a  8d4c2408             lea ecx, [esp + 8]
// 0041c47e  ff1564288000         call dword ptr [0x802864]
// 0041c484  682c368d00           push 0x8d362c
// 0041c489  8d4c2408             lea ecx, [esp + 8]
// 0041c48d  51                   push ecx
// 0041c48e  e8f9502800           call 0x6a158c
// 0041c493  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0041c496  8b5638               mov edx, dword ptr [esi + 0x38]
// 0041c499  03c8                 add ecx, eax
// 0041c49b  ffd2                 call edx
// 0041c49d  5e                   pop esi
// 0041c49e  83c40c               add esp, 0xc
// 0041c4a1  c20800               ret 8

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
