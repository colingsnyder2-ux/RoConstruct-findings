// from server: 100% by king_originala
// roc 2008-06 005ba2b0  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ba2b0
//
// 005ba2b0  8b442404             mov eax, dword ptr [esp + 4]
// 005ba2b4  56                   push esi
// 005ba2b5  8b7020               mov esi, dword ptr [eax + 0x20]
// 005ba2b8  8b06                 mov eax, dword ptr [esi]
// 005ba2ba  85c0                 test eax, eax
// 005ba2bc  7415                 je 0x5ba2d3
// 005ba2be  50                   push eax
// 005ba2bf  e84e590e00           call 0x69fc12
// 005ba2c4  50                   push eax
// 005ba2c5  e8d6e4ffff           call 0x5b87a0
// 005ba2ca  83c404               add esp, 4
// 005ba2cd  c70600000000         mov dword ptr [esi], 0
// 005ba2d3  5e                   pop esi
// 005ba2d4  c3                   ret 

struct S {
    char padding[32];
    void** value;
};

extern "C" void* __stdcall convert(void*);
extern "C" void __cdecl release(void*);

void __cdecl clear(S* object)
{
    void** value = object->value;
    if (*value) {
        release(convert(*value));
        *value = 0;
    }
}
