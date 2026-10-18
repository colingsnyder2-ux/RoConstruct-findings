// from server: 82% by colin
// from server: 81% by king_originala
// roc 2008-06 00435680  unit: CDeclarationView  size: 473 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00435680
//
// 00435680  6aff                 push -1
// 00435682  64a100000000         mov eax, dword ptr fs:[0]
// 00435688  68c1007c00           push 0x7c00c1
// 0043568d  50                   push eax
// 0043568e  64892500000000       mov dword ptr fs:[0], esp
// 00435695  83ec34               sub esp, 0x34
// 00435698  53                   push ebx
// 00435699  55                   push ebp
// 0043569a  56                   push esi
// 0043569b  8b742450             mov esi, dword ptr [esp + 0x50]
// 0043569f  8be9                 mov ebp, ecx
// 004356a1  80bda800000000       cmp byte ptr [ebp + 0xa8], 0
// 004356a8  57                   push edi
// 004356a9  750f                 jne 0x4356ba
// 004356ab  8b460c               mov eax, dword ptr [esi + 0xc]
// 004356ae  3b85ac000000         cmp eax, dword ptr [ebp + 0xac]
// 004356b4  0f858a010000         jne 0x435844
// 004356ba  8d4c2414             lea ecx, [esp + 0x14]
// 004356be  51                   push ecx
// 004356bf  e85cf90000           call 0x445020
// 004356c4  83c404               add esp, 4
// 004356c7  8b00                 mov eax, dword ptr [eax]
// 004356c9  56                   push esi
// 004356ca  8bc8                 mov ecx, eax
// 004356cc  c744245000000000     mov dword ptr [esp + 0x50], 0
// 004356d4  e827e40000           call 0x443b00
// 004356d9  8bd8                 mov ebx, eax
// 004356db  8b442418             mov eax, dword ptr [esp + 0x18]
// 004356df  895c2410             mov dword ptr [esp + 0x10], ebx
// 004356e3  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 004356eb  85c0                 test eax, eax
// 004356ed  742c                 je 0x43571b
// 004356ef  8bf8                 mov edi, eax
// 004356f1  83c004               add eax, 4
// 004356f4  83caff               or edx, 0xffffffff
// 004356f7  f00fc110             lock xadd dword ptr [eax], edx
// 004356fb  751e                 jne 0x43571b
// 004356fd  8b07                 mov eax, dword ptr [edi]
// 004356ff  8b5004               mov edx, dword ptr [eax + 4]
// 00435702  8bcf                 mov ecx, edi
// 00435704  ffd2                 call edx
// 00435706  8d4708               lea eax, [edi + 8]
// 00435709  83c9ff               or ecx, 0xffffffff
// 0043570c  f00fc108             lock xadd dword ptr [eax], ecx
// 00435710  7509                 jne 0x43571b
// 00435712  8b17                 mov edx, dword ptr [edi]
// 00435714  8b4208               mov eax, dword ptr [edx + 8]
// 00435717  8bcf                 mov ecx, edi
// 00435719  ffd0                 call eax
// 0043571b  85db                 test ebx, ebx
// 0043571d  743e                 je 0x43575d
// 0043571f  e8cca5feff           call 0x41fcf0
// 00435724  80bb3101000000       cmp byte ptr [ebx + 0x131], 0
// 0043572b  740d                 je 0x43573a
// 0043572d  80b83001000000       cmp byte ptr [eax + 0x130], 0
// 00435734  0f840a010000         je 0x435844
// 0043573a  80bb3201000000       cmp byte ptr [ebx + 0x132], 0
// 00435741  740d                 je 0x435750
// 00435743  80b83101000000       cmp byte ptr [eax + 0x131], 0
// 0043574a  0f84f4000000         je 0x435844
// 00435750  80bb3001000000       cmp byte ptr [ebx + 0x130], 0
// 00435757  0f84e7000000         je 0x435844
// 0043575d  8b4604               mov eax, dword ptr [esi + 4]
// 00435760  83c004               add eax, 4
// 00435763  50                   push eax
// 00435764  8d4c242c             lea ecx, [esp + 0x2c]
// 00435768  ff155c248000         call dword ptr [0x80245c]
// 0043576e  68602e8100           push 0x812e60
// 00435773  8d4c242c             lea ecx, [esp + 0x2c]
// 00435777  c744245001000000     mov dword ptr [esp + 0x50], 1
// 0043577f  ff1548248000         call dword ptr [0x802448]
// 00435785  8b5e2c               mov ebx, dword ptr [esi + 0x2c]
// 00435788  8d442454             lea eax, [esp + 0x54]
// 0043578c  8bf8                 mov edi, eax
// 0043578e  83ec0c               sub esp, 0xc
// 00435791  c744246000000000     mov dword ptr [esp + 0x60], 0
// 00435799  8bc3                 mov eax, ebx
// 0043579b  8b00                 mov eax, dword ptr [eax]
// 0043579d  8944242c             mov dword ptr [esp + 0x2c], eax
// 004357a1  8bc4                 mov eax, esp
// 004357a3  ba10554300           mov edx, 0x435510
// 004357a8  8910                 mov dword ptr [eax], edx
// 004357aa  8d4c2434             lea ecx, [esp + 0x34]
// 004357ae  897804               mov dword ptr [eax + 4], edi
// 004357b1  894808               mov dword ptr [eax + 8], ecx
// 004357b4  8b4618               mov eax, dword ptr [esi + 0x18]
// 004357b7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004357bb  53                   push ebx
// 004357bc  50                   push eax
// 004357bd  51                   push ecx
// 004357be  50                   push eax
// 004357bf  8d542438             lea edx, [esp + 0x38]
// 004357c3  52                   push edx
// 004357c4  e867feffff           call 0x435630
// 004357c9  83c420               add esp, 0x20
// 004357cc  685c2e8100           push 0x812e5c
// 004357d1  8d4c242c             lea ecx, [esp + 0x2c]
// 004357d5  ff1548248000         call dword ptr [0x802448]
// 004357db  33c0                 xor eax, eax
// 004357dd  394610               cmp dword ptr [esi + 0x10], eax
// 004357e0  8d4c2428             lea ecx, [esp + 0x28]
// 004357e4  0f95c0               setne al
// 004357e7  83c004               add eax, 4
// 004357ea  8bf8                 mov edi, eax
// 004357ec  ff1564248000         call dword ptr [0x802464]
// 004357f2  680200ffff           push 0xffff0002
// 004357f7  680000ffff           push 0xffff0000
// 004357fc  6a00                 push 0
// 004357fe  6a00                 push 0
// 00435800  6a00                 push 0
// 00435802  57                   push edi
// 00435803  57                   push edi
// 00435804  50                   push eax
// 00435805  6a23                 push 0x23
// 00435807  8bcd                 mov ecx, ebp
// 00435809  e8c2b82600           call 0x6a10d0
// 0043580e  56                   push esi
// 0043580f  6a00                 push 0
// 00435811  6a00                 push 0
// 00435813  6a00                 push 0
// 00435815  6a00                 push 0
// 00435817  6a00                 push 0
// 00435819  8bf8                 mov edi, eax
// 0043581b  6a04                 push 4
// 0043581d  57                   push edi
// 0043581e  8bcd                 mov ecx, ebp
// 00435820  e8b1b82600           call 0x6a10d6
// 00435825  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00435829  51                   push ecx
// 0043582a  57                   push edi
// 0043582b  8bcd                 mov ecx, ebp
// 0043582d  e8bee6ffff           call 0x433ef0
// 00435832  8d4c2428             lea ecx, [esp + 0x28]
// 00435836  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0043583e  ff1568248000         call dword ptr [0x802468]
// 00435844  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00435848  5f                   pop edi
// 00435849  5e                   pop esi
// 0043584a  5d                   pop ebp
// 0043584b  64890d00000000       mov dword ptr fs:[0], ecx
// 00435852  5b                   pop ebx
// 00435853  83c440               add esp, 0x40
// 00435856  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Text;
extern void (__thiscall *textCopy)(Text*, const Text&);
extern void (__thiscall *textDestroy)(Text*);
extern Text& (__thiscall *textAppend)(Text*, const char*);
extern const char* (__thiscall *textData)(const Text*);

struct Text {
    char data[28];
    Text(const Text&);
    __declspec(dllimport) ~Text() throw();
    Text& operator+=(const char*);
    const char* c_str() const;
};

inline Text::Text(const Text& other) { textCopy(this, other); }
inline Text& Text::operator+=(const char* value) { return textAppend(this, value); }
inline const char* Text::c_str() const { return textData(this); }

struct RefCount {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Declaration;
struct Service;

struct SharedService {
    Service* object;
    RefCount* count;
    ~SharedService();
};

inline SharedService::~SharedService()
{
    if (count) {
        RefCount* p = count;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Item {
    char padding[0x130];
    unsigned char visible;
    unsigned char restricted;
    unsigned char special;
};

struct Service {
    Item* lookup(Declaration*);
};

struct Settings {
    char padding[0x130];
    unsigned char showRestricted;
    unsigned char showSpecial;
};

struct Name {
    int prefix;
    Text text;
};

struct Declaration {
    int prefix;
    Name* name;
    int unused08;
    int category;
    int marked;
    int unused14;
    Declaration* begin;
    char unused1c[0x10];
    Declaration** end;
};

extern void __cdecl visitDeclaration(Declaration*, int*, Text*);

struct Visitor {
    void (__cdecl *function)(Declaration*, int*, Text*);
    int* count;
    Text* text;
    Visitor(int*, Text*);
};

inline Visitor::Visitor(int* counter, Text* value)
    : function(visitDeclaration), count(counter), text(value)
{
}

extern SharedService __cdecl getService();
extern Settings* __cdecl getSettings();
extern Visitor __cdecl traverse(
    Declaration*, Declaration*, Declaration*, Declaration**, Visitor);
extern const char openingText[];
extern const char closingText[];

struct CDeclarationView {
    char padding[0xa8];
    unsigned char showAll;
    char unuseda9[3];
    int category;

    void update(Declaration*);
    void* insert(int, const char*, int, int, int, int, int, int, int);
    void configure(void*, int, int, int, int, int, int, Declaration*);
    void associate(void*, Item*);
};

void CDeclarationView::update(Declaration* declaration)
{
    if (!showAll && declaration->category != category)
        return;

    Item* item = getService().object->lookup(declaration);

    if (item) {
        Settings* settings = getSettings();
        if (item->restricted && !settings->showRestricted)
            return;
        if (item->special && !settings->showSpecial)
            return;
        if (!item->visible)
            return;
    }

    Text text(declaration->name->text);
    text += openingText;

    Declaration** end = declaration->end;
    int count = 0;
    Declaration* last = *end;
    traverse(declaration->begin, last, declaration->begin, end,
             Visitor(&count, &text));

    text += closingText;

    int image = (declaration->marked != 0) + 4;
    const char* label = text.c_str();
    void* entry = insert(0x23, label, image, image,
                         0, 0, 0, 0xffff0000, 0xffff0002);
    configure(entry, 4, 0, 0, 0, 0, 0, declaration);
    associate(entry, item);
}
