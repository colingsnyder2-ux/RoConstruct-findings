// from server: 100% by king_originala
// roc 2008-06 0044c440  unit: CRobloxModule  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044c440
//
// 0044c440  6aff                 push -1
// 0044c442  6875127c00           push 0x7c1275
// 0044c447  64a100000000         mov eax, dword ptr fs:[0]
// 0044c44d  50                   push eax
// 0044c44e  64892500000000       mov dword ptr fs:[0], esp
// 0044c455  51                   push ecx
// 0044c456  56                   push esi
// 0044c457  8bf1                 mov esi, ecx
// 0044c459  57                   push edi
// 0044c45a  89742408             mov dword ptr [esp + 8], esi
// 0044c45e  c706646a8100         mov dword ptr [esi], 0x816a64
// 0044c464  8bbe0c010000         mov edi, dword ptr [esi + 0x10c]
// 0044c46a  c744241402000000     mov dword ptr [esp + 0x14], 2
// 0044c472  85ff                 test edi, edi
// 0044c474  7410                 je 0x44c486
// 0044c476  8bcf                 mov ecx, edi
// 0044c478  e8b3e3ffff           call 0x44a830
// 0044c47d  57                   push edi
// 0044c47e  e8f7412500           call 0x6a067a
// 0044c483  83c404               add esp, 4
// 0044c486  8d8ef0000000         lea ecx, [esi + 0xf0]
// 0044c48c  c644241401           mov byte ptr [esp + 0x14], 1
// 0044c491  ff1568248000         call dword ptr [0x802468]
// 0044c497  8d8ea4000000         lea ecx, [esi + 0xa4]
// 0044c49d  c644241400           mov byte ptr [esp + 0x14], 0
// 0044c4a2  e869c8fdff           call 0x428d10
// 0044c4a7  8bce                 mov ecx, esi
// 0044c4a9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0044c4b1  e8b24d2500           call 0x6a1268
// 0044c4b6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044c4ba  5f                   pop edi
// 0044c4bb  5e                   pop esi
// 0044c4bc  64890d00000000       mov dword ptr fs:[0], ecx
// 0044c4c3  83c410               add esp, 0x10
// 0044c4c6  c3                   ret 

extern void (__thiscall *destroyString)(void *);

void __cdecl operator delete(void *);

struct Base
{
    virtual ~Base();
    char storage[0xa0];
};

struct Member
{
    char storage[0x4c];
    ~Member();
};

struct String
{
    char storage[0x1c];
    ~String();
};

inline String::~String()
{
    destroyString(this);
}

struct Document
{
    ~Document();
};

struct CRobloxModule : Base
{
    Member member;
    String text;
    Document *document;

    virtual ~CRobloxModule();
};

CRobloxModule::~CRobloxModule()
{
    delete document;
}
