// from server: 100% by king_originala
// roc 2008-06 00449910  unit: CRbxPlayDocTemplate  size: 464 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00449910
//
// 00449910  6aff                 push -1
// 00449912  6890107c00           push 0x7c1090
// 00449917  64a100000000         mov eax, dword ptr fs:[0]
// 0044991d  50                   push eax
// 0044991e  64892500000000       mov dword ptr fs:[0], esp
// 00449925  83ec08               sub esp, 8
// 00449928  53                   push ebx
// 00449929  55                   push ebp
// 0044992a  56                   push esi
// 0044992b  57                   push edi
// 0044992c  8bf9                 mov edi, ecx
// 0044992e  897c2410             mov dword ptr [esp + 0x10], edi
// 00449932  e847782500           call 0x6a117e
// 00449937  6898000000           push 0x98
// 0044993c  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00449944  c7075c688100         mov dword ptr [edi], 0x81685c
// 0044994a  e8d16f2500           call 0x6a0920
// 0044994f  8bf0                 mov esi, eax
// 00449951  83c404               add esp, 4
// 00449954  89742414             mov dword ptr [esp + 0x14], esi
// 00449958  c644242001           mov byte ptr [esp + 0x20], 1
// 0044995d  85f6                 test esi, esi
// 0044995f  744e                 je 0x4499af
// 00449961  807c242800           cmp byte ptr [esp + 0x28], 0
// 00449966  7407                 je 0x44996f
// 00449968  e8d3c30000           call 0x455d40
// 0044996d  eb05                 jmp 0x449974
// 0044996f  e8fcf40000           call 0x458e70
// 00449974  8be8                 mov ebp, eax
// 00449976  e80592fcff           call 0x412b80
// 0044997b  8bd8                 mov ebx, eax
// 0044997d  e87e580000           call 0x44f200
// 00449982  55                   push ebp
// 00449983  53                   push ebx
// 00449984  50                   push eax
// 00449985  6881000000           push 0x81
// 0044998a  8bce                 mov ecx, esi
// 0044998c  e83b782500           call 0x6a11cc
// 00449991  8d8e94000000         lea ecx, [esi + 0x94]
// 00449997  c7061c678100         mov dword ptr [esi], 0x81671c
// 0044999d  c7869000000000000000 mov dword ptr [esi + 0x90], 0
// 004499a7  ff15043f8000         call dword ptr [0x803f04]
// 004499ad  eb02                 jmp 0x4499b1
// 004499af  33f6                 xor esi, esi
// 004499b1  56                   push esi
// 004499b2  8bcf                 mov ecx, edi
// 004499b4  c644242400           mov byte ptr [esp + 0x24], 0
// 004499b9  897724               mov dword ptr [edi + 0x24], esi
// 004499bc  e8b1772500           call 0x6a1172
// 004499c1  6890000000           push 0x90
// 004499c6  e8556f2500           call 0x6a0920
// 004499cb  8bf0                 mov esi, eax
// 004499cd  83c404               add esp, 4
// 004499d0  89742428             mov dword ptr [esp + 0x28], esi
// 004499d4  c644242002           mov byte ptr [esp + 0x20], 2
// 004499d9  85f6                 test esi, esi
// 004499db  742a                 je 0x449a07
// 004499dd  e88e45fcff           call 0x40df70
// 004499e2  8bd8                 mov ebx, eax
// 004499e4  e80791fcff           call 0x412af0
// 004499e9  8be8                 mov ebp, eax
// 004499eb  e8b045fcff           call 0x40dfa0
// 004499f0  53                   push ebx
// 004499f1  55                   push ebp
// 004499f2  50                   push eax
// 004499f3  68b9000000           push 0xb9
// 004499f8  8bce                 mov ecx, esi
// 004499fa  e8cd772500           call 0x6a11cc
// 004499ff  c70684668100         mov dword ptr [esi], 0x816684
// 00449a05  eb02                 jmp 0x449a09
// 00449a07  33f6                 xor esi, esi
// 00449a09  56                   push esi
// 00449a0a  8bcf                 mov ecx, edi
// 00449a0c  c644242400           mov byte ptr [esp + 0x24], 0
// 00449a11  897720               mov dword ptr [edi + 0x20], esi
// 00449a14  e859772500           call 0x6a1172
// 00449a19  6890000000           push 0x90
// 00449a1e  e8fd6e2500           call 0x6a0920
// 00449a23  8bf0                 mov esi, eax
// 00449a25  83c404               add esp, 4
// 00449a28  89742428             mov dword ptr [esp + 0x28], esi
// 00449a2c  c644242003           mov byte ptr [esp + 0x20], 3
// 00449a31  85f6                 test esi, esi
// 00449a33  742a                 je 0x449a5f
// 00449a35  e8869e0100           call 0x4638c0
// 00449a3a  8bd8                 mov ebx, eax
// 00449a3c  e8ed722500           call 0x6a0d2e
// 00449a41  8be8                 mov ebp, eax
// 00449a43  e8589e0100           call 0x4638a0
// 00449a48  53                   push ebx
// 00449a49  55                   push ebp
// 00449a4a  50                   push eax
// 00449a4b  68cf000000           push 0xcf
// 00449a50  8bce                 mov ecx, esi
// 00449a52  e875772500           call 0x6a11cc
// 00449a57  c70684668100         mov dword ptr [esi], 0x816684
// 00449a5d  eb02                 jmp 0x449a61
// 00449a5f  33f6                 xor esi, esi
// 00449a61  56                   push esi
// 00449a62  8bcf                 mov ecx, edi
// 00449a64  c644242400           mov byte ptr [esp + 0x24], 0
// 00449a69  897728               mov dword ptr [edi + 0x28], esi
// 00449a6c  e801772500           call 0x6a1172
// 00449a71  6890000000           push 0x90
// 00449a76  e8a56e2500           call 0x6a0920
// 00449a7b  8bf0                 mov esi, eax
// 00449a7d  83c404               add esp, 4
// 00449a80  89742428             mov dword ptr [esp + 0x28], esi
// 00449a84  c644242004           mov byte ptr [esp + 0x20], 4
// 00449a89  85f6                 test esi, esi
// 00449a8b  742a                 je 0x449ab7
// 00449a8d  e87e99feff           call 0x433410
// 00449a92  8be8                 mov ebp, eax
// 00449a94  e895722500           call 0x6a0d2e
// 00449a99  8bd8                 mov ebx, eax
// 00449a9b  e84098feff           call 0x4332e0
// 00449aa0  55                   push ebp
// 00449aa1  53                   push ebx
// 00449aa2  50                   push eax
// 00449aa3  688a000000           push 0x8a
// 00449aa8  8bce                 mov ecx, esi
// 00449aaa  e81d772500           call 0x6a11cc
// 00449aaf  c70684668100         mov dword ptr [esi], 0x816684
// 00449ab5  eb02                 jmp 0x449ab9
// 00449ab7  33f6                 xor esi, esi
// 00449ab9  56                   push esi
// 00449aba  8bcf                 mov ecx, edi
// 00449abc  c644242400           mov byte ptr [esp + 0x24], 0
// 00449ac1  89772c               mov dword ptr [edi + 0x2c], esi
// 00449ac4  e8a9762500           call 0x6a1172
// 00449ac9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00449acd  8bc7                 mov eax, edi
// 00449acf  5f                   pop edi
// 00449ad0  5e                   pop esi
// 00449ad1  5d                   pop ebp
// 00449ad2  5b                   pop ebx
// 00449ad3  64890d00000000       mov dword ptr fs:[0], ecx
// 00449ada  83c414               add esp, 0x14
// 00449add  c20400               ret 4

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

extern char* __cdecl func_0040df70();
extern char* __cdecl func_0040dfa0();
extern char* __cdecl func_00412af0();
extern char* __cdecl func_00412b80();
extern char* __cdecl func_004332e0();
extern char* __cdecl func_00433410();
extern char* __cdecl func_0044f200();
extern char* __cdecl func_00455d40();
extern char* __cdecl func_00458e70();
extern char* __cdecl func_004638a0();
extern char* __cdecl func_004638c0();
extern char* __cdecl func_006a0d2e();

extern void* vtable_00816684[];
extern void* vtable_0081671c[];
extern void* vtable_0081685c[];
extern void (__thiscall* imported_00803f04)(void*);

struct Document {
    void** vptr;
    char padding[0x8c];

    Document(int, char*, char*, char*);
};

struct SimpleDocument : Document {
    SimpleDocument(int, char*, char*, char*);
};

struct ExtendedDocument : Document {
    int field_90;
    unsigned int field_94;

    ExtendedDocument(int, char*, char*, char*);
};

struct TemplateBase {
    void** vptr;
    char padding[0x1c];

    TemplateBase();
    ~TemplateBase();
    void attach(Document*);
};

struct CRbxPlayDocTemplate : TemplateBase {
    SimpleDocument* field_20;
    ExtendedDocument* field_24;
    SimpleDocument* field_28;
    SimpleDocument* field_2c;

    CRbxPlayDocTemplate(bool);
};

__forceinline SimpleDocument::SimpleDocument(
    int id, char* a, char* b, char* c)
    : Document(id, a, b, c)
{
    vptr = vtable_00816684;
}

__forceinline ExtendedDocument::ExtendedDocument(
    int id, char* a, char* b, char* c)
    : Document(id, a, b, c)
{
    vptr = vtable_0081671c;
    field_90 = 0;
    imported_00803f04(&field_94);
}

CRbxPlayDocTemplate::CRbxPlayDocTemplate(bool play)
    : TemplateBase()
{
    vptr = vtable_0081685c;

    field_24 = new ExtendedDocument(
        0x81,
        func_0044f200(),
        func_00412b80(),
        play ? func_00455d40() : func_00458e70());
    attach(field_24);

    field_20 = new SimpleDocument(
        0xb9,
        func_0040dfa0(),
        func_00412af0(),
        func_0040df70());
    attach(field_20);

    field_28 = new SimpleDocument(
        0xcf,
        func_004638a0(),
        func_006a0d2e(),
        func_004638c0());
    attach(field_28);

    field_2c = new SimpleDocument(
        0x8a,
        func_004332e0(),
        func_006a0d2e(),
        func_00433410());
    attach(field_2c);
}
