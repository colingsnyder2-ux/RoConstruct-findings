// from server: 88% by colin
// from server: 87% by king_originala
// roc 2008-06 0044f660  unit: CPublishAsPlaceDialog  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044f660
//
// 0044f660  6aff                 push -1
// 0044f662  68d2167c00           push 0x7c16d2
// 0044f667  64a100000000         mov eax, dword ptr fs:[0]
// 0044f66d  50                   push eax
// 0044f66e  64892500000000       mov dword ptr fs:[0], esp
// 0044f675  83ec08               sub esp, 8
// 0044f678  56                   push esi
// 0044f679  8d442408             lea eax, [esp + 8]
// 0044f67d  50                   push eax
// 0044f67e  8bf1                 mov esi, ecx
// 0044f680  e84b6afbff           call 0x4060d0
// 0044f685  6838798100           push 0x817938
// 0044f68a  50                   push eax
// 0044f68b  8d4c2410             lea ecx, [esp + 0x10]
// 0044f68f  51                   push ecx
// 0044f690  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0044f698  e8c3eafbff           call 0x40e160
// 0044f69d  83c410               add esp, 0x10
// 0044f6a0  8b542420             mov edx, dword ptr [esp + 0x20]
// 0044f6a4  52                   push edx
// 0044f6a5  8bc8                 mov ecx, eax
// 0044f6a7  c644241801           mov byte ptr [esp + 0x18], 1
// 0044f6ac  ff15e03e8000         call dword ptr [0x803ee0]
// 0044f6b2  50                   push eax
// 0044f6b3  8b442424             mov eax, dword ptr [esp + 0x24]
// 0044f6b7  50                   push eax
// 0044f6b8  8bce                 mov ecx, esi
// 0044f6ba  e8c1070100           call 0x45fe80
// 0044f6bf  8d4c2404             lea ecx, [esp + 4]
// 0044f6c3  ff15143f8000         call dword ptr [0x803f14]
// 0044f6c9  8d4c2408             lea ecx, [esp + 8]
// 0044f6cd  ff15143f8000         call dword ptr [0x803f14]
// 0044f6d3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044f6d7  c7067c778100         mov dword ptr [esi], 0x81777c
// 0044f6dd  c7467450778100       mov dword ptr [esi + 0x74], 0x817750
// 0044f6e4  8bc6                 mov eax, esi
// 0044f6e6  5e                   pop esi
// 0044f6e7  64890d00000000       mov dword ptr fs:[0], ecx
// 0044f6ee  83c414               add esp, 0x14
// 0044f6f1  c20800               ret 8

struct String
{
    void* data;
    __declspec(dllimport) ~String() throw();
    int value() const;
};

extern String __cdecl make_exception();
extern String __cdecl combine(const String&, const char*);
extern const char path[];

typedef void (__thiscall *DestroyString)(String*);
typedef int (__thiscall *StringValue)(const String*);

extern DestroyString destroyString;
extern StringValue stringValue;

inline int String::value() const
{
    return stringValue(this);
}

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
};

struct CPublishAsPlaceDialog : Base
{
    CPublishAsPlaceDialog(int, int);
    virtual void primary();
    virtual void secondary();
};

CPublishAsPlaceDialog::CPublishAsPlaceDialog(int first, int second)
    : Base(first, combine(make_exception(), path).value(), second)
{
}
