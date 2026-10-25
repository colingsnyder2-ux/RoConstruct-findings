// from server: 100% by king_originala
// roc 2008-06 004352a0  unit: CDeclarationView  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004352a0
//
// 004352a0  64a100000000         mov eax, dword ptr fs:[0]
// 004352a6  6aff                 push -1
// 004352a8  6868917d00           push 0x7d9168
// 004352ad  50                   push eax
// 004352ae  64892500000000       mov dword ptr fs:[0], esp
// 004352b5  83ec08               sub esp, 8
// 004352b8  53                   push ebx
// 004352b9  8bd9                 mov ebx, ecx
// 004352bb  80bba800000000       cmp byte ptr [ebx + 0xa8], 0
// 004352c2  55                   push ebp
// 004352c3  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004352c7  750f                 jne 0x4352d8
// 004352c9  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004352cc  3b83ac000000         cmp eax, dword ptr [ebx + 0xac]
// 004352d2  0f85e7000000         jne 0x4353bf
// 004352d8  56                   push esi
// 004352d9  8d4c240c             lea ecx, [esp + 0xc]
// 004352dd  57                   push edi
// 004352de  51                   push ecx
// 004352df  e83cfd0000           call 0x445020
// 004352e4  83c404               add esp, 4
// 004352e7  8b00                 mov eax, dword ptr [eax]
// 004352e9  55                   push ebp
// 004352ea  8bc8                 mov ecx, eax
// 004352ec  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004352f4  e8b7e70000           call 0x443ab0
// 004352f9  8bf8                 mov edi, eax
// 004352fb  8b442414             mov eax, dword ptr [esp + 0x14]
// 004352ff  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00435307  85c0                 test eax, eax
// 00435309  742c                 je 0x435337
// 0043530b  8bf0                 mov esi, eax
// 0043530d  83c004               add eax, 4
// 00435310  83caff               or edx, 0xffffffff
// 00435313  f00fc110             lock xadd dword ptr [eax], edx
// 00435317  751e                 jne 0x435337
// 00435319  8b06                 mov eax, dword ptr [esi]
// 0043531b  8b5004               mov edx, dword ptr [eax + 4]
// 0043531e  8bce                 mov ecx, esi
// 00435320  ffd2                 call edx
// 00435322  8d4608               lea eax, [esi + 8]
// 00435325  83c9ff               or ecx, 0xffffffff
// 00435328  f00fc108             lock xadd dword ptr [eax], ecx
// 0043532c  7509                 jne 0x435337
// 0043532e  8b16                 mov edx, dword ptr [esi]
// 00435330  8b4208               mov eax, dword ptr [edx + 8]
// 00435333  8bce                 mov ecx, esi
// 00435335  ffd0                 call eax
// 00435337  85ff                 test edi, edi
// 00435339  7432                 je 0x43536d
// 0043533b  e8b0a9feff           call 0x41fcf0
// 00435340  80bf3101000000       cmp byte ptr [edi + 0x131], 0
// 00435347  7409                 je 0x435352
// 00435349  80b83001000000       cmp byte ptr [eax + 0x130], 0
// 00435350  746b                 je 0x4353bd
// 00435352  80bf3201000000       cmp byte ptr [edi + 0x132], 0
// 00435359  7409                 je 0x435364
// 0043535b  80b83101000000       cmp byte ptr [eax + 0x131], 0
// 00435362  7459                 je 0x4353bd
// 00435364  80bf3001000000       cmp byte ptr [edi + 0x130], 0
// 0043536b  7450                 je 0x4353bd
// 0043536d  f6451001             test byte ptr [ebp + 0x10], 1
// 00435371  744a                 je 0x4353bd
// 00435373  8b4504               mov eax, dword ptr [ebp + 4]
// 00435376  8d4804               lea ecx, [eax + 4]
// 00435379  ff1564248000         call dword ptr [0x802464]
// 0043537f  680200ffff           push 0xffff0002
// 00435384  680000ffff           push 0xffff0000
// 00435389  6a00                 push 0
// 0043538b  6a00                 push 0
// 0043538d  6a00                 push 0
// 0043538f  6a06                 push 6
// 00435391  6a06                 push 6
// 00435393  50                   push eax
// 00435394  6a23                 push 0x23
// 00435396  8bcb                 mov ecx, ebx
// 00435398  e833bd2600           call 0x6a10d0
// 0043539d  55                   push ebp
// 0043539e  6a00                 push 0
// 004353a0  6a00                 push 0
// 004353a2  6a00                 push 0
// 004353a4  6a00                 push 0
// 004353a6  6a00                 push 0
// 004353a8  8bf0                 mov esi, eax
// 004353aa  6a04                 push 4
// 004353ac  56                   push esi
// 004353ad  8bcb                 mov ecx, ebx
// 004353af  e822bd2600           call 0x6a10d6
// 004353b4  57                   push edi
// 004353b5  56                   push esi
// 004353b6  8bcb                 mov ecx, ebx
// 004353b8  e833ebffff           call 0x433ef0
// 004353bd  5f                   pop edi
// 004353be  5e                   pop esi
// 004353bf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004353c3  5d                   pop ebp
// 004353c4  5b                   pop ebx
// 004353c5  64890d00000000       mov dword ptr fs:[0], ecx
// 004353cc  83c414               add esp, 0x14
// 004353cf  c20400               ret 4

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Argument;
struct Entry;

struct RefCount {
    virtual void slot0() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
    void release();
};

inline void RefCount::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Manager {
    Entry* lookup(Argument*);
};

struct Shared {
    Manager* pointer;
    RefCount* count;
    ~Shared();
    Manager* get() const;
};

inline Shared::~Shared()
{
    if (count)
        count->release();
}

inline Manager* Shared::get() const
{
    return pointer;
}

extern Shared __cdecl getManager();

struct Entry {
    char padding[0x130];
    unsigned char enabled;
    unsigned char requiresFirst;
    unsigned char requiresSecond;
};

struct Settings {
    char padding[0x130];
    unsigned char first;
    unsigned char second;
};

extern Settings* __cdecl getSettings();

struct String {
    char storage[1];
};

struct Name {
    char padding[4];
    String text;
};

extern const char* (__thiscall *string_c_str)(const String*);

struct Argument {
    unsigned long unused;
    Name* name;
    unsigned long unused2;
    unsigned long identifier;
    unsigned char flags;
};

struct CDeclarationView {
    char padding[0xa8];
    unsigned char all;
    char alignment[3];
    unsigned long identifier;

    void process(Argument*);
    void* insert(int, const char*, int, int, int, int, int,
                 unsigned long, unsigned long);
    void configure(void*, int, int, int, int, int, int, Argument*);
    void finish(void*, Entry*);
};

void CDeclarationView::process(Argument* argument)
{
    if (!all && argument->identifier != identifier)
        return;

    Entry* entry = getManager().get()->lookup(argument);

    if (entry) {
        Settings* settings = getSettings();
        if (entry->requiresFirst && !settings->first)
            return;
        if (entry->requiresSecond && !settings->second)
            return;
        if (!entry->enabled)
            return;
    }

    if (argument->flags & 1) {
        Name* name = argument->name;
        const char* text = string_c_str(&name->text);
        void* handle = insert(0x23, text, 6, 6, 0, 0, 0,
                              0xffff0000UL, 0xffff0002UL);
        configure(handle, 4, 0, 0, 0, 0, 0, argument);
        finish(handle, entry);
    }
}
