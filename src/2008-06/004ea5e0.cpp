// from server: 100% by king_originala
// roc 2008-06 004ea5e0  unit: RBX::ViewNew::Part  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ea5e0
//
// 004ea5e0  6aff                 push -1
// 004ea5e2  6838a87c00           push 0x7ca838
// 004ea5e7  64a100000000         mov eax, dword ptr fs:[0]
// 004ea5ed  50                   push eax
// 004ea5ee  64892500000000       mov dword ptr fs:[0], esp
// 004ea5f5  83ec40               sub esp, 0x40
// 004ea5f8  56                   push esi
// 004ea5f9  57                   push edi
// 004ea5fa  8bf1                 mov esi, ecx
// 004ea5fc  8b442458             mov eax, dword ptr [esp + 0x58]
// 004ea600  6a00                 push 0
// 004ea602  6830dd9200           push 0x92dd30
// 004ea607  687c909200           push 0x92907c
// 004ea60c  6a00                 push 0
// 004ea60e  50                   push eax
// 004ea60f  c744246400000000     mov dword ptr [esp + 0x64], 0
// 004ea617  e8aa711b00           call 0x6a17c6
// 004ea61c  8bf8                 mov edi, eax
// 004ea61e  83c414               add esp, 0x14
// 004ea621  85ff                 test edi, edi
// 004ea623  7473                 je 0x4ea698
// 004ea625  8d4c2408             lea ecx, [esp + 8]
// 004ea629  51                   push ecx
// 004ea62a  8d4c2424             lea ecx, [esp + 0x24]
// 004ea62e  89bed4000000         mov dword ptr [esi + 0xd4], edi
// 004ea634  c744240c206a4e00     mov dword ptr [esp + 0xc], 0x4e6a20
// 004ea63c  89742410             mov dword ptr [esp + 0x10], esi
// 004ea640  e8fbfeffff           call 0x4ea540
// 004ea645  6a0a                 push 0xa
// 004ea647  8d542424             lea edx, [esp + 0x24]
// 004ea64b  52                   push edx
// 004ea64c  8d4714               lea eax, [edi + 0x14]
// 004ea64f  50                   push eax
// 004ea650  8d44241c             lea eax, [esp + 0x1c]
// 004ea654  50                   push eax
// 004ea655  b9483f9700           mov ecx, 0x973f48
// 004ea65a  c644246001           mov byte ptr [esp + 0x60], 1
// 004ea65f  e81c10f4ff           call 0x42b680
// 004ea664  50                   push eax
// 004ea665  8d8ea8000000         lea ecx, [esi + 0xa8]
// 004ea66b  c644245402           mov byte ptr [esp + 0x54], 2
// 004ea670  e8cbae0a00           call 0x595540
// 004ea675  8d4c2410             lea ecx, [esp + 0x10]
// 004ea679  c644245001           mov byte ptr [esp + 0x50], 1
// 004ea67e  e8edac0a00           call 0x595370
// 004ea683  8d4c2420             lea ecx, [esp + 0x20]
// 004ea687  c644245000           mov byte ptr [esp + 0x50], 0
// 004ea68c  e87f50fbff           call 0x49f710
// 004ea691  8bce                 mov ecx, esi
// 004ea693  e8a8c0ffff           call 0x4e6740
// 004ea698  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 004ea69c  6a00                 push 0
// 004ea69e  68bc0d9400           push 0x940dbc
// 004ea6a3  687c909200           push 0x92907c
// 004ea6a8  6a00                 push 0
// 004ea6aa  51                   push ecx
// 004ea6ab  e816711b00           call 0x6a17c6
// 004ea6b0  83c414               add esp, 0x14
// 004ea6b3  85c0                 test eax, eax
// 004ea6b5  740e                 je 0x4ea6c5
// 004ea6b7  8bce                 mov ecx, esi
// 004ea6b9  e882c0ffff           call 0x4e6740
// 004ea6be  8bce                 mov ecx, esi
// 004ea6c0  e8ebc1ffff           call 0x4e68b0
// 004ea6c5  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 004ea6c9  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 004ea6d1  85f6                 test esi, esi
// 004ea6d3  742a                 je 0x4ea6ff
// 004ea6d5  8d5604               lea edx, [esi + 4]
// 004ea6d8  83c8ff               or eax, 0xffffffff
// 004ea6db  f00fc102             lock xadd dword ptr [edx], eax
// 004ea6df  751e                 jne 0x4ea6ff
// 004ea6e1  8b16                 mov edx, dword ptr [esi]
// 004ea6e3  8b4204               mov eax, dword ptr [edx + 4]
// 004ea6e6  8bce                 mov ecx, esi
// 004ea6e8  ffd0                 call eax
// 004ea6ea  8d4e08               lea ecx, [esi + 8]
// 004ea6ed  83caff               or edx, 0xffffffff
// 004ea6f0  f00fc111             lock xadd dword ptr [ecx], edx
// 004ea6f4  7509                 jne 0x4ea6ff
// 004ea6f6  8b06                 mov eax, dword ptr [esi]
// 004ea6f8  8b5008               mov edx, dword ptr [eax + 8]
// 004ea6fb  8bce                 mov ecx, esi
// 004ea6fd  ffd2                 call edx
// 004ea6ff  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004ea703  5f                   pop edi
// 004ea704  5e                   pop esi
// 004ea705  64890d00000000       mov dword ptr fs:[0], ecx
// 004ea70c  83c44c               add esp, 0x4c
// 004ea70f  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* pointer;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

extern char instanceType;
extern char decalType;
extern char shapeType;

extern "C" void* __cdecl castObject(
    void*, long, const void*, const void*, int);

struct S;
struct Callback;
struct Function;

struct Signal {
    char storage;
};

struct DecalPadding {
    char padding[20];
};

struct Decal : DecalPadding, Signal {
};

struct Result {
    unsigned int reserved;
    unsigned int first;
    unsigned int second;
    unsigned char flag;
    ~Result();
};

struct Connection {
    char storage[16];
    Connection& operator=(const Result&);
};

struct Manager {
    Result connect(void*, const Function&, int);
};

extern Manager manager;

struct S {
    char padding[168];
    Connection connection;
    char remaining[28];
    Decal* decal;

    void f(Shared);
    void callback();
    void update();
    void refresh();
};

struct Callback {
    void (S::*method)();
    S* object;
};

struct Function {
    char storage[40];
    Function(const Callback&);
    ~Function();
};

void S::f(Shared value)
{
    Decal* object = static_cast<Decal*>(castObject(
        value.pointer, 0, &instanceType, &decalType, 0));

    if (object) {
        decal = object;
        Callback callbackValue = { &S::callback, this };
        {
            Function function(callbackValue);
            connection = manager.connect(static_cast<Signal*>(object), function, 10);
        }
        update();
    }

    if (castObject(value.pointer, 0, &instanceType, &shapeType, 0)) {
        update();
        refresh();
    }
}
