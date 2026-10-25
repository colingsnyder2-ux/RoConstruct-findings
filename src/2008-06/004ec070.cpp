// from server: 85% by colin
// roc 2008-06 004ec070  unit: RBX::ViewNew::Texture  size: 419 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ec070
//
// 004ec070  55                   push ebp
// 004ec071  8bec                 mov ebp, esp
// 004ec073  6aff                 push -1
// 004ec075  68a1aa7c00           push 0x7caaa1
// 004ec07a  64a100000000         mov eax, dword ptr fs:[0]
// 004ec080  50                   push eax
// 004ec081  64892500000000       mov dword ptr fs:[0], esp
// 004ec088  83ec4c               sub esp, 0x4c
// 004ec08b  53                   push ebx
// 004ec08c  33c0                 xor eax, eax
// 004ec08e  56                   push esi
// 004ec08f  8bf1                 mov esi, ecx
// 004ec091  8945ec               mov dword ptr [ebp - 0x14], eax
// 004ec094  57                   push edi
// 004ec095  8965f0               mov dword ptr [ebp - 0x10], esp
// 004ec098  8975e8               mov dword ptr [ebp - 0x18], esi
// 004ec09b  8945fc               mov dword ptr [ebp - 4], eax
// 004ec09e  3886c8000000         cmp byte ptr [esi + 0xc8], al
// 004ec0a4  0f8424010000         je 0x4ec1ce
// 004ec0aa  8d4dc8               lea ecx, [ebp - 0x38]
// 004ec0ad  ff1560248000         call dword ptr [0x802460]
// 004ec0b3  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 004ec0b9  8d45a8               lea eax, [ebp - 0x58]
// 004ec0bc  50                   push eax
// 004ec0bd  c645fc01             mov byte ptr [ebp - 4], 1
// 004ec0c1  e8ea9affff           call 0x4e5bb0
// 004ec0c6  8bf8                 mov edi, eax
// 004ec0c8  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 004ec0ce  50                   push eax
// 004ec0cf  c645fc02             mov byte ptr [ebp - 4], 2
// 004ec0d3  e83891f7ff           call 0x465210
// 004ec0d8  83c404               add esp, 4
// 004ec0db  8d4dc8               lea ecx, [ebp - 0x38]
// 004ec0de  51                   push ecx
// 004ec0df  8d55ec               lea edx, [ebp - 0x14]
// 004ec0e2  52                   push edx
// 004ec0e3  57                   push edi
// 004ec0e4  8bc8                 mov ecx, eax
// 004ec0e6  e885650700           call 0x562670
// 004ec0eb  837dec01             cmp dword ptr [ebp - 0x14], 1
// 004ec0ef  8d4da8               lea ecx, [ebp - 0x58]
// 004ec0f2  0f94c3               sete bl
// 004ec0f5  c645fc01             mov byte ptr [ebp - 4], 1
// 004ec0f9  ff1568248000         call dword ptr [0x802468]
// 004ec0ff  84db                 test bl, bl
// 004ec101  0f84ba000000         je 0x4ec1c1
// 004ec107  e824560600           call 0x551730
// 004ec10c  8d9ec4000000         lea ebx, [esi + 0xc4]
// 004ec112  50                   push eax
// 004ec113  8bcb                 mov ecx, ebx
// 004ec115  e886ce0a00           call 0x598fa0
// 004ec11a  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 004ec120  8b400c               mov eax, dword ptr [eax + 0xc]
// 004ec123  6a01                 push 1
// 004ec125  8d4dc8               lea ecx, [ebp - 0x38]
// 004ec128  51                   push ecx
// 004ec129  50                   push eax
// 004ec12a  e8f1570600           call 0x551920
// 004ec12f  8b1b                 mov ebx, dword ptr [ebx]
// 004ec131  8bf8                 mov edi, eax
// 004ec133  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 004ec139  d98028030000         fld dword ptr [eax + 0x328]
// 004ec13f  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 004ec145  d9e8                 fld1 
// 004ec147  83c40c               add esp, 0xc
// 004ec14a  dee1                 fsubrp st(1)
// 004ec14c  83ec1c               sub esp, 0x1c
// 004ec14f  8965e4               mov dword ptr [ebp - 0x1c], esp
// 004ec152  d95c2418             fstp dword ptr [esp + 0x18]
// 004ec156  d9ee                 fldz 
// 004ec158  d95c2414             fstp dword ptr [esp + 0x14]
// 004ec15c  d98068010000         fld dword ptr [eax + 0x168]
// 004ec162  d95c2410             fstp dword ptr [esp + 0x10]
// 004ec166  d98064010000         fld dword ptr [eax + 0x164]
// 004ec16c  d95c240c             fstp dword ptr [esp + 0xc]
// 004ec170  8bc4                 mov eax, esp
// 004ec172  d90504299400         fld dword ptr [0x942904]
// 004ec178  51                   push ecx
// 004ec179  d918                 fstp dword ptr [eax]
// 004ec17b  8bcc                 mov ecx, esp
// 004ec17d  d90508299400         fld dword ptr [0x942908]
// 004ec183  8965e4               mov dword ptr [ebp - 0x1c], esp
// 004ec186  d95804               fstp dword ptr [eax + 4]
// 004ec189  57                   push edi
// 004ec18a  d9050c299400         fld dword ptr [0x94290c]
// 004ec190  d95808               fstp dword ptr [eax + 8]
// 004ec193  c70100000000         mov dword ptr [ecx], 0
// 004ec199  e802ce0a00           call 0x598fa0
// 004ec19e  8b13                 mov edx, dword ptr [ebx]
// 004ec1a0  8b420c               mov eax, dword ptr [edx + 0xc]
// 004ec1a3  8bcb                 mov ecx, ebx
// 004ec1a5  ffd0                 call eax
// 004ec1a7  d905f8269300         fld dword ptr [0x9326f8]
// 004ec1ad  8b17                 mov edx, dword ptr [edi]
// 004ec1af  8b420c               mov eax, dword ptr [edx + 0xc]
// 004ec1b2  51                   push ecx
// 004ec1b3  8bcf                 mov ecx, edi
// 004ec1b5  d91c24               fstp dword ptr [esp]
// 004ec1b8  ffd0                 call eax
// 004ec1ba  c686c800000000       mov byte ptr [esi + 0xc8], 0
// 004ec1c1  8d4dc8               lea ecx, [ebp - 0x38]
// 004ec1c4  c645fc00             mov byte ptr [ebp - 4], 0
// 004ec1c8  ff1568248000         call dword ptr [0x802468]
// 004ec1ce  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004ec1d5  8b7d08               mov edi, dword ptr [ebp + 8]
// 004ec1d8  c70700000000         mov dword ptr [edi], 0
// 004ec1de  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 004ec1e4  51                   push ecx
// 004ec1e5  8bcf                 mov ecx, edi
// 004ec1e7  e8b4cd0a00           call 0x598fa0
// 004ec1ec  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004ec1ef  8bc7                 mov eax, edi
// 004ec1f1  5f                   pop edi
// 004ec1f2  5e                   pop esi
// 004ec1f3  64890d00000000       mov dword ptr fs:[0], ecx
// 004ec1fa  5b                   pop ebx
// 004ec1fb  8be5                 mov esp, ebp
// 004ec1fd  5d                   pop ebp
// 004ec1fe  c20400               ret 4
// 004ec201  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004ec208  b80ec24e00           mov eax, 0x4ec20e
// 004ec20d  c3                   ret 
// 004ec20e  8b75e8               mov esi, dword ptr [ebp - 0x18]
// 004ec211  ebc2                 jmp 0x4ec1d5

// from server: 85% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct String;
typedef void (__thiscall *StringInit)(String *);
typedef void (__thiscall *StringDestroy)(String *);
extern StringInit stringInit;
extern StringDestroy stringDestroy;

struct String {
    char data[28];
    String();
    ~String();
};

inline String::String() { stringInit(this); }
inline String::~String() { stringDestroy(this); }

struct Value {
    char stringData[28];
    unsigned int extra;
    ~Value();
};

inline Value::~Value()
{
    stringDestroy((String *)stringData);
}

struct Block {
    char padding[0x144];
    Value value;
    float width;
    float height;
    Value copy();
};

struct Resource;

struct Handle {
    Resource *pointer;
    void assign(Resource *);
    Handle(Resource *);
    Handle(const Handle &);
};

inline Handle::Handle(Resource *p)
{
    pointer = 0;
    assign(p);
}

inline Handle::Handle(const Handle &p)
{
    pointer = 0;
    assign(p.pointer);
}

struct Vector {
    float x, y, z;
    Vector(const Vector &);
};

inline Vector::Vector(const Vector &v)
    : x(v.x), y(v.y), z(v.z)
{
}

struct Resource {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void draw(Handle, Vector, float, float, float, float);
};

struct Image {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(float);
};

namespace RBX {
    class Instance;
    class ServiceProvider {
    public:
        void load(const Value &, int *, String *);
    };
}

extern RBX::ServiceProvider *__cdecl func_00465210(RBX::Instance *);
extern Resource *__cdecl func_00551730();
extern Image *__cdecl func_00551920(void *, String *, int);
extern Vector constantVector;
extern float constantScale;

struct Texture {
    char padding0[0xbc];
    RBX::Instance *owner;
    unsigned int padding1;
    Handle resource;
    unsigned char dirty;
    char padding2[7];
    char *context;
    unsigned int padding3;
    Block *block;

    Handle f();
};

Handle Texture::f()
{
    int status = 0;
    try {
        if (dirty) {
            String name;
            bool ready = (func_00465210(owner)->load(
                block->copy(), &status, &name), status == 1);
            if (ready) {
                resource.assign(func_00551730());
                Image *image = func_00551920(*(void **)(context + 12), &name, 1);
                Resource *destination = resource.pointer;
                destination->draw(
                    Handle((Resource *)image),
                    constantVector,
                    block->width,
                    block->height,
                    0.0f,
                    1.0f - *(float *)((char *)owner + 0x328));
                image->set(constantScale);
                dirty = 0;
            }
        }
    } catch (...) {
    }
    return resource;
}
