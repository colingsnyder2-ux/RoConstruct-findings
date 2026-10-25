// from server: 100% by king_originala
// roc 2008-06 004492d0  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004492d0
//
// 004492d0  64a100000000         mov eax, dword ptr fs:[0]
// 004492d6  6aff                 push -1
// 004492d8  6809e77c00           push 0x7ce709
// 004492dd  50                   push eax
// 004492de  64892500000000       mov dword ptr fs:[0], esp
// 004492e5  83ec1c               sub esp, 0x1c
// 004492e8  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 004492ed  56                   push esi
// 004492ee  8bf1                 mov esi, ecx
// 004492f0  751e                 jne 0x449310
// 004492f2  a1fc179300           mov eax, dword ptr [0x9317fc]
// 004492f7  50                   push eax
// 004492f8  8d8e58010000         lea ecx, [esi + 0x158]
// 004492fe  51                   push ecx
// 004492ff  ff15cc238000         call dword ptr [0x8023cc]
// 00449305  83c408               add esp, 8
// 00449308  84c0                 test al, al
// 0044930a  0f84ad000000         je 0x4493bd
// 00449310  d905a4638100         fld dword ptr [0x8163a4]
// 00449316  51                   push ecx
// 00449317  8bce                 mov ecx, esi
// 00449319  d91c24               fstp dword ptr [esp]
// 0044931c  e89ffdffff           call 0x4490c0
// 00449321  d905a4638100         fld dword ptr [0x8163a4]
// 00449327  51                   push ecx
// 00449328  8bce                 mov ecx, esi
// 0044932a  d91c24               fstp dword ptr [esp]
// 0044932d  e82efdffff           call 0x449060
// 00449332  d905a4638100         fld dword ptr [0x8163a4]
// 00449338  51                   push ecx
// 00449339  8bce                 mov ecx, esi
// 0044933b  d91c24               fstp dword ptr [esp]
// 0044933e  e87dfdffff           call 0x4490c0
// 00449343  d905a4638100         fld dword ptr [0x8163a4]
// 00449349  51                   push ecx
// 0044934a  8bce                 mov ecx, esi
// 0044934c  d91c24               fstp dword ptr [esp]
// 0044934f  e87cfcffff           call 0x448fd0
// 00449354  d905a4638100         fld dword ptr [0x8163a4]
// 0044935a  51                   push ecx
// 0044935b  8bce                 mov ecx, esi
// 0044935d  d91c24               fstp dword ptr [esp]
// 00449360  e8dbfbffff           call 0x448f40
// 00449365  d905a4638100         fld dword ptr [0x8163a4]
// 0044936b  51                   push ecx
// 0044936c  8bce                 mov ecx, esi
// 0044936e  d91c24               fstp dword ptr [esp]
// 00449371  e85afcffff           call 0x448fd0
// 00449376  8b15fc179300         mov edx, dword ptr [0x9317fc]
// 0044937c  52                   push edx
// 0044937d  8d4c2408             lea ecx, [esp + 8]
// 00449381  ff1558248000         call dword ptr [0x802458]
// 00449387  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0044938f  85f6                 test esi, esi
// 00449391  7405                 je 0x449398
// 00449393  8d4614               lea eax, [esi + 0x14]
// 00449396  eb02                 jmp 0x44939a
// 00449398  33c0                 xor eax, eax
// 0044939a  8b0d2cd59600         mov ecx, dword ptr [0x96d52c]
// 004493a0  8b11                 mov edx, dword ptr [ecx]
// 004493a2  8d742404             lea esi, [esp + 4]
// 004493a6  56                   push esi
// 004493a7  50                   push eax
// 004493a8  8b420c               mov eax, dword ptr [edx + 0xc]
// 004493ab  ffd0                 call eax
// 004493ad  8bce                 mov ecx, esi
// 004493af  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004493b7  ff1568248000         call dword ptr [0x802468]
// 004493bd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004493c1  5e                   pop esi
// 004493c2  64890d00000000       mov dword ptr fs:[0], ecx
// 004493c9  83c428               add esp, 0x28
// 004493cc  c20400               ret 4

struct String {
    char storage[28];
    String(const char *);
    ~String();
};

extern void (__thiscall *constructString)(String *, const char *);
extern void (__thiscall *destroyString)(String *);
extern bool (__cdecl *stringNotEqual)(const String &, const char *);

__forceinline String::String(const char *text)
{
    constructString(this, text);
}

__forceinline String::~String()
{
    destroyString(this);
}

extern const char *defaultText;
extern const float resetValue;

struct Manager;
typedef void (__thiscall *NotifyFunction)(Manager *, void *, const String &);

struct Manager {
    NotifyFunction *vtable;
};

extern Manager *manager;

struct S {
    char padding[0x158];
    String text;

    void reset(bool force);
    void setA(float);
    void setB(float);
    void setC(float);
    void setD(float);
};

void S::reset(bool force)
{
    if (force || stringNotEqual(text, defaultText)) {
        setA(resetValue);
        setB(resetValue);
        setA(resetValue);
        setC(resetValue);
        setD(resetValue);
        setC(resetValue);

        String value(defaultText);
        void *object = this ? reinterpret_cast<char *>(this) + 0x14 : 0;
        manager->vtable[3](manager, object, value);
    }
}
