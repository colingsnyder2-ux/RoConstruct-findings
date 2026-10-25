// from server: 100% by king_originala
// roc 2008-06 00458d80  unit: CRobloxReportView  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00458d80
//
// 00458d80  6aff                 push -1
// 00458d82  681afa7b00           push 0x7bfa1a
// 00458d87  64a100000000         mov eax, dword ptr fs:[0]
// 00458d8d  50                   push eax
// 00458d8e  64892500000000       mov dword ptr fs:[0], esp
// 00458d95  51                   push ecx
// 00458d96  56                   push esi
// 00458d97  68d4030000           push 0x3d4
// 00458d9c  e87f7b2400           call 0x6a0920
// 00458da1  8bf0                 mov esi, eax
// 00458da3  83c404               add esp, 4
// 00458da6  89742404             mov dword ptr [esp + 4], esi
// 00458daa  33c0                 xor eax, eax
// 00458dac  89442410             mov dword ptr [esp + 0x10], eax
// 00458db0  3bf0                 cmp esi, eax
// 00458db2  7423                 je 0x458dd7
// 00458db4  8bce                 mov ecx, esi
// 00458db6  e885ecffff           call 0x457a40
// 00458dbb  c706948c8100         mov dword ptr [esi], 0x818c94
// 00458dc1  c786780300007c8c8100 mov dword ptr [esi + 0x378], 0x818c7c
// 00458dcb  c7869c030000688c8100 mov dword ptr [esi + 0x39c], 0x818c68
// 00458dd5  8bc6                 mov eax, esi
// 00458dd7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00458ddb  5e                   pop esi
// 00458ddc  64890d00000000       mov dword ptr fs:[0], ecx
// 00458de3  83c410               add esp, 0x10
// 00458de6  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Base {
    char data[0x374];
    Base();
    virtual ~Base();
};

struct ListenerA {
    char data[0x20];
    ListenerA();
    virtual ~ListenerA();
};

struct ListenerB {
    char data[0x20];
    ListenerB();
    virtual ~ListenerB();
};

struct ReportViewBase : Base, ListenerA, ListenerB {
    char data[0x14];
    ReportViewBase();
    virtual ~ReportViewBase();
};

struct CRobloxReportView : ReportViewBase {
    virtual ~CRobloxReportView();
};

CRobloxReportView* __cdecl CreateReportView()
{
    return new CRobloxReportView;
}
