// from server: 74% by colin
// roc 2007-08 004955c0  unit: RBX::Network::VPlayers::?$RefPropDescriptor  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004955c0
//
// 004955c0  8b442408             mov eax, dword ptr [esp + 8]
// 004955c4  85c0                 test eax, eax
// 004955c6  56                   push esi
// 004955c7  8bf1                 mov esi, ecx
// 004955c9  740b                 je 0x4955d6
// 004955cb  50                   push eax
// 004955cc  e84f95ffff           call 0x48eb20
// 004955d1  83c404               add esp, 4
// 004955d4  eb02                 jmp 0x4955d8
// 004955d6  33c0                 xor eax, eax
// 004955d8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 004955db  8d54240c             lea edx, [esp + 0xc]
// 004955df  8944240c             mov dword ptr [esp + 0xc], eax
// 004955e3  8b01                 mov eax, dword ptr [ecx]
// 004955e5  8b4008               mov eax, dword ptr [eax + 8]
// 004955e8  52                   push edx
// 004955e9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004955ed  52                   push edx
// 004955ee  ffd0                 call eax
// 004955f0  5e                   pop esi
// 004955f1  c20800               ret 8

struct RefPropDescriptor {
    char pad[0x1c];
    void* getset;
    void setValue(void* object, void* value);
};

extern "C" void* __cdecl sub_48EB20(void*);

void RefPropDescriptor::setValue(void* object, void* value)
{
    void* p;
    if (object) {
        p = sub_48EB20(object);
    } else {
        p = 0;
    }
    void* gs = this->getset;
    void* vtbl = *(void**)gs;
    void (*fn)(void*, void*, void*) = *(void (**)(void*, void*, void*))((char*)vtbl + 8);
    fn(gs, p, value);
}
