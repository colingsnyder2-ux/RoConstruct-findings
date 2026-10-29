// roc 2009-12 006b2100  unit: RBX::DropperTool  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b2100
//
// 006b2100  83ec44               sub esp, 0x44
// 006b2103  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 006b2107  d94008               fld dword ptr [eax + 8]
// 006b210a  56                   push esi
// 006b210b  83ec18               sub esp, 0x18
// 006b210e  dd5c2410             fstp qword ptr [esp + 0x10]
// 006b2112  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 006b211a  d94004               fld dword ptr [eax + 4]
// 006b211d  dd5c2408             fstp qword ptr [esp + 8]
// 006b2121  d900                 fld dword ptr [eax]
// 006b2123  8d442420             lea eax, [esp + 0x20]
// 006b2127  dd1c24               fstp qword ptr [esp]
// 006b212a  68243f9d00           push 0x9d3f24
// 006b212f  6a40                 push 0x40
// 006b2131  50                   push eax
// 006b2132  ff1538b89800         call dword ptr [0x98b838]
// 006b2138  8b742470             mov esi, dword ptr [esp + 0x70]
// 006b213c  83c424               add esp, 0x24
// 006b213f  8d4c2408             lea ecx, [esp + 8]
// 006b2143  51                   push ecx
// 006b2144  8bce                 mov ecx, esi
// 006b2146  ff15f4b69800         call dword ptr [0x98b6f4]
// 006b214c  8bc6                 mov eax, esi
// 006b214e  5e                   pop esi
// 006b214f  83c444               add esp, 0x44
// 006b2152  c3                   ret 
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