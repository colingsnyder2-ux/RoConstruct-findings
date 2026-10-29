// roc 2010-06 0061fcc0  unit: RBX::DropperTool  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0061fcc0
//
// 0061fcc0  83ec44               sub esp, 0x44
// 0061fcc3  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0061fcc7  d94008               fld dword ptr [eax + 8]
// 0061fcca  56                   push esi
// 0061fccb  83ec18               sub esp, 0x18
// 0061fcce  dd5c2410             fstp qword ptr [esp + 0x10]
// 0061fcd2  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0061fcda  d94004               fld dword ptr [eax + 4]
// 0061fcdd  dd5c2408             fstp qword ptr [esp + 8]
// 0061fce1  d900                 fld dword ptr [eax]
// 0061fce3  8d442420             lea eax, [esp + 0x20]
// 0061fce7  dd1c24               fstp qword ptr [esp]
// 0061fcea  68ec29a300           push 0xa329ec
// 0061fcef  6a40                 push 0x40
// 0061fcf1  50                   push eax
// 0061fcf2  ff15f8a79e00         call dword ptr [0x9ea7f8]
// 0061fcf8  8b742470             mov esi, dword ptr [esp + 0x70]
// 0061fcfc  83c424               add esp, 0x24
// 0061fcff  8d4c2408             lea ecx, [esp + 8]
// 0061fd03  51                   push ecx
// 0061fd04  8bce                 mov ecx, esi
// 0061fd06  ff1510a49e00         call dword ptr [0x9ea410]
// 0061fd0c  8bc6                 mov eax, esi
// 0061fd0e  5e                   pop esi
// 0061fd0f  83c444               add esp, 0x44
// 0061fd12  c3                   ret 
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