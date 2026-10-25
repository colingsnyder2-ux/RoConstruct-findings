// from server: 100% by king_originala
// roc 2008-06 00401220  unit: CInsertObjectDialog  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00401220
//
// 00401220  6aff                 push -1
// 00401222  68b8ca7b00           push 0x7bcab8
// 00401227  64a100000000         mov eax, dword ptr fs:[0]
// 0040122d  50                   push eax
// 0040122e  64892500000000       mov dword ptr fs:[0], esp
// 00401235  51                   push ecx
// 00401236  8b442414             mov eax, dword ptr [esp + 0x14]
// 0040123a  56                   push esi
// 0040123b  50                   push eax
// 0040123c  6a76                 push 0x76
// 0040123e  8bf1                 mov esi, ecx
// 00401240  6a75                 push 0x75
// 00401242  89742410             mov dword ptr [esp + 0x10], esi
// 00401246  e8f5dc0400           call 0x44ef40
// 0040124b  8b8e0c010000         mov ecx, dword ptr [esi + 0x10c]
// 00401251  81c907408401         or ecx, 0x1844007
// 00401257  51                   push ecx
// 00401258  8bce                 mov ecx, esi
// 0040125a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00401262  c706c4aa8000         mov dword ptr [esi], 0x80aac4
// 00401268  c7467498aa8000       mov dword ptr [esi + 0x74], 0x80aa98
// 0040126f  e8b8f62900           call 0x6a092c
// 00401274  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00401278  8bc6                 mov eax, esi
// 0040127a  5e                   pop esi
// 0040127b  64890d00000000       mov dword ptr fs:[0], ecx
// 00401282  83c410               add esp, 0x10
// 00401285  c20400               ret 4

struct Primary
{
    virtual void f();
    char padding[0x70];
};

struct Secondary
{
    virtual void f();
    char padding[0x94];
    unsigned style;
};

struct Base : Primary, Secondary
{
    Base(int, int, void*);
    ~Base();
    void setStyle(unsigned);
};

struct CInsertObjectDialog : Base
{
    CInsertObjectDialog(void*);
    virtual void f();
};

CInsertObjectDialog::CInsertObjectDialog(void* arg)
    : Base(0x75, 0x76, arg)
{
    setStyle(style | 0x01844007);
}
