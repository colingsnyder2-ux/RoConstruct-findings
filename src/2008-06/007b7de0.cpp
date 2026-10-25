// from server: 100% by king_originala
// roc 2008-06 007b7de0  unit: RBX::Render::Material::Level  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b7de0
//
// 007b7de0  6aff                 push -1
// 007b7de2  68b4e47e00           push 0x7ee4b4
// 007b7de7  64a100000000         mov eax, dword ptr fs:[0]
// 007b7ded  50                   push eax
// 007b7dee  64892500000000       mov dword ptr fs:[0], esp
// 007b7df5  83ec34               sub esp, 0x34
// 007b7df8  56                   push esi
// 007b7df9  8bf1                 mov esi, ecx
// 007b7dfb  8b4604               mov eax, dword ptr [esi + 4]
// 007b7dfe  3b4608               cmp eax, dword ptr [esi + 8]
// 007b7e01  89742404             mov dword ptr [esp + 4], esi
// 007b7e05  7d34                 jge 0x7b7e3b
// 007b7e07  6bc02c               imul eax, eax, 0x2c
// 007b7e0a  0306                 add eax, dword ptr [esi]
// 007b7e0c  89442408             mov dword ptr [esp + 8], eax
// 007b7e10  c744244000000000     mov dword ptr [esp + 0x40], 0
// 007b7e18  740c                 je 0x7b7e26
// 007b7e1a  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007b7e1e  51                   push ecx
// 007b7e1f  8bc8                 mov ecx, eax
// 007b7e21  e8daf7ffff           call 0x7b7600
// 007b7e26  ff4604               inc dword ptr [esi + 4]
// 007b7e29  5e                   pop esi
// 007b7e2a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007b7e2e  64890d00000000       mov dword ptr fs:[0], ecx
// 007b7e35  83c440               add esp, 0x40
// 007b7e38  c20400               ret 4
// 007b7e3b  8b0e                 mov ecx, dword ptr [esi]
// 007b7e3d  57                   push edi
// 007b7e3e  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 007b7e42  3bf9                 cmp edi, ecx
// 007b7e44  724d                 jb 0x7b7e93
// 007b7e46  8bd0                 mov edx, eax
// 007b7e48  6bd22c               imul edx, edx, 0x2c
// 007b7e4b  03d1                 add edx, ecx
// 007b7e4d  3bfa                 cmp edi, edx
// 007b7e4f  7342                 jae 0x7b7e93
// 007b7e51  57                   push edi
// 007b7e52  8d4c2414             lea ecx, [esp + 0x14]
// 007b7e56  e8a5f7ffff           call 0x7b7600
// 007b7e5b  8d442410             lea eax, [esp + 0x10]
// 007b7e5f  50                   push eax
// 007b7e60  8bce                 mov ecx, esi
// 007b7e62  c744244801000000     mov dword ptr [esp + 0x48], 1
// 007b7e6a  e871ffffff           call 0x7b7de0
// 007b7e6f  8d4c2410             lea ecx, [esp + 0x10]
// 007b7e73  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 007b7e7b  e8e0fbffff           call 0x7b7a60
// 007b7e80  5f                   pop edi
// 007b7e81  5e                   pop esi
// 007b7e82  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007b7e86  64890d00000000       mov dword ptr fs:[0], ecx
// 007b7e8d  83c440               add esp, 0x40
// 007b7e90  c20400               ret 4
// 007b7e93  6a00                 push 0
// 007b7e95  40                   inc eax
// 007b7e96  50                   push eax
// 007b7e97  8bce                 mov ecx, esi
// 007b7e99  e8b2fdffff           call 0x7b7c50
// 007b7e9e  8b4e04               mov ecx, dword ptr [esi + 4]
// 007b7ea1  8b16                 mov edx, dword ptr [esi]
// 007b7ea3  6bc92c               imul ecx, ecx, 0x2c
// 007b7ea6  57                   push edi
// 007b7ea7  8d4c11d4             lea ecx, [ecx + edx - 0x2c]
// 007b7eab  e830f8ffff           call 0x7b76e0
// 007b7eb0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007b7eb4  5f                   pop edi
// 007b7eb5  5e                   pop esi
// 007b7eb6  64890d00000000       mov dword ptr fs:[0], ecx
// 007b7ebd  83c440               add esp, 0x40
// 007b7ec0  c20400               ret 4

__forceinline void* __cdecl operator new(unsigned int, void* p)
{
    return p;
}

__forceinline void __cdecl operator delete(void*, void*)
{
}

struct Element {
    char storage[0x2c];

    Element(const Element&);
    ~Element();
    Element& operator=(const Element&);
};

struct S {
    Element* data;
    int size;
    int capacity;

    void resize(int, int);
    void append(const Element&);
};

void S::append(const Element& value)
{
    if (size < capacity) {
        new (data + size) Element(value);
        ++size;
    } else if (&value >= data && &value < data + size) {
        Element temporary(value);
        append(temporary);
    } else {
        resize(size + 1, 0);
        data[size - 1] = value;
    }
}
