// from server: 74% by colin
// from server: 73% by king_originala
// roc 2008-06 00603330  unit: RBX::UnifiedImageWidget  size: 412 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00603330
//
// 00603330  6aff                 push -1
// 00603332  6802867d00           push 0x7d8602
// 00603337  64a100000000         mov eax, dword ptr fs:[0]
// 0060333d  50                   push eax
// 0060333e  64892500000000       mov dword ptr fs:[0], esp
// 00603345  83ec38               sub esp, 0x38
// 00603348  53                   push ebx
// 00603349  56                   push esi
// 0060334a  57                   push edi
// 0060334b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00603353  e8b87b1b00           call 0x7baf10
// 00603358  d900                 fld dword ptr [eax]
// 0060335a  d94004               fld dword ptr [eax + 4]
// 0060335d  b964000000           mov ecx, 0x64
// 00603362  d94008               fld dword ptr [eax + 8]
// 00603365  83ec20               sub esp, 0x20
// 00603368  d9400c               fld dword ptr [eax + 0xc]
// 0060336b  b819000000           mov eax, 0x19
// 00603370  668944244c           mov word ptr [esp + 0x4c], ax
// 00603375  d9cb                 fxch st(3)
// 00603377  8bc4                 mov eax, esp
// 00603379  c70002000000         mov dword ptr [eax], 2
// 0060337f  c7400400000000       mov dword ptr [eax + 4], 0
// 00603386  66894c244e           mov word ptr [esp + 0x4e], cx
// 0060338b  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0060338f  895008               mov dword ptr [eax + 8], edx
// 00603392  bb01000000           mov ebx, 1
// 00603397  89580c               mov dword ptr [eax + 0xc], ebx
// 0060339a  d95810               fstp dword ptr [eax + 0x10]
// 0060339d  d9c9                 fxch st(1)
// 0060339f  89642430             mov dword ptr [esp + 0x30], esp
// 006033a3  d95814               fstp dword ptr [eax + 0x14]
// 006033a6  d95818               fstp dword ptr [eax + 0x18]
// 006033a9  d9581c               fstp dword ptr [eax + 0x1c]
// 006033ac  8d442434             lea eax, [esp + 0x34]
// 006033b0  50                   push eax
// 006033b1  e8fae9ffff           call 0x601db0
// 006033b6  83c424               add esp, 0x24
// 006033b9  6810248400           push 0x842410
// 006033be  8d4c2428             lea ecx, [esp + 0x28]
// 006033c2  895c2450             mov dword ptr [esp + 0x50], ebx
// 006033c6  ff1558248000         call dword ptr [0x802458]
// 006033cc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006033d0  8b11                 mov edx, dword ptr [ecx]
// 006033d2  8b5204               mov edx, dword ptr [edx + 4]
// 006033d5  8d442424             lea eax, [esp + 0x24]
// 006033d9  50                   push eax
// 006033da  c644245002           mov byte ptr [esp + 0x50], 2
// 006033df  ffd2                 call edx
// 006033e1  8d4c2424             lea ecx, [esp + 0x24]
// 006033e5  885c244c             mov byte ptr [esp + 0x4c], bl
// 006033e9  ff1568248000         call dword ptr [0x802468]
// 006033ef  8d44241c             lea eax, [esp + 0x1c]
// 006033f3  50                   push eax
// 006033f4  e8a7ecffff           call 0x6020a0
// 006033f9  8b10                 mov edx, dword ptr [eax]
// 006033fb  51                   push ecx
// 006033fc  8bcc                 mov ecx, esp
// 006033fe  8911                 mov dword ptr [ecx], edx
// 00603400  8b4004               mov eax, dword ptr [eax + 4]
// 00603403  c644245403           mov byte ptr [esp + 0x54], 3
// 00603408  89642418             mov dword ptr [esp + 0x18], esp
// 0060340c  894104               mov dword ptr [ecx + 4], eax
// 0060340f  85c0                 test eax, eax
// 00603411  7409                 je 0x60341c
// 00603413  83c004               add eax, 4
// 00603416  8bcb                 mov ecx, ebx
// 00603418  f00fc108             lock xadd dword ptr [eax], ecx
// 0060341c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00603420  e8ebdaffff           call 0x600f10
// 00603425  8b742420             mov esi, dword ptr [esp + 0x20]
// 00603429  885c244c             mov byte ptr [esp + 0x4c], bl
// 0060342d  85f6                 test esi, esi
// 0060342f  742a                 je 0x60345b
// 00603431  8d5604               lea edx, [esi + 4]
// 00603434  83c8ff               or eax, 0xffffffff
// 00603437  f00fc102             lock xadd dword ptr [edx], eax
// 0060343b  751e                 jne 0x60345b
// 0060343d  8b16                 mov edx, dword ptr [esi]
// 0060343f  8b4204               mov eax, dword ptr [edx + 4]
// 00603442  8bce                 mov ecx, esi
// 00603444  ffd0                 call eax
// 00603446  8d4e08               lea ecx, [esi + 8]
// 00603449  83caff               or edx, 0xffffffff
// 0060344c  f00fc111             lock xadd dword ptr [ecx], edx
// 00603450  7509                 jne 0x60345b
// 00603452  8b06                 mov eax, dword ptr [esi]
// 00603454  8b5008               mov edx, dword ptr [eax + 8]
// 00603457  8bce                 mov ecx, esi
// 00603459  ffd2                 call edx
// 0060345b  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 0060345f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00603463  8907                 mov dword ptr [edi], eax
// 00603465  8b442418             mov eax, dword ptr [esp + 0x18]
// 00603469  894704               mov dword ptr [edi + 4], eax
// 0060346c  85c0                 test eax, eax
// 0060346e  740d                 je 0x60347d
// 00603470  83c004               add eax, 4
// 00603473  8bcb                 mov ecx, ebx
// 00603475  f00fc108             lock xadd dword ptr [eax], ecx
// 00603479  8b442418             mov eax, dword ptr [esp + 0x18]
// 0060347d  895c240c             mov dword ptr [esp + 0xc], ebx
// 00603481  c644244c00           mov byte ptr [esp + 0x4c], 0
// 00603486  85c0                 test eax, eax
// 00603488  742c                 je 0x6034b6
// 0060348a  8bf0                 mov esi, eax
// 0060348c  83c004               add eax, 4
// 0060348f  83caff               or edx, 0xffffffff
// 00603492  f00fc110             lock xadd dword ptr [eax], edx
// 00603496  751e                 jne 0x6034b6
// 00603498  8b06                 mov eax, dword ptr [esi]
// 0060349a  8b5004               mov edx, dword ptr [eax + 4]
// 0060349d  8bce                 mov ecx, esi
// 0060349f  ffd2                 call edx
// 006034a1  8d4608               lea eax, [esi + 8]
// 006034a4  83c9ff               or ecx, 0xffffffff
// 006034a7  f00fc108             lock xadd dword ptr [eax], ecx
// 006034ab  7509                 jne 0x6034b6
// 006034ad  8b16                 mov edx, dword ptr [esi]
// 006034af  8b4208               mov eax, dword ptr [edx + 8]
// 006034b2  8bce                 mov ecx, esi
// 006034b4  ffd0                 call eax
// 006034b6  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006034ba  8bc7                 mov eax, edi
// 006034bc  5f                   pop edi
// 006034bd  5e                   pop esi
// 006034be  64890d00000000       mov dword ptr fs:[0], ecx
// 006034c5  5b                   pop ebx
// 006034c6  83c444               add esp, 0x44
// 006034c9  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Color {
    float r, g, b, a;
    Color(const Color&);
};

inline Color::Color(const Color& c)
    : r(c.r), g(c.g), b(c.b), a(c.a)
{
}

const Color& __cdecl defaultColor();

struct Size {
    short width, height;
    Size(short, short);
};

inline Size::Size(short w, short h)
    : width(w), height(h)
{
}

struct Style {
    int kind;
    int flags;
    Size size;
    int enabled;
    Color color;

    Style(int, int, Size, int, const Color&);
    Style(const Style&);
};

inline Style::Style(int k, int f, Size s, int e, const Color& c)
    : kind(k), flags(f), size(s), enabled(e), color(c)
{
}

inline Style::Style(const Style& s)
    : kind(s.kind), flags(s.flags), size(s.size),
      enabled(s.enabled), color(s.color)
{
}

struct String {
    unsigned char storage[28];
    String(const char*);
    ~String();
};

extern void (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

inline String::String(const char* text)
{
    stringConstruct(this, text);
}

inline String::~String()
{
    stringDestroy(this);
}

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Object;

struct Pointer {
    Object* object;
    Control* control;

    Pointer(const Pointer&);
    ~Pointer();
    const Pointer& reference() const;
};

inline Pointer::Pointer(const Pointer& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

inline Pointer::~Pointer()
{
    if (control) {
        Control* p = control;
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

inline const Pointer& Pointer::reference() const
{
    return *this;
}

struct Object {
    virtual void unused();
    virtual void setName(const String&);
    void attach(Pointer);
};

Pointer __cdecl createWidget(Style);
Pointer __cdecl createChild();

Pointer __stdcall createChatHud()
{
    Pointer widget = createWidget(Style(2, 0, Size(25, 100), 1,
                                       defaultColor()));
    widget.object->setName(String("ChatHud"));
    widget.object->attach(createChild().reference());
    return Pointer(widget);
}
