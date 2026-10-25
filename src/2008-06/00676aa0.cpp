// from server: 100% by king_originala
// roc 2008-06 00676aa0  unit: RBX::AdornG3D  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00676aa0
//
// 00676aa0  6aff                 push -1
// 00676aa2  683bf47b00           push 0x7bf43b
// 00676aa7  64a100000000         mov eax, dword ptr fs:[0]
// 00676aad  50                   push eax
// 00676aae  64892500000000       mov dword ptr fs:[0], esp
// 00676ab5  51                   push ecx
// 00676ab6  56                   push esi
// 00676ab7  6a54                 push 0x54
// 00676ab9  8bf1                 mov esi, ecx
// 00676abb  c744240800000000     mov dword ptr [esp + 8], 0
// 00676ac3  e8589e0200           call 0x6a0920
// 00676ac8  83c404               add esp, 4
// 00676acb  89442404             mov dword ptr [esp + 4], eax
// 00676acf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00676ad7  85c0                 test eax, eax
// 00676ad9  7414                 je 0x676aef
// 00676adb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00676adf  6a00                 push 0
// 00676ae1  51                   push ecx
// 00676ae2  83c608               add esi, 8
// 00676ae5  56                   push esi
// 00676ae6  8bc8                 mov ecx, eax
// 00676ae8  e843b0edff           call 0x551b30
// 00676aed  eb02                 jmp 0x676af1
// 00676aef  33c0                 xor eax, eax
// 00676af1  8b742418             mov esi, dword ptr [esp + 0x18]
// 00676af5  50                   push eax
// 00676af6  8bce                 mov ecx, esi
// 00676af8  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00676b00  c70600000000         mov dword ptr [esi], 0
// 00676b06  e89524f2ff           call 0x598fa0
// 00676b0b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00676b0f  8bc6                 mov eax, esi
// 00676b11  5e                   pop esi
// 00676b12  64890d00000000       mov dword ptr fs:[0], ecx
// 00676b19  83c410               add esp, 0x10
// 00676b1c  c20800               ret 8

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Object {
    char storage[0x54];
    Object(void*, int, int);
};

struct Handle {
    Object* pointer;
    Handle(Object*);
    ~Handle();
    void assign(Object*);
};

__forceinline Handle::Handle(Object* value) : pointer(0) {
    assign(value);
}

struct S {
    char padding[8];
    char data;
    Handle f(int);
};

Handle S::f(int value) {
    return Handle(new Object(&data, value, 0));
}
