// roc 2011-06 006510d0  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006510d0
//
// 006510d0  83ec44               sub esp, 0x44
// 006510d3  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 006510d7  d94008               fld dword ptr [eax + 8]
// 006510da  56                   push esi
// 006510db  83ec18               sub esp, 0x18
// 006510de  dd5c2410             fstp qword ptr [esp + 0x10]
// 006510e2  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 006510ea  d94004               fld dword ptr [eax + 4]
// 006510ed  dd5c2408             fstp qword ptr [esp + 8]
// 006510f1  d900                 fld dword ptr [eax]
// 006510f3  8d442420             lea eax, [esp + 0x20]
// 006510f7  dd1c24               fstp qword ptr [esp]
// 006510fa  6864a2a900           push 0xa9a264
// 006510ff  6a40                 push 0x40
// 00651101  50                   push eax
// 00651102  ff15b809a400         call dword ptr [0xa409b8]
// 00651108  8b742470             mov esi, dword ptr [esp + 0x70]
// 0065110c  83c424               add esp, 0x24
// 0065110f  8d4c2408             lea ecx, [esp + 8]
// 00651113  51                   push ecx
// 00651114  8bce                 mov ecx, esi
// 00651116  ff15c404a400         call dword ptr [0xa404c4]
// 0065111c  8bc6                 mov eax, esi
// 0065111e  5e                   pop esi
// 0065111f  83c444               add esp, 0x44
// 00651122  c3                   ret 
// copied from an identical function in another client (function ?f@@YA?AUString@@ABUVector@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct String;

typedef int (__cdecl *FormatFunction)(char*, unsigned int, const char*, ...);
typedef void (__thiscall *StringConstructor)(String*, const char*);

extern FormatFunction formatFunction;
extern StringConstructor stringConstructor;

struct Vector {
    float x, y, z;
};

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

__forceinline String::String(const char* text)
{
    stringConstructor(this, text);
}

String __cdecl f(const Vector& value)
{
    char buffer[64];
    formatFunction(buffer, 64, "%g, %g, %g",
                   value.x, value.y, value.z);
    return String(buffer);
}