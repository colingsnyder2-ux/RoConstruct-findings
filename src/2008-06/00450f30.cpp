// from server: 66% by colin
// from server: 58% by king_originala
// roc 2008-06 00450f30  unit: CRobloxDoc  size: 436 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00450f30
//
// 00450f30  6aff                 push -1
// 00450f32  68651c7c00           push 0x7c1c65
// 00450f37  64a100000000         mov eax, dword ptr fs:[0]
// 00450f3d  50                   push eax
// 00450f3e  64892500000000       mov dword ptr fs:[0], esp
// 00450f45  81ec8c020000         sub esp, 0x28c
// 00450f4b  56                   push esi
// 00450f4c  57                   push edi
// 00450f4d  8bf9                 mov edi, ecx
// 00450f4f  8d4c2408             lea ecx, [esp + 8]
// 00450f53  ff15043f8000         call dword ptr [0x803f04]
// 00450f59  68b8000000           push 0xb8
// 00450f5e  8d4c240c             lea ecx, [esp + 0xc]
// 00450f62  c78424a002000000000000 mov dword ptr [esp + 0x2a0], 0
// 00450f6d  ff15c0328000         call dword ptr [0x8032c0]
// 00450f73  6a01                 push 1
// 00450f75  6a00                 push 0
// 00450f77  6a00                 push 0
// 00450f79  8d4c2414             lea ecx, [esp + 0x14]
// 00450f7d  ff15e03e8000         call dword ptr [0x803ee0]
// 00450f83  50                   push eax
// 00450f84  6a06                 push 6
// 00450f86  6a00                 push 0
// 00450f88  6854798100           push 0x817954
// 00450f8d  6a01                 push 1
// 00450f8f  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 00450f96  e8d7fe2400           call 0x6a0e72
// 00450f9b  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00450fa2  c684249c02000001     mov byte ptr [esp + 0x29c], 1
// 00450faa  e8bdfe2400           call 0x6a0e6c
// 00450faf  83f801               cmp eax, 1
// 00450fb2  0f85f7000000         jne 0x4510af
// 00450fb8  8d44240c             lea eax, [esp + 0xc]
// 00450fbc  50                   push eax
// 00450fbd  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 00450fc4  e89dfe2400           call 0x6a0e66
// 00450fc9  6a01                 push 1
// 00450fcb  6a40                 push 0x40
// 00450fcd  6a21                 push 0x21
// 00450fcf  8bc8                 mov ecx, eax
// 00450fd1  c68424a802000002     mov byte ptr [esp + 0x2a8], 2
// 00450fd9  ff15e03e8000         call dword ptr [0x803ee0]
// 00450fdf  50                   push eax
// 00450fe0  8d4c2438             lea ecx, [esp + 0x38]
// 00450fe4  ff1504248000         call dword ptr [0x802404]
// 00450fea  8d4c240c             lea ecx, [esp + 0xc]
// 00450fee  c684249c02000004     mov byte ptr [esp + 0x29c], 4
// 00450ff6  ff15143f8000         call dword ptr [0x803f14]
// 00450ffc  8d4c2410             lea ecx, [esp + 0x10]
// 00451000  51                   push ecx
// 00451001  8b8f94000000         mov ecx, dword ptr [edi + 0x94]
// 00451007  e834990100           call 0x46a940
// 0045100c  8b10                 mov edx, dword ptr [eax]
// 0045100e  83ec08               sub esp, 8
// 00451011  8bcc                 mov ecx, esp
// 00451013  8911                 mov dword ptr [ecx], edx
// 00451015  8b4004               mov eax, dword ptr [eax + 4]
// 00451018  c68424a402000005     mov byte ptr [esp + 0x2a4], 5
// 00451020  89642420             mov dword ptr [esp + 0x20], esp
// 00451024  894104               mov dword ptr [ecx + 4], eax
// 00451027  85c0                 test eax, eax
// 00451029  740c                 je 0x451037
// 0045102b  83c004               add eax, 4
// 0045102e  b901000000           mov ecx, 1
// 00451033  f00fc108             lock xadd dword ptr [eax], ecx
// 00451037  8d4c2424             lea ecx, [esp + 0x24]
// 0045103b  e8000bfcff           call 0x411b40
// 00451040  8b742414             mov esi, dword ptr [esp + 0x14]
// 00451044  c684249c02000007     mov byte ptr [esp + 0x29c], 7
// 0045104c  85f6                 test esi, esi
// 0045104e  742a                 je 0x45107a
// 00451050  8d5604               lea edx, [esi + 4]
// 00451053  83c8ff               or eax, 0xffffffff
// 00451056  f00fc102             lock xadd dword ptr [edx], eax
// 0045105a  751e                 jne 0x45107a
// 0045105c  8b16                 mov edx, dword ptr [esi]
// 0045105e  8b4204               mov eax, dword ptr [edx + 4]
// 00451061  8bce                 mov ecx, esi
// 00451063  ffd0                 call eax
// 00451065  8d4e08               lea ecx, [esi + 8]
// 00451068  83caff               or edx, 0xffffffff
// 0045106b  f00fc111             lock xadd dword ptr [ecx], edx
// 0045106f  7509                 jne 0x45107a
// 00451071  8b06                 mov eax, dword ptr [esi]
// 00451073  8b5008               mov edx, dword ptr [eax + 8]
// 00451076  8bce                 mov ecx, esi
// 00451078  ffd2                 call edx
// 0045107a  8b8f94000000         mov ecx, dword ptr [edi + 0x94]
// 00451080  6a01                 push 1
// 00451082  8d44242c             lea eax, [esp + 0x2c]
// 00451086  50                   push eax
// 00451087  e844a90100           call 0x46b9d0
// 0045108c  8d4c241c             lea ecx, [esp + 0x1c]
// 00451090  c684249c02000004     mov byte ptr [esp + 0x29c], 4
// 00451098  e823631200           call 0x5773c0
// 0045109d  8d4c2428             lea ecx, [esp + 0x28]
// 004510a1  c684249c02000001     mov byte ptr [esp + 0x29c], 1
// 004510a9  ff1508248000         call dword ptr [0x802408]
// 004510af  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 004510b6  c684249c02000000     mov byte ptr [esp + 0x29c], 0
// 004510be  e897fd2400           call 0x6a0e5a
// 004510c3  8d4c2408             lea ecx, [esp + 8]
// 004510c7  ff15143f8000         call dword ptr [0x803f14]
// 004510cd  8b8c2494020000       mov ecx, dword ptr [esp + 0x294]
// 004510d4  5f                   pop edi
// 004510d5  64890d00000000       mov dword ptr fs:[0], ecx
// 004510dc  5e                   pop esi
// 004510dd  81c498020000         add esp, 0x298
// 004510e3  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String;
struct Input;

extern void (__thiscall* stringConstruct)(String*);
extern void (__thiscall* stringDestroy)(String*);
extern void (__thiscall* stringLoad)(String*, unsigned int);
extern const char* (__thiscall* stringBuffer)(const String*, int, int, int);
extern void (__thiscall* inputConstruct)(void*, const char*);
extern void (__thiscall* inputDestroy)(Input*);
extern const char extension[];

struct String {
    char* data;
    String();
    __declspec(dllimport) ~String() throw();
    void load(unsigned int);
    const char* buffer(int, int, int) const;
};

inline String::String()
{
    stringConstruct(this);
}

inline void String::load(unsigned int id)
{
    stringLoad(this, id);
}

inline const char* String::buffer(int first, int last, int flags) const
{
    return stringBuffer(this, first, last, flags);
}

struct Dialog {
    char storage[0x1e0];
    Dialog(int, const char*, const char*, unsigned long, const char*);
    ~Dialog();
    int run();
    String path() const;
};

struct Input {
    char storage[0x8c];
    Input(const char*);
    ~Input();
};

inline Input::Input(const char* name)
{
    inputConstruct(storage + 12, name);
}

inline Input::~Input()
{
    inputDestroy(this);
}

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    long strong;
    long weak;
};

struct Shared {
    void* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Shared::~Shared()
{
    if (control && _InterlockedExchangeAdd(&control->strong, -1) == 0) {
        control->dispose();
        if (_InterlockedExchangeAdd(&control->weak, -1) == 0)
            control->destroy();
    }
}

struct Reader {
    char storage[12];
    Reader(Shared);
    ~Reader();
};

struct Document {
    const Shared get();
    void read(Input*, int);
};

struct CRobloxDoc {
    char padding[0x94];
    Document* document;
    void f();
};

void CRobloxDoc::f()
{
    String filter;
    filter.load(0xb8);
    Dialog dialog(1, extension, 0, 6, filter.buffer(0, 0, 1));
    if (dialog.run() == 1) {
        Input input(dialog.path().buffer(0x21, 0x40, 1));
        Reader reader(document->get());
        document->read(&input, 1);
    }
}
