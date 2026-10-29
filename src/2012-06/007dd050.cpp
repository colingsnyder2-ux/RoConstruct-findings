// roc 2012-06 007dd050  unit: RBX::VObjectValue::?$EventDesc  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007dd050
//
// 007dd050  6aff                 push -1
// 007dd052  68e9f3a900           push 0xa9f3e9
// 007dd057  64a100000000         mov eax, dword ptr fs:[0]
// 007dd05d  50                   push eax
// 007dd05e  64892500000000       mov dword ptr fs:[0], esp
// 007dd065  51                   push ecx
// 007dd066  56                   push esi
// 007dd067  8bf1                 mov esi, ecx
// 007dd069  89742404             mov dword ptr [esp + 4], esi
// 007dd06d  8d4e20               lea ecx, [esi + 0x20]
// 007dd070  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007dd078  ff153c26b200         call dword ptr [0xb2263c]
// 007dd07e  8bce                 mov ecx, esi
// 007dd080  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 007dd088  ff153c26b200         call dword ptr [0xb2263c]
// 007dd08e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007dd092  5e                   pop esi
// 007dd093  64890d00000000       mov dword ptr fs:[0], ecx
// 007dd09a  83c410               add esp, 0x10
// 007dd09d  c3                   ret 
// copied from an identical function in another client (function ??1S@@QAE@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern void (__thiscall *destroy_string)(void*);

struct StringStorage {
    char storage[32];
    ~StringStorage();
};

inline StringStorage::~StringStorage()
{
    destroy_string(this);
}

struct S {
    StringStorage first;
    StringStorage second;
    ~S();
};

S::~S()
{
}