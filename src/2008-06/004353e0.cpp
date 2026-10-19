// from server: 93% by colin
// from server: 86% by king_originala
// roc 2008-06 004353e0  unit: CDeclarationView  size: 300 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004353e0
//
// 004353e0  64a100000000         mov eax, dword ptr fs:[0]
// 004353e6  6aff                 push -1
// 004353e8  6868917d00           push 0x7d9168
// 004353ed  50                   push eax
// 004353ee  64892500000000       mov dword ptr fs:[0], esp
// 004353f5  83ec08               sub esp, 8
// 004353f8  53                   push ebx
// 004353f9  8bd9                 mov ebx, ecx
// 004353fb  80bba800000000       cmp byte ptr [ebx + 0xa8], 0
// 00435402  55                   push ebp
// 00435403  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00435407  750f                 jne 0x435418
// 00435409  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0043540c  3b83ac000000         cmp eax, dword ptr [ebx + 0xac]
// 00435412  0f85e1000000         jne 0x4354f9
// 00435418  56                   push esi
// 00435419  8d4c240c             lea ecx, [esp + 0xc]
// 0043541d  57                   push edi
// 0043541e  51                   push ecx
// 0043541f  e8fcfb0000           call 0x445020
// 00435424  83c404               add esp, 4
// 00435427  8b00                 mov eax, dword ptr [eax]
// 00435429  55                   push ebp
// 0043542a  8bc8                 mov ecx, eax
// 0043542c  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00435434  e817e70000           call 0x443b50
// 00435439  8bf8                 mov edi, eax
// 0043543b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0043543f  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00435447  85c0                 test eax, eax
// 00435449  742c                 je 0x435477
// 0043544b  8bf0                 mov esi, eax
// 0043544d  83c004               add eax, 4
// 00435450  83caff               or edx, 0xffffffff
// 00435453  f00fc110             lock xadd dword ptr [eax], edx
// 00435457  751e                 jne 0x435477
// 00435459  8b06                 mov eax, dword ptr [esi]
// 0043545b  8b5004               mov edx, dword ptr [eax + 4]
// 0043545e  8bce                 mov ecx, esi
// 00435460  ffd2                 call edx
// 00435462  8d4608               lea eax, [esi + 8]
// 00435465  83c9ff               or ecx, 0xffffffff
// 00435468  f00fc108             lock xadd dword ptr [eax], ecx
// 0043546c  7509                 jne 0x435477
// 0043546e  8b16                 mov edx, dword ptr [esi]
// 00435470  8b4208               mov eax, dword ptr [edx + 8]
// 00435473  8bce                 mov ecx, esi
// 00435475  ffd0                 call eax
// 00435477  85ff                 test edi, edi
// 00435479  7432                 je 0x4354ad
// 0043547b  e870a8feff           call 0x41fcf0
// 00435480  80bf3101000000       cmp byte ptr [edi + 0x131], 0
// 00435487  7409                 je 0x435492
// 00435489  80b83001000000       cmp byte ptr [eax + 0x130], 0
// 00435490  7465                 je 0x4354f7
// 00435492  80bf3201000000       cmp byte ptr [edi + 0x132], 0
// 00435499  7409                 je 0x4354a4
// 0043549b  80b83101000000       cmp byte ptr [eax + 0x131], 0
// 004354a2  7453                 je 0x4354f7
// 004354a4  80bf3001000000       cmp byte ptr [edi + 0x130], 0
// 004354ab  744a                 je 0x4354f7
// 004354ad  8b4504               mov eax, dword ptr [ebp + 4]
// 004354b0  8d4804               lea ecx, [eax + 4]
// 004354b3  ff1564248000         call dword ptr [0x802464]
// 004354b9  680200ffff           push 0xffff0002
// 004354be  680000ffff           push 0xffff0000
// 004354c3  6a00                 push 0
// 004354c5  6a00                 push 0
// 004354c7  6a00                 push 0
// 004354c9  6a08                 push 8
// 004354cb  6a08                 push 8
// 004354cd  50                   push eax
// 004354ce  6a23                 push 0x23
// 004354d0  8bcb                 mov ecx, ebx
// 004354d2  e8f9bb2600           call 0x6a10d0
// 004354d7  55                   push ebp
// 004354d8  6a00                 push 0
// 004354da  6a00                 push 0
// 004354dc  6a00                 push 0
// 004354de  6a00                 push 0
// 004354e0  6a00                 push 0
// 004354e2  8bf0                 mov esi, eax
// 004354e4  6a04                 push 4
// 004354e6  56                   push esi
// 004354e7  8bcb                 mov ecx, ebx
// 004354e9  e8e8bb2600           call 0x6a10d6
// 004354ee  57                   push edi
// 004354ef  56                   push esi
// 004354f0  8bcb                 mov ecx, ebx
// 004354f2  e8f9e9ffff           call 0x433ef0
// 004354f7  5f                   pop edi
// 004354f8  5e                   pop esi
// 004354f9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004354fd  5d                   pop ebp
// 004354fe  5b                   pop ebx
// 004354ff  64890d00000000       mov dword ptr fs:[0], ecx
// 00435506  83c414               add esp, 0x14
// 00435509  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Item {
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

struct String {};

extern const char* (__thiscall *string_c_str)(const String*);

struct Text {
    char padding[4];
    String value;
};

struct Argument {
    int unused;
    Text* text;
    int reserved;
    int identifier;
};

struct Service {
    Item* __thiscall lookup(Argument*);
};

struct Shared {
    Service* pointer;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

Shared __cdecl getService();
Settings* __cdecl getSettings();

struct CDeclarationView {
    char padding[0xa8];
    unsigned char acceptAll;
    char alignment[3];
    int identifier;

    void __thiscall f(Argument*);
    void* __thiscall insert(int, const char*, int, int, int, int, int,
                           unsigned long, unsigned long);
    void __thiscall configure(void*, int, int, int, int, int, int, Argument*);
    void __thiscall finish(void*, Item*);
};

void CDeclarationView::f(Argument* argument)
{
    if (!acceptAll && argument->identifier != identifier)
        return;

    Item* item = getService().pointer->lookup(argument);

    if (item) {
        Settings* settings = getSettings();
        if (item->requiresFirst && !settings->first)
            return;
        if (item->requiresSecond && !settings->second)
            return;
        if (!item->enabled)
            return;
    }

    const char* text = string_c_str(&argument->text->value);
    void* entry = insert(0x23, text, 8, 8, 0, 0, 0,
                         0xffff0000UL, 0xffff0002UL);
    configure(entry, 4, 0, 0, 0, 0, 0, argument);
    finish(entry, item);
}
