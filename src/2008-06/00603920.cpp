// from server: 82% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client-dll roc_espeon_scorehudcopy_ec0ac0341159d2b3.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
// from server: 76% by colin
// roc 2008-06 00603920  unit: RBX::UnifiedImageWidget  size: 413 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00603920
//
// 00603920  6aff                 push -1
// 00603922  6802867d00           push 0x7d8602
// 00603927  64a100000000         mov eax, dword ptr fs:[0]
// 0060392d  50                   push eax
// 0060392e  64892500000000       mov dword ptr fs:[0], esp
// 00603935  83ec38               sub esp, 0x38
// 00603938  53                   push ebx
// 00603939  56                   push esi
// 0060393a  57                   push edi
// 0060393b  8bf1                 mov esi, ecx
// 0060393d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00603945  e8c6751b00           call 0x7baf10
// 0060394a  d900                 fld dword ptr [eax]
// 0060394c  d94004               fld dword ptr [eax + 4]
// 0060394f  83ec20               sub esp, 0x20
// 00603952  d94008               fld dword ptr [eax + 8]
// 00603955  bb01000000           mov ebx, 1
// 0060395a  d9400c               fld dword ptr [eax + 0xc]
// 0060395d  b80a000000           mov eax, 0xa
// 00603962  8bc8                 mov ecx, eax
// 00603964  d9cb                 fxch st(3)
// 00603966  668944244c           mov word ptr [esp + 0x4c], ax
// 0060396b  8bc4                 mov eax, esp
// 0060396d  c70003000000         mov dword ptr [eax], 3
// 00603973  c7400400000000       mov dword ptr [eax + 4], 0
// 0060397a  89580c               mov dword ptr [eax + 0xc], ebx
// 0060397d  66894c244e           mov word ptr [esp + 0x4e], cx
// 00603982  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00603986  895008               mov dword ptr [eax + 8], edx
// 00603989  d95810               fstp dword ptr [eax + 0x10]
// 0060398c  d9c9                 fxch st(1)
// 0060398e  89642430             mov dword ptr [esp + 0x30], esp
// 00603992  d95814               fstp dword ptr [eax + 0x14]
// 00603995  d95818               fstp dword ptr [eax + 0x18]
// 00603998  d9581c               fstp dword ptr [eax + 0x1c]
// 0060399b  8d442434             lea eax, [esp + 0x34]
// 0060399f  50                   push eax
// 006039a0  e80be4ffff           call 0x601db0
// 006039a5  83c424               add esp, 0x24
// 006039a8  682c248400           push 0x84242c
// 006039ad  8d4c2428             lea ecx, [esp + 0x28]
// 006039b1  895c2450             mov dword ptr [esp + 0x50], ebx
// 006039b5  ff1558248000         call dword ptr [0x802458]
// 006039bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006039bf  8b11                 mov edx, dword ptr [ecx]
// 006039c1  8b5204               mov edx, dword ptr [edx + 4]
// 006039c4  8d442424             lea eax, [esp + 0x24]
// 006039c8  50                   push eax
// 006039c9  c644245002           mov byte ptr [esp + 0x50], 2
// 006039ce  ffd2                 call edx
// 006039d0  8d4c2424             lea ecx, [esp + 0x24]
// 006039d4  885c244c             mov byte ptr [esp + 0x4c], bl
// 006039d8  ff1568248000         call dword ptr [0x802468]
// 006039de  8b06                 mov eax, dword ptr [esi]
// 006039e0  50                   push eax
// 006039e1  8d4c2420             lea ecx, [esp + 0x20]
// 006039e5  51                   push ecx
// 006039e6  e865e9ffff           call 0x602350
// 006039eb  8b10                 mov edx, dword ptr [eax]
// 006039ed  8bcc                 mov ecx, esp
// 006039ef  8911                 mov dword ptr [ecx], edx
// 006039f1  8b4004               mov eax, dword ptr [eax + 4]
// 006039f4  c644245403           mov byte ptr [esp + 0x54], 3
// 006039f9  89642418             mov dword ptr [esp + 0x18], esp
// 006039fd  894104               mov dword ptr [ecx + 4], eax
// 00603a00  85c0                 test eax, eax
// 00603a02  7409                 je 0x603a0d
// 00603a04  83c004               add eax, 4
// 00603a07  8bcb                 mov ecx, ebx
// 00603a09  f00fc108             lock xadd dword ptr [eax], ecx
// 00603a0d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00603a11  e8fad4ffff           call 0x600f10
// 00603a16  8b742420             mov esi, dword ptr [esp + 0x20]
// 00603a1a  885c244c             mov byte ptr [esp + 0x4c], bl
// 00603a1e  85f6                 test esi, esi
// 00603a20  742a                 je 0x603a4c
// 00603a22  8d5604               lea edx, [esi + 4]
// 00603a25  83c8ff               or eax, 0xffffffff
// 00603a28  f00fc102             lock xadd dword ptr [edx], eax
// 00603a2c  751e                 jne 0x603a4c
// 00603a2e  8b16                 mov edx, dword ptr [esi]
// 00603a30  8b4204               mov eax, dword ptr [edx + 4]
// 00603a33  8bce                 mov ecx, esi
// 00603a35  ffd0                 call eax
// 00603a37  8d4e08               lea ecx, [esi + 8]
// 00603a3a  83caff               or edx, 0xffffffff
// 00603a3d  f00fc111             lock xadd dword ptr [ecx], edx
// 00603a41  7509                 jne 0x603a4c
// 00603a43  8b06                 mov eax, dword ptr [esi]
// 00603a45  8b5008               mov edx, dword ptr [eax + 8]
// 00603a48  8bce                 mov ecx, esi
// 00603a4a  ffd2                 call edx
// 00603a4c  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00603a50  8b442414             mov eax, dword ptr [esp + 0x14]
// 00603a54  8907                 mov dword ptr [edi], eax
// 00603a56  8b442418             mov eax, dword ptr [esp + 0x18]
// 00603a5a  894704               mov dword ptr [edi + 4], eax
// 00603a5d  85c0                 test eax, eax
// 00603a5f  740d                 je 0x603a6e
// 00603a61  83c004               add eax, 4
// 00603a64  8bcb                 mov ecx, ebx
// 00603a66  f00fc108             lock xadd dword ptr [eax], ecx
// 00603a6a  8b442418             mov eax, dword ptr [esp + 0x18]
// 00603a6e  895c240c             mov dword ptr [esp + 0xc], ebx
// 00603a72  c644244c00           mov byte ptr [esp + 0x4c], 0
// 00603a77  85c0                 test eax, eax
// 00603a79  742c                 je 0x603aa7
// 00603a7b  8bf0                 mov esi, eax
// 00603a7d  83c004               add eax, 4
// 00603a80  83caff               or edx, 0xffffffff
// 00603a83  f00fc110             lock xadd dword ptr [eax], edx
// 00603a87  751e                 jne 0x603aa7
// 00603a89  8b06                 mov eax, dword ptr [esi]
// 00603a8b  8b5004               mov edx, dword ptr [eax + 4]
// 00603a8e  8bce                 mov ecx, esi
// 00603a90  ffd2                 call edx
// 00603a92  8d4608               lea eax, [esi + 8]
// 00603a95  83c9ff               or ecx, 0xffffffff
// 00603a98  f00fc108             lock xadd dword ptr [eax], ecx
// 00603a9c  7509                 jne 0x603aa7
// 00603a9e  8b16                 mov edx, dword ptr [esi]
// 00603aa0  8b4208               mov eax, dword ptr [edx + 8]
// 00603aa3  8bce                 mov ecx, esi
// 00603aa5  ffd0                 call eax
// 00603aa7  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00603aab  8bc7                 mov eax, edi
// 00603aad  5f                   pop edi
// 00603aae  5e                   pop esi
// 00603aaf  64890d00000000       mov dword ptr fs:[0], ecx
// 00603ab6  5b                   pop ebx
// 00603ab7  83c444               add esp, 0x44
// 00603aba  c20400               ret 4

// from server: 71% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct String;
extern void (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

struct String {
    unsigned char storage[28];
    String(const char*);
    ~String();
};

inline String::String(const char* text)
{
    stringConstruct(this, text);
}

inline String::~String()
{
    stringDestroy(this);
}

struct Child;

struct Image {
    virtual void reserved() = 0;
    virtual void setName(const String&) = 0;
    void setChild(boost::shared_ptr<Child>);
};

struct Color {
    float r, g, b, a;
 Color(const Color& c):r(c.r),g(c.g),b(c.b),a(c.a) {}
};

struct Dimensions { unsigned short width,height; Dimensions(unsigned short w,unsigned short h):width(w),height(h) {} };
struct Description {
    int kind;
    int flags;
    Dimensions dimensions;
    int enabled;
    float r, g, b, a;
    Description(Color);
    Description(const Description&);
};

inline Description::Description(Color color)
    : kind(3), flags(0), dimensions(10,10), enabled(1),
      r(color.r), g(color.g), b(color.b), a(color.a)
{
}

inline Description::Description(const Description& other)
    : kind(other.kind), flags(other.flags),
      dimensions(other.dimensions), enabled(other.enabled),
      r(other.r), g(other.g), b(other.b), a(other.a)
{
}

extern const Color& __cdecl zeroColor();
extern boost::shared_ptr<Image> __cdecl createImage(Description);
extern boost::shared_ptr<Child> __cdecl createChild(void*);

struct Widget {
    void* source;
    boost::shared_ptr<Image> create();
};

__forceinline void setChildImage(const boost::shared_ptr<Image>& image, const boost::shared_ptr<Child>& child) { image->setChild(child); }
__forceinline void setImageName(const boost::shared_ptr<Image>& image,const String& name) { image->setName(name); }
boost::shared_ptr<Image> Widget::create()
{
    const Color& color = zeroColor();
    boost::shared_ptr<Image> result =
        createImage(Description(color));
    setImageName(result,String("ScoreHud"));
    {
        setChildImage(result,createChild(source));
    }
    return boost::shared_ptr<Image>(result);
}
