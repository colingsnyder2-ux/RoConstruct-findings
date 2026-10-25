// from server: 100% by king_originala
// roc 2008-06 005cec50  unit: DxUserInput  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cec50
//
// 005cec50  53                   push ebx
// 005cec51  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005cec55  56                   push esi
// 005cec56  57                   push edi
// 005cec57  8bf1                 mov esi, ecx
// 005cec59  8d7e04               lea edi, [esi + 4]
// 005cec5c  53                   push ebx
// 005cec5d  57                   push edi
// 005cec5e  e8fdd0f8ff           call 0x55bd60
// 005cec63  83c408               add esp, 8
// 005cec66  84c0                 test al, al
// 005cec68  7442                 je 0x5cecac
// 005cec6a  53                   push ebx
// 005cec6b  8bcf                 mov ecx, edi
// 005cec6d  ff150c248000         call dword ptr [0x80240c]
// 005cec73  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 005cec76  89471c               mov dword ptr [edi + 0x1c], eax
// 005cec79  8b4624               mov eax, dword ptr [esi + 0x24]
// 005cec7c  85c0                 test eax, eax
// 005cec7e  742c                 je 0x5cecac
// 005cec80  83c004               add eax, 4
// 005cec83  50                   push eax
// 005cec84  ff15ac218000         call dword ptr [0x8021ac]
// 005cec8a  85c0                 test eax, eax
// 005cec8c  7517                 jne 0x5ceca5
// 005cec8e  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 005cec91  e8fac0e8ff           call 0x45ad90
// 005cec96  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 005cec99  85c9                 test ecx, ecx
// 005cec9b  7408                 je 0x5ceca5
// 005cec9d  8b11                 mov edx, dword ptr [ecx]
// 005cec9f  8b02                 mov eax, dword ptr [edx]
// 005ceca1  6a01                 push 1
// 005ceca3  ffd0                 call eax
// 005ceca5  c7462400000000       mov dword ptr [esi + 0x24], 0
// 005cecac  5f                   pop edi
// 005cecad  5e                   pop esi
// 005cecae  5b                   pop ebx
// 005cecaf  c20800               ret 8

struct String {
    char data[0x1c];
};

struct Value {
    String text;
    int extra;
};

struct Reference {
    virtual ~Reference();
    volatile long count;
    void release();
};

extern bool __cdecl different(const Value*, const Value*);

extern "C" {
    extern String& (__thiscall *assignString)(String*, const String*);
    extern long (__stdcall *InterlockedDecrement)(volatile long*);
}

struct DxUserInput {
    char padding[4];
    Value value;
    Reference* reference;

    void setValue(int unused, const Value& source);
};

void DxUserInput::setValue(int unused, const Value& source)
{
    const Value* input = &source;
    Value* destination = &value;

    if (different(destination, input)) {
        assignString(&destination->text, &input->text);
        destination->extra = input->extra;

        if (reference) {
            if (InterlockedDecrement(&reference->count) == 0) {
                reference->release();
                delete reference;
            }
            reference = 0;
        }
    }
}
