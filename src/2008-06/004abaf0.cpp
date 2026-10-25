// from server: 100% by king_originala
// roc 2008-06 004abaf0  unit: RBX::Network::Replicator  size: 266 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004abaf0
//
// 004abaf0  55                   push ebp
// 004abaf1  8bec                 mov ebp, esp
// 004abaf3  6aff                 push -1
// 004abaf5  68d0827c00           push 0x7c82d0
// 004abafa  64a100000000         mov eax, dword ptr fs:[0]
// 004abb00  50                   push eax
// 004abb01  64892500000000       mov dword ptr fs:[0], esp
// 004abb08  83ec30               sub esp, 0x30
// 004abb0b  837d1400             cmp dword ptr [ebp + 0x14], 0
// 004abb0f  740d                 je 0x4abb1e
// 004abb11  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 004abb14  e84779f6ff           call 0x413460
// 004abb19  8945d4               mov dword ptr [ebp - 0x2c], eax
// 004abb1c  eb07                 jmp 0x4abb25
// 004abb1e  c745d458488200       mov dword ptr [ebp - 0x2c], 0x824858
// 004abb25  8d45e0               lea eax, [ebp - 0x20]
// 004abb28  50                   push eax
// 004abb29  e8f2da0b00           call 0x569620
// 004abb2e  83c404               add esp, 4
// 004abb31  8945d0               mov dword ptr [ebp - 0x30], eax
// 004abb34  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 004abb37  894dcc               mov dword ptr [ebp - 0x34], ecx
// 004abb3a  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004abb41  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 004abb44  52                   push edx
// 004abb45  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004abb48  50                   push eax
// 004abb49  6830488200           push 0x824830
// 004abb4e  6a01                 push 1
// 004abb50  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 004abb53  e8b8362700           call 0x71f210
// 004abb58  50                   push eax
// 004abb59  e842d80b00           call 0x5693a0
// 004abb5e  83c414               add esp, 0x14
// 004abb61  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004abb68  8d4de0               lea ecx, [ebp - 0x20]
// 004abb6b  e8f04a1500           call 0x600660
// 004abb70  8d4dd8               lea ecx, [ebp - 0x28]
// 004abb73  51                   push ecx
// 004abb74  e8a7da0b00           call 0x569620
// 004abb79  83c404               add esp, 4
// 004abb7c  8945c8               mov dword ptr [ebp - 0x38], eax
// 004abb7f  8b55c8               mov edx, dword ptr [ebp - 0x38]
// 004abb82  8955c4               mov dword ptr [ebp - 0x3c], edx
// 004abb85  c745fc01000000       mov dword ptr [ebp - 4], 1
// 004abb8c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004abb8f  50                   push eax
// 004abb90  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004abb93  e8c878f6ff           call 0x413460
// 004abb98  50                   push eax
// 004abb99  6860488200           push 0x824860
// 004abb9e  6a03                 push 3
// 004abba0  8b4dc4               mov ecx, dword ptr [ebp - 0x3c]
// 004abba3  e868362700           call 0x71f210
// 004abba8  50                   push eax
// 004abba9  e8f2d70b00           call 0x5693a0
// 004abbae  83c414               add esp, 0x14
// 004abbb1  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004abbb8  8d4dd8               lea ecx, [ebp - 0x28]
// 004abbbb  e8a04a1500           call 0x600660
// 004abbc0  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004abbc3  894df0               mov dword ptr [ebp - 0x10], ecx
// 004abbc6  e815c70f00           call 0x5a82e0
// 004abbcb  33d2                 xor edx, edx
// 004abbcd  394508               cmp dword ptr [ebp + 8], eax
// 004abbd0  0f94c2               sete dl
// 004abbd3  8955ec               mov dword ptr [ebp - 0x14], edx
// 004abbd6  c745e800000000       mov dword ptr [ebp - 0x18], 0
// 004abbdd  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 004abbe0  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 004abbe3  8b5104               mov edx, dword ptr [ecx + 4]
// 004abbe6  8910                 mov dword ptr [eax], edx
// 004abbe8  33c0                 xor eax, eax
// 004abbea  75ea                 jne 0x4abbd6
// 004abbec  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004abbef  64890d00000000       mov dword ptr fs:[0], ecx
// 004abbf6  8be5                 mov esp, ebp
// 004abbf8  5d                   pop ebp
// 004abbf9  c3                   ret 

struct Name {
    const char* text() const;
};

struct LogHandle {
    void* data[2];
    void* f();
    ~LogHandle();
};

extern LogHandle __cdecl getLog();
extern void __cdecl writeLog(void*, int, const char*, ...);
extern const Name& __cdecl getLocalScope();

struct Link {
    int value;
    int next;
};

#pragma optimize("", off)

void __cdecl report(const Name* first, const Name* second,
                    int number, const Name* last)
{
    writeLog(getLog().f(), 1,
             "Replicator: Last item %d, Last name %s",
             number, last ? last->text() : "NULL");

    writeLog(getLog().f(), 3,
             "Replicator: Can't find object for %s:%d",
             first->text(), second);

    const Name* scope = second;
    int local = first == &getLocalScope();

    do {
        Link* link = 0;
        link->value = link->next;
    } while (false);
}

#pragma optimize("", on)
