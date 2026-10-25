// from server: 100% by king_originala
// roc 2008-06 00436a30  unit: COutputView  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00436a30
//
// 00436a30  6aff                 push -1
// 00436a32  6858387c00           push 0x7c3858
// 00436a37  64a100000000         mov eax, dword ptr fs:[0]
// 00436a3d  50                   push eax
// 00436a3e  64892500000000       mov dword ptr fs:[0], esp
// 00436a45  51                   push ecx
// 00436a46  53                   push ebx
// 00436a47  56                   push esi
// 00436a48  57                   push edi
// 00436a49  8bf9                 mov edi, ecx
// 00436a4b  897c240c             mov dword ptr [esp + 0xc], edi
// 00436a4f  e80cf00200           call 0x465a60
// 00436a54  33db                 xor ebx, ebx
// 00436a56  6a04                 push 4
// 00436a58  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00436a5c  c7070c308100         mov dword ptr [edi], 0x81300c
// 00436a62  8db7f8000000         lea esi, [edi + 0xf8]
// 00436a68  e8b39e2600           call 0x6a0920
// 00436a6d  83c404               add esp, 4
// 00436a70  3bc3                 cmp eax, ebx
// 00436a72  7404                 je 0x436a78
// 00436a74  8930                 mov dword ptr [eax], esi
// 00436a76  eb02                 jmp 0x436a7a
// 00436a78  33c0                 xor eax, eax
// 00436a7a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00436a7e  8906                 mov dword ptr [esi], eax
// 00436a80  895e10               mov dword ptr [esi + 0x10], ebx
// 00436a83  895e14               mov dword ptr [esi + 0x14], ebx
// 00436a86  895e18               mov dword ptr [esi + 0x18], ebx
// 00436a89  895e1c               mov dword ptr [esi + 0x1c], ebx
// 00436a8c  899f18010000         mov dword ptr [edi + 0x118], ebx
// 00436a92  899f1c010000         mov dword ptr [edi + 0x11c], ebx
// 00436a98  8bc7                 mov eax, edi
// 00436a9a  5f                   pop edi
// 00436a9b  5e                   pop esi
// 00436a9c  5b                   pop ebx
// 00436a9d  64890d00000000       mov dword ptr fs:[0], ecx
// 00436aa4  83c410               add esp, 0x10
// 00436aa7  c3                   ret 

struct VCSecureHtmlView {
    char pad[0xf0];
    char field_f4;

    VCSecureHtmlView();
    virtual ~VCSecureHtmlView();
};

struct COutputView : VCSecureHtmlView {
    struct Data {
        void** proxy;
        char pad[12];
        unsigned long field_10;
        unsigned long field_14;
        unsigned long field_18;
        unsigned long field_1c;

        Data();
    };

    Data data;
    unsigned long field_118;
    unsigned long field_11c;

    COutputView();
    virtual ~COutputView();
};

inline COutputView::Data::Data()
    : proxy(new void*(this)),
      field_10(0),
      field_14(0),
      field_18(0),
      field_1c(0)
{
}

COutputView::COutputView()
    : field_118(0), field_11c(0)
{
}
