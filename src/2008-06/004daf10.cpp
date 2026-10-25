// from server: 100% by king_originala
// roc 2008-06 004daf10  unit: RBX::ViewNew::ViewRbxGfx  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004daf10
//
// 004daf10  53                   push ebx
// 004daf11  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004daf15  56                   push esi
// 004daf16  57                   push edi
// 004daf17  53                   push ebx
// 004daf18  8bf1                 mov esi, ecx
// 004daf1a  e831fcffff           call 0x4dab50
// 004daf1f  8b4614               mov eax, dword ptr [esi + 0x14]
// 004daf22  8b8004020000         mov eax, dword ptr [eax + 0x204]
// 004daf28  8b7608               mov esi, dword ptr [esi + 8]
// 004daf2b  8b9088020000         mov edx, dword ptr [eax + 0x288]
// 004daf31  8b3e                 mov edi, dword ptr [esi]
// 004daf33  8d8888020000         lea ecx, [eax + 0x288]
// 004daf39  8b4208               mov eax, dword ptr [edx + 8]
// 004daf3c  83c714               add edi, 0x14
// 004daf3f  ffd0                 call eax
// 004daf41  8b17                 mov edx, dword ptr [edi]
// 004daf43  50                   push eax
// 004daf44  53                   push ebx
// 004daf45  8bce                 mov ecx, esi
// 004daf47  ffd2                 call edx
// 004daf49  5f                   pop edi
// 004daf4a  5e                   pop esi
// 004daf4b  5b                   pop ebx
// 004daf4c  c20400               ret 4

struct Source {
    virtual void slot0();
    virtual void slot1();
    virtual int get();
};

struct Container {
    char padding[0x288];
    Source source;
};

struct Context {
    char padding[0x204];
    Container* container;
};

struct Sink;
typedef void (__thiscall *SetFunction)(Sink*, int, int);

struct Sink {
    SetFunction* table;
};

struct S {
    char padding0[8];
    Sink* sink;
    char padding1[8];
    Context* context;

    void prepare(int);
    void f(int);
};

void S::f(int value)
{
    prepare(value);
    Container* container = context->container;
    Sink* destination = sink;
    SetFunction* entry = destination->table + 5;
    int result = container->source.get();
    (*entry)(destination, value, result);
}
