// from server: 100% by king_originala
// roc 2008-06 0045fe80  unit: CPublishAsPlaceDialog  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045fe80
//
// 0045fe80  6aff                 push -1
// 0045fe82  68b8ca7b00           push 0x7bcab8
// 0045fe87  64a100000000         mov eax, dword ptr fs:[0]
// 0045fe8d  50                   push eax
// 0045fe8e  64892500000000       mov dword ptr fs:[0], esp
// 0045fe95  51                   push ecx
// 0045fe96  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0045fe9a  56                   push esi
// 0045fe9b  8bf1                 mov esi, ecx
// 0045fe9d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0045fea1  50                   push eax
// 0045fea2  51                   push ecx
// 0045fea3  6a71                 push 0x71
// 0045fea5  8bce                 mov ecx, esi
// 0045fea7  89742410             mov dword ptr [esp + 0x10], esi
// 0045feab  e800f0feff           call 0x44eeb0
// 0045feb0  8b542418             mov edx, dword ptr [esp + 0x18]
// 0045feb4  52                   push edx
// 0045feb5  8bce                 mov ecx, esi
// 0045feb7  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0045febf  c70664a58100         mov dword ptr [esi], 0x81a564
// 0045fec5  c7467438a58100       mov dword ptr [esi + 0x74], 0x81a538
// 0045fecc  e8c3142400           call 0x6a1394
// 0045fed1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0045fed5  8bc6                 mov eax, esi
// 0045fed7  5e                   pop esi
// 0045fed8  64890d00000000       mov dword ptr fs:[0], ecx
// 0045fedf  83c410               add esp, 0x10
// 0045fee2  c20c00               ret 0xc

struct Primary
{
    virtual void primary();
    char padding[112];
};

struct Secondary
{
    virtual void secondary();
};

struct Base : Primary, Secondary
{
    Base(int, int, int);
    ~Base();
    void initialize(int);
};

struct CPublishAsPlaceDialog : Base
{
    CPublishAsPlaceDialog(int, int, int);
    virtual void primary();
    virtual void secondary();
};

CPublishAsPlaceDialog::CPublishAsPlaceDialog(int a, int b, int c)
    : Base(0x71, b, c)
{
    initialize(a);
}
