// from server: 100% by colin
// roc 2008-06 00412800  unit: CChatPrompt  size: 446 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00412800
//
// 00412800  6aff                 push -1
// 00412802  6898d77b00           push 0x7bd798
// 00412807  64a100000000         mov eax, dword ptr fs:[0]
// 0041280d  50                   push eax
// 0041280e  64892500000000       mov dword ptr fs:[0], esp
// 00412815  83ec1c               sub esp, 0x1c
// 00412818  53                   push ebx
// 00412819  55                   push ebp
// 0041281a  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0041281e  56                   push esi
// 0041281f  57                   push edi
// 00412820  8d442410             lea eax, [esp + 0x10]
// 00412824  55                   push ebp
// 00412825  50                   push eax
// 00412826  8bf1                 mov esi, ecx
// 00412828  e813622000           call 0x618a40
// 0041282d  83c408               add esp, 8
// 00412830  8b08                 mov ecx, dword ptr [eax]
// 00412832  83c004               add eax, 4
// 00412835  898e9c000000         mov dword ptr [esi + 0x9c], ecx
// 0041283b  50                   push eax
// 0041283c  8d8ea0000000         lea ecx, [esi + 0xa0]
// 00412842  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0041284a  e861fdfeff           call 0x4025b0
// 0041284f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00412853  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0041285b  85c0                 test eax, eax
// 0041285d  742c                 je 0x41288b
// 0041285f  8bf8                 mov edi, eax
// 00412861  83c004               add eax, 4
// 00412864  83caff               or edx, 0xffffffff
// 00412867  f00fc110             lock xadd dword ptr [eax], edx
// 0041286b  751e                 jne 0x41288b
// 0041286d  8b07                 mov eax, dword ptr [edi]
// 0041286f  8b5004               mov edx, dword ptr [eax + 4]
// 00412872  8bcf                 mov ecx, edi
// 00412874  ffd2                 call edx
// 00412876  8d4708               lea eax, [edi + 8]
// 00412879  83c9ff               or ecx, 0xffffffff
// 0041287c  f00fc108             lock xadd dword ptr [eax], ecx
// 00412880  7509                 jne 0x41288b
// 00412882  8b17                 mov edx, dword ptr [edi]
// 00412884  8b4208               mov eax, dword ptr [edx + 8]
// 00412887  8bcf                 mov ecx, edi
// 00412889  ffd0                 call eax
// 0041288b  8b969c000000         mov edx, dword ptr [esi + 0x9c]
// 00412891  83ec08               sub esp, 8
// 00412894  8bcc                 mov ecx, esp
// 00412896  8911                 mov dword ptr [ecx], edx
// 00412898  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0041289e  89642444             mov dword ptr [esp + 0x44], esp
// 004128a2  894104               mov dword ptr [ecx + 4], eax
// 004128a5  bb01000000           mov ebx, 1
// 004128aa  85c0                 test eax, eax
// 004128ac  7409                 je 0x4128b7
// 004128ae  83c004               add eax, 4
// 004128b1  8bcb                 mov ecx, ebx
// 004128b3  f00fc108             lock xadd dword ptr [eax], ecx
// 004128b7  8d4c2428             lea ecx, [esp + 0x28]
// 004128bb  e880f2ffff           call 0x411b40
// 004128c0  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 004128c6  8dbe8c000000         lea edi, [esi + 0x8c]
// 004128cc  895c2434             mov dword ptr [esp + 0x34], ebx
// 004128d0  85c0                 test eax, eax
// 004128d2  741a                 je 0x4128ee
// 004128d4  c7804401000000000000 mov dword ptr [eax + 0x144], 0
// 004128de  8b0f                 mov ecx, dword ptr [edi]
// 004128e0  6a00                 push 0
// 004128e2  e809801400           call 0x55a8f0
// 004128e7  8bcf                 mov ecx, edi
// 004128e9  e892450400           call 0x456e80
// 004128ee  8b542440             mov edx, dword ptr [esp + 0x40]
// 004128f2  899688000000         mov dword ptr [esi + 0x88], edx
// 004128f8  85ed                 test ebp, ebp
// 004128fa  7409                 je 0x412905
// 004128fc  8bcd                 mov ecx, ebp
// 004128fe  e80dfeffff           call 0x412710
// 00412903  eb02                 jmp 0x412907
// 00412905  33c0                 xor eax, eax
// 00412907  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 0041290d  85ed                 test ebp, ebp
// 0041290f  746e                 je 0x41297f
// 00412911  8d442418             lea eax, [esp + 0x18]
// 00412915  50                   push eax
// 00412916  e835f6ffff           call 0x411f50
// 0041291b  83c404               add esp, 4
// 0041291e  8b08                 mov ecx, dword ptr [eax]
// 00412920  83c004               add eax, 4
// 00412923  890f                 mov dword ptr [edi], ecx
// 00412925  50                   push eax
// 00412926  8d4f04               lea ecx, [edi + 4]
// 00412929  c644243802           mov byte ptr [esp + 0x38], 2
// 0041292e  e87dfcfeff           call 0x4025b0
// 00412933  885c2434             mov byte ptr [esp + 0x34], bl
// 00412937  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0041293b  85db                 test ebx, ebx
// 0041293d  742a                 je 0x412969
// 0041293f  8d5304               lea edx, [ebx + 4]
// 00412942  83c8ff               or eax, 0xffffffff
// 00412945  f00fc102             lock xadd dword ptr [edx], eax
// 00412949  751e                 jne 0x412969
// 0041294b  8b13                 mov edx, dword ptr [ebx]
// 0041294d  8b4204               mov eax, dword ptr [edx + 4]
// 00412950  8bcb                 mov ecx, ebx
// 00412952  ffd0                 call eax
// 00412954  8d4b08               lea ecx, [ebx + 8]
// 00412957  83caff               or edx, 0xffffffff
// 0041295a  f00fc111             lock xadd dword ptr [ecx], edx
// 0041295e  7509                 jne 0x412969
// 00412960  8b03                 mov eax, dword ptr [ebx]
// 00412962  8b5008               mov edx, dword ptr [eax + 8]
// 00412965  8bcb                 mov ecx, ebx
// 00412967  ffd2                 call edx
// 00412969  8b07                 mov eax, dword ptr [edi]
// 0041296b  89b044010000         mov dword ptr [eax + 0x144], esi
// 00412971  8b8524020000         mov eax, dword ptr [ebp + 0x224]
// 00412977  8b0f                 mov ecx, dword ptr [edi]
// 00412979  50                   push eax
// 0041297a  e8717f1400           call 0x55a8f0
// 0041297f  837e2000             cmp dword ptr [esi + 0x20], 0
// 00412983  7413                 je 0x412998
// 00412985  33c0                 xor eax, eax
// 00412987  3986a4000000         cmp dword ptr [esi + 0xa4], eax
// 0041298d  8bce                 mov ecx, esi
// 0041298f  0f95c0               setne al
// 00412992  50                   push eax
// 00412993  e87ee32800           call 0x6a0d16
// 00412998  8d4c2420             lea ecx, [esp + 0x20]
// 0041299c  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 004129a4  e8174a1600           call 0x5773c0
// 004129a9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004129ad  5f                   pop edi
// 004129ae  5e                   pop esi
// 004129af  5d                   pop ebp
// 004129b0  64890d00000000       mov dword ptr fs:[0], ecx
// 004129b7  5b                   pop ebx
// 004129b8  83c428               add esp, 0x28
// 004129bb  c20800               ret 8

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

struct Reference {
    Control* control;
    Reference(const Reference&);
    ~Reference();
    Reference& operator=(const Reference&);
};

__forceinline Reference::Reference(const Reference& other)
    : control(other.control) {
    if (control) {
        volatile long* c = &control->strong;
        _InterlockedExchangeAdd(c, 1);
    }
}

__forceinline Reference::~Reference() {
    if (control) {
        Control* p = control;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct CChatPrompt;

struct Object {
    char padding[0x144];
    CChatPrompt* owner;
    void setValue(int);
};

struct Pair {
    Object* pointer;
    Reference reference;
};

struct Parent {
    char padding[0x224];
    int value;
    int query();
};

struct Guard {
    char storage[12];
    Guard(Pair);
    ~Guard();
};

Pair __cdecl lookup(Parent*);
Pair __cdecl createObject();

struct ObjectPair {
    Object* pointer;
    Reference reference;
    ObjectPair& operator=(const Pair&);
    void reset();
};

__forceinline ObjectPair& ObjectPair::operator=(const Pair& other) {
    pointer = other.pointer;
    reference = other.reference;
    return *this;
}

struct CChatPrompt {
    char padding0[0x20];
    int active;
    char padding1[0x64];
    int selection;
    ObjectPair object;
    char padding2[8];
    Pair context;
    int result;
    void update(Parent*, int);
    void setEnabled(int);
};

void CChatPrompt::update(Parent* parent, int selected) {
    context = lookup(parent);
    Guard guard(context);

    if (object.pointer) {
        object.pointer->owner = 0;
        object.pointer->setValue(0);
        object.reset();
    }

    selection = selected;
    result = parent ? parent->query() : 0;

    if (parent) {
        object = createObject();
        object.pointer->owner = this;
        int v = parent->value;
        object.pointer->setValue(v);
    }

    if (active) {
        int flag = (result != 0);
        setEnabled(flag);
    }
}
