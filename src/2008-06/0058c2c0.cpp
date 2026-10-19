// from server: 89% by colin
// from server: 88% by king_originala
// roc 2008-06 0058c2c0  unit: RBX::VChangeHistoryService::?$BoundFuncDesc  size: 245 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058c2c0
//
// 0058c2c0  64a100000000         mov eax, dword ptr fs:[0]
// 0058c2c6  6aff                 push -1
// 0058c2c8  683beb7d00           push 0x7deb3b
// 0058c2cd  50                   push eax
// 0058c2ce  64892500000000       mov dword ptr fs:[0], esp
// 0058c2d5  83ec08               sub esp, 8
// 0058c2d8  56                   push esi
// 0058c2d9  8bf1                 mov esi, ecx
// 0058c2db  80be6501000000       cmp byte ptr [esi + 0x165], 0
// 0058c2e2  0f84bb000000         je 0x58c3a3
// 0058c2e8  53                   push ebx
// 0058c2e9  e802feffff           call 0x58c0f0
// 0058c2ee  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 0058c2f4  8d9e34010000         lea ebx, [esi + 0x134]
// 0058c2fa  85c9                 test ecx, ecx
// 0058c2fc  0f84a0000000         je 0x58c3a2
// 0058c302  e819b7ffff           call 0x587a20
// 0058c307  84c0                 test al, al
// 0058c309  0f8593000000         jne 0x58c3a2
// 0058c30f  8b442420             mov eax, dword ptr [esp + 0x20]
// 0058c313  8b0b                 mov ecx, dword ptr [ebx]
// 0058c315  57                   push edi
// 0058c316  50                   push eax
// 0058c317  83c124               add ecx, 0x24
// 0058c31a  ff154c248000         call dword ptr [0x80244c]
// 0058c320  8dbe38010000         lea edi, [esi + 0x138]
// 0058c326  53                   push ebx
// 0058c327  8bcf                 mov ecx, edi
// 0058c329  e872b9ffff           call 0x587ca0
// 0058c32e  8b0f                 mov ecx, dword ptr [edi]
// 0058c330  8b4714               mov eax, dword ptr [edi + 0x14]
// 0058c333  898e54010000         mov dword ptr [esi + 0x154], ecx
// 0058c339  898658010000         mov dword ptr [esi + 0x158], eax
// 0058c33f  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0058c342  8b17                 mov edx, dword ptr [edi]
// 0058c344  894c2410             mov dword ptr [esp + 0x10], ecx
// 0058c348  8d4c240c             lea ecx, [esp + 0xc]
// 0058c34c  8954240c             mov dword ptr [esp + 0xc], edx
// 0058c350  e85b9ff0ff           call 0x4962b0
// 0058c355  8b08                 mov ecx, dword ptr [eax]
// 0058c357  898e5c010000         mov dword ptr [esi + 0x15c], ecx
// 0058c35d  8b5004               mov edx, dword ptr [eax + 4]
// 0058c360  6a40                 push 0x40
// 0058c362  899660010000         mov dword ptr [esi + 0x160], edx
// 0058c368  e8b3451100           call 0x6a0920
// 0058c36d  83c404               add esp, 4
// 0058c370  89442424             mov dword ptr [esp + 0x24], eax
// 0058c374  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0058c37c  5f                   pop edi
// 0058c37d  85c0                 test eax, eax
// 0058c37f  741d                 je 0x58c39e
// 0058c381  56                   push esi
// 0058c382  8bc8                 mov ecx, eax
// 0058c384  e897fbffff           call 0x58bf20
// 0058c389  8903                 mov dword ptr [ebx], eax
// 0058c38b  5b                   pop ebx
// 0058c38c  5e                   pop esi
// 0058c38d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058c391  64890d00000000       mov dword ptr fs:[0], ecx
// 0058c398  83c414               add esp, 0x14
// 0058c39b  c20400               ret 4
// 0058c39e  33c0                 xor eax, eax
// 0058c3a0  8903                 mov dword ptr [ebx], eax
// 0058c3a2  5b                   pop ebx
// 0058c3a3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058c3a7  5e                   pop esi
// 0058c3a8  64890d00000000       mov dword ptr fs:[0], ecx
// 0058c3af  83c414               add esp, 0x14
// 0058c3b2  c20400               ret 4

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Allocator>
    class basic_string {
        char storage[28];
    public:
        basic_string& operator=(const T*);
    };
}

struct S;

struct Record {
    char padding[0x24];
    std::basic_string<char, std::char_traits<char>, std::allocator<char> > name;

    Record(S*);
    __declspec(dllimport) bool empty();
};

struct Iterator {
    void* owner;
    void* node;

    Iterator& operator++();
};

struct History {
    void* owner;
    char padding[0x10];
    void* head;
    char tail[4];

    void append(Record**);
};

struct S {
    char padding[0x134];
    Record* current;
    History history;
    Iterator position;
    Iterator nextPosition;
    char reserved;
    bool enabled;

    void prepare();
    void commit(const char*);
};

void S::commit(const char* name)
{
    if (enabled) {
        prepare();
        if (current && !current->empty()) {
            current->name = name;
            history.append(&current);

            position.owner = history.owner;
            position.node = history.head;

            Iterator iterator;
            iterator.owner = history.owner;
            iterator.node = history.head;
            nextPosition = ++iterator;

            current = new Record(this);
        }
    }
}
