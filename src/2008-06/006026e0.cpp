// from server: 81% by colin
// from server: 79% by king_originala
// roc 2008-06 006026e0  unit: RBX::UnifiedImageWidget  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006026e0
//
// 006026e0  6aff                 push -1
// 006026e2  683b467d00           push 0x7d463b
// 006026e7  64a100000000         mov eax, dword ptr fs:[0]
// 006026ed  50                   push eax
// 006026ee  64892500000000       mov dword ptr fs:[0], esp
// 006026f5  83ec08               sub esp, 8
// 006026f8  c7042400000000       mov dword ptr [esp], 0
// 006026ff  6844010000           push 0x144
// 00602704  c644240400           mov byte ptr [esp + 4], 0
// 00602709  ff15b0288000         call dword ptr [0x8028b0]
// 0060270f  83c404               add esp, 4
// 00602712  89442404             mov dword ptr [esp + 4], eax
// 00602716  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0060271e  85c0                 test eax, eax
// 00602720  741b                 je 0x60273d
// 00602722  d9442420             fld dword ptr [esp + 0x20]
// 00602726  83ec08               sub esp, 8
// 00602729  d95c2404             fstp dword ptr [esp + 4]
// 0060272d  8bc8                 mov ecx, eax
// 0060272f  d9442424             fld dword ptr [esp + 0x24]
// 00602733  d91c24               fstp dword ptr [esp]
// 00602736  e8a5deffff           call 0x6005e0
// 0060273b  eb02                 jmp 0x60273f
// 0060273d  33c0                 xor eax, eax
// 0060273f  8b0c24               mov ecx, dword ptr [esp]
// 00602742  56                   push esi
// 00602743  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00602747  51                   push ecx
// 00602748  50                   push eax
// 00602749  8bce                 mov ecx, esi
// 0060274b  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00602753  e848f4ffff           call 0x601ba0
// 00602758  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060275c  8bc6                 mov eax, esi
// 0060275e  5e                   pop esi
// 0060275f  64890d00000000       mov dword ptr fs:[0], ecx
// 00602766  83c414               add esp, 0x14
// 00602769  c3                   ret 

extern "C" void* __cdecl malloc(unsigned int);
extern "C" void __cdecl free(void*);

struct __declspec(dllimport) Widget {
    char data[0x144];
    Widget(float, float);

    static void* operator new(unsigned int size);
    static void operator delete(void* p);
};

struct EmptyTag {};

struct Result {
    Widget* object;
    void* control;

    Result(Widget*, EmptyTag = EmptyTag());
};

Result createWidget(float x, float y)
{
    return Result(new Widget(x, y));
}
