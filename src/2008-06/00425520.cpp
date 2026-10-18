// from server: 67% by colin
// from server: 63% by king_originala
// roc 2008-06 00425520  unit: CRobloxTreeCtrlNode  size: 409 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00425520
//
// 00425520  6aff                 push -1
// 00425522  68b8eb7b00           push 0x7bebb8
// 00425527  64a100000000         mov eax, dword ptr fs:[0]
// 0042552d  50                   push eax
// 0042552e  64892500000000       mov dword ptr fs:[0], esp
// 00425535  83ec2c               sub esp, 0x2c
// 00425538  53                   push ebx
// 00425539  55                   push ebp
// 0042553a  56                   push esi
// 0042553b  57                   push edi
// 0042553c  8bf1                 mov esi, ecx
// 0042553e  6a04                 push 4
// 00425540  89742414             mov dword ptr [esp + 0x14], esi
// 00425544  e8d7b32700           call 0x6a0920
// 00425549  33c9                 xor ecx, ecx
// 0042554b  83c404               add esp, 4
// 0042554e  3bc1                 cmp eax, ecx
// 00425550  7408                 je 0x42555a
// 00425552  8d542424             lea edx, [esp + 0x24]
// 00425556  8910                 mov dword ptr [eax], edx
// 00425558  eb02                 jmp 0x42555c
// 0042555a  33c0                 xor eax, eax
// 0042555c  89442424             mov dword ptr [esp + 0x24], eax
// 00425560  894c2430             mov dword ptr [esp + 0x30], ecx
// 00425564  894c2434             mov dword ptr [esp + 0x34], ecx
// 00425568  894c2438             mov dword ptr [esp + 0x38], ecx
// 0042556c  8b7e58               mov edi, dword ptr [esi + 0x58]
// 0042556f  81c7c4000000         add edi, 0xc4
// 00425575  bb01000000           mov ebx, 1
// 0042557a  8bcf                 mov ecx, edi
// 0042557c  895c2444             mov dword ptr [esp + 0x44], ebx
// 00425580  897c2414             mov dword ptr [esp + 0x14], edi
// 00425584  e807db1300           call 0x563090
// 00425589  885c2418             mov byte ptr [esp + 0x18], bl
// 0042558d  8b564c               mov edx, dword ptr [esi + 0x4c]
// 00425590  8b6e34               mov ebp, dword ptr [esi + 0x34]
// 00425593  83c634               add esi, 0x34
// 00425596  8d4c2424             lea ecx, [esp + 0x24]
// 0042559a  51                   push ecx
// 0042559b  b8a0134200           mov eax, 0x4213a0
// 004255a0  50                   push eax
// 004255a1  8bda                 mov ebx, edx
// 004255a3  8b1b                 mov ebx, dword ptr [ebx]
// 004255a5  52                   push edx
// 004255a6  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004255aa  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004255ae  55                   push ebp
// 004255af  50                   push eax
// 004255b0  8bdd                 mov ebx, ebp
// 004255b2  8d4c2430             lea ecx, [esp + 0x30]
// 004255b6  53                   push ebx
// 004255b7  51                   push ecx
// 004255b8  c644246002           mov byte ptr [esp + 0x60], 2
// 004255bd  e84ee5ffff           call 0x423b10
// 004255c2  8b5618               mov edx, dword ptr [esi + 0x18]
// 004255c5  8b4204               mov eax, dword ptr [edx + 4]
// 004255c8  83c41c               add esp, 0x1c
// 004255cb  50                   push eax
// 004255cc  8bce                 mov ecx, esi
// 004255ce  e87d3a2400           call 0x669050
// 004255d3  8b4618               mov eax, dword ptr [esi + 0x18]
// 004255d6  894004               mov dword ptr [eax + 4], eax
// 004255d9  8b4618               mov eax, dword ptr [esi + 0x18]
// 004255dc  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 004255e3  8900                 mov dword ptr [eax], eax
// 004255e5  8b7618               mov esi, dword ptr [esi + 0x18]
// 004255e8  8bcf                 mov ecx, edi
// 004255ea  897608               mov dword ptr [esi + 8], esi
// 004255ed  c644244401           mov byte ptr [esp + 0x44], 1
// 004255f2  e8e9da1300           call 0x5630e0
// 004255f7  8b742430             mov esi, dword ptr [esp + 0x30]
// 004255fb  8b442434             mov eax, dword ptr [esp + 0x34]
// 004255ff  8b2d90288000         mov ebp, dword ptr [0x802890]
// 00425605  3bf0                 cmp esi, eax
// 00425607  7606                 jbe 0x42560f
// 00425609  ffd5                 call ebp
// 0042560b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0042560f  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00425613  8bd8                 mov ebx, eax
// 00425615  39442430             cmp dword ptr [esp + 0x30], eax
// 00425619  7602                 jbe 0x42561d
// 0042561b  ffd5                 call ebp
// 0042561d  85ff                 test edi, edi
// 0042561f  7406                 je 0x425627
// 00425621  3b7c2424             cmp edi, dword ptr [esp + 0x24]
// 00425625  7402                 je 0x425629
// 00425627  ffd5                 call ebp
// 00425629  3bf3                 cmp esi, ebx
// 0042562b  7450                 je 0x42567d
// 0042562d  85ff                 test edi, edi
// 0042562f  7544                 jne 0x425675
// 00425631  ffd5                 call ebp
// 00425633  33c0                 xor eax, eax
// 00425635  3b7010               cmp esi, dword ptr [eax + 0x10]
// 00425638  7202                 jb 0x42563c
// 0042563a  ffd5                 call ebp
// 0042563c  8b0e                 mov ecx, dword ptr [esi]
// 0042563e  8b9180000000         mov edx, dword ptr [ecx + 0x80]
// 00425644  8b442410             mov eax, dword ptr [esp + 0x10]
// 00425648  8b4858               mov ecx, dword ptr [eax + 0x58]
// 0042564b  52                   push edx
// 0042564c  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0042564f  6a00                 push 0
// 00425651  6801110000           push 0x1101
// 00425656  52                   push edx
// 00425657  ff15142e8000         call dword ptr [0x802e14]
// 0042565d  85ff                 test edi, edi
// 0042565f  7518                 jne 0x425679
// 00425661  ffd5                 call ebp
// 00425663  33c0                 xor eax, eax
// 00425665  3b7010               cmp esi, dword ptr [eax + 0x10]
// 00425668  7202                 jb 0x42566c
// 0042566a  ffd5                 call ebp
// 0042566c  8b442434             mov eax, dword ptr [esp + 0x34]
// 00425670  83c604               add esi, 4
// 00425673  eb9e                 jmp 0x425613
// 00425675  8b07                 mov eax, dword ptr [edi]
// 00425677  ebbc                 jmp 0x425635
// 00425679  8b07                 mov eax, dword ptr [edi]
// 0042567b  ebe8                 jmp 0x425665
// 0042567d  8b442430             mov eax, dword ptr [esp + 0x30]
// 00425681  5f                   pop edi
// 00425682  5e                   pop esi
// 00425683  5d                   pop ebp
// 00425684  5b                   pop ebx
// 00425685  85c0                 test eax, eax
// 00425687  7409                 je 0x425692
// 00425689  50                   push eax
// 0042568a  e8ebaf2700           call 0x6a067a
// 0042568f  83c404               add esp, 4
// 00425692  33c0                 xor eax, eax
// 00425694  89442420             mov dword ptr [esp + 0x20], eax
// 00425698  89442424             mov dword ptr [esp + 0x24], eax
// 0042569c  89442428             mov dword ptr [esp + 0x28], eax
// 004256a0  8b442414             mov eax, dword ptr [esp + 0x14]
// 004256a4  50                   push eax
// 004256a5  e8d0af2700           call 0x6a067a
// 004256aa  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004256ae  64890d00000000       mov dword ptr fs:[0], ecx
// 004256b5  83c43c               add esp, 0x3c
// 004256b8  c3                   ret 

typedef unsigned int size_t;
void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

extern "C" {
extern void (__cdecl *_invalid_parameter_noinfo)();
extern long (__stdcall *SendMessageA)(void*, unsigned int, unsigned int, long);
}

typedef void (__cdecl *ErrorFunction)();

struct Item {
    char padding[0x80];
    long handle;
};

struct Vector;

struct Proxy {
    Vector* container;
    Proxy(Vector*);
};

struct ProxyOwner {
    Proxy* pointer;
    unsigned int reserved[2];
    ProxyOwner(Vector*);
    __declspec(dllimport) ~ProxyOwner() throw();
};

struct VectorIterator {
    Proxy* proxy;
    Item** current;
    bool different(const VectorIterator&, ErrorFunction) const;
    Item* get(ErrorFunction) const;
    void advance(ErrorFunction);
};

struct Vector : ProxyOwner {
    Item** first;
    Item** last;
    Item** limit;
    Vector();
    ~Vector();
    VectorIterator begin(ErrorFunction);
    VectorIterator end(ErrorFunction);
};

struct TreeNode {
    TreeNode* left;
    TreeNode* parent;
    TreeNode* right;
};

struct TreeIterator {
    void* proxy;
    TreeNode* node;
};

struct Tree {
    void* proxy;
    char padding[0x14];
    TreeNode* head;
    unsigned int size;
    void erase(TreeNode*);
    void clear();
};

struct Lock {
    void* handle;
    bool criticalSection;
    unsigned int count;
    void lock();
    void unlock();
};

struct Guard {
    Lock* mutex;
    bool locked;
    Guard(Lock*);
    ~Guard();
};

struct Owner {
    char padding[0x20];
    void* window;
    char reserved[0xA0];
    Lock mutex;
};

struct S {
    char padding[0x34];
    Tree tree;
    char reserved[4];
    Owner* owner;
    void f();
};

void __cdecl callback();
TreeIterator* __cdecl collect(
    TreeIterator*, TreeIterator, TreeIterator, void (__cdecl*)(), Vector*);

__forceinline Proxy::Proxy(Vector* p)
{
    container = p;
}

__forceinline ProxyOwner::ProxyOwner(Vector* p)
{
    pointer = new Proxy(p);
}

__forceinline Vector::Vector() : ProxyOwner(this)
{
    first = 0;
    last = 0;
    limit = 0;
}

__forceinline Vector::~Vector()
{
    if (first)
        operator delete(first);
    first = 0;
    last = 0;
    limit = 0;
}

__forceinline VectorIterator Vector::begin(ErrorFunction error)
{
    VectorIterator result;
    result.current = first;
    if (first > last)
        error();
    result.proxy = pointer;
    return result;
}

__forceinline VectorIterator Vector::end(ErrorFunction error)
{
    VectorIterator result;
    result.current = last;
    if (first > last)
        error();
    result.proxy = pointer;
    return result;
}

__forceinline bool VectorIterator::different(
    const VectorIterator& other, ErrorFunction error) const
{
    if (!proxy || proxy != other.proxy)
        error();
    return current != other.current;
}

__forceinline Item* VectorIterator::get(ErrorFunction error) const
{
    if (!proxy)
        error();
    Vector* container = proxy ? proxy->container : 0;
    if (current >= container->last)
        error();
    return *current;
}

__forceinline void VectorIterator::advance(ErrorFunction error)
{
    if (!proxy)
        error();
    Vector* container = proxy ? proxy->container : 0;
    if (current >= container->last)
        error();
    ++current;
}

__forceinline Guard::Guard(Lock* p)
{
    mutex = p;
    mutex->lock();
    locked = true;
}

__forceinline Guard::~Guard()
{
    if (locked)
        mutex->unlock();
}

__forceinline void Tree::clear()
{
    erase(head->parent);
    head->parent = head;
    size = 0;
    head->left = head;
    head->right = head;
}

void S::f()
{
    Vector values;
    {
        Guard guard(&owner->mutex);
        Tree* t = &tree;
        TreeIterator first;
        first.proxy = t->proxy;
        first.node = t->head->left;
        TreeIterator last;
        last.proxy = t->proxy;
        last.node = t->head;
        TreeIterator result;
        collect(&result, first, last, callback, &values);
        t->clear();
    }

    ErrorFunction error = _invalid_parameter_noinfo;
    for (VectorIterator i = values.begin(error);
         i.different(values.end(error), error); i.advance(error))
        SendMessageA(owner->window, 0x1101, 0, i.get(error)->handle);
}
