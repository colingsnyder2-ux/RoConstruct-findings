// from server: 98% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_espeon_contactvectoraddition46ff2c351705f6e4.cpp

// Candidate translation unit (score above; library headers required).
#pragma float_control(precise, off)
#include <G3D/Vector3.h>
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// from server: 85% by colin
// roc 2008-06 0060e780  unit: RBX::BlockBlockContact  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060e780
//
// 0060e780  83ec24               sub esp, 0x24
// 0060e783  53                   push ebx
// 0060e784  55                   push ebp
// 0060e785  56                   push esi
// 0060e786  57                   push edi
// 0060e787  8bf9                 mov edi, ecx
// 0060e789  8b7724               mov esi, dword ptr [edi + 0x24]
// 0060e78c  8bae9c020000         mov ebp, dword ptr [esi + 0x29c]
// 0060e792  81c68c020000         add esi, 0x28c
// 0060e798  396e0c               cmp dword ptr [esi + 0xc], ebp
// 0060e79b  7606                 jbe 0x60e7a3
// 0060e79d  ff1590288000         call dword ptr [0x802890]
// 0060e7a3  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 0060e7a6  8b06                 mov eax, dword ptr [esi]
// 0060e7a8  89442410             mov dword ptr [esp + 0x10], eax
// 0060e7ac  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 0060e7af  7606                 jbe 0x60e7b7
// 0060e7b1  ff1590288000         call dword ptr [0x802890]
// 0060e7b7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0060e7bb  8b06                 mov eax, dword ptr [esi]
// 0060e7bd  55                   push ebp
// 0060e7be  51                   push ecx
// 0060e7bf  53                   push ebx
// 0060e7c0  50                   push eax
// 0060e7c1  8d542420             lea edx, [esp + 0x20]
// 0060e7c5  52                   push edx
// 0060e7c6  8bce                 mov ecx, esi
// 0060e7c8  e8c3fbffff           call 0x60e390
// 0060e7cd  8d7708               lea esi, [edi + 8]
// 0060e7d0  56                   push esi
// 0060e7d1  e85a070000           call 0x60ef30
// 0060e7d6  56                   push esi
// 0060e7d7  e8f4020000           call 0x60ead0
// 0060e7dc  83c408               add esp, 8
// 0060e7df  84c0                 test al, al
// 0060e7e1  744f                 je 0x60e832
// 0060e7e3  8d44241c             lea eax, [esp + 0x1c]
// 0060e7e7  56                   push esi
// 0060e7e8  50                   push eax
// 0060e7e9  e8e20a0000           call 0x60f2d0
// 0060e7ee  d9400c               fld dword ptr [eax + 0xc]
// 0060e7f1  d800                 fadd dword ptr [eax]
// 0060e7f3  83c408               add esp, 8
// 0060e7f6  d94010               fld dword ptr [eax + 0x10]
// 0060e7f9  8d4c2410             lea ecx, [esp + 0x10]
// 0060e7fd  d84004               fadd dword ptr [eax + 4]
// 0060e800  51                   push ecx
// 0060e801  d94014               fld dword ptr [eax + 0x14]
// 0060e804  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0060e807  d84008               fadd dword ptr [eax + 8]
// 0060e80a  d905ac9b8100         fld dword ptr [0x819bac]
// 0060e810  dccb                 fmul st(3), st(0)
// 0060e812  d9cb                 fxch st(3)
// 0060e814  d95c2414             fstp dword ptr [esp + 0x14]
// 0060e818  d9c9                 fxch st(1)
// 0060e81a  d8ca                 fmul st(2)
// 0060e81c  d95c2418             fstp dword ptr [esp + 0x18]
// 0060e820  dec9                 fmulp st(1)
// 0060e822  d95c241c             fstp dword ptr [esp + 0x1c]
// 0060e826  d94010               fld dword ptr [eax + 0x10]
// 0060e829  d95c2418             fstp dword ptr [esp + 0x18]
// 0060e82d  e8fe17f8ff           call 0x590030
// 0060e832  c6472001             mov byte ptr [edi + 0x20], 1
// 0060e836  5f                   pop edi
// 0060e837  5e                   pop esi
// 0060e838  5d                   pop ebp
// 0060e839  5b                   pop ebx
// 0060e83a  83c424               add esp, 0x24
// 0060e83d  c3                   ret 

// from server: 78% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast


struct Iterator {
    void* owner;
    void* position;
};

struct Container {
    void* owner;
    char reserved[8];
    void* first;
    void* last;
    void* limit;

    Iterator erase(Iterator first, Iterator last);
};

struct RawVector{float x,y,z;G3D::Vector3 operator+(const RawVector&v)const{return G3D::Vector3(x+v.x,y+v.y,z+v.z);}};
struct Bounds {
    RawVector minimum;
    RawVector maximum;
};

struct Data {
    char reserved[24];
};

extern void __cdecl prepare(Data*);
extern bool __cdecl valid(Data*);
extern Bounds* __cdecl getBounds(Bounds*, Data*);

struct Object {
    char reserved[0x28c];
    Container container;

    void setVector(const G3D::Vector3&);
};

struct BlockBlockContact {
    char reserved[8];
    Data data;
    unsigned char updated;
    char padding[3];
    Object* object;

    void update();
};

void BlockBlockContact::update()
{
    Container* container = &object->container;

    Iterator last;
    last.position = container->last;
    if (container->first > last.position)
        _invalid_parameter_noinfo();

    Iterator first;
    first.position = container->first;
    last.owner = container->owner;
    if (first.position > container->last)
        _invalid_parameter_noinfo();
    first.owner = container->owner;

    container->erase(first, last);

    Data* value = &data;
    prepare(value);
    if (valid(value)) {
        Bounds storage;
        Bounds* bounds = getBounds(&storage, value);
        G3D::Vector3 center=(bounds->minimum+bounds->maximum)*0.5f;
        center.y=bounds->maximum.y;
        object->setVector(center);
    }
    updated = 1;
}
