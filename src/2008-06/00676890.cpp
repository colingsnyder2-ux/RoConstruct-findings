// from server: 100% by king_originala
// roc 2008-06 00676890  unit: RBX::AdornG3D  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00676890
//
// 00676890  6aff                 push -1
// 00676892  68c8c77d00           push 0x7dc7c8
// 00676897  64a100000000         mov eax, dword ptr fs:[0]
// 0067689d  50                   push eax
// 0067689e  64892500000000       mov dword ptr fs:[0], esp
// 006768a5  51                   push ecx
// 006768a6  56                   push esi
// 006768a7  57                   push edi
// 006768a8  8bf1                 mov esi, ecx
// 006768aa  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006768ae  51                   push ecx
// 006768af  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006768b7  8964240c             mov dword ptr [esp + 0xc], esp
// 006768bb  85c9                 test ecx, ecx
// 006768bd  7415                 je 0x6768d4
// 006768bf  8b7e04               mov edi, dword ptr [esi + 4]
// 006768c2  8b01                 mov eax, dword ptr [ecx]
// 006768c4  8b4018               mov eax, dword ptr [eax + 0x18]
// 006768c7  8bd4                 mov edx, esp
// 006768c9  57                   push edi
// 006768ca  52                   push edx
// 006768cb  ffd0                 call eax
// 006768cd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006768d1  51                   push ecx
// 006768d2  eb0d                 jmp 0x6768e1
// 006768d4  8b542420             mov edx, dword ptr [esp + 0x20]
// 006768d8  8bc4                 mov eax, esp
// 006768da  c70000000000         mov dword ptr [eax], 0
// 006768e0  52                   push edx
// 006768e1  8b4e04               mov ecx, dword ptr [esi + 4]
// 006768e4  e8672be0ff           call 0x479450
// 006768e9  8b442420             mov eax, dword ptr [esp + 0x20]
// 006768ed  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006768f5  85c0                 test eax, eax
// 006768f7  7427                 je 0x676920
// 006768f9  83c004               add eax, 4
// 006768fc  50                   push eax
// 006768fd  ff15ac218000         call dword ptr [0x8021ac]
// 00676903  85c0                 test eax, eax
// 00676905  7519                 jne 0x676920
// 00676907  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0067690b  e88044deff           call 0x45ad90
// 00676910  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00676914  85c9                 test ecx, ecx
// 00676916  7408                 je 0x676920
// 00676918  8b01                 mov eax, dword ptr [ecx]
// 0067691a  8b10                 mov edx, dword ptr [eax]
// 0067691c  6a01                 push 1
// 0067691e  ffd2                 call edx
// 00676920  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00676924  5f                   pop edi
// 00676925  64890d00000000       mov dword ptr fs:[0], ecx
// 0067692c  5e                   pop esi
// 0067692d  83c410               add esp, 0x10
// 00676930  c20800               ret 8

extern "C" long (__stdcall *InterlockedDecrement)(volatile long *);

struct Object;
struct Context;

struct Ref {
    Object* p;
    Ref() : p(0) {}
    Ref(const Ref&);
    ~Ref();
};

struct Object {
    volatile long count;
    virtual void destroy(unsigned int);
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual Ref clone(Context*);
    void dispose();
};

struct Context {
    void draw(int, Ref);
};

struct S {
    void* vtable;
    Context* context;
    void f(int, Ref);
};

inline Ref::~Ref() {
    if (p && InterlockedDecrement(&p->count) == 0) {
        p->dispose();
        if (p)
            p->destroy(1);
    }
}

void S::f(int value, Ref object) {
    if (object.p)
        context->draw(value, object.p->clone(context));
    else
        context->draw(value, Ref());
}
