// from server: 100% by king_originala
// roc 2008-06 0063f7b0  unit: RBX::HammerTool  size: 265 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063f7b0
//
// 0063f7b0  64a100000000         mov eax, dword ptr fs:[0]
// 0063f7b6  6aff                 push -1
// 0063f7b8  6868917d00           push 0x7d9168
// 0063f7bd  50                   push eax
// 0063f7be  64892500000000       mov dword ptr fs:[0], esp
// 0063f7c5  83ec0c               sub esp, 0xc
// 0063f7c8  56                   push esi
// 0063f7c9  8bf1                 mov esi, ecx
// 0063f7cb  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 0063f7cf  0f84d0000000         je 0x63f8a5
// 0063f7d5  8d442408             lea eax, [esp + 8]
// 0063f7d9  57                   push edi
// 0063f7da  50                   push eax
// 0063f7db  e8f015f8ff           call 0x5c0dd0
// 0063f7e0  83c404               add esp, 4
// 0063f7e3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063f7e7  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0063f7ef  85c0                 test eax, eax
// 0063f7f1  7405                 je 0x63f7f8
// 0063f7f3  8d7814               lea edi, [eax + 0x14]
// 0063f7f6  eb02                 jmp 0x63f7fa
// 0063f7f8  33ff                 xor edi, edi
// 0063f7fa  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0063f7fd  e8ae94f5ff           call 0x598cb0
// 0063f802  8b0d08c09700         mov ecx, dword ptr [0x97c008]
// 0063f808  8b11                 mov edx, dword ptr [ecx]
// 0063f80a  83c024               add eax, 0x24
// 0063f80d  50                   push eax
// 0063f80e  8b420c               mov eax, dword ptr [edx + 0xc]
// 0063f811  57                   push edi
// 0063f812  ffd0                 call eax
// 0063f814  d9ee                 fldz 
// 0063f816  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063f81a  d95c2408             fstp dword ptr [esp + 8]
// 0063f81e  85c0                 test eax, eax
// 0063f820  7405                 je 0x63f827
// 0063f822  83c014               add eax, 0x14
// 0063f825  eb02                 jmp 0x63f829
// 0063f827  33c0                 xor eax, eax
// 0063f829  8b0d24c09700         mov ecx, dword ptr [0x97c024]
// 0063f82f  8b11                 mov edx, dword ptr [ecx]
// 0063f831  8d7c2408             lea edi, [esp + 8]
// 0063f835  57                   push edi
// 0063f836  50                   push eax
// 0063f837  8b420c               mov eax, dword ptr [edx + 0xc]
// 0063f83a  ffd0                 call eax
// 0063f83c  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0063f83f  51                   push ecx
// 0063f840  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0063f844  e8a7b0f1ff           call 0x55a8f0
// 0063f849  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0063f84c  6a00                 push 0
// 0063f84e  e89db0f1ff           call 0x55a8f0
// 0063f853  8b5618               mov edx, dword ptr [esi + 0x18]
// 0063f856  6a02                 push 2
// 0063f858  52                   push edx
// 0063f859  e8520ff4ff           call 0x5807b0
// 0063f85e  83c404               add esp, 4
// 0063f861  8bc8                 mov ecx, eax
// 0063f863  e8b8dff7ff           call 0x5bd820
// 0063f868  8b442410             mov eax, dword ptr [esp + 0x10]
// 0063f86c  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0063f874  5f                   pop edi
// 0063f875  85c0                 test eax, eax
// 0063f877  742c                 je 0x63f8a5
// 0063f879  8bf0                 mov esi, eax
// 0063f87b  83c004               add eax, 4
// 0063f87e  83c9ff               or ecx, 0xffffffff
// 0063f881  f00fc108             lock xadd dword ptr [eax], ecx
// 0063f885  751e                 jne 0x63f8a5
// 0063f887  8b16                 mov edx, dword ptr [esi]
// 0063f889  8b4204               mov eax, dword ptr [edx + 4]
// 0063f88c  8bce                 mov ecx, esi
// 0063f88e  ffd0                 call eax
// 0063f890  8d4e08               lea ecx, [esi + 8]
// 0063f893  83caff               or edx, 0xffffffff
// 0063f896  f00fc111             lock xadd dword ptr [ecx], edx
// 0063f89a  7509                 jne 0x63f8a5
// 0063f89c  8b06                 mov eax, dword ptr [esi]
// 0063f89e  8b5008               mov edx, dword ptr [eax + 8]
// 0063f8a1  8bce                 mov ecx, esi
// 0063f8a3  ffd2                 call edx
// 0063f8a5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0063f8a9  33c0                 xor eax, eax
// 0063f8ab  5e                   pop esi
// 0063f8ac  64890d00000000       mov dword ptr fs:[0], ecx
// 0063f8b3  83c418               add esp, 0x18
// 0063f8b6  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Counted {
    virtual ~Counted();
    virtual void dispose();
    virtual void destroy();
    volatile long use;
    volatile long weak;
};

struct Frame {
    char padding[0x24];
    char value;
};

struct Object {
    char padding[0x14];
    char key;
    Frame* getFrame();
    void setParent(Object*);
};

struct Shared {
    Object* px;
    Counted* pn;
    ~Shared();
};

inline Shared::~Shared()
{
    if (pn) {
        Counted* p = pn;
        if (_InterlockedDecrement(&p->use) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

Shared __cdecl makeObject();

struct Property {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void*, const void*);
};

extern Property* frameProperty;
extern Property* scalarProperty;

struct Service {
    void setMode(int);
};

Service* __cdecl findService(Object*);

struct HammerTool {
    char padding[0x18];
    Object* parent;
    Object* object;
    int activate(void*);
};

int HammerTool::activate(void*)
{
    if (object) {
        Shared temporary = makeObject();
        void* key = temporary.px ? &temporary.px->key : 0;
        Frame* frame = object->getFrame();
        frameProperty->set(key, &frame->value);

        float value = 0.0f;
        scalarProperty->set(temporary.px ? &temporary.px->key : 0, &value);

        temporary.px->setParent(parent);
        object->setParent(0);
        findService(parent)->setMode(2);
    }
    return 0;
}
