// from server: 100% by king_originala
// roc 2008-06 005becf0  unit: RBX::Soundscape::SoundService  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005becf0
//
// 005becf0  83ec44               sub esp, 0x44
// 005becf3  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 005becf7  d94008               fld dword ptr [eax + 8]
// 005becfa  56                   push esi
// 005becfb  83ec18               sub esp, 0x18
// 005becfe  dd5c2410             fstp qword ptr [esp + 0x10]
// 005bed02  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005bed0a  d94004               fld dword ptr [eax + 4]
// 005bed0d  dd5c2408             fstp qword ptr [esp + 8]
// 005bed11  d900                 fld dword ptr [eax]
// 005bed13  8d442420             lea eax, [esp + 0x20]
// 005bed17  dd1c24               fstp qword ptr [esp]
// 005bed1a  6864848300           push 0x838464
// 005bed1f  6a40                 push 0x40
// 005bed21  50                   push eax
// 005bed22  ff15b4278000         call dword ptr [0x8027b4]
// 005bed28  8b742470             mov esi, dword ptr [esp + 0x70]
// 005bed2c  83c424               add esp, 0x24
// 005bed2f  8d4c2408             lea ecx, [esp + 8]
// 005bed33  51                   push ecx
// 005bed34  8bce                 mov ecx, esi
// 005bed36  ff1558248000         call dword ptr [0x802458]
// 005bed3c  8bc6                 mov eax, esi
// 005bed3e  5e                   pop esi
// 005bed3f  83c444               add esp, 0x44
// 005bed42  c3                   ret 

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
