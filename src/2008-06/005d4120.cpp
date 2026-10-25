// from server: 100% by king_originala
// roc 2008-06 005d4120  unit: RBX::VShirtGraphic::?$BoundPropGetSet  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d4120
//
// 005d4120  64a100000000         mov eax, dword ptr fs:[0]
// 005d4126  6aff                 push -1
// 005d4128  6808497d00           push 0x7d4908
// 005d412d  50                   push eax
// 005d412e  64892500000000       mov dword ptr fs:[0], esp
// 005d4135  56                   push esi
// 005d4136  33c0                 xor eax, eax
// 005d4138  8944240c             mov dword ptr [esp + 0xc], eax
// 005d413c  3bc8                 cmp ecx, eax
// 005d413e  7403                 je 0x5d4143
// 005d4140  8d4114               lea eax, [ecx + 0x14]
// 005d4143  8b0d14a09700         mov ecx, dword ptr [0x97a014]
// 005d4149  8b11                 mov edx, dword ptr [ecx]
// 005d414b  8d742414             lea esi, [esp + 0x14]
// 005d414f  56                   push esi
// 005d4150  50                   push eax
// 005d4151  8b420c               mov eax, dword ptr [edx + 0xc]
// 005d4154  ffd0                 call eax
// 005d4156  8bce                 mov ecx, esi
// 005d4158  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 005d4160  ff1568248000         call dword ptr [0x802468]
// 005d4166  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d416a  64890d00000000       mov dword ptr fs:[0], ecx
// 005d4171  5e                   pop esi
// 005d4172  83c40c               add esp, 0xc
// 005d4175  c22000               ret 0x20

struct String;
typedef void (__thiscall *StringDestructor)(String *);
extern StringDestructor g_stringDestructor;

struct String
{
    char data[32];
    ~String();
};

inline String::~String()
{
    g_stringDestructor(this);
}

struct Setter
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void *, const String &);
};

extern Setter *g_setter;

struct S
{
    char padding[20];
    char value;

    void f(String text);
};

void S::f(String text)
{
    g_setter->set(this ? &value : 0, text);
}
