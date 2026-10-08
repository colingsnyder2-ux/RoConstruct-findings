// from server: 70% by colin
// roc 2007-08 0040d220  unit: ChatEnter  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040d220
//
// 0040d220  51                   push ecx
// 0040d221  56                   push esi
// 0040d222  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0040d226  81c1c8000000         add ecx, 0xc8
// 0040d22c  51                   push ecx
// 0040d22d  8bce                 mov ecx, esi
// 0040d22f  c744240800000000     mov dword ptr [esp + 8], 0
// 0040d237  ff159ce67700         call dword ptr [0x77e69c]
// 0040d23d  8bc6                 mov eax, esi
// 0040d23f  5e                   pop esi
// 0040d240  59                   pop ecx
// 0040d241  c20400               ret 4

struct ChatEnter {
    char pad[0xc8];
    void* critsec;
    void* Enter(void* other);
};

extern "C" void* __stdcall sub_77E69C(void*, void*);

void* ChatEnter::Enter(void* other)
{
    void* p = 0;
    sub_77E69C(&this->critsec, other);
    return other;
}
