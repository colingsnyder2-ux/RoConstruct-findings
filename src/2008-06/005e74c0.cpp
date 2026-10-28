typedef unsigned long DWORD;
typedef void* PartInstance;

struct Ball {
};

extern "C" __stdcall void PhysicsService_f(PartInstance x, PartInstance y);

void Ball::f(PartInstance x, PartInstance y) {
    // this is implicit (thiscall convention, this at [esp+8])

    // Virtual/indirect function call through pointer chain at offset 0xa4 from this
    // Read result; test al, al -> if 0, early exit
    char* this_ch = reinterpret_cast<char*>(this);
    DWORD* chain = reinterpret_cast<DWORD*>(this_ch + 0xa4);
    DWORD result = *chain;
    if (result == 0) {
        return; // early exit (test al, al -> je)
    }

    // Block A: [this+0x5c] (esi)
    // Load [this+0x5c] into esi
    char* blockA_base = this_ch + 0x5c;
    DWORD esi = *reinterpret_cast<DWORD*>(blockA_base);  // esi = [this+0x5c]
    // Load [esi + 0x24]
    char* addrA1 = reinterpret_cast<char*>(reinterpret_cast<void*>(esi)) + 0x24;
    DWORD tempA = *reinterpret_cast<DWORD*>(addrA1);  // tempA = [esi + 0x24]
    // Load [tempA + 0x18]
    char* addrA2 = reinterpret_cast<char*>(reinterpret_cast<void*>(tempA)) + 0x18;
    DWORD valA = *reinterpret_cast<DWORD*>(addrA2);  // valA = [tempA + 0x18]

    // Block B: [second_param+0x5c] (edi)
    // second_param is the second function parameter (y)
    // Load [y + 0x5c] into edi
    char* y_ch = reinterpret_cast<char*>(reinterpret_cast<void*>(y));
    DWORD edi = *reinterpret_cast<DWORD*>(y_ch + 0x5c);  // edi = [y + 0x5c]
    // Load [edi + 0x24]
    char* addrB1 = reinterpret_cast<char*>(reinterpret_cast<void*>(edi)) + 0x24;
    DWORD tempB = *reinterpret_cast<DWORD*>(addrB1);  // tempB = [edi + 0x24]
    // Load [tempB + 0x18]
    char* addrB2 = reinterpret_cast<char*>(reinterpret_cast<void*>(tempB)) + 0x18;
    DWORD valB = *reinterpret_cast<DWORD*>(addrB2);  // valB = [tempB + 0x18]

    // Check if either block has value 1, 2, or 3
    bool passA = (valA == 1 || valA == 2 || valA == 3);
    bool passB = (valB == 1 || valB == 2 || valB == 3);

    if (passA || passB) {
        PhysicsService_f(x, y);
    }
}