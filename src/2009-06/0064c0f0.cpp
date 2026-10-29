// roc 2009-06 0064c0f0  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064c0f0
//
// 0064c0f0  83ec44               sub esp, 0x44
// 0064c0f3  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0064c0f7  d94008               fld dword ptr [eax + 8]
// 0064c0fa  56                   push esi
// 0064c0fb  83ec18               sub esp, 0x18
// 0064c0fe  dd5c2410             fstp qword ptr [esp + 0x10]
// 0064c102  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0064c10a  d94004               fld dword ptr [eax + 4]
// 0064c10d  dd5c2408             fstp qword ptr [esp + 8]
// 0064c111  d900                 fld dword ptr [eax]
// 0064c113  8d442420             lea eax, [esp + 0x20]
// 0064c117  dd1c24               fstp qword ptr [esp]
// 0064c11a  689cf18d00           push 0x8df19c
// 0064c11f  6a40                 push 0x40
// 0064c121  50                   push eax
// 0064c122  ff15e0e88900         call dword ptr [0x89e8e0]
// 0064c128  8b742470             mov esi, dword ptr [esp + 0x70]
// 0064c12c  83c424               add esp, 0x24
// 0064c12f  8d4c2408             lea ecx, [esp + 8]
// 0064c133  51                   push ecx
// 0064c134  8bce                 mov ecx, esi
// 0064c136  ff15b4e48900         call dword ptr [0x89e4b4]
// 0064c13c  8bc6                 mov eax, esi
// 0064c13e  5e                   pop esi
// 0064c13f  83c444               add esp, 0x44
// 0064c142  c3                   ret 
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