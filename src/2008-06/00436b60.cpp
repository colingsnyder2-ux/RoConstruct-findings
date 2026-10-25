// from server: 100% by king_originala
// roc 2008-06 00436b60  unit: COutputView  size: 378 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00436b60
//
// 00436b60  6aff                 push -1
// 00436b62  68c0017c00           push 0x7c01c0
// 00436b67  64a100000000         mov eax, dword ptr fs:[0]
// 00436b6d  50                   push eax
// 00436b6e  64892500000000       mov dword ptr fs:[0], esp
// 00436b75  83ec18               sub esp, 0x18
// 00436b78  55                   push ebp
// 00436b79  56                   push esi
// 00436b7a  8b742430             mov esi, dword ptr [esp + 0x30]
// 00436b7e  33ed                 xor ebp, ebp
// 00436b80  57                   push edi
// 00436b81  8bf9                 mov edi, ecx
// 00436b83  896c240c             mov dword ptr [esp + 0xc], ebp
// 00436b87  3bf5                 cmp esi, ebp
// 00436b89  7411                 je 0x436b9c
// 00436b8b  8b06                 mov eax, dword ptr [esi]
// 00436b8d  8b10                 mov edx, dword ptr [eax]
// 00436b8f  8d4c240c             lea ecx, [esp + 0xc]
// 00436b93  51                   push ecx
// 00436b94  68982f8100           push 0x812f98
// 00436b99  56                   push esi
// 00436b9a  ffd2                 call edx
// 00436b9c  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00436ba0  896c2410             mov dword ptr [esp + 0x10], ebp
// 00436ba4  8b871c010000         mov eax, dword ptr [edi + 0x11c]
// 00436baa  8b08                 mov ecx, dword ptr [eax]
// 00436bac  8d542410             lea edx, [esp + 0x10]
// 00436bb0  52                   push edx
// 00436bb1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00436bb5  52                   push edx
// 00436bb6  50                   push eax
// 00436bb7  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 00436bba  c644243801           mov byte ptr [esp + 0x38], 1
// 00436bbf  ffd0                 call eax
// 00436bc1  85c0                 test eax, eax
// 00436bc3  0f85d0000000         jne 0x436c99
// 00436bc9  b902000000           mov ecx, 2
// 00436bce  33d2                 xor edx, edx
// 00436bd0  66894c2414           mov word ptr [esp + 0x14], cx
// 00436bd5  668954241c           mov word ptr [esp + 0x1c], dx
// 00436bda  8b542414             mov edx, dword ptr [esp + 0x14]
// 00436bde  83ec10               sub esp, 0x10
// 00436be1  8bc4                 mov eax, esp
// 00436be3  8910                 mov dword ptr [eax], edx
// 00436be5  8b542428             mov edx, dword ptr [esp + 0x28]
// 00436be9  895004               mov dword ptr [eax + 4], edx
// 00436bec  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00436bf0  895008               mov dword ptr [eax + 8], edx
// 00436bf3  8b542430             mov edx, dword ptr [esp + 0x30]
// 00436bf7  884c243c             mov byte ptr [esp + 0x3c], cl
// 00436bfb  8b0e                 mov ecx, dword ptr [esi]
// 00436bfd  89500c               mov dword ptr [eax + 0xc], edx
// 00436c00  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 00436c06  56                   push esi
// 00436c07  ffd0                 call eax
// 00436c09  8d4c2414             lea ecx, [esp + 0x14]
// 00436c0d  51                   push ecx
// 00436c0e  c644243001           mov byte ptr [esp + 0x30], 1
// 00436c13  ff151c298000         call dword ptr [0x80291c]
// 00436c19  8d54240c             lea edx, [esp + 0xc]
// 00436c1d  8db7f8000000         lea esi, [edi + 0xf8]
// 00436c23  52                   push edx
// 00436c24  8bce                 mov ecx, esi
// 00436c26  e885fdffff           call 0x4369b0
// 00436c2b  81bf14010000fa000000 cmp dword ptr [edi + 0x114], 0xfa
// 00436c35  7662                 jbe 0x436c99
// 00436c37  896c2434             mov dword ptr [esp + 0x34], ebp
// 00436c3b  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 00436c3e  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00436c41  8bbf1c010000         mov edi, dword ptr [edi + 0x11c]
// 00436c47  03c5                 add eax, ebp
// 00436c49  c644242c03           mov byte ptr [esp + 0x2c], 3
// 00436c4e  3be8                 cmp ebp, eax
// 00436c50  7606                 jbe 0x436c58
// 00436c52  ff1590288000         call dword ptr [0x802890]
// 00436c58  8b0e                 mov ecx, dword ptr [esi]
// 00436c5a  894c2414             mov dword ptr [esp + 0x14], ecx
// 00436c5e  8d4c2414             lea ecx, [esp + 0x14]
// 00436c62  896c2418             mov dword ptr [esp + 0x18], ebp
// 00436c66  e8b5f7ffff           call 0x436420
// 00436c6b  8b00                 mov eax, dword ptr [eax]
// 00436c6d  8b17                 mov edx, dword ptr [edi]
// 00436c6f  8b5234               mov edx, dword ptr [edx + 0x34]
// 00436c72  8d4c2434             lea ecx, [esp + 0x34]
// 00436c76  51                   push ecx
// 00436c77  50                   push eax
// 00436c78  57                   push edi
// 00436c79  ffd2                 call edx
// 00436c7b  8bce                 mov ecx, esi
// 00436c7d  e8eef9ffff           call 0x436670
// 00436c82  8b442434             mov eax, dword ptr [esp + 0x34]
// 00436c86  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00436c8b  85c0                 test eax, eax
// 00436c8d  7408                 je 0x436c97
// 00436c8f  8b08                 mov ecx, dword ptr [eax]
// 00436c91  8b5108               mov edx, dword ptr [ecx + 8]
// 00436c94  50                   push eax
// 00436c95  ffd2                 call edx
// 00436c97  33ed                 xor ebp, ebp
// 00436c99  8b442410             mov eax, dword ptr [esp + 0x10]
// 00436c9d  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00436ca2  3bc5                 cmp eax, ebp
// 00436ca4  7408                 je 0x436cae
// 00436ca6  8b08                 mov ecx, dword ptr [eax]
// 00436ca8  8b5108               mov edx, dword ptr [ecx + 8]
// 00436cab  50                   push eax
// 00436cac  ffd2                 call edx
// 00436cae  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00436cb2  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00436cba  3bc5                 cmp eax, ebp
// 00436cbc  7408                 je 0x436cc6
// 00436cbe  8b08                 mov ecx, dword ptr [eax]
// 00436cc0  8b5108               mov edx, dword ptr [ecx + 8]
// 00436cc3  50                   push eax
// 00436cc4  ffd2                 call edx
// 00436cc6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00436cca  5f                   pop edi
// 00436ccb  5e                   pop esi
// 00436ccc  64890d00000000       mov dword ptr fs:[0], ecx
// 00436cd3  5d                   pop ebp
// 00436cd4  83c424               add esp, 0x24
// 00436cd7  c20400               ret 4

struct Item;
struct Variant;

struct ItemVTable {
    int (__stdcall *query)(Item *, const void *, void **);
    unsigned long (__stdcall *addRef)(Item *);
    unsigned long (__stdcall *release)(Item *);
    void *unused0[10];
    int (__stdcall *remove)(Item *, Item *, Item **);
    void *unused1[5];
    int (__stdcall *append)(Item *, Item *, Item **);
    void *unused2[26];
    int (__stdcall *setValue)(Item *, Variant);
};

struct Item {
    ItemVTable *vtable;
};

extern const unsigned char itemInterface[16];
extern "C" {
    extern int (__stdcall *VariantClear)(Variant *);
    extern void (__cdecl *_invalid_parameter_noinfo)();
}

struct ItemPtr {
    Item *value;
    ItemPtr();
    ItemPtr(Item *);
    ~ItemPtr();
};

__forceinline ItemPtr::ItemPtr() : value(0) {}

__forceinline ItemPtr::ItemPtr(Item *source) : value(0) {
    if (source)
        source->vtable->query(source, itemInterface, (void **)&value);
}

__forceinline ItemPtr::~ItemPtr() {
    if (value)
        value->vtable->release(value);
}

struct Variant {
    unsigned short type;
    unsigned short reserved1;
    unsigned short reserved2;
    unsigned short reserved3;
    union {
        short shortValue;
        double doubleValue;
    };
    Variant();
    ~Variant();
};

__forceinline Variant::Variant() {
    type = 2;
    shortValue = 0;
}

__forceinline Variant::~Variant() {
    VariantClear(this);
}

struct Queue;

struct Iterator {
    Queue *owner;
    unsigned int position;
    Item **get();
};

struct Queue {
    Queue *owner;
    unsigned char padding[12];
    Item ***map;
    unsigned int mapSize;
    unsigned int first;
    unsigned int count;
    void append(ItemPtr *);
    void pop_front();
    Iterator begin();
};

__forceinline Iterator Queue::begin() {
    unsigned int position = first;
    if (position > first + count)
        _invalid_parameter_noinfo();
    Iterator result;
    result.owner = owner;
    result.position = position;
    return result;
}

struct COutputView {
    unsigned char padding[0xf8];
    Queue items;
    unsigned int reserved;
    Item *collection;
    void update(Item *);
};

void COutputView::update(Item *source) {
    ItemPtr item(source);
    ItemPtr added;
    if (collection->vtable->append(collection, item.value, &added.value) == 0) {
        {
            Variant value;
            source->vtable->setValue(source, value);
        }
        items.append(&item);
        if (items.count > 250) {
            ItemPtr removed;
            Item *target = collection;
            Iterator iterator = items.begin();
            Item *front = *iterator.get();
            target->vtable->remove(target, front, &removed.value);
            items.pop_front();
        }
    }
}
