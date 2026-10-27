// from server: 91% by king_originala
// roc 2008-06 0040a1c0  unit: VAuthoringSettings::?$FactoryProduct  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040a1c0
//
// 0040a1c0  55                   push ebp
// 0040a1c1  8bec                 mov ebp, esp
// 0040a1c3  6aff                 push -1
// 0040a1c5  6821d17b00           push 0x7bd121
// 0040a1ca  64a100000000         mov eax, dword ptr fs:[0]
// 0040a1d0  50                   push eax
// 0040a1d1  64892500000000       mov dword ptr fs:[0], esp
// 0040a1d8  83ec30               sub esp, 0x30
// 0040a1db  53                   push ebx
// 0040a1dc  56                   push esi
// 0040a1dd  33d2                 xor edx, edx
// 0040a1df  57                   push edi
// 0040a1e0  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040a1e3  8955fc               mov dword ptr [ebp - 4], edx
// 0040a1e6  3bca                 cmp ecx, edx
// 0040a1e8  7406                 je 0x40a1f0
// 0040a1ea  8d913cffffff         lea edx, [ecx - 0xc4]
// 0040a1f0  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0040a1f3  8b7508               mov esi, dword ptr [ebp + 8]
// 0040a1f6  83ec08               sub esp, 8
// 0040a1f9  8bc4                 mov eax, esp
// 0040a1fb  894804               mov dword ptr [eax + 4], ecx
// 0040a1fe  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0040a201  8930                 mov dword ptr [eax], esi
// 0040a203  8b01                 mov eax, dword ptr [ecx]
// 0040a205  8965ec               mov dword ptr [ebp - 0x14], esp
// 0040a208  52                   push edx
// 0040a209  8b10                 mov edx, dword ptr [eax]
// 0040a20b  ffd2                 call edx
// 0040a20d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040a210  5f                   pop edi
// 0040a211  5e                   pop esi
// 0040a212  64890d00000000       mov dword ptr fs:[0], ecx
// 0040a219  5b                   pop ebx
// 0040a21a  8be5                 mov esp, ebp
// 0040a21c  5d                   pop ebp
// 0040a21d  c20c00               ret 0xc
// 0040a220  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0040a223  8b01                 mov eax, dword ptr [ecx]
// 0040a225  8b5004               mov edx, dword ptr [eax + 4]
// 0040a228  ffd2                 call edx
// 0040a22a  50                   push eax
// 0040a22b  8d4dc4               lea ecx, [ebp - 0x3c]
// 0040a22e  ff1558248000         call dword ptr [0x802458]
// 0040a234  8d45e0               lea eax, [ebp - 0x20]
// 0040a237  bb02000000           mov ebx, 2
// 0040a23c  50                   push eax
// 0040a23d  885dfc               mov byte ptr [ebp - 4], bl
// 0040a240  e8dbf31500           call 0x569620
// 0040a245  83c404               add esp, 4
// 0040a248  8b30                 mov esi, dword ptr [eax]
// 0040a24a  8d4dc4               lea ecx, [ebp - 0x3c]
// 0040a24d  c645fc03             mov byte ptr [ebp - 4], 3
// 0040a251  ff1564248000         call dword ptr [0x802464]
// 0040a257  50                   push eax
// 0040a258  68c4b98000           push 0x80b9c4
// 0040a25d  53                   push ebx
// 0040a25e  56                   push esi
// 0040a25f  e83cf11500           call 0x5693a0
// 0040a264  83c410               add esp, 0x10
// 0040a267  8d4de0               lea ecx, [ebp - 0x20]
// 0040a26a  885dfc               mov byte ptr [ebp - 4], bl
// 0040a26d  e8ee631f00           call 0x600660
// 0040a272  8d4dc4               lea ecx, [ebp - 0x3c]
// 0040a275  c645fc01             mov byte ptr [ebp - 4], 1
// 0040a279  ff1568248000         call dword ptr [0x802468]
// 0040a27f  b80da24000           mov eax, 0x40a20d
// 0040a284  c3                   ret 

#include <string>
#include <exception>
struct StandardOut {
    void print(int, const char *, ...);
};

struct OutHandle {
    StandardOut *pointer;
    void *count;
    ~OutHandle();
    StandardOut *operator->() const { return pointer; }
};

OutHandle __cdecl singleton();


// from server: 100% by colin
// roc 2008-06 0040a1c0  unit: VAuthoringSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040a1c0
//
// 0040a1c0  55                   push ebp
// 0040a1c1  8bec                 mov ebp, esp
// 0040a1c3  6aff                 push -1
// 0040a1c5  6821d17b00           push 0x7bd121
// 0040a1ca  64a100000000         mov eax, dword ptr fs:[0]
// 0040a1d0  50                   push eax
// 0040a1d1  64892500000000       mov dword ptr fs:[0], esp
// 0040a1d8  83ec30               sub esp, 0x30
// 0040a1db  53                   push ebx
// 0040a1dc  56                   push esi
// 0040a1dd  33d2                 xor edx, edx
// 0040a1df  57                   push edi
// 0040a1e0  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040a1e3  8955fc               mov dword ptr [ebp - 4], edx
// 0040a1e6  3bca                 cmp ecx, edx
// 0040a1e8  7406                 je 0x40a1f0
// 0040a1ea  8d913cffffff         lea edx, [ecx - 0xc4]
// 0040a1f0  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0040a1f3  8b7508               mov esi, dword ptr [ebp + 8]
// 0040a1f6  83ec08               sub esp, 8
// 0040a1f9  8bc4                 mov eax, esp
// 0040a1fb  894804               mov dword ptr [eax + 4], ecx
// 0040a1fe  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0040a201  8930                 mov dword ptr [eax], esi
// 0040a203  8b01                 mov eax, dword ptr [ecx]
// 0040a205  8965ec               mov dword ptr [ebp - 0x14], esp
// 0040a208  52                   push edx
// 0040a209  8b10                 mov edx, dword ptr [eax]
// 0040a20b  ffd2                 call edx

// from server: 93% by king_originala
struct Arguments {
    unsigned int second;
    unsigned int first;

    Arguments(const Arguments& other);
};

inline Arguments::Arguments(const Arguments& other)
{
    unsigned int b = other.second;
    unsigned int a = other.first;
    second = b;
    first = a;
}

struct Callback {
    virtual void invoke(void* object, Arguments arguments) = 0;
};

struct S {
    void f(Arguments arguments, Callback* callback);
};

void S::f(Arguments arguments, Callback* callback)
{
    try {
        void* object = 0;
        if (this)
            object = reinterpret_cast<char*>(this) - 0xC4;
        callback->invoke(object, arguments);
    }
    catch (std::exception& error) {
        std::string what(error.what());
        singleton()->print(2, "Exception caught in onEvent. %s", what.c_str());
    }
}
