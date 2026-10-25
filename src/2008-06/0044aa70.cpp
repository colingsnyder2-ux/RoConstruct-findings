// from server: 100% by king_originala
// roc 2008-06 0044aa70  unit: CRbxPlayDocTemplate  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044aa70
//
// 0044aa70  6aff                 push -1
// 0044aa72  6805f07b00           push 0x7bf005
// 0044aa77  64a100000000         mov eax, dword ptr fs:[0]
// 0044aa7d  50                   push eax
// 0044aa7e  64892500000000       mov dword ptr fs:[0], esp
// 0044aa85  83ec24               sub esp, 0x24
// 0044aa88  53                   push ebx
// 0044aa89  56                   push esi
// 0044aa8a  33db                 xor ebx, ebx
// 0044aa8c  6a28                 push 0x28
// 0044aa8e  895c240c             mov dword ptr [esp + 0xc], ebx
// 0044aa92  e8895e2500           call 0x6a0920
// 0044aa97  8bf0                 mov esi, eax
// 0044aa99  83c404               add esp, 4
// 0044aa9c  8974240c             mov dword ptr [esp + 0xc], esi
// 0044aaa0  895c2434             mov dword ptr [esp + 0x34], ebx
// 0044aaa4  85f6                 test esi, esi
// 0044aaa6  7432                 je 0x44aada
// 0044aaa8  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0044aaac  8b01                 mov eax, dword ptr [ecx]
// 0044aaae  8b5004               mov edx, dword ptr [eax + 4]
// 0044aab1  ffd2                 call edx
// 0044aab3  50                   push eax
// 0044aab4  8d4c2414             lea ecx, [esp + 0x14]
// 0044aab8  ff1558248000         call dword ptr [0x802458]
// 0044aabe  8d442410             lea eax, [esp + 0x10]
// 0044aac2  bb01000000           mov ebx, 1
// 0044aac7  50                   push eax
// 0044aac8  8bce                 mov ecx, esi
// 0044aaca  c644243801           mov byte ptr [esp + 0x38], 1
// 0044aacf  895c240c             mov dword ptr [esp + 0xc], ebx
// 0044aad3  e878f2fbff           call 0x409d50
// 0044aad8  eb02                 jmp 0x44aadc
// 0044aada  33c0                 xor eax, eax
// 0044aadc  8b0df4dc9600         mov ecx, dword ptr [0x96dcf4]
// 0044aae2  c744243402000000     mov dword ptr [esp + 0x34], 2
// 0044aaea  a3f4dc9600           mov dword ptr [0x96dcf4], eax
// 0044aaef  85c9                 test ecx, ecx
// 0044aaf1  7408                 je 0x44aafb
// 0044aaf3  8b11                 mov edx, dword ptr [ecx]
// 0044aaf5  8b02                 mov eax, dword ptr [edx]
// 0044aaf7  6a01                 push 1
// 0044aaf9  ffd0                 call eax
// 0044aafb  5e                   pop esi
// 0044aafc  f6c301               test bl, 1
// 0044aaff  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0044ab07  5b                   pop ebx
// 0044ab08  740a                 je 0x44ab14
// 0044ab0a  8d4c2408             lea ecx, [esp + 8]
// 0044ab0e  ff1568248000         call dword ptr [0x802468]
// 0044ab14  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0044ab18  64890d00000000       mov dword ptr fs:[0], ecx
// 0044ab1f  83c430               add esp, 0x30
// 0044ab22  c3                   ret 

typedef unsigned int size_t;
void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

extern void (__thiscall* stringConstruct)(void*, const char*);
extern void (__thiscall* stringDestroy)(void*);

struct String {
    char storage[28];

    String(const char* text) { stringConstruct(this, text); }
    ~String() { stringDestroy(this); }
};

struct Source {
    virtual void slot0() = 0;
    virtual const char* text() = 0;
};

struct Product {
    virtual ~Product();
    char storage[36];

    Product(const String&);
};

struct Holder {
    Product* value;

    void replace(Product* p)
    {
        Product* old = value;
        value = p;
        if (old)
            delete old;
    }
};

extern Holder current;

void __cdecl update(Source* source)
{
    current.replace(new Product(String(source->text())));
}
