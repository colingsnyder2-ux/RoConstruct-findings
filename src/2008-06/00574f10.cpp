// from server: 100% by king_originala
// roc 2008-06 00574f10  unit: RBX::UnifiedWidget  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00574f10
//
// 00574f10  64a100000000         mov eax, dword ptr fs:[0]
// 00574f16  6aff                 push -1
// 00574f18  6809b77d00           push 0x7db709
// 00574f1d  50                   push eax
// 00574f1e  64892500000000       mov dword ptr fs:[0], esp
// 00574f25  8d442410             lea eax, [esp + 0x10]
// 00574f29  50                   push eax
// 00574f2a  81c134020000         add ecx, 0x234
// 00574f30  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00574f38  ff150c248000         call dword ptr [0x80240c]
// 00574f3e  8d4c2410             lea ecx, [esp + 0x10]
// 00574f42  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 00574f4a  ff1568248000         call dword ptr [0x802468]
// 00574f50  8b0c24               mov ecx, dword ptr [esp]
// 00574f53  64890d00000000       mov dword ptr fs:[0], ecx
// 00574f5a  83c40c               add esp, 0xc
// 00574f5d  c21c00               ret 0x1c

struct String;

extern String& (__thiscall *string_assign)(String*, const String&);
extern void (__thiscall *string_destroy)(String*);

struct String {
    char storage[28];
    ~String() { string_destroy(this); }
};

struct S_func_00574f10 {
    char pad0[564];
    String text;
    void f(String value);
};

void S_func_00574f10::f(String value)
{
    string_assign(&text, value);
}
