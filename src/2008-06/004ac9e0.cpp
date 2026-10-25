// from server: 100% by king_originala
// roc 2008-06 004ac9e0  unit: RBX::Network::Peer  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ac9e0
//
// 004ac9e0  64a100000000         mov eax, dword ptr fs:[0]
// 004ac9e6  6aff                 push -1
// 004ac9e8  683beb7d00           push 0x7deb3b
// 004ac9ed  50                   push eax
// 004ac9ee  64892500000000       mov dword ptr fs:[0], esp
// 004ac9f5  807c241000           cmp byte ptr [esp + 0x10], 0
// 004ac9fa  56                   push esi
// 004ac9fb  8bf1                 mov esi, ecx
// 004ac9fd  754d                 jne 0x4aca4c
// 004ac9ff  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 004aca05  85c0                 test eax, eax
// 004aca07  0f849f000000         je 0x4acaac
// 004aca0d  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 004aca13  8b11                 mov edx, dword ptr [ecx]
// 004aca15  50                   push eax
// 004aca16  8b82ec000000         mov eax, dword ptr [edx + 0xec]
// 004aca1c  ffd0                 call eax
// 004aca1e  8b8e38010000         mov ecx, dword ptr [esi + 0x138]
// 004aca24  c7863801000000000000 mov dword ptr [esi + 0x138], 0
// 004aca2e  85c9                 test ecx, ecx
// 004aca30  747a                 je 0x4acaac
// 004aca32  8b11                 mov edx, dword ptr [ecx]
// 004aca34  8b02                 mov eax, dword ptr [edx]
// 004aca36  6a01                 push 1
// 004aca38  ffd0                 call eax
// 004aca3a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004aca3e  64890d00000000       mov dword ptr fs:[0], ecx
// 004aca45  5e                   pop esi
// 004aca46  83c40c               add esp, 0xc
// 004aca49  c20400               ret 4
// 004aca4c  6810020000           push 0x210
// 004aca51  e8ca3e1f00           call 0x6a0920
// 004aca56  83c404               add esp, 4
// 004aca59  89442414             mov dword ptr [esp + 0x14], eax
// 004aca5d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004aca65  85c0                 test eax, eax
// 004aca67  740a                 je 0x4aca73
// 004aca69  56                   push esi
// 004aca6a  8bc8                 mov ecx, eax
// 004aca6c  e8bfebffff           call 0x4ab630
// 004aca71  eb02                 jmp 0x4aca75
// 004aca73  33c0                 xor eax, eax
// 004aca75  8b8e38010000         mov ecx, dword ptr [esi + 0x138]
// 004aca7b  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 004aca83  898638010000         mov dword ptr [esi + 0x138], eax
// 004aca89  85c9                 test ecx, ecx
// 004aca8b  7408                 je 0x4aca95
// 004aca8d  8b11                 mov edx, dword ptr [ecx]
// 004aca8f  8b02                 mov eax, dword ptr [edx]
// 004aca91  6a01                 push 1
// 004aca93  ffd0                 call eax
// 004aca95  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 004aca9b  8b11                 mov edx, dword ptr [ecx]
// 004aca9d  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 004acaa3  8b92e8000000         mov edx, dword ptr [edx + 0xe8]
// 004acaa9  50                   push eax
// 004acaaa  ffd2                 call edx
// 004acaac  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004acab0  64890d00000000       mov dword ptr fs:[0], ecx
// 004acab7  5e                   pop esi
// 004acab8  83c40c               add esp, 0xc
// 004acabb  c20400               ret 4

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Peer;

struct Attachment {
    virtual ~Attachment();
    Attachment(Peer*);
    char storage[0x20c];
};

struct Manager;

struct ManagerTable {
    void* unused[58];
    void (__thiscall *attach)(Manager*, Attachment*);
    void (__thiscall *detach)(Manager*, Attachment*);
};

struct Manager {
    ManagerTable* table;
};

struct Peer {
    char reserved[0x138];
    Attachment* attachment;
    unsigned int reserved13c;
    Manager* manager;

    void setEnabled(bool);
};

void Peer::setEnabled(bool enabled)
{
    if (!enabled) {
        if (attachment) {
            manager->table->detach(manager, attachment);
            Attachment* old = attachment;
            attachment = 0;
            delete old;
        }
    } else {
        Attachment* replacement = new Attachment(this);
        Attachment* old = attachment;
        attachment = replacement;
        delete old;
        manager->table->attach(manager, attachment);
    }
}
