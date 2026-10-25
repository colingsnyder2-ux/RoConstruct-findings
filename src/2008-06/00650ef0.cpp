// from server: 100% by colin
// roc 2008-06 00650ef0  unit: RBX::ChatOutput  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00650ef0
//
// 00650ef0  64a100000000         mov eax, dword ptr fs:[0]
// 00650ef6  6aff                 push -1
// 00650ef8  6809b77d00           push 0x7db709
// 00650efd  50                   push eax
// 00650efe  64892500000000       mov dword ptr fs:[0], esp
// 00650f05  56                   push esi
// 00650f06  57                   push edi
// 00650f07  8bf1                 mov esi, ecx
// 00650f09  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00650f0c  2b4e24               sub ecx, dword ptr [esi + 0x24]
// 00650f0f  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00650f13  b893244992           mov eax, 0x92492493
// 00650f18  f7e9                 imul ecx
// 00650f1a  03d1                 add edx, ecx
// 00650f1c  c1fa04               sar edx, 4
// 00650f1f  8bc2                 mov eax, edx
// 00650f21  c1e81f               shr eax, 0x1f
// 00650f24  03c2                 add eax, edx
// 00650f26  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00650f2e  3bf8                 cmp edi, eax
// 00650f30  7206                 jb 0x650f38
// 00650f32  ff1590288000         call dword ptr [0x802890]
// 00650f38  8b4624               mov eax, dword ptr [esi + 0x24]
// 00650f3b  8d4c2418             lea ecx, [esp + 0x18]
// 00650f3f  8d14fd00000000       lea edx, [edi*8]
// 00650f46  2bd7                 sub edx, edi
// 00650f48  51                   push ecx
// 00650f49  8d0c90               lea ecx, [eax + edx*4]
// 00650f4c  ff150c248000         call dword ptr [0x80240c]
// 00650f52  8d4c2418             lea ecx, [esp + 0x18]
// 00650f56  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00650f5e  ff1568248000         call dword ptr [0x802468]
// 00650f64  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00650f68  5f                   pop edi
// 00650f69  64890d00000000       mov dword ptr fs:[0], ecx
// 00650f70  5e                   pop esi
// 00650f71  83c40c               add esp, 0xc
// 00650f74  c22000               ret 0x20

extern "C" __declspec(dllimport) void __cdecl _invalid_parameter_noinfo();

struct String {
    char storage[28];
    __declspec(dllimport) ~String();
    __declspec(dllimport) String& operator=(const String&);
};

struct S {
    char padding[36];
    String* first;
    String* last;
    void f(String text, unsigned int index);
};

void S::f(String text, unsigned int index)
{
    if (index >= static_cast<unsigned int>(last - first))
        _invalid_parameter_noinfo();

    first[index] = text;
}
