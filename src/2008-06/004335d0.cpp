// from server: 100% by king_originala
// roc 2008-06 004335d0  unit: CObjectBrowser  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004335d0
//
// 004335d0  53                   push ebx
// 004335d1  56                   push esi
// 004335d2  57                   push edi
// 004335d3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004335d7  8bf7                 mov esi, edi
// 004335d9  e822ffffff           call 0x433500
// 004335de  8b742414             mov esi, dword ptr [esp + 0x14]
// 004335e2  8bd8                 mov ebx, eax
// 004335e4  e817ffffff           call 0x433500
// 004335e9  8bc8                 mov ecx, eax
// 004335eb  3bd9                 cmp ebx, ecx
// 004335ed  740a                 je 0x4335f9
// 004335ef  5f                   pop edi
// 004335f0  8bc3                 mov eax, ebx
// 004335f2  5e                   pop esi
// 004335f3  2bc1                 sub eax, ecx
// 004335f5  5b                   pop ebx
// 004335f6  c20c00               ret 0xc
// 004335f9  8b4604               mov eax, dword ptr [esi + 4]
// 004335fc  8d4804               lea ecx, [eax + 4]
// 004335ff  ff1564248000         call dword ptr [0x802464]
// 00433605  8b4f04               mov ecx, dword ptr [edi + 4]
// 00433608  83c104               add ecx, 4
// 0043360b  8bf0                 mov esi, eax
// 0043360d  ff1564248000         call dword ptr [0x802464]
// 00433613  8a08                 mov cl, byte ptr [eax]
// 00433615  3a0e                 cmp cl, byte ptr [esi]
// 00433617  751e                 jne 0x433637
// 00433619  84c9                 test cl, cl
// 0043361b  7412                 je 0x43362f
// 0043361d  8a4801               mov cl, byte ptr [eax + 1]
// 00433620  3a4e01               cmp cl, byte ptr [esi + 1]
// 00433623  7512                 jne 0x433637
// 00433625  83c002               add eax, 2
// 00433628  83c602               add esi, 2
// 0043362b  84c9                 test cl, cl
// 0043362d  75e4                 jne 0x433613
// 0043362f  5f                   pop edi
// 00433630  5e                   pop esi
// 00433631  33c0                 xor eax, eax
// 00433633  5b                   pop ebx
// 00433634  c20c00               ret 0xc
// 00433637  5f                   pop edi
// 00433638  1bc0                 sbb eax, eax
// 0043363a  5e                   pop esi
// 0043363b  83d8ff               sbb eax, -1
// 0043363e  5b                   pop ebx
// 0043363f  c20c00               ret 0xc

// from server: 93% by colin
#include <string.h>

struct String
{
    typedef const char* (__thiscall *CStr)(const String*);
    static CStr c_str;
};

struct Object
{
    unsigned char unknown[4];
    String name;
};

struct Item
{
    unsigned char unknown[4];
    Object* object;
};

extern int __stdcall G1_impl(const Item*);
extern int __stdcall G1_check(const Item*);

static __declspec(noinline) int G1(const Item* item)
{
    if (G1_check(item))
        return 0;
    return G1_impl(item);
}

int __stdcall func_004335d0(const Item* volatile input, const Item* second, long)
{
    const Item* first=input;
    int a = G1(first);
    int b = G1(second);

    if (a != b)
        return a - b;

    Object* object = second->object;
    const char* secondName = String::c_str(&object->name);
    return strcmp(String::c_str(&first->object->name), secondName);
}