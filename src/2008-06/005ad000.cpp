// from server: 100% by king_originala
// roc 2008-06 005ad000  unit: RBX::Reflection::UTuple::?$holder  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ad000
//
// 005ad000  56                   push esi
// 005ad001  8b742408             mov esi, dword ptr [esp + 8]
// 005ad005  81c6ec000000         add esi, 0xec
// 005ad00b  8bce                 mov ecx, esi
// 005ad00d  e87edeffff           call 0x5aae90
// 005ad012  84c0                 test al, al
// 005ad014  7415                 je 0x5ad02b
// 005ad016  8bce                 mov ecx, esi
// 005ad018  e853fdffff           call 0x5acd70
// 005ad01d  8b08                 mov ecx, dword ptr [eax]
// 005ad01f  e8ec71feff           call 0x594210
// 005ad024  8bce                 mov ecx, esi
// 005ad026  e8f5deffff           call 0x5aaf20
// 005ad02b  5e                   pop esi
// 005ad02c  c20400               ret 4

struct Target {
    void release();
};

struct State {
    bool ready();
    Target** current();
    void advance();
};

void __stdcall process(void* object)
{
    State* state = reinterpret_cast<State*>(
        static_cast<char*>(object) + 0xEC);

    if (state->ready()) {
        (*state->current())->release();
        state->advance();
    }
}
