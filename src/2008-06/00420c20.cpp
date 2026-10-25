// from server: 95% by colin
// roc 2008-06 00420c20  unit: CInstanceExplorer  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420c20
//
// 00420c20  64a100000000         mov eax, dword ptr fs:[0]
// 00420c26  6aff                 push -1
// 00420c28  6808357c00           push 0x7c3508
// 00420c2d  50                   push eax
// 00420c2e  64892500000000       mov dword ptr fs:[0], esp
// 00420c35  53                   push ebx
// 00420c36  56                   push esi
// 00420c37  57                   push edi
// 00420c38  8b8164fcffff         mov eax, dword ptr [ecx - 0x39c]
// 00420c3e  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00420c44  8d9964fcffff         lea ebx, [ecx - 0x39c]
// 00420c4a  8bcb                 mov ecx, ebx
// 00420c4c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00420c54  ffd2                 call edx
// 00420c56  8bb8e8000000         mov edi, dword ptr [eax + 0xe8]
// 00420c5c  8bcf                 mov ecx, edi
// 00420c5e  e8ed932b00           call 0x6da050
// 00420c63  8bf0                 mov esi, eax
// 00420c65  83ee01               sub esi, 1
// 00420c68  7826                 js 0x420c90
// 00420c6a  8d9b00000000         lea ebx, [ebx]
// 00420c70  56                   push esi
// 00420c71  8bcf                 mov ecx, edi
// 00420c73  e8a86c2b00           call 0x6d7920
// 00420c78  8b4054               mov eax, dword ptr [eax + 0x54]
// 00420c7b  3b442420             cmp eax, dword ptr [esp + 0x20]
// 00420c7f  7407                 je 0x420c88
// 00420c81  83ee01               sub esi, 1
// 00420c84  79ea                 jns 0x420c70
// 00420c86  eb08                 jmp 0x420c90
// 00420c88  56                   push esi
// 00420c89  8bcf                 mov ecx, edi
// 00420c8b  e840702b00           call 0x6d7cd0
// 00420c90  80bbc803000000       cmp byte ptr [ebx + 0x3c8], 0
// 00420c97  7518                 jne 0x420cb1
// 00420c99  8b03                 mov eax, dword ptr [ebx]
// 00420c9b  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00420ca1  8bcb                 mov ecx, ebx
// 00420ca3  ffd2                 call edx
// 00420ca5  8b10                 mov edx, dword ptr [eax]
// 00420ca7  8bc8                 mov ecx, eax
// 00420ca9  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 00420caf  ffd0                 call eax
// 00420cb1  8d4c2420             lea ecx, [esp + 0x20]
// 00420cb5  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00420cbd  e89e1f0000           call 0x422c60
// 00420cc2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00420cc6  5f                   pop edi
// 00420cc7  5e                   pop esi
// 00420cc8  64890d00000000       mov dword ptr fs:[0], ecx
// 00420ccf  5b                   pop ebx
// 00420cd0  83c40c               add esp, 0xc
// 00420cd3  c21400               ret 0x14

// from server: 93% by king_originala
// roc 2008-06 00420c20  unit: CInstanceExplorer  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420c20
//
// 00420c20  64a100000000         mov eax, dword ptr fs:[0]
// 00420c26  6aff                 push -1
// 00420c28  6808357c00           push 0x7c3508
// 00420c2d  50                   push eax
// 00420c2e  64892500000000       mov dword ptr fs:[0], esp
// 00420c35  53                   push ebx
// 00420c36  56                   push esi
// 00420c37  57                   push edi
// 00420c38  8b8164fcffff         mov eax, dword ptr [ecx - 0x39c]
// 00420c3e  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00420c44  8d9964fcffff         lea ebx, [ecx - 0x39c]
// 00420c4a  8bcb                 mov ecx, ebx
// 00420c4c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00420c54  ffd2                 call edx
// 00420c56  8bb8e8000000         mov edi, dword ptr [eax + 0xe8]
// 00420c5c  8bcf                 mov ecx, edi
// 00420c5e  e8ed932b00           call 0x6da050
// 00420c63  8bf0                 mov esi, eax
// 00420c65  83ee01               sub esi, 1
// 00420c68  7826                 js 0x420c90
// 00420c6a  8d9b00000000         lea ebx, [ebx]
// 00420c70  56                   push esi
// 00420c71  8bcf                 mov ecx, edi
// 00420c73  e8a86c2b00           call 0x6d7920
// 00420c78  8b4054               mov eax, dword ptr [eax + 0x54]
// 00420c7b  3b442420             cmp eax, dword ptr [esp + 0x20]
// 00420c7f  7407                 je 0x420c88
// 00420c81  83ee01               sub esi, 1
// 00420c84  79ea                 jns 0x420c70
// 00420c86  eb08                 jmp 0x420c90
// 00420c88  56                   push esi
// 00420c89  8bcf                 mov ecx, edi
// 00420c8b  e840702b00           call 0x6d7cd0
// 00420c90  80bbc803000000       cmp byte ptr [ebx + 0x3c8], 0
// 00420c97  7518                 jne 0x420cb1
// 00420c99  8b03                 mov eax, dword ptr [ebx]
// 00420c9b  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00420ca1  8bcb                 mov ecx, ebx
// 00420ca3  ffd2                 call edx
// 00420ca5  8b10                 mov edx, dword ptr [eax]
// 00420ca7  8bc8                 mov ecx, eax
// 00420ca9  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 00420caf  ffd0                 call eax
// 00420cb1  8d4c2420             lea ecx, [esp + 0x20]
// 00420cb5  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00420cbd  e89e1f0000           call 0x422c60
// 00420cc2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00420cc6  5f                   pop edi
// 00420cc7  5e                   pop esi
// 00420cc8  64890d00000000       mov dword ptr fs:[0], ecx
// 00420ccf  5b                   pop ebx
// 00420cd0  83c40c               add esp, 0xc
// 00420cd3  c21400               ret 0x14

struct Argument {
    void* value;
    char reserved[12];
    ~Argument();
};

struct Record {
    char reserved[0x54];
    void* value;
};

struct Records {
    int GetCount() const;
    Record* GetAt(int index) const;
    void RemoveAt(int index);
};

struct Control;
struct Owner;

struct ControlVTable {
    void* reserved[0x160 / 4];
    void (__thiscall* Refresh)(Control*);
};

struct Control {
    ControlVTable* vtable;
    char reserved[0xe8 - 4];
    Records* records;
};

struct OwnerVTable {
    void* reserved[0x194 / 4];
    Control* (__thiscall* GetControl)(Owner*);
};

struct Owner {
    OwnerVTable* vtable;
    char reserved[0x3c8 - 4];
    unsigned char flag;
};

struct CInstanceExplorer {
    void Remove(int unused, Argument argument);
};

void CInstanceExplorer::Remove(int unused, Argument argument)
{
    Owner* owner = reinterpret_cast<Owner*>(
        reinterpret_cast<char*>(this) - 0x39c);
    Records* records = owner->vtable->GetControl(owner)->records;

    for (int index = records->GetCount() - 1; index >= 0; --index) {
        if (records->GetAt(index)->value == argument.value) {
            records->RemoveAt(index);
            break;
        }
    }

    if (!owner->flag) {
        OwnerVTable* vt = owner->vtable;
        Control* control = vt->GetControl(owner);
        control->vtable->Refresh(control);
    }
}
