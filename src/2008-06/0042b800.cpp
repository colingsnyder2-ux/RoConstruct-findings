// from server: 100% by king_originala
// roc 2008-06 0042b800  unit: EventHandler  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042b800
//
// 0042b800  83ec0c               sub esp, 0xc
// 0042b803  8b442410             mov eax, dword ptr [esp + 0x10]
// 0042b807  8b542418             mov edx, dword ptr [esp + 0x18]
// 0042b80b  56                   push esi
// 0042b80c  8bf1                 mov esi, ecx
// 0042b80e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0042b812  89442404             mov dword ptr [esp + 4], eax
// 0042b816  8d442404             lea eax, [esp + 4]
// 0042b81a  50                   push eax
// 0042b81b  894c240c             mov dword ptr [esp + 0xc], ecx
// 0042b81f  89542410             mov dword ptr [esp + 0x10], edx
// 0042b823  c70600000000         mov dword ptr [esi], 0
// 0042b829  e8c2ea1d00           call 0x60a2f0
// 0042b82e  83c404               add esp, 4
// 0042b831  84c0                 test al, al
// 0042b833  752a                 jne 0x42b85f
// 0042b835  8d4608               lea eax, [esi + 8]
// 0042b838  85c0                 test eax, eax
// 0042b83a  7414                 je 0x42b850
// 0042b83c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0042b840  8b542408             mov edx, dword ptr [esp + 8]
// 0042b844  8908                 mov dword ptr [eax], ecx
// 0042b846  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042b84a  895004               mov dword ptr [eax + 4], edx
// 0042b84d  894808               mov dword ptr [eax + 8], ecx
// 0042b850  c70618068100         mov dword ptr [esi], 0x810618
// 0042b856  8bc6                 mov eax, esi
// 0042b858  5e                   pop esi
// 0042b859  83c40c               add esp, 0xc
// 0042b85c  c21000               ret 0x10
// 0042b85f  c70600000000         mov dword ptr [esi], 0
// 0042b865  8bc6                 mov eax, esi
// 0042b867  5e                   pop esi
// 0042b868  83c40c               add esp, 0xc
// 0042b86b  c21000               ret 0x10

struct Triple {
    unsigned int a, b, c;
};

extern "C" bool __cdecl func_0060a2f0(...);

struct EventHandler {
    void* state;
    unsigned int reserved;
    Triple payload;

    EventHandler* attach(Triple value, unsigned int unused);
};

EventHandler* EventHandler::attach(Triple value, unsigned int unused)
{
    Triple local = value;
    state = 0;

    if (!func_0060a2f0(&local)) {
        Triple* destination = &payload;
        if (destination)
            *destination = local;
        state = reinterpret_cast<void*>(0x810618);
        return this;
    }

    state = 0;
    return this;
}
