// from server: 100% by king_originala
// roc 2008-06 0063c070  unit: RBX::DebrisService  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063c070
//
// 0063c070  6aff                 push -1
// 0063c072  689ee37c00           push 0x7ce39e
// 0063c077  64a100000000         mov eax, dword ptr fs:[0]
// 0063c07d  50                   push eax
// 0063c07e  64892500000000       mov dword ptr fs:[0], esp
// 0063c085  51                   push ecx
// 0063c086  8b442430             mov eax, dword ptr [esp + 0x30]
// 0063c08a  56                   push esi
// 0063c08b  8bf1                 mov esi, ecx
// 0063c08d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0063c091  50                   push eax
// 0063c092  51                   push ecx
// 0063c093  8974240c             mov dword ptr [esp + 0xc], esi
// 0063c097  e80446f8ff           call 0x5c06a0
// 0063c09c  50                   push eax
// 0063c09d  8bce                 mov ecx, esi
// 0063c09f  e8ec96f5ff           call 0x595790
// 0063c0a4  8b542418             mov edx, dword ptr [esp + 0x18]
// 0063c0a8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0063c0ac  8d4e40               lea ecx, [esi + 0x40]
// 0063c0af  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063c0b7  c706309b8400         mov dword ptr [esi], 0x849b30
// 0063c0bd  895638               mov dword ptr [esi + 0x38], edx
// 0063c0c0  89463c               mov dword ptr [esi + 0x3c], eax
// 0063c0c3  e8f889f5ff           call 0x594ac0
// 0063c0c8  c644241001           mov byte ptr [esp + 0x10], 1
// 0063c0cd  e83e0cf3ff           call 0x56cd10
// 0063c0d2  6a10                 push 0x10
// 0063c0d4  894648               mov dword ptr [esi + 0x48], eax
// 0063c0d7  e844480600           call 0x6a0920
// 0063c0dc  83c404               add esp, 4
// 0063c0df  85c0                 test eax, eax
// 0063c0e1  740f                 je 0x63c0f2
// 0063c0e3  dd44242c             fld qword ptr [esp + 0x2c]
// 0063c0e7  c7001ce28200         mov dword ptr [eax], 0x82e21c
// 0063c0ed  dd5808               fstp qword ptr [eax + 8]
// 0063c0f0  eb02                 jmp 0x63c0f4
// 0063c0f2  33c0                 xor eax, eax
// 0063c0f4  89464c               mov dword ptr [esi + 0x4c], eax
// 0063c0f7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0063c0fb  8b542424             mov edx, dword ptr [esp + 0x24]
// 0063c0ff  51                   push ecx
// 0063c100  52                   push edx
// 0063c101  8bce                 mov ecx, esi
// 0063c103  c644241802           mov byte ptr [esp + 0x18], 2
// 0063c108  e893f2ffff           call 0x63b3a0
// 0063c10d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063c111  8bc6                 mov eax, esi
// 0063c113  5e                   pop esi
// 0063c114  64890d00000000       mov dword ptr fs:[0], ecx
// 0063c11b  83c410               add esp, 0x10
// 0063c11e  c22000               ret 0x20

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

extern "C" void* __stdcall getDescriptor(void*, void*);
extern "C" void* __cdecl getSingleton();

struct Base {
    unsigned char storage[52];
    Base(void*);
    virtual ~Base();
};

struct Value {
    void* data;
    unsigned int tag;
    Value();
    ~Value();
};

struct TimedObject {
    double lifetime;
    TimedObject(double);
    virtual ~TimedObject();
};

inline TimedObject::TimedObject(double t) : lifetime(t) {}

struct Owner {
    TimedObject* pointer;
    Owner(TimedObject*);
    ~Owner();
};

inline Owner::Owner(TimedObject* p) : pointer(p) {}

struct DebrisService : Base {
    void* first;
    void* second;
    Value value;
    void* singleton;
    Owner object;

    DebrisService(void*, void*, void*, unsigned int, unsigned int,
                  double, void*);
    virtual ~DebrisService();
    void configure(unsigned int, unsigned int);
};

DebrisService::DebrisService(
    void* a, void* b, void* descriptorArgument,
    unsigned int c, unsigned int d, double lifetime,
    void* descriptorContext)
    : Base(getDescriptor(descriptorArgument, descriptorContext)),
      first(a),
      second(b),
      value(),
      singleton(getSingleton()),
      object(new TimedObject(lifetime))
{
    configure(c, d);
}
