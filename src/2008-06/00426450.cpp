// from server: 58% by colin
// from server: 56% by king_originala
// roc 2008-06 00426450  unit: CRobloxTreeCtrlNode  size: 387 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00426450
//
// 00426450  55                   push ebp
// 00426451  8bec                 mov ebp, esp
// 00426453  83e4f8               and esp, 0xfffffff8
// 00426456  6aff                 push -1
// 00426458  6860ed7b00           push 0x7bed60
// 0042645d  64a100000000         mov eax, dword ptr fs:[0]
// 00426463  50                   push eax
// 00426464  64892500000000       mov dword ptr fs:[0], esp
// 0042646b  83ec34               sub esp, 0x34
// 0042646e  53                   push ebx
// 0042646f  55                   push ebp
// 00426470  56                   push esi
// 00426471  33db                 xor ebx, ebx
// 00426473  57                   push edi
// 00426474  894c2410             mov dword ptr [esp + 0x10], ecx
// 00426478  895c2414             mov dword ptr [esp + 0x14], ebx
// 0042647c  8d7960               lea edi, [ecx + 0x60]
// 0042647f  eb06                 jmp 0x426487
// 00426481  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00426485  33db                 xor ebx, ebx
// 00426487  895c2418             mov dword ptr [esp + 0x18], ebx
// 0042648b  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0042648f  8b7158               mov esi, dword ptr [ecx + 0x58]
// 00426492  81c6c4000000         add esi, 0xc4
// 00426498  8bce                 mov ecx, esi
// 0042649a  895c244c             mov dword ptr [esp + 0x4c], ebx
// 0042649e  89742428             mov dword ptr [esp + 0x28], esi
// 004264a2  e8e9cb1300           call 0x563090
// 004264a7  c644242c01           mov byte ptr [esp + 0x2c], 1
// 004264ac  8b4718               mov eax, dword ptr [edi + 0x18]
// 004264af  8b2f                 mov ebp, dword ptr [edi]
// 004264b1  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 004264b4  8b00                 mov eax, dword ptr [eax]
// 004264b6  894c2434             mov dword ptr [esp + 0x34], ecx
// 004264ba  c644244c01           mov byte ptr [esp + 0x4c], 1
// 004264bf  89442424             mov dword ptr [esp + 0x24], eax
// 004264c3  8bcd                 mov ecx, ebp
// 004264c5  85ed                 test ebp, ebp
// 004264c7  7404                 je 0x4264cd
// 004264c9  3be9                 cmp ebp, ecx
// 004264cb  740a                 je 0x4264d7
// 004264cd  ff1590288000         call dword ptr [0x802890]
// 004264d3  8b442424             mov eax, dword ptr [esp + 0x24]
// 004264d7  3b442434             cmp eax, dword ptr [esp + 0x34]
// 004264db  0f84d3000000         je 0x4265b4
// 004264e1  85ed                 test ebp, ebp
// 004264e3  0f85c3000000         jne 0x4265ac
// 004264e9  ff1590288000         call dword ptr [0x802890]
// 004264ef  8b442424             mov eax, dword ptr [esp + 0x24]
// 004264f3  33c9                 xor ecx, ecx
// 004264f5  3b4118               cmp eax, dword ptr [ecx + 0x18]
// 004264f8  750a                 jne 0x426504
// 004264fa  ff1590288000         call dword ptr [0x802890]
// 00426500  8b442424             mov eax, dword ptr [esp + 0x24]
// 00426504  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00426507  8b500c               mov edx, dword ptr [eax + 0xc]
// 0042650a  89542418             mov dword ptr [esp + 0x18], edx
// 0042650e  85c9                 test ecx, ecx
// 00426510  7412                 je 0x426524
// 00426512  8d5104               lea edx, [ecx + 4]
// 00426515  bb01000000           mov ebx, 1
// 0042651a  f00fc11a             lock xadd dword ptr [edx], ebx
// 0042651e  8bd9                 mov ebx, ecx
// 00426520  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00426524  50                   push eax
// 00426525  55                   push ebp
// 00426526  8d442440             lea eax, [esp + 0x40]
// 0042652a  50                   push eax
// 0042652b  8bcf                 mov ecx, edi
// 0042652d  e8fedbffff           call 0x424130
// 00426532  8bce                 mov ecx, esi
// 00426534  c644244c00           mov byte ptr [esp + 0x4c], 0
// 00426539  e8a2cb1300           call 0x5630e0
// 0042653e  8d4c2418             lea ecx, [esp + 0x18]
// 00426542  51                   push ecx
// 00426543  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00426547  c644243000           mov byte ptr [esp + 0x30], 0
// 0042654c  e8affbffff           call 0x426100
// 00426551  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 00426559  85db                 test ebx, ebx
// 0042655b  742a                 je 0x426587
// 0042655d  8d5304               lea edx, [ebx + 4]
// 00426560  83c8ff               or eax, 0xffffffff
// 00426563  f00fc102             lock xadd dword ptr [edx], eax
// 00426567  751e                 jne 0x426587
// 00426569  8b13                 mov edx, dword ptr [ebx]
// 0042656b  8b4204               mov eax, dword ptr [edx + 4]
// 0042656e  8bcb                 mov ecx, ebx
// 00426570  ffd0                 call eax
// 00426572  8d4b08               lea ecx, [ebx + 8]
// 00426575  83caff               or edx, 0xffffffff
// 00426578  f00fc111             lock xadd dword ptr [ecx], edx
// 0042657c  7509                 jne 0x426587
// 0042657e  8b03                 mov eax, dword ptr [ebx]
// 00426580  8b5008               mov edx, dword ptr [eax + 8]
// 00426583  8bcb                 mov ecx, ebx
// 00426585  ffd2                 call edx
// 00426587  8b442414             mov eax, dword ptr [esp + 0x14]
// 0042658b  40                   inc eax
// 0042658c  83f80a               cmp eax, 0xa
// 0042658f  89442414             mov dword ptr [esp + 0x14], eax
// 00426593  0f8ce8feffff         jl 0x426481
// 00426599  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0042659d  64890d00000000       mov dword ptr fs:[0], ecx
// 004265a4  5f                   pop edi
// 004265a5  5e                   pop esi
// 004265a6  5d                   pop ebp
// 004265a7  5b                   pop ebx
// 004265a8  8be5                 mov esp, ebp
// 004265aa  5d                   pop ebp
// 004265ab  c3                   ret 
// 004265ac  8b4d00               mov ecx, dword ptr [ebp]
// 004265af  e941ffffff           jmp 0x4264f5
// 004265b4  8bce                 mov ecx, esi
// 004265b6  c644244c00           mov byte ptr [esp + 0x4c], 0
// 004265bb  e820cb1300           call 0x5630e0
// 004265c0  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004265c4  5f                   pop edi
// 004265c5  64890d00000000       mov dword ptr fs:[0], ecx
// 004265cc  5e                   pop esi
// 004265cd  5d                   pop ebp
// 004265ce  5b                   pop ebx
// 004265cf  8be5                 mov esp, ebp
// 004265d1  5d                   pop ebp
// 004265d2  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct RefCount {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Handle {
    void* pointer;
    RefCount* count;
    Handle();
    ~Handle();
};

struct Mutex {
    void* handle;
    bool criticalSection;
    unsigned int count;
    void lock();
    void unlock();
};

struct Lock {
    Mutex* mutex;
    bool locked;
    Lock(Mutex* p);
    __declspec(dllimport) ~Lock() throw();
    void release();
};

struct List;
struct Owner {
    List* container;
};

struct Node {
    Node* next;
    char padding[8];
    void* pointer;
    RefCount* count;
};

struct Iterator {
    Owner* owner;
    Node* node;
    bool equal(const Iterator& other) const;
    const Handle& get() const;
};

struct List {
    Owner* owner;
    char padding[20];
    Node* head;
    Iterator erase(Iterator position);
};

struct Context {
    char padding[0xc4];
    Mutex mutex;
};

struct S {
    char padding[0x58];
    Context* context;
    char reserved[4];
    List list;
    void process(const Handle* handle);
    void f();
};

__forceinline Handle::Handle() : pointer(0), count(0)
{
}

__forceinline Handle::~Handle()
{
    RefCount* p = count;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

__forceinline Lock::Lock(Mutex* p) : mutex(p)
{
    mutex->lock();
    locked = true;
}

__forceinline void Lock::release()
{
    locked = false;
    mutex->unlock();
}

__forceinline bool Iterator::equal(const Iterator& other) const
{
    if (!owner || owner != other.owner)
        _invalid_parameter_noinfo();
    return node == other.node;
}

__forceinline const Handle& Iterator::get() const
{
    if (!owner)
        _invalid_parameter_noinfo();
    List* container = owner ? owner->container : 0;
    if (node == container->head)
        _invalid_parameter_noinfo();
    return *reinterpret_cast<const Handle*>(&node->pointer);
}

void S::f()
{
    List* items = &list;
    for (int i = 0; i < 10; ++i) {
        Handle handle;
        Lock lock(&context->mutex);

        Iterator position;
        position.owner = items->owner;
        position.node = items->head->next;

        Iterator end;
        end.owner = items->owner;
        end.node = items->head;

        if (position.equal(end))
            return;

        const Handle& value = position.get();
        handle.pointer = value.pointer;
        RefCount* p = value.count;
        if (p) {
            _InterlockedExchangeAdd(&p->strong, 1);
            handle.count = p;
        }

        items->erase(position);
        lock.release();
        process(&handle);
    }
}
