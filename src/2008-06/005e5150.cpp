// from server: 100% by king_originala
// roc 2008-06 005e5150  unit: RBX::VMotor::?$FactoryProduct  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e5150
//
// 005e5150  56                   push esi
// 005e5151  8bf1                 mov esi, ecx
// 005e5153  c7062cf78300         mov dword ptr [esi], 0x83f72c
// 005e5159  8b4610               mov eax, dword ptr [esi + 0x10]
// 005e515c  85c0                 test eax, eax
// 005e515e  7409                 je 0x5e5169
// 005e5160  50                   push eax
// 005e5161  e814b50b00           call 0x6a067a
// 005e5166  83c404               add esp, 4
// 005e5169  8b4604               mov eax, dword ptr [esi + 4]
// 005e516c  50                   push eax
// 005e516d  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005e5174  c7461400000000       mov dword ptr [esi + 0x14], 0
// 005e517b  c7461800000000       mov dword ptr [esi + 0x18], 0
// 005e5182  e8f3b40b00           call 0x6a067a
// 005e5187  83c404               add esp, 4
// 005e518a  5e                   pop esi
// 005e518b  c3                   ret 

extern "C" void __cdecl release(void *);

struct S {
    volatile unsigned long table;
    void *buffer;
    unsigned long reserved[2];
    void * volatile begin;
    void *end;
    void *capacity;

    void destroy();
};

void S::destroy()
{
    table = 0x0083F72C;
    void *p = begin;
    if (p)
        release(p);
    begin = 0;
    end = 0;
    capacity = 0;
    release(buffer);
}
