// from server: 85% by colin
// roc 2008-06 00584d80  (agentH rewrite)

// from server: 84% by king_originala
// roc 2008-06 00584d80  unit: G3D::VCoordinateFrame::?$TypedPropertyDescriptor  size: 496 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00584d80
//
// 00584d80  64a100000000         mov eax, dword ptr fs:[0]
// 00584d86  6aff                 push -1
// 00584d88  68f6117d00           push 0x7d11f6
// 00584d8d  50                   push eax
// 00584d8e  64892500000000       mov dword ptr fs:[0], esp
// 00584d95  81ec90000000         sub esp, 0x90
// 00584d9b  53                   push ebx
// 00584d9c  55                   push ebp
// 00584d9d  56                   push esi
// 00584d9e  6a04                 push 4
// 00584da0  8bd9                 mov ebx, ecx
// 00584da2  e879bb1100           call 0x6a0920
// 00584da7  33ed                 xor ebp, ebp
// 00584da9  83c404               add esp, 4
// 00584dac  3bc5                 cmp eax, ebp
// 00584dae  7408                 je 0x584db8
// 00584db0  8d4c240c             lea ecx, [esp + 0xc]
// 00584db4  8908                 mov dword ptr [eax], ecx
// 00584db6  eb02                 jmp 0x584dba
// 00584db8  33c0                 xor eax, eax
// 00584dba  8944240c             mov dword ptr [esp + 0xc], eax
// 00584dbe  896c2418             mov dword ptr [esp + 0x18], ebp
// 00584dc2  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00584dc6  896c2420             mov dword ptr [esp + 0x20], ebp
// 00584dca  8d54240c             lea edx, [esp + 0xc]
// 00584dce  52                   push edx
// 00584dcf  53                   push ebx
// 00584dd0  c78424ac00000001000000 mov dword ptr [esp + 0xac], 1
// 00584ddb  e860a50800           call 0x60f340
// 00584de0  83c408               add esp, 8
// 00584de3  e838ebffff           call 0x583920
// 00584de8  d900                 fld dword ptr [eax]
// 00584dea  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00584dee  d95c2424             fstp dword ptr [esp + 0x24]
// 00584df2  d94004               fld dword ptr [eax + 4]
// 00584df5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00584df9  d95c2428             fstp dword ptr [esp + 0x28]
// 00584dfd  33f6                 xor esi, esi
// 00584dff  d94008               fld dword ptr [eax + 8]
// 00584e02  d95c242c             fstp dword ptr [esp + 0x2c]
// 00584e06  d9400c               fld dword ptr [eax + 0xc]
// 00584e09  d95c2430             fstp dword ptr [esp + 0x30]
// 00584e0d  d94010               fld dword ptr [eax + 0x10]
// 00584e10  d95c2434             fstp dword ptr [esp + 0x34]
// 00584e14  d94014               fld dword ptr [eax + 0x14]
// 00584e17  8bc2                 mov eax, edx
// 00584e19  2bc1                 sub eax, ecx
// 00584e1b  d95c2438             fstp dword ptr [esp + 0x38]
// 00584e1f  c1f802               sar eax, 2
// 00584e22  3bc5                 cmp eax, ebp
// 00584e24  0f86c3000000         jbe 0x584eed
// 00584e2a  57                   push edi
// 00584e2b  eb03                 jmp 0x584e30
// 00584e2d  8d4900               lea ecx, [ecx]
// 00584e30  d905ac9b8100         fld dword ptr [0x819bac]
// 00584e36  3bf0                 cmp esi, eax
// 00584e38  7212                 jb 0x584e4c
// 00584e3a  ddd8                 fstp st(0)
// 00584e3c  ff1590288000         call dword ptr [0x802890]
// 00584e42  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00584e46  d905ac9b8100         fld dword ptr [0x819bac]
// 00584e4c  8b3cb1               mov edi, dword ptr [ecx + esi*4]
// 00584e4f  8b879c000000         mov eax, dword ptr [edi + 0x9c]
// 00584e55  d94004               fld dword ptr [eax + 4]
// 00584e58  83c004               add eax, 4
// 00584e5b  d8c9                 fmul st(1)
// 00584e5d  d94004               fld dword ptr [eax + 4]
// 00584e60  d8ca                 fmul st(2)
// 00584e62  d94008               fld dword ptr [eax + 8]
// 00584e65  8b8334010000         mov eax, dword ptr [ebx + 0x134]
// 00584e6b  decb                 fmulp st(3)
// 00584e6d  d9c1                 fld st(1)
// 00584e6f  d9e0                 fchs 
// 00584e71  d9c1                 fld st(1)
// 00584e73  d9e0                 fchs 
// 00584e75  d9c4                 fld st(4)
// 00584e77  d9e0                 fchs 
// 00584e79  d9ca                 fxch st(2)
// 00584e7b  d95c2440             fstp dword ptr [esp + 0x40]
// 00584e7f  d95c2444             fstp dword ptr [esp + 0x44]
// 00584e83  d95c2448             fstp dword ptr [esp + 0x48]
// 00584e87  d9c9                 fxch st(1)
// 00584e89  d95c244c             fstp dword ptr [esp + 0x4c]
// 00584e8d  d95c2450             fstp dword ptr [esp + 0x50]
// 00584e91  d95c2454             fstp dword ptr [esp + 0x54]
// 00584e95  8b4808               mov ecx, dword ptr [eax + 8]
// 00584e98  8b941934010000       mov edx, dword ptr [ecx + ebx + 0x134]
// 00584e9f  8b12                 mov edx, dword ptr [edx]
// 00584ea1  8d8c1934010000       lea ecx, [ecx + ebx + 0x134]
// 00584ea8  8d442470             lea eax, [esp + 0x70]
// 00584eac  50                   push eax
// 00584ead  ffd2                 call edx
// 00584eaf  50                   push eax
// 00584eb0  8bcf                 mov ecx, edi
// 00584eb2  e809340600           call 0x5e82c0
// 00584eb7  50                   push eax
// 00584eb8  8d442460             lea eax, [esp + 0x60]
// 00584ebc  50                   push eax
// 00584ebd  8d4c244c             lea ecx, [esp + 0x4c]
// 00584ec1  e8eaaa0800           call 0x60f9b0
// 00584ec6  8d4c2458             lea ecx, [esp + 0x58]
// 00584eca  51                   push ecx
// 00584ecb  8d4c242c             lea ecx, [esp + 0x2c]
// 00584ecf  e80c90ffff           call 0x57dee0
// 00584ed4  8b542420             mov edx, dword ptr [esp + 0x20]
// 00584ed8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00584edc  8bc2                 mov eax, edx
// 00584ede  2bc1                 sub eax, ecx
// 00584ee0  46                   inc esi
// 00584ee1  c1f802               sar eax, 2
// 00584ee4  3bf0                 cmp esi, eax
// 00584ee6  0f8244ffffff         jb 0x584e30
// 00584eec  5f                   pop edi
// 00584eed  2bd1                 sub edx, ecx
// 00584eef  c1fa02               sar edx, 2
// 00584ef2  85d2                 test edx, edx
// 00584ef4  7606                 jbe 0x584efc
// 00584ef6  8d442424             lea eax, [esp + 0x24]
// 00584efa  eb09                 jmp 0x584f05
// 00584efc  e85fe9ffff           call 0x583860
// 00584f01  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00584f05  d900                 fld dword ptr [eax]
// 00584f07  8bb424ac000000       mov esi, dword ptr [esp + 0xac]
// 00584f0e  d91e                 fstp dword ptr [esi]
// 00584f10  d94004               fld dword ptr [eax + 4]
// 00584f13  d95e04               fstp dword ptr [esi + 4]
// 00584f16  d94008               fld dword ptr [eax + 8]
// 00584f19  d95e08               fstp dword ptr [esi + 8]
// 00584f1c  d9400c               fld dword ptr [eax + 0xc]
// 00584f1f  d95e0c               fstp dword ptr [esi + 0xc]
// 00584f22  d94010               fld dword ptr [eax + 0x10]
// 00584f25  d95e10               fstp dword ptr [esi + 0x10]
// 00584f28  d94014               fld dword ptr [eax + 0x14]
// 00584f2b  d95e14               fstp dword ptr [esi + 0x14]
// 00584f2e  3bcd                 cmp ecx, ebp
// 00584f30  7409                 je 0x584f3b
// 00584f32  51                   push ecx
// 00584f33  e842b71100           call 0x6a067a
// 00584f38  83c404               add esp, 4
// 00584f3b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00584f3f  52                   push edx
// 00584f40  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00584f44  896c2420             mov dword ptr [esp + 0x20], ebp
// 00584f48  896c2424             mov dword ptr [esp + 0x24], ebp
// 00584f4c  e829b71100           call 0x6a067a
// 00584f51  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00584f58  83c404               add esp, 4
// 00584f5b  8bc6                 mov eax, esi
// 00584f5d  5e                   pop esi
// 00584f5e  5d                   pop ebp
// 00584f5f  5b                   pop ebx
// 00584f60  64890d00000000       mov dword ptr fs:[0], ecx
// 00584f67  81c49c000000         add esp, 0x9c
// 00584f6d  c20400               ret 4

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);
extern "C" __declspec(dllimport) void __cdecl _invalid_parameter_noinfo();

#pragma float_control(precise, off)

struct Vector3
{
    float x, y, z;
    Vector3() {}
    __forceinline Vector3(double, double, double) throw();
    __forceinline Vector3 operator*(float) const throw();
    __forceinline Vector3 operator-() const throw();
};

__forceinline Vector3::Vector3(double a, double b, double c) throw()
    : x((float)a), y((float)b), z((float)c)
{
}

__forceinline Vector3 Vector3::operator*(float s) const throw()
{
    return Vector3(x * s, y * s, z * s);
}

__forceinline Vector3 Vector3::operator-() const throw()
{
    return Vector3(-x, -y, -z);
}

struct Frame
{
    float data[12];
};

struct Box
{
    Vector3 low, high;
    Box() {}
    __forceinline Box(const Box&);
    __forceinline Box(const Vector3&, const Vector3&);
    Box transform(const Vector3&, const Frame&) const;
    void merge(const Box&);
};

__forceinline Box::Box(const Box& b)
{
    low.x = b.low.x;
    low.y = b.low.y;
    low.z = b.low.z;
    high.x = b.high.x;
    high.y = b.high.y;
    high.z = b.high.z;
}

__forceinline Box::Box(const Vector3& a, const Vector3& b)
{
    low.x = a.x;
    low.y = a.y;
    low.z = a.z;
    high.x = b.x;
    high.y = b.y;
    high.z = b.z;
}

extern const Box& __cdecl initialBox();
extern const Box& __cdecl emptyBox();
extern const float extentScale;

struct Dimensions
{
    float unused;
    Vector3 value;
};

struct Body;

struct Primitive
{
    char padding[0x9c];
    Dimensions* dimensions;
    Body* body;
    const Vector3& getValue();
};

struct ListBase;

struct ListProxy
{
    ListBase* owner;
    __forceinline ListProxy(ListBase*);
};

__forceinline ListProxy::ListProxy(ListBase* p) : owner(p)
{
}

struct ListBase
{
    ListProxy* proxy;
    unsigned int reserved[2];
    __forceinline ListBase();
    __forceinline ~ListBase() throw();
};

__forceinline ListBase::ListBase() : proxy(new ListProxy(this))
{
}

__forceinline ListBase::~ListBase() throw()
{
    operator delete(proxy);
}

struct PrimitiveList : ListBase
{
    Primitive** first;
    Primitive** last;
    Primitive** limit;
    __forceinline PrimitiveList();
    __forceinline ~PrimitiveList() throw();
    __forceinline size_t size() const;
    __forceinline Primitive* operator[](size_t) const;
};

__forceinline PrimitiveList::PrimitiveList() : first(0), last(0), limit(0)
{
}

__forceinline PrimitiveList::~PrimitiveList() throw()
{
    if (first)
        operator delete(first);
    first = 0;
    last = 0;
    limit = 0;
}

__forceinline size_t PrimitiveList::size() const
{
    return static_cast<size_t>(last - first);
}

__forceinline Primitive* PrimitiveList::operator[](size_t i) const
{
    if (i >= size())
        _invalid_parameter_noinfo();
    return first[i];
}

struct S;
extern void __cdecl collect(S*, PrimitiveList*);

typedef Frame* (__thiscall *FrameGetter)(void*, Frame*);

struct S
{
    char padding[0x134];
    int* frameTable;
    Box f();
};

Box S::f()
{
    PrimitiveList primitives;
    collect(this, &primitives);
    Box result(initialBox());

    for (size_t i = 0; i < primitives.size(); ++i)
    {
        Vector3 half = primitives[i]->dimensions->value * extentScale;
        Primitive* primitive = primitives.first[i];
        Box bounds(-half, half);

        void* object = reinterpret_cast<char*>(&frameTable) + frameTable[2];
        FrameGetter getter =
            reinterpret_cast<FrameGetter*>(*static_cast<int**>(object))[0];

        Frame storage;
        const Frame* frame = getter(object, &storage);
        Box transformed = bounds.transform(primitive->getValue(), *frame);
        result.merge(transformed);
    }

    return primitives.size() > 0 ? result : emptyBox();
}
