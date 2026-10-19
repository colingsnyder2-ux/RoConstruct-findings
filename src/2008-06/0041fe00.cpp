// from server: 86% by colin
// from server: 85% by king_originala
// roc 2008-06 0041fe00  unit: CInsertObjectDialog  size: 307 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041fe00
//
// 0041fe00  6aff                 push -1
// 0041fe02  6809e77b00           push 0x7be709
// 0041fe07  64a100000000         mov eax, dword ptr fs:[0]
// 0041fe0d  50                   push eax
// 0041fe0e  64892500000000       mov dword ptr fs:[0], esp
// 0041fe15  83ec08               sub esp, 8
// 0041fe18  53                   push ebx
// 0041fe19  56                   push esi
// 0041fe1a  8bf1                 mov esi, ecx
// 0041fe1c  57                   push edi
// 0041fe1d  89742410             mov dword ptr [esp + 0x10], esi
// 0041fe21  8b442424             mov eax, dword ptr [esp + 0x24]
// 0041fe25  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0041fe29  33db                 xor ebx, ebx
// 0041fe2b  f7d8                 neg eax
// 0041fe2d  1bc0                 sbb eax, eax
// 0041fe2f  f7d8                 neg eax
// 0041fe31  48                   dec eax
// 0041fe32  40                   inc eax
// 0041fe33  f7d8                 neg eax
// 0041fe35  1bc0                 sbb eax, eax
// 0041fe37  83e095               and eax, 0xffffff95
// 0041fe3a  51                   push ecx
// 0041fe3b  05d6000000           add eax, 0xd6
// 0041fe40  50                   push eax
// 0041fe41  8bce                 mov ecx, esi
// 0041fe43  895c2424             mov dword ptr [esp + 0x24], ebx
// 0041fe47  e88c102800           call 0x6a0ed8
// 0041fe4c  8b442428             mov eax, dword ptr [esp + 0x28]
// 0041fe50  8b542424             mov edx, dword ptr [esp + 0x24]
// 0041fe54  c7068cf48000         mov dword ptr [esi], 0x80f48c
// 0041fe5a  895674               mov dword ptr [esi + 0x74], edx
// 0041fe5d  894678               mov dword ptr [esi + 0x78], eax
// 0041fe60  3bc3                 cmp eax, ebx
// 0041fe62  740c                 je 0x41fe70
// 0041fe64  83c004               add eax, 4
// 0041fe67  b901000000           mov ecx, 1
// 0041fe6c  f00fc108             lock xadd dword ptr [eax], ecx
// 0041fe70  6a04                 push 4
// 0041fe72  c644242002           mov byte ptr [esp + 0x20], 2
// 0041fe77  8d7e7c               lea edi, [esi + 0x7c]
// 0041fe7a  e8a10a2800           call 0x6a0920
// 0041fe7f  83c404               add esp, 4
// 0041fe82  3bc3                 cmp eax, ebx
// 0041fe84  7404                 je 0x41fe8a
// 0041fe86  8938                 mov dword ptr [eax], edi
// 0041fe88  eb02                 jmp 0x41fe8c
// 0041fe8a  33c0                 xor eax, eax
// 0041fe8c  8907                 mov dword ptr [edi], eax
// 0041fe8e  895f0c               mov dword ptr [edi + 0xc], ebx
// 0041fe91  895f10               mov dword ptr [edi + 0x10], ebx
// 0041fe94  895f14               mov dword ptr [edi + 0x14], ebx
// 0041fe97  6816b78000           push 0x80b716
// 0041fe9c  8d8e94000000         lea ecx, [esi + 0x94]
// 0041fea2  c644242004           mov byte ptr [esp + 0x20], 4
// 0041fea7  ff15103f8000         call dword ptr [0x803f10]
// 0041fead  899e98000000         mov dword ptr [esi + 0x98], ebx
// 0041feb3  899e9c000000         mov dword ptr [esi + 0x9c], ebx
// 0041feb9  8d8ea0000000         lea ecx, [esi + 0xa0]
// 0041febf  c644241c06           mov byte ptr [esp + 0x1c], 6
// 0041fec4  e86733ffff           call 0x413230
// 0041fec9  8dbea8000000         lea edi, [esi + 0xa8]
// 0041fecf  8bcf                 mov ecx, edi
// 0041fed1  c644241c07           mov byte ptr [esp + 0x1c], 7
// 0041fed6  e8b50f2800           call 0x6a0e90
// 0041fedb  8b442428             mov eax, dword ptr [esp + 0x28]
// 0041fedf  c70704f38000         mov dword ptr [edi], 0x80f304
// 0041fee5  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0041feed  3bc3                 cmp eax, ebx
// 0041feef  742c                 je 0x41ff1d
// 0041fef1  8bf8                 mov edi, eax
// 0041fef3  83c004               add eax, 4
// 0041fef6  83caff               or edx, 0xffffffff
// 0041fef9  f00fc110             lock xadd dword ptr [eax], edx
// 0041fefd  751e                 jne 0x41ff1d
// 0041feff  8b07                 mov eax, dword ptr [edi]
// 0041ff01  8b5004               mov edx, dword ptr [eax + 4]
// 0041ff04  8bcf                 mov ecx, edi
// 0041ff06  ffd2                 call edx
// 0041ff08  8d4708               lea eax, [edi + 8]
// 0041ff0b  83c9ff               or ecx, 0xffffffff
// 0041ff0e  f00fc108             lock xadd dword ptr [eax], ecx
// 0041ff12  7509                 jne 0x41ff1d
// 0041ff14  8b17                 mov edx, dword ptr [edi]
// 0041ff16  8b4208               mov eax, dword ptr [edx + 8]
// 0041ff19  8bcf                 mov ecx, edi
// 0041ff1b  ffd0                 call eax
// 0041ff1d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0041ff21  5f                   pop edi
// 0041ff22  8bc6                 mov eax, esi
// 0041ff24  5e                   pop esi
// 0041ff25  5b                   pop ebx
// 0041ff26  64890d00000000       mov dword ptr fs:[0], ecx
// 0041ff2d  83c414               add esp, 0x14
// 0041ff30  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

void* __cdecl operator new(unsigned int);

struct ControlBlock {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    ControlBlock* control;
    typedef void* Shared::*BoolType;

    Shared();
    Shared(const Shared&);
    ~Shared();
    operator BoolType() const;
};

inline Shared::Shared() : object(0), control(0) {}

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Shared::~Shared()
{
    if (control) {
        ControlBlock* p = control;
        volatile long* count = &p->strong;
        if (_InterlockedDecrement(count) == 0) {
            p->dispose();
            count = &p->weak;
            if (_InterlockedDecrement(count) == 0)
                p->destroy();
        }
    }
}

inline Shared::operator BoolType() const
{
    return object ? &Shared::object : 0;
}

struct DialogBase {
    char storage[112];
    DialogBase(unsigned int, void*);
    virtual ~DialogBase();
};

struct ObjectList;

struct ListOwner {
    ObjectList** pointer;
    ListOwner(ObjectList*);
    ~ListOwner();
};

inline ListOwner::ListOwner(ObjectList* list)
{
    ObjectList** p = static_cast<ObjectList**>(operator new(4));
    if (p)
        *p = list;
    else
        p = 0;
    pointer = p;
}

struct ObjectList {
    ListOwner owner;
    unsigned int unused[2];
    void* first;
    void* last;
    void* limit;

    ObjectList();
    ~ObjectList();
};

inline ObjectList::ObjectList()
    : owner(this), first(0), last(0), limit(0)
{
}

typedef void (__thiscall *StringConstructor)(void*, const char*);
extern StringConstructor constructString;

struct StringStorage {
    void* data;
    ~StringStorage();
};

struct String : StringStorage {
    String(const char*);
    ~String();
};

inline String::String(const char* text)
{
    constructString(this, text);
}

struct Auxiliary {
    unsigned int storage[2];
    Auxiliary();
    ~Auxiliary();
};

struct WindowBase {
    WindowBase();
    virtual ~WindowBase();
};

struct DialogWindow : WindowBase {
    DialogWindow();
    virtual ~DialogWindow();
};

inline DialogWindow::DialogWindow() : WindowBase() {}

struct CInsertObjectDialog : DialogBase {
    Shared selected;
    ObjectList objects;
    String title;
    Shared temporary;
    Auxiliary auxiliary;
    DialogWindow window;

    CInsertObjectDialog(Shared, void*);
    virtual ~CInsertObjectDialog();
};

CInsertObjectDialog::CInsertObjectDialog(Shared value, void* parent)
    : DialogBase(value ? 107 : 214, parent),
      selected(value),
      objects(),
      title(">Authoring"),
      temporary(),
      auxiliary(),
      window()
{
}
